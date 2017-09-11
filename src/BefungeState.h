#pragma once

#include <vector>
#include <stack>

class BefungeState {
	std::vector<std::vector<char>> code;
	std::stack<uint8_t> stack;
};