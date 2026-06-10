from setuptools import find_packages
from setuptools import setup

setup(
    name='sfm_ros2',
    version='0.0.0',
    packages=find_packages(
        include=('sfm_ros2', 'sfm_ros2.*')),
)
