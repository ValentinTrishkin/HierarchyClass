#pragma once

#include<iostream>

#include"Figure.h"

class Quadrilateral : public Figure // Четырехугольник
{
public:
    Quadrilateral(int side_a = 0, int side_b = 0, int side_c = 0, int side_d = 0, int corner_a = 0, int corner_b = 0, int corner_c = 0, int corner_d = 0)
    {
        side_a_ = side_a;
        side_b_ = side_b;
        side_c_ = side_c;
        side_d_ = side_d;
        corner_a_ = corner_a;
        corner_b_ = corner_b;
        corner_c_ = corner_c;
        corner_d_ = corner_d;
    }
    int get_side_a();
    int get_side_b();
    int get_side_c();
    int get_side_d();
    int get_corner_a();
    int get_corner_b();
    int get_corner_c();
    int get_corner_d();
    int get_num_side();
    std::string get_name() override;
    bool check() override;
    void print_info() override;
protected:
    int side_a_ = 0, side_b_ = 0, side_c_ = 0, side_d_ = 0;
    int corner_a_ = 0, corner_b_ = 0, corner_c_ = 0, corner_d_ = 0;
    int num_side = 4;
private:
    std::string name = "Четырехугольник:";
};

