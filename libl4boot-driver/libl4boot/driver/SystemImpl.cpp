#include "SystemImpl.hpp"
#include <main.h>

using namespace l4boot::driver;

SystemImpl::SystemImpl()
{
	instance = this;
}


void SystemImpl::setStackAndJump(uint32_t stack, uint32_t jumpAddress)
{
    auto jumpPointer = (uint32_t*)jumpAddress;
    auto jumpFunction = (void(*)(void))(*jumpPointer);

    HAL_DeInit();
    __set_MSP(stack);
    jumpFunction();
}