#pragma once

#include <string>
#include "Domain.h"

class Variable {
public:
	Variable(
		const std::string& identifier,
		Domain domain = Domain(DomainSets::R, Filters::NONE)
	);
	~Variable();
};

class Expr {
public:
	Expr(Variable var);
	Expr(float _const);
	~Expr();
};
