/**
 * @file Main.cpp
 * @author Adrian Szczepanski
 * @date 2023-06-07
 */

#include <libl4boot/driver/Init.hpp>
#include <libl4boot/application/Task.hpp>

using namespace l4boot;

int main(int argc, char* argv[])
{
    driver::init();
    application::Task().execute();
	return 0;
}
