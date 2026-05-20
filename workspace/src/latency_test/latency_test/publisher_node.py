import rclpy
from rclpy.node import Node
from latency_interfaces.msg import LatencyMsg
import time

class LatencyPublisher(Node):
    def __init__(self):
        super().__init__('latency_publisher')

        self.declare_parameter('payload_size', 8)
        self.declare_parameter('frequency', 100.0)

        self.payload_size = self.get_parameter('payload_size').value
        self.frequency = self.get_parameter('frequency').value

        self.publisher = self.create_publisher(LatencyMsg, 'latency_topic', 10)

        self.start_time = time.time()
        self.test_duration = 300

        self.message_id = 0
        self.payload = [0] * int(self.payload_size)

        timer_period = 1.0 / float(self.frequency)
        self.timer = self.create_timer(timer_period, self.publish_message)

        self.get_logger().info(
            f'Publisher started: payload_size={self.payload_size} bytes, frequency={self.frequency} Hz'
        )

    def publish_message(self):

        if time.time() - self.start_time >= self.test_duration:
            self.get_logger().info('Test finished')

            self.timer.cancel()

            self.destroy_node()

            rclpy.shutdown()

            return

        msg = LatencyMsg()
        msg.message_id = self.message_id
        msg.timestamp = self.get_clock().now().to_msg()
        msg.payload = self.payload

        self.publisher.publish(msg)
        self.message_id += 1


def main(args=None):
    rclpy.init(args=args)
    node = LatencyPublisher()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
