set_property IOSTANDARD LVCMOS33 [get_ports {led1}]
set_property PACKAGE_PIN J19 [get_ports {led1}]

set_property IOSTANDARD LVCMOS33 [get_ports clk]
set_property IOSTANDARD LVCMOS33 [get_ports resetn]
set_property PACKAGE_PIN U22 [get_ports clk]
set_property PACKAGE_PIN H19 [get_ports resetn]

set_property BITSTREAM.CONFIG.SPI_BUSWIDTH 4 [current_design]
create_clock -add -name clk -period 20.0 -waveform {0 10.0} [get_ports {clk}];