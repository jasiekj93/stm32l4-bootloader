#include "SystemImpl.hpp"
#include <main.h>

using namespace l4boot::program::driver;

SystemImpl::SystemImpl()
{
	instance = this;
}

void SystemImpl::delay(unsigned ms)
{
    HAL_Delay(ms);
}
