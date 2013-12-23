# Desc: Device definitions for ATRV jr. 
# Author: Mikhail Medvedev
# Date: 06 Sep 2010

#  ATRV jr configuration
define atrvjr position
(
 localization "gps"
# localization "odom"
#  odom_error [0.0 0.0 0.0 0.0]
#  odom_error [0.05 0.05 0.05 0.05]
 
# actual size
size [1.00 0.64 0.3]

# the robot's center of rotation is offset from its center of area
 origin [0.06 0.0 0.0 0]

# draw a nose on the robot so we can see which way it points
 gui_nose 1

# estimated mass in KG
 mass 50.0 

# this approximates the shape of a atrv jr
 polygons 8

#center of rotation
block(
  points 4
  point[0] [  -0.01  -0.01 0.0]
  point[1] [  +0.01  -0.01 0.0]
  point[2] [  +0.01  +0.01 0.0]
  point[3] [  -0.01  +0.01 0.0]
)

#body
block(
  points 5
  point[0] [ 0.32 -0.195  0.0]
  point[1] [ 0.32 0.195   0.0]
  point[2] [ -0.32 0.195  0.0]
  point[3] [ -0.32 -0.195 0.0]
  point[4] [ 0.32 -0.195  0.0]
  z [0.1 0.60]
)

#front bumper
block(
  points 9
  point[0] [ 0.32 -0.195  0.0]
  point[1] [ 0.48 -0.195  0.0]
  point[2] [ 0.48 -0.2025 0.0]
  point[3] [ 0.56 -0.2025 0.0]
  point[4] [ 0.56  0.2025 0.0]
  point[5] [ 0.48 0.2025  0.0]
  point[6] [ 0.48 0.195   0.0]
  point[7] [ 0.32 0.195   0.0]
  point[8] [ 0.32 -0.195  0.0]
  z [0.2 0.25]
)

#rear bumper
block(
  points 9
  point[0] [ -0.32 -0.195  0.0]
  point[1] [ -0.32 0.195   0.0]
  point[2] [ -0.36 0.195   0.0]
  point[3] [ -0.36 0.2025  0.0]
  point[4] [ -0.44 0.2025  0.0]
  point[5] [ -0.44 -0.2025 0.0]
  point[6] [ -0.36 -0.2025 0.0]
  point[7] [ -0.36 -0.195  0.0]
  point[8] [ -0.32 -0.195  0.0]
  z [0.2 0.25]
  )

#fr tire
block(
  points 5
  point[0] [  0.04 -0.32 0.0]
  point[1] [  0.35 -0.32 0.0]
  point[2] [  0.35 -0.21 0.0]
  point[3] [  0.04 -0.21 0.0]
  point[4] [  0.04 -0.32 0.0]
  z [0.0 0.31]
  )

#fl tire
block(
  points 5
  point[0] [  0.04 0.32 0.0]
  point[1] [  0.04 0.21 0.0]
  point[2] [  0.35 0.21 0.0]
  point[3] [  0.35 0.32 0.0]
  point[4] [  0.04 0.32 0.0]
  z [0.0 0.31]
  )

#rr tire
block(
  points 5
  point[0] [ -0.35 -0.32 0.0]
  point[1] [ -0.04 -0.32 0.0]
  point[2] [ -0.04 -0.21 0.0]
  point[3] [ -0.35 -0.21 0.0]
  point[4] [ -0.35 -0.32 0.0]
  z [0.0 0.31]
  )

#rl tire
block(
  points 5
  point[0] [ -0.35 0.32 0.0]
  point[1] [ -0.35 0.21 0.0]
  point[2] [ -0.04 0.21 0.0]
  point[3] [ -0.04 0.32 0.0]
  point[4] [ -0.35 0.32 0.0]
  z [0.0 0.31]
  ) 

# differential steering model
drive "diff"
) 
