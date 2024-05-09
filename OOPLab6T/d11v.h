#ifndef D11V_H
#define D11V_H

#include "base.h"
#include "d1v.h"
#include "d21v.h"
#include <iostream>

class D11V : virtual protected D1V,
    virtual protected D21V,
    virtual protected Base {
protected:
    int d11;

public:
    D11V() : d11(1) {};
    D11V(int d11_, int d1_, int b) : Base(b), D1V(d1_), d11(d11_) {};
    D11V(int d11_, int b) : Base(b), d11(d11_) {};
    void showDat() {
        std::cout << "d11V: " << d11 << std::endl;
        std::cout << "d1V: " << d1 << std::endl;
        std::cout << "D1V::dat: " << D1V::dat << std::endl;
        std::cout << "d21V: " << d21 << std::endl;
        std::cout << "d2: " << d2 << std::endl;
        std::cout << "D21::D2::Base: " << D21V::D2V::Base::dat << std::endl;
    }
};

#endif // D11V_H
#pragma once
