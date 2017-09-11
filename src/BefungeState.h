#pragma once

#include <vector>
#include <stack>
#include <tuple>


class BefungeState {
public:
	std::vector<std::vector<char>> board;
	std::stack<uint8_t> stack;
	std::tuple<unsigned, unsigned> pc;

	BefungeState() : board(), stack(), pc() {};
};