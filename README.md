# xilinx-risc-v

## Building the project with Vivado 2020 (webpack edition works as well)


### Example projects

You find the example projects in the Vivado folder

* cmod_artix7-15t
* cmod_artix7-35t
* generic

If you own a CMOD-A7 board you can use the example project for this board directly, otherwise choose generic.
(For the generic project customize the included system.xdc file with a clock and a reset signal. Set your FPGA type in the project settings.)

### Build the project

#### 1.) Open Vivado and open the TCL console


![Vivado_TCL](/images/vivado_tcl_1.png)

#### 2.) Run the included build-project.tcl script

* cd `<path to project folder>` (do not forget to replace `\` by `/` if you are using Windows)
* source build_project.tcl

![Vivado_TCL](/images/vivado_tcl_2.png)


The complete guide for building the software is here:
[Porting RISC-V to Xilinx Kintex 7 and Spartan 7](https://www.irmo.de/2020/06/18/porting-risc-v-to-xilinx-kintex-7-and-spartan-7/)
