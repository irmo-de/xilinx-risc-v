# xilinx-risc-v

## Building the project with Vivado 2020 (webpack edition works as well)

### Example projects

You find the example projects in the Vivado folder

* cmod_artix7-15t
* cmod_artix7-35t
* generic

If you own a CMOD-A7 board you can use the example project for this board directy otherwise choose generic

### Build the project

#### 1.) Open Vivado and open the TCL console

![Vivado_TCL](/images/vivado_tcl_1.png)

#### 2.) Run the included build-project.tcl script

* cd `<path to project folder>` (do not forget to replace \ by / if you are using Windows)
* source build_project.tcl

![Vivado_TCL](/images/vivado_tcl_2.png)
