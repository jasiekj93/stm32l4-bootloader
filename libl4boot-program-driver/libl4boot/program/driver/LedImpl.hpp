#pragma once

/**
 * @file LedImpl.hpp
 * @author Adrian Szczepanski
 * @date 2023-06-12
 */

#include <libl4boot/program/hardware/Led.hpp>

namespace l4boot::program::driver
{
	class LedImpl : public hardware::Led
	{
	public:
		LedImpl();

        void toggle() override;
	};
}
