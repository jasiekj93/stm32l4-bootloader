#pragma once

/**
 * @file Task.hpp
 * @author Adrian Szczepanski
 * @date 2023-06-07
 */

namespace l4boot::application
{
	class Task
	{
	public:
		Task();

        void execute();

    protected:
        void jumpToApplication();
        void waitForProgram();
	};
}
