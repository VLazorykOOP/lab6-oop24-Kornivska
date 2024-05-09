#ifndef D11_H
#define D11_H

#include "base.h"
#include "d1.h"
#include "d21.h"
#include <iostream>

class D11 : protected D1, protected D21, protected Base {
protected:
    int dt;

public:
    D11() : dt(1) {};
    D11(int d11) : dt(d11) {};
    D11(int d11_, int d21_, int d2_, int b) : D21(d21_, d2_, b), dt(d11_) {};
    D11(int d11, int d1_, int b) : D1(d1_, b), dt(d11) {};
    void showDat() {
        std::cout << "d11: " << dt << std::endl;
        std::cout << "d1: " << d1 << std::endl;
        std::cout << "D1::dat: " << D1::dat << std::endl;
        std::cout << "d21: " << d21 << std::endl;
        std::cout << "d2: " << d2 << std::endl;
        std::cout << "D21::D2::Base: " << D21::D2::dat << std::endl;
    }
};

#endif // D11_H
#pragma once
