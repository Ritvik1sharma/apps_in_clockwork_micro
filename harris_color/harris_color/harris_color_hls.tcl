open_project -reset harris_color_proj
set_top harris_color
add_files -cflags "-I ../../ -std=c++11 -D__VIVADO_SYNTH__" harris_color.cpp
open_solution -reset "solution1"
set_part {xcvu9p-flgb2104-2-i}
list_core
create_clock -period 5
csynth_design
exit
