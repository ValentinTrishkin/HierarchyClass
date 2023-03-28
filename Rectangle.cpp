#include "Rectangle.h"



bool Rectangle::check()
{
    if (((corner_a_, corner_b_, corner_c_, corner_d_) == 90) && ((side_a_ == side_c_) && (side_b_ == side_d_)) && Quadrilateral::check())
    {
        return true;
    }
    return false;
}

std::string Rectangle::get_name() { return name; }
