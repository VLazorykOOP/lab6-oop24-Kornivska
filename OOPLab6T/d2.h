#ifndef D2_H
#define D2_H

#include "base.h"

class D2 : protected Base {
protected:
	int d2;

public:
	D2() : d2(1) {};
	D2(int d) : d2(d) {};
	D2(int d, int dt) : Base(d), d2(dt) {};
};

#endif // D2_H
#pragma once
