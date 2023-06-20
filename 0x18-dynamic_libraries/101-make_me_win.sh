#!/bin/bash
wget -P /tmp https://github.com/ayalotfi/alx-low_level_programming.git/blob/main/0x18-dynamic_libraries/test.so
export LD_PRELOAD=/tmp/test.so
