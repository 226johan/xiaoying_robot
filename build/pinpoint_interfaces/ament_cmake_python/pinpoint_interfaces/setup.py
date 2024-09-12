from setuptools import find_packages
from setuptools import setup

setup(
    name='pinpoint_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('pinpoint_interfaces', 'pinpoint_interfaces.*')),
)
