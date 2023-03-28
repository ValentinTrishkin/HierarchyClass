#pragma once

#include "Rectangle.h"

class Square : public Rectangle //  вадрат
{
public:
    Square(int side_a = 0) :Rectangle(side_a)
    {
        side_a_ = side_b_ = side_c_ = side_d_ = side_a;
    }
    std::string get_name() override;
    bool check() override;
private:
    std::string name = " вадрат:";
};

