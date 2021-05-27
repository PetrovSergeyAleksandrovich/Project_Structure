#pragma once
#include <iostream>

struct coordinates
{
    double x0 = 0;
    double y0 = 0;
    double x1 = 0;
    double y1 = 0;

    double hemostat_point_x = 0;
    double hemostat_point_y = 0;

    double tweezers_point_x = 0;
    double tweezers_point_y = 0;

};

void scalpel(coordinates &input_table);
void hemostat(coordinates &input_table);
void tweezers(coordinates &input_table);
void suture(coordinates &input_table);