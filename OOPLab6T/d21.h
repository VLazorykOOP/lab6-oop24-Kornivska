#ifndef D21_H
#define D21_H

#include "d2.h"

class D21 : public D2 {
protected:
	int d21;

public:
	D21() : d21(2) {};
	D21(int d21_) : d21(d21_) {};
	D21(int d21_, int d2_, int b) : D2(d2_, b), d21(d21_) {};
};

#endif // D21_H
#pragma once
