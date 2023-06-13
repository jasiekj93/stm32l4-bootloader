#include "LedImpl.hpp"
#include <main.h>

using namespace l4boot::program::driver;

LedImpl::LedImpl()
{
	instance = this;
}

void LedImpl::toggle()
{
    HAL_GPIO_TogglePin(LD2_GPIO_Port, LD2_Pin);
}