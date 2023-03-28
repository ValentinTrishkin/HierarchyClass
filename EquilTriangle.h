#pragma once

#include "Triangle.h"
#include "Figure.h"

class EquilTriangle : public Triangle // Равносторонний треугольник
{
public:
    EquilTriangle(int side_a = 0) :Triangle(side_a, corner_a, corner_b, corner_c)
    {
        side_b_ = side_c_ = side_a;
        corner_a_ = corner_a;
        corner_b_ = corner_b;
        corner_c_ = corner_c;
    }
    bool check() override;
    std::string get_name() override;
private:
    int corner_c = 60, corner_b = 60, corner_a = 60;
    std::string name = "Равносторонний треугольник:";
};

