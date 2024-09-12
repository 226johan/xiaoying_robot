import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/johan/slam/xiaoying_robot/install/auto_pinpoint_robot'
