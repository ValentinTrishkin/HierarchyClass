#include "RectTriangle.h"


std::string RectTriangle::get_name() { return name; }
bool RectTriangle::check()
{
    if (corner_c_ == 90 && Triangle::check())
    {
        return true;
    }
    return false;
}