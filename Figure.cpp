#include <iostream>
#include <string>

#include "Figure.h"

bool Figure::check()
{
    if (num_side == 0)
    {
        return true;
    }
    return false;
};

void Figure::print_info()
{
    std::cout << get_name() << std::endl;
    if (check() == true)
    {
        std::cout << "����������" << std::endl;
    }
    else(std::cout << "������������" << std::endl);
    std::cout << "���������� ������: " << get_num_side() << std::endl;
}
std::string Figure::get_name() { return name; }
int Figure::get_num_side() { return num_side; }