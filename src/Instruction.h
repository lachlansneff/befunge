#pragma once

#include <vector>
#include <functional>
#include <map>

#include "BefungeState.h"

class Instruction {
protected:
	char code;
	uint8_t pop();
	void push(char item);
	

public:
	Instruction(char code);
	
};