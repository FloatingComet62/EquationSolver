#pragma once

#include <string>
#include "Equation.h"

namespace StringAPI {
	class Parser {
	public:
		Parser(const std::string& string_eqn);
		~Parser();
	private:
	};

	class ToString {
	public:
		ToString(Equation equation);
		~ToString();

		std::string toString();
	private:
	};
}
