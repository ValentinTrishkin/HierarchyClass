#pragma once

#include "Quadrilateral.h"

class Rhomb : public Quadrilateral // Ромб
{
public:
    Rhomb(int side_a = 0, int corner_a = 0, int corner_b = 0, int corner_c = 0, int corner_d = 0) :Quadrilateral(side_a, side_b, side_c, side_d, corner_a, corner_b, corner_c, corner_d)
    {
        side_b_ = side_c_ = side_d_ = side_a;
    }
    bool check() override;
    std::string get_name() override;
private:
    std::string name = "Ромб:";
    int side_b = 0, side_c = 0, side_d = 0;
};

