
define sick_laser ranger
(
  sensor(
    range [0.0 8.0 ]
    fov 180 
    samples 361
    )

  color "blue"
  size [ 0.14 0.14 0.14 ]	
  pose [ 0.40  0.0 0.1 0 ]
  fiducial(
      range_min 0.0
    range_max 8.0
    range_max_id 5.0
    fov 180 
    )
)

