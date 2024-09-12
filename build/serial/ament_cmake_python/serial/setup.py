from setuptools import find_packages
from setuptools import setup

setup(
    name='serial',
    version='0.0.0',
    packages=find_packages(
        include=('serial', 'serial.*')),
)
