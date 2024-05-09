#ifndef D21V_H
#define D21V_H

#include "d2v.h"

class D21V : virtual protected D2V {
protected:
	int d21;

public:
	D21V() : d21(1) {};
	D21V(int d) : d21(d) {};
	D21V(int d21_, int d2_, int b) : D2V(d2_, b), d21(d21_) {};
};

#endif // D21V_H
#pragma once
