#include "Task.hpp"
#include <libl4boot/program/hardware/Led.hpp>
#include <libl4boot/program/hardware/System.hpp>

using namespace l4boot::program;
using namespace l4boot::program::application;

Task::Task()
{

}

void Task::execute()
{
    auto led = hardware::Led::getInstance();
    auto system = hardware::System::getInstance();

    while(true)
    {
        led->toggle();
        system->delay(500);
    }
}