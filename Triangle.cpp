#include "Triangle.h"

int Triangle::get_side_a() { return side_a_; }
int Triangle::get_side_b() { return side_b_; }
int Triangle::get_side_c() { return side_c_; }
int Triangle::get_corner_a() { return corner_a_; }
int Triangle::get_corner_b() { return corner_b_; }
int Triangle::get_corner_c() { return corner_c_; }
std::string Triangle::get_name() { return name; }
int Triangle::get_num_side() { return num_side; }
bool Triangle::check()
{
    if ((corner_a_ + corner_b_ + corner_c_) == 180)
    {
        return true;
    }
    return false;
}
void Triangle::print_info()
{
    Figure::print_info();
    std::cout << "Стороны: " << side_a_ << ", " << side_b_ << ", " << side_c_ << ", " << std::endl;
    std::cout << "Углы: " << corner_a_ << ", " << corner_b_ << ", " << corner_c_ << ", " << std::endl << std::endl;
}