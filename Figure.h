#pragma once

#include <iostream>

class Figure
{
    public:
        virtual bool check();
        virtual void print_info();
        virtual std::string get_name();
        virtual int get_num_side();
    private:
        int num_side = 0;
        std::string name = "Фигура";
};

