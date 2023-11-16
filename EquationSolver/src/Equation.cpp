#include "Equation.h"

#include "Log.h"

Equation::Equation(const std::string& equation_str) {
	Log::critical("Todo");
}

Equation::Equation(Equate eq) {
	Log::critical("Todo");
}

Equation::~Equation() {
	Log::critical("Todo");
}

EquationBuilder::EquationBuilder() {
	Log::critical("Todo");
}

EquationBuilder::~EquationBuilder() {
	Log::critical("Todo");
}

Equation EquationBuilder::build() {
	Log::critical("Todo");
	return Equation(Equate(Expr(1.0f), Expr(1.0f))); // 1 = 1
}
