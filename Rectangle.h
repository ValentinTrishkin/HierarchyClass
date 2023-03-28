#pragma once

#include "Quadrilateral.h"

class Rectangle : public Quadrilateral // Прямоугольник
{
public:
    Rectangle(int side_a = 0, int side_b = 0, int side_c = 0, int side_d = 0) :Quadrilateral(side_a, side_b, side_c, side_d, corner_a, corner_b, corner_c, corner_d)
    {
        corner_a_ = corner_a;
        corner_b_ = corner_b;
        corner_c_ = corner_c;
        corner_d_ = corner_d;
    }
    bool check() override;
    std::string get_name() override;
private:
    std::string name = "Прямоугольник:";
    int corner_a = 90, corner_b = 90, corner_c = 90, corner_d = 90;
};

