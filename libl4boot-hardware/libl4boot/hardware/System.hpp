#pragma once

/**
 * @file System.hpp
 * @author Adrian Szczepanski
 * @date 2023-06-12
 */

#include <stdint.h>

namespace l4boot::hardware
{
	class System
	{
	public:
		virtual ~System() {}

        virtual void setStackAndJump(uint32_t stackPointer, 
            uint32_t jumpAddress) = 0;

		static System* getInstance();

	protected:
		static System* instance;
	};
}
