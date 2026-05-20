import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from rclpy.qos import QoSProfile, ReliabilityPolicy
import time


class PublisherNode(Node):

    def __init__(self):
        super().__init__('publisher_node')

        qos = QoSProfile(
            depth=10,
            reliability=ReliabilityPolicy.BEST_EFFORT
        )

        self.publisher = self.create_publisher(
            String,
            'latency_topic',
            qos
        )

        self.counter = 0

        # ВАЖНО:
        # сначала создаем переменные
        self.start_time = time.time()
        self.test_duration = 300

        # потом timer
        self.timer = self.create_timer(
            0.01,
            self.publish_message
        )

    def publish_message(self):

        if time.time() - self.start_time >= self.test_duration:
            self.get_logger().info('Test finished')

            self.timer.cancel()

            self.destroy_node()

            rclpy.shutdown()

            return

        msg = String()

        msg.data = f"{self.counter},{time.time_ns()}"

        self.publisher.publish(msg)

        self.counter += 1


def main(args=None):

    rclpy.init(args=args)

    node = PublisherNode()

    rclpy.spin(node)

    node.destroy_node()

    rclpy.shutdown()


if __name__ == '__main__':
    main()
