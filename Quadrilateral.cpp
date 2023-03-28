#include "Quadrilateral.h"


int Quadrilateral::get_side_a() { return side_a_; }
int Quadrilateral::get_side_b() { return side_b_; }
int Quadrilateral::get_side_c() { return side_c_; }
int Quadrilateral::get_side_d() { return side_d_; }
int Quadrilateral::get_corner_a() { return corner_a_; }
int Quadrilateral::get_corner_b() { return corner_b_; }
int Quadrilateral::get_corner_c() { return corner_c_; }
int Quadrilateral::get_corner_d() { return corner_d_; }
int Quadrilateral::get_num_side() { return num_side; }
std::string Quadrilateral::get_name() { return name; }
bool Quadrilateral::check()
{
    if ((corner_a_ + corner_b_ + corner_c_ + corner_d_) == 360)
    {
        return true;
    }
    return false;
}
void Quadrilateral::print_info() 
{
    Figure::print_info();
    std::cout << "Стороны: " << side_a_ << ", " << side_b_ << ", " << side_c_ << ", " << side_d_ << std::endl;
    std::cout << "Углы: " << corner_a_ << ", " << corner_b_ << ", " << corner_c_ << ", " << corner_d_ << std::endl << std::endl;
}