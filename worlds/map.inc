
define map model
(
  color "gray30"
  #origin [-10.0 -10.0 0]
  #pose [10.0 10.0 0]
 
  # most maps will need a bounding box
  boundary 1

  gui_nose 0
  gui_grid 0
  gui_move 0
  gui_outline 0
 
  gripper_return 0
  fiducial_return 0
  )
