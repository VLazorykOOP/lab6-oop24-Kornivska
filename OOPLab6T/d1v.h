#ifndef D1V_H
#define D1V_H

#include "base.h"

class D1V : virtual protected Base {
protected:
	int d1;

public:
	D1V() : d1(1) {};
	D1V(int d) : d1(d) {};
	D1V(int d, int b) : Base(b), d1(d) {};
};

#endif // D1V_H
#pragma once
