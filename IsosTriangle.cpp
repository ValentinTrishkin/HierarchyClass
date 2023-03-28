#include "IsosTriangle.h"

std::string IsosTriangle::get_name() { return name; }
bool IsosTriangle::check()
{
    if ((side_a_ == side_b_) && (corner_a_ == corner_c_) && (Triangle::check()))
    {
        return true;
    }
    return false;
}
