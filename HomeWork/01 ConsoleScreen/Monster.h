#pragma once
#include "ConsoleMath.h"

class Monster
{
public:
	Monster();
	~Monster();

	Monster(const Monster& _other) = delete;
	Monster(Monster&& _other) noexcept = delete;
	Monster& operator=(const Monster& _other) = delete;
	Monster& operator=(Monster&& _other) noexcept = delete;

protected:

private:
	ConsoleVector pos;
};

