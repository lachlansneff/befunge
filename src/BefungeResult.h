#pragma once

#include <string>

class BefungeResult {
	std::string msg;
	int err_code;
	bool success;

public:
	BefungeResult(std::string m, int code, bool success) : msg(m), err_code(code), success(success) {};
	static BefungeResult Success(std::string msg = "", int err_code = 0) {
		return BefungeResult(msg, err_code, true);
	};
	static BefungeResult Fail(std::string msg = "", int err_code = 1) {
		return BefungeResult(msg, err_code, false);
	};
};