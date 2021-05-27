#include "header.h"

void scalpel(coordinates &input_table)
{
    std::cout << "input x0: ";
    std::cin >> input_table.x0;
    while(input_table.x0 < 0)
    {
        std::cout << "retry. input x0: ";
        std::cin >> input_table.x0;
    }

    std::cout << "input y0: ";
    std::cin >> input_table.y0;
    while(input_table.y0 < 0)
    {
        std::cout << "retry. input y0: ";
        std::cin >> input_table.y0;
    }

    std::cout << "input x1: ";
    std::cin >> input_table.x1;
    while(input_table.x1 < 0)
    {
        std::cout << "retry. input x1: ";
        std::cin >> input_table.x1;
    }

    std::cout << "input y1: ";
    std::cin >> input_table.y1;
    while(input_table.y1 < 0)
    {
        std::cout << "retry. input y1: ";
        std::cin >> input_table.y1;
    }
}

void hemostat(coordinates &input_table)
{
    std::cout << "input hemostat_point_x: ";
    std::cin >> input_table.hemostat_point_x;
    while(input_table.hemostat_point_x > input_table.x0 && input_table.hemostat_point_x > input_table.x1
            || input_table.hemostat_point_x < input_table.x0 && input_table.hemostat_point_x < input_table.x1)
    {
        std::cout << "retry. input hemostat_point_x: ";
        std::cin >> input_table.hemostat_point_x;
    }

    std::cout << "input hemostat_point_y: ";
    std::cin >> input_table.hemostat_point_y;
    while(input_table.hemostat_point_y > input_table.y0 && input_table.hemostat_point_y > input_table.y1
          || input_table.hemostat_point_y < input_table.y0 && input_table.hemostat_point_y < input_table.y1)
    {
        std::cout << "retry. input hemostat_point_x: ";
        std::cin >> input_table.hemostat_point_y;
    }
}

void tweezers(coordinates &input_table)
{
    std::cout << "input tweezers_point_x: ";
    std::cin >> input_table.hemostat_point_x;
    while(input_table.tweezers_point_x > input_table.x0 && input_table.tweezers_point_x > input_table.x1
    || input_table.tweezers_point_x < input_table.x0 && input_table.tweezers_point_x < input_table.x1)
    {
    std::cout << "retry. input tweezers_point_x: ";
    std::cin >> input_table.tweezers_point_x;
    }

    std::cout << "input tweezers_point_y: ";
    std::cin >> input_table.tweezers_point_y;
    while(input_table.tweezers_point_y > input_table.y0 && input_table.hemostat_point_y > input_table.y1
    || input_table.tweezers_point_y < input_table.y0 && input_table.tweezers_point_y < input_table.y1)
    {
    std::cout << "retry. input tweezers_point_y: ";
    std::cin >> input_table.tweezers_point_y;
    }
}

void suture(coordinates &input_table)
{
    double tmp_array[4] = {-1,-1,-1,-1};
    std::cout << "input suture_point_x0: ";
    std::cin >> tmp_array[0];
    std::cout << "input suture_point_y0: ";
    std::cin >> tmp_array[1];
    std::cout << "input suture_point_x1: ";
    std::cin >> tmp_array[2];
    std::cout << "input suture_point_y1: ";
    std::cin >> tmp_array[3];

    while
    (
            (tmp_array[0] != input_table.x0)
            || (tmp_array[1]!= input_table.y0)
            || (tmp_array[2] != input_table.x1)
            || (tmp_array[3] != input_table.y1)
    )
    {
        std::cout << "WRONG. Try again: " << std::endl;
        std::cout << "input suture_point_x0: ";
        std::cin >> tmp_array[0];
        std::cout << "input suture_point_y0: ";
        std::cin >> tmp_array[1];
        std::cout << "input suture_point_x1: ";
        std::cin >> tmp_array[2];
        std::cout << "input suture_point_y1: ";
        std::cin >> tmp_array[3];
    }

    std::cout << "OPERATION DONE" << std::endl;

}