#include "Led.hpp"
#include <assert.h>

using namespace l4boot::program::hardware;

Led* Led::instance = nullptr;

Led* Led::getInstance()
{
    assert(instance);
    return instance;
}
