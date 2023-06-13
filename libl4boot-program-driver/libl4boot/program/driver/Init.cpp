#include "Init.hpp"
#include <main.h>
#include <stm32l4xx_it.h>

using namespace l4boot::program;

void driver::init()
{
    cubeHardwareInit();
    hardFaultCallback = NULL;
}
