# ------------------------------------------------
# @author Adrian Szczepanski
# @date 06-03-2023
# ------------------------------------------------

# Platform
# Uncomment if program platform must be diffrent than the solution
# PLATFORM := Pc32

# Target
target := program

# Directories
project_dir ?= ..
make_dir := $(project_dir)/make
external_dir := $(project_dir)/external

# Sources 
cxx_sources :=  \
Main.cpp

# Includes
cxx_includes := \
-I. \

# Defines
cxx_defs := \

# internal libraries
required_internal_libraries = \
program-application \
program-driver \
program-hardware \

# libraries
required_libraries = \

# external libraries
#	e.g. if include flag is '-I$(external_dir)/libFoo'
#	write 'libFoo'
external_library_include_path = \

external_library_flags = \

#	e.g. if link flag is '-L$(external_dir)/libFoo/lib'
#	write 'libFoo/lib'
external_library_paths = \

# Linker script
ldscript = $(project_dir)/cube-program/STM32L4R5ZITx_FLASH.ld

# Append rest of Makefile from template
include $(make_dir)/Program.mk