#include "Rhomb.h"


bool Rhomb::check()
{
    if (Quadrilateral::check())
    {
        if ((corner_a_ == corner_c_) && (corner_b_ == corner_d_))
        {
            if ((side_a_ == side_b_) && (side_b_ == side_c_) && (side_c_ == side_d_))
            {
                return true;
            }
        }
    }
    return false;
}
std::string Rhomb::get_name(){ return name; }