#ifndef TASK3_H
#define TASK3_H

#include <iostream>
#include <string>

using namespace std;

// Базовий клас сутності водойм
class WaterBody {
public:
    WaterBody(string name, double area) : name(name), area(area) {}
    virtual ~WaterBody() {}

    virtual void printInfo() const {
        cout << "Water body \"" << name << "\", area: " << area << " sq km."
            << endl;
    }

protected:
    string name;
    double area;
};

// Клас залив, який успадковується від водойму
class Bay : virtual public WaterBody {
public:
    Bay(string name, double area, double maxDepth)
        : WaterBody(name, area), maxDepth(maxDepth) {}

    virtual void printInfo() const override {
        cout << "Bay \"" << name << "\", area: " << area
            << " sq km., max depth: " << maxDepth << " m." << endl;
    }

protected:
    double maxDepth;
};

// Клас бухта, який успадковується від водойму
class Cove : virtual public WaterBody {
public:
    Cove(string name, double area, bool hasHarbor)
        : WaterBody(name, area), hasHarbor(hasHarbor) {}

    virtual void printInfo() const override {
        cout << "Cove \"" << name << "\", area: " << area
            << " sq km., has harbor: " << (hasHarbor ? "yes" : "no") << endl;
    }

protected:
    bool hasHarbor;
};

// Клас море, який успадковується від заливу та бухти
class Sea : public Bay, public Cove {
public:
    Sea(string name, double area, double maxDepth, bool hasHarbor)
        : WaterBody(name, area), Bay(name, area, maxDepth),
        Cove(name, area, hasHarbor) {}

    virtual void printInfo() const override {
        cout << "Sea \"" << name << "\", area: " << area
            << " sq km., max depth: " << Bay::maxDepth
            << " m., has harbor: " << (Cove::hasHarbor ? "yes" : "no") << endl;
    }
};
#endif // TASK3_H
#pragma once
