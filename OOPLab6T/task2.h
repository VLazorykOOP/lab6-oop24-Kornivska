#ifndef TASK2_H
#define TASK2_H

#include <cmath>
#include <iostream>

// Абстрактний базовий клас фігура
class Figure {
public:
    virtual double surfaceArea() const = 0; // Віртуальна функція площі поверхні
};

// Клас паралелепіпеду
class Parallelepiped : public Figure {
public:
    Parallelepiped(double length, double width, double height)
        : length(length), width(width), height(height) {}

    double surfaceArea() const override {
        return 2 * (length * width + length * height + width * height);
    }

private:
    double length, width, height;
};

// Клас тетраедру
class Tetrahedron : public Figure {
public:
    Tetrahedron(double edgeLength) : edgeLength(edgeLength) {}

    double surfaceArea() const override {
        return sqrt(3) * edgeLength * edgeLength;
    }

private:
    double edgeLength;
};

// Клас кулі
class Sphere : public Figure {
public:
    Sphere(double radius) : radius(radius) {}
    double PI = 3.1415;

    double surfaceArea() const override { return 4 * PI * radius * radius; }

private:
    double radius;
};

// Функція для виведення площі поверхні фігури на екран
void printSurfaceArea(const Figure& figure) {
    std::cout << "Surface area: " << figure.surfaceArea() << std::endl;
}

#endif // TASK2_H
#pragma once
