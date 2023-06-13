/**
 * @file Main.cpp
 * @author Adrian Szczepanski
 * @date 2023-06-13
 */

#include <libl4boot/program/application/Task.hpp>
#include <libl4boot/program/driver/Init.hpp>
#include <libl4boot/program/driver/LedImpl.hpp>
#include <libl4boot/program/driver/SystemImpl.hpp>

using namespace l4boot::program;

int main(int argc, char* argv[])
{
    driver::init();
    driver::LedImpl led;
    driver::SystemImpl system;

    application::Task().execute();
	return 0;
}
