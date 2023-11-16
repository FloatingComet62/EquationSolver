#pragma once

#include "Operation.h"

class Equation {
public:
	Equation(const std::string& equation_str);
	Equation(Equate eq);
	~Equation();
};

class EquationBuilder {
public:
	EquationBuilder();
	~EquationBuilder();

	Equation build();
};
