/*
 * Bebas disini bisa masukin apa aja.
 * Misal mau testing atau debugging sendiri.
 */

#include "problem_a.hpp"
#include <iostream>

int main(int argc, char const *argv[])
{
    int r = 15;
    int val = *multiply_by_two(r);
    std::cout<<val<<std::endl;
    std::cout<<the_third_and_fifth("akuma")<<std::endl;
    std::cout<<my_own_strlen("metaphore")<<std::endl;
}
