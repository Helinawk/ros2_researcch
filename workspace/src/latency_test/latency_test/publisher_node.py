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
            reliability=ReliabilityPolicy.RELIABLE
        )

        self.publisher = self.create_publisher(
            String,
            'latency_topic',
            qos
        )

        self.timer = self.create_timer(0.01, self.publish_message)
        self.counter = 0

    def publish_message(self):
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
