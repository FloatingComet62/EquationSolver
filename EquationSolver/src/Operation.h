#pragma once

#include "Variable.h"

enum Operations {
	ADDITION,
	SUBTRACTION,
	MULTIPLICATION,
	DIVISION,
	EXPONENTIAL,
	LOGORITHMIC,
	EQUATE
	// TODO: Trignometric
};

class Operation {
public:
	Operation();
	virtual ~Operation() = 0;
};

class Addition : public Operation {
public:
	Addition(Expr lhs, Expr rhs);
	~Addition();
};

class Subtraction : public Operation {
public:
	Subtraction(Expr lhs, Expr rhs);
	~Subtraction();
};

class Multiplication : public Operation {
public:
	Multiplication(Expr lhs, Expr rhs);
	~Multiplication();
};

class Division : public Operation {
public:
	Division(Expr numerator, Expr denominator);
	~Division();
};

class Exponential : public Operation {
public:
	Exponential(Expr base, Expr power);
	~Exponential();
};

class Logorithmic : public Operation {
public:
	Logorithmic(Expr base, Expr power);
	~Logorithmic();
};

class Equate : public Operation {
public:
	Equate(Expr lhs, Expr rhs);
	~Equate();
};
