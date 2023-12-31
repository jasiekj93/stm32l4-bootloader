# ------------------------------------------------
# @author Adrian Szczepanski
# @date 06-03-2022
# ------------------------------------------------

# platform
export PLATFORM := ArmM4

# project
export project_name := l4boot

# Directories
project_dir := .
make_dir := $(project_dir)/make

# Documentation directory
export docs_dir := docs

# External libraries
external_names = \

external_build_options = \

# Project internal libraries
internal_library_names = \
driver \
application \
hardware \
program-driver \
program-application \
program-hardware \

# Project subprograms
program_names = \
boot \
program 

# Project libraries
library_names = \

# Append rest of Makefile from template
include $(make_dir)/Main.mk

# Enter the internal library dependencies (by directory name)
# 	E.g.: if libproject-a depends on libproject-b write the line above:
#	libproject-a: libproject-b
libl4boot-application: libl4boot-hardware
libl4boot-program-application: libl4boot-program-hardware
libl4boot-driver: libl4boot-hardware
libl4boot-program-driver: libl4boot-program-hardware
# Custom targets