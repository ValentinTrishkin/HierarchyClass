#include "EquilTriangle.h"



bool EquilTriangle::check()
{
    if (side_a_ == side_c_ == side_b_)
    {
        return true;
    }
    return false;
}
std::string EquilTriangle::get_name() { return name; }
