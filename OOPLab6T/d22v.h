#ifndef D22V_H
#define D22V_H

#include "base.h"
#include "d21v.h"
#include "d2v.h"
#include <iostream>

class D22V : virtual protected D21V,
    virtual protected D2V,
    virtual protected Base {
protected:
    int d22;

public:
    D22V() : d22(1) {};
    D22V(int d22_, int d21_, int d2_, int b)
        : Base(b), D2V(d2_), D21V(d21_), d22(d22_) {};
    D22V(int d22_, int d2_, int b) : Base(b), D2V(d2_), d22(d22_) {};
    D22V(int d22_) : d22(d22_) {};
    void showDat() {
        std::cout << "D22: " << d22 << std::endl;
        std::cout << "D22V::D21V::d21: " << D22V::D21V::d21 << std::endl;
        std::cout << "D21V:D2V: " << D21V::D2V::d2 << std::endl;
        std::cout << "D21V::D2V::Base::dat: " << D21V::D2V::Base::dat << std::endl;
    }
};

#endif // D22V_H
#pragma once
