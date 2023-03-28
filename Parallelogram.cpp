#include "Parallelogram.h"

bool Parallelogram::check()
{
    if ((Quadrilateral::check()) && ((side_a_ == side_c_) && (side_b_ == side_d_)) && ((corner_a_ == corner_c_) && (corner_b_ == corner_d_)))
    {
        return true;
    }
    return false;
}
std::string Parallelogram::get_name() { return name; }