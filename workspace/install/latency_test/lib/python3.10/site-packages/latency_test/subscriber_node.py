import rclpy
from rclpy.node import Node
from std_msgs.msg import String
from rclpy.qos import QoSProfile, ReliabilityPolicy
import time


class SubscriberNode(Node):
    def __init__(self):
        super().__init__('subscriber_node')
        
        qos = QoSProfile(
            depth=10,
            reliability=ReliabilityPolicy.RELIABLE
        )
        self.subscription = self.create_subscription(
            String,
            'latency_topic',
            self.callback,
            qos
        )
    def callback(self, msg):
        # Разбираем строку: номер сообщения и время отправки
        message_id_str, sent_time_str = msg.data.split(',')

        message_id = int(message_id_str)
        sent_time = int(sent_time_str)
        receive_time = time.time_ns()

        latency_ms = (receive_time - sent_time) / 1_000_000

        # Логируем в CSV (append). Файл будет в корне workspace.
        with open('/root/ros2_ws/latency_results.csv', 'a') as f:
            f.write(f'{message_id},{sent_time},{receive_time},{latency_ms}\n')

        # Выводим задержку в консоль для контроля
        self.get_logger().info(f'ID: {message_id}, Latency: {latency_ms:.3f} ms')


def main(args=None):
    rclpy.init(args=args)
    node = SubscriberNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()
