#pragma once

#include "Quadrilateral.h"

class Parallelogram : public Quadrilateral
{
public:
    Parallelogram(int side_a, int side_b, int side_c, int side_d, int corner_a, int corner_b, int corner_c, int corner_d) :Quadrilateral(side_a, side_b, side_c, side_d, corner_a, corner_b, corner_c, corner_d)
    {}
    bool check() override;
    std::string get_name() override;
private:
    std::string name = "ֿאנאככוכמדנאלל:";
};

