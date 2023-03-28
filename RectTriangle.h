#pragma once

#include "Triangle.h"

class RectTriangle : public Triangle // Прямоугольный треугольник
{
public:
    RectTriangle(int side_a = 0, int side_b = 0, int side_c = 0, int corner_a = 0, int corner_b = 0) :Triangle(side_a, side_b, side_c, corner_a, corner_b, corner_c)
    {
        corner_c_ = corner_c;
    }
    std::string get_name() override;
    bool check() override;
private:
    int corner_c = 90;
    std::string name = "Прямоугольный треугольник:";
};
