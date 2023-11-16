#pragma once

#include <string>

enum DomainSets {
	N, // Natural Numbers
	W, // Whole Numbers
	Z, // Integers
	Q, // Rational Numbers
	P, // Irrational Numbers
	R, // Real Numbers
	C  // Complex Numbers
};

enum Filters {
	NONE,
	PLUS, // + ve only (includes zero)
	MINUS // - ve only
};

class Domain {
public:
	Domain(const std::string& domain_str);
	Domain(DomainSets domainSet, Filters filter);
	~Domain();
};
