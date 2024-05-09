#ifndef D22_H
#define D22_H

#include "d2.h"
#include "d21.h"
#include <iostream>

class D22 : protected D21, protected D2 {
protected:
    int d22;

public:
    D22() : d22(1) {};
    D22(int d22_) : d22(d22_) {};
    D22(int d22_, int d21_, int d2_, int b) : D21(d21_, d2_, b), d22(d22_) {};
    D22(int d22_, int d2_, int b) : D2(d2_, b), d22(d22_) {};
    void showDat() {
        std::cout << "D22: " << d22 << std::endl;
        std::cout << "D22:D21: " << d21 << std::endl;
        std::cout << "D21:D2: " << D21::d2 << std::endl;
    }
};

#endif // D22_H
#pragma once
