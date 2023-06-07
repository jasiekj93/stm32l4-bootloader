# ------------------------------------------------
# @author Adrian Szczepanski
# @date 06-03-2022
# ------------------------------------------------

# Platform
# Uncomment if program platform must be diffrent than the solution
# PLATFORM := Pc32

# Target
library_name := driver

# Directories
project_dir := ..
make_dir := $(project_dir)/make
external_dir := $(project_dir)/external
cube_dir := $(project_dir)/cube-boot

# Sources 
cxx_sources =  \
$(wildcard libl4boot/driver/*.cpp) \

c_sources := \
$(wildcard $(cube_dir)/Core/Src/*.c) \
$(wildcard $(cube_dir)/USB_DEVICE/App/*.c) \
$(wildcard $(cube_dir)/USB_DEVICE/Target/*.c) \
$(wildcard $(cube_dir)/Drivers/STM32L4xx_HAL_Driver/Src/*.c) \
$(wildcard $(cube_dir)/Core/Src/*.c) \
$(wildcard $(cube_dir)/Middlewares/ST/STM32_USB_Device_Library/Core/Src/*.c) \
$(wildcard $(cube_dir)/Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Src/*.c) \

asm_sources := \
$(cube_dir)/startup_stm32l4r5xx.s

# Includes
cxx_includes :=  \
-I. \
-I$(cube_dir)/USB_DEVICE/App \
-I$(cube_dir)/USB_DEVICE/Target \
-I$(cube_dir)/Core/Inc \
-I$(cube_dir)/Drivers/STM32L4xx_HAL_Driver/Inc \
-I$(cube_dir)/Drivers/STM32L4xx_HAL_Driver/Inc/Legacy \
-I$(cube_dir)/Middlewares/ST/STM32_USB_Device_Library/Core/Inc \
-I$(cube_dir)/Middlewares/ST/STM32_USB_Device_Library/Class/CDC/Inc \
-I$(cube_dir)/Drivers/CMSIS/Device/ST/STM32L4xx/Include \
-I$(cube_dir)/Drivers/CMSIS/Include

# Defines
cxx_defs := \
-DUSE_HAL_DRIVER \
-DSTM32L4R5xx \

# internal libraries
export required_libraries = \

# external libraries
#	e.g. if include flag is '-I$(external_dir)/libFoo'
#	write 'libFoo'
export external_library_include_path = \

# 	for testing purposes
export external_library_flags = \

# 	for testing purposes 
#	e.g. if link flag is '-L$(external_dir)/libFoo/lib'
#	write 'libFoo/lib'
export external_library_paths = \

# Uncomment if gcc should be used for compilation *.c files
use_gcc_for_c_files := 1

# Append rest of Makefile from template
include $(make_dir)/InternalHardwareLib.mk
