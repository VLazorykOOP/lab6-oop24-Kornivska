#ifndef D2V_H
#define D2V_H

#include "base.h"
class D2V : virtual protected Base {
protected:
	int d2;

public:
	D2V() : d2(1) {};
	D2V(int d) : d2(d) {};
	D2V(int b, int d) : Base(b), d2(d) {};
};

#endif // D2V_H
#pragma once
