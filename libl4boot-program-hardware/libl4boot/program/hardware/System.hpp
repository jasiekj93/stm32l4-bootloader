#pragma once

/**
 * @file System.hpp
 * @author Adrian Szczepanski
 * @date 2023-06-12
 */

namespace l4boot::program::hardware
{
	class System
	{
	public:
		virtual ~System() {}

        virtual void delay(unsigned ms) = 0;

		static System* getInstance();

	protected:
		static System* instance;
	};
}
