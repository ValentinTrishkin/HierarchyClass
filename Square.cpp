#include "Square.h"


std::string Square::get_name() { return name; }
bool Square::check()
{
    if ((Rectangle::check()) && (side_a_ == side_b_) && (side_b_ == side_c_) && (side_c_ == side_d_))
    {
        return true;
    }
    return false;
}