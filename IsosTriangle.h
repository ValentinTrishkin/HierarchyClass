#pragma once

#include "Triangle.h"

class IsosTriangle : public Triangle // Равнобедренный треугольник
{
public:
    IsosTriangle(int side_a, int side_b, int side_c, int corner_a, int corner_b, int corner_c) :Triangle(side_a, side_b, side_c, corner_a, corner_b, corner_c)
    {}
    std::string get_name() override;
    bool check() override;
private:
    std::string name = "Равнобедренный треугольник:";
};
