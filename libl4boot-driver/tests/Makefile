# ------------------------------------------------
# @author Adrian Szczepanski
# @date 06-03-2023
# ------------------------------------------------

# Target
tested_library_name := driver

# Directories
project_dir ?= ../..
make_dir := $(project_dir)/make
external_dir := $(project_dir)/external

# Sources 
cxx_sources :=  \
$(wildcard *.cpp) \

# Includes
cxx_includes := \
-I. \

# Defines
cxx_defs := \

# Linker script
ldscript = $(project_dir)/cube-boot/STM32L4R5ZITx_FLASH.ld

# Append rest of Makefile from template
include $(make_dir)/InternalHardwareTestLib.mk