#ifndef D1_H
#define D1_H

#include "base.h"

class D1 : protected Base {
protected:
	int d1;

public:
	D1() : d1(1) {};
	D1(int d) : d1(d) {};
	D1(int d, int dt) : Base(dt), d1(d) {};
};

#endif // D1_H
#pragma once
