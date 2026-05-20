import rclpy
from rclpy.node import Node
from latency_interfaces.msg import LatencyMsg
import csv
import os


class LatencySubscriber(Node):
    def __init__(self):
        super().__init__('latency_subscriber')

        self.subscription = self.create_subscription(
            LatencyMsg,
            'latency_topic',
            self.listener_callback,
            10
        )

        self.last_message_id = None
        self.csv_file = '/root/ros2_ws/latency_payload_results.csv'

        file_exists = os.path.isfile(self.csv_file)

        self.file = open(self.csv_file, 'a', newline='')
        self.writer = csv.writer(self.file)

        if not file_exists:
            self.writer.writerow([
                'message_id',
                'payload_size',
                'latency_ms',
                'lost_messages'
            ])

        self.get_logger().info('Subscriber started')

    def listener_callback(self, msg):
        now = self.get_clock().now()

        sent_time = rclpy.time.Time.from_msg(msg.timestamp)
        latency_ms = (now - sent_time).nanoseconds / 1_000_000

        payload_size = len(msg.payload)

        if self.last_message_id is None:
            lost_messages = 0
        else:
            lost_messages = msg.message_id - self.last_message_id - 1

        self.last_message_id = msg.message_id

        self.writer.writerow([
            msg.message_id,
            payload_size,
            latency_ms,
            lost_messages
        ])
        self.file.flush()


def main(args=None):
    rclpy.init(args=args)
    node = LatencySubscriber()
    rclpy.spin(node)
    node.destroy_node()
    node.file.close()
    rclpy.shutdown()
