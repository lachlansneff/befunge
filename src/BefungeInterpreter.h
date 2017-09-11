#pragma once

#include <string>
#include <vector>

#include "BefungeResult.h"
#include "BefungeState.h"

class BefungeInterpreter {
	BefungeState *state;

public:
	BefungeInterpreter(std::string);
	BefungeResult run();
private:

};