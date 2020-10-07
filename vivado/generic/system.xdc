
## Todo... 
## this is a generic xdc file for custom fpga boards.
## Plase set clock pin and system frequency
##
## led pin is optional
## reset_n is useful for debuging ....

## pin names are placeholders!


## 12 MHz Clock Signal
set_property -dict { PACKAGE_PIN L17   IOSTANDARD LVCMOS33 } [get_ports { clk }]; #IO_L12P_T1_MRCC_14 Sch=gclk
create_clock -add -name clk -period 83.33 -waveform {0 41.66} [get_ports {clk}];

## LEDs
set_property -dict { PACKAGE_PIN A17   IOSTANDARD LVCMOS33 } [get_ports { led1  }]; 

## Buttons
set_property -dict { PACKAGE_PIN A18   IOSTANDARD LVCMOS33 } [get_ports { resetn }];