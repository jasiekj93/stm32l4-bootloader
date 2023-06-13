#include "Task.hpp"
#include <libl4boot/hardware/System.hpp>

using namespace l4boot::application;

static constexpr auto PROGRAM_FLASH_ADDRESS = 0x08000000UL + 64 * 1024UL;
static constexpr auto STACK_BEGIN_ADDRESS = 0x200A0000UL;

Task::Task()
{

}

void Task::execute()
{
    auto programPointer = (uint32_t*) PROGRAM_FLASH_ADDRESS;

    if(*programPointer == STACK_BEGIN_ADDRESS)
        jumpToApplication();
    else
        waitForProgram();
}

void Task::jumpToApplication()
{
    auto jumpAddress = PROGRAM_FLASH_ADDRESS + sizeof(uint32_t);
    hardware::System::getInstance()->setStackAndJump(STACK_BEGIN_ADDRESS, jumpAddress);
}

void Task::waitForProgram()
{
    while (true)
        ;
}
