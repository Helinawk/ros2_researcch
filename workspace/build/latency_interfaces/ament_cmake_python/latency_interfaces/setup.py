from setuptools import find_packages
from setuptools import setup

setup(
    name='latency_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('latency_interfaces', 'latency_interfaces.*')),
)
