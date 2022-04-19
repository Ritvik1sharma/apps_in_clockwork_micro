open_project -reset camera_pipeline_2x2_proj
set_top camera_pipeline_2x2
add_files -cflags "-I ../../ -std=c++11 -D__VIVADO_SYNTH__" camera_pipeline_2x2.cpp
open_solution -reset "solution1"
set_part {xcvu9p-flgb2104-2-i}
list_core
create_clock -period 5
csynth_design
exit
