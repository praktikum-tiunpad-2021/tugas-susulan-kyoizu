#include "problem_a.hpp"

int *multiply_by_two(int &n)
{
  int *ptr;
  ptr = &n;
  *ptr *= 2;
  return ptr;
}

std::string the_third_and_fifth(char *ptr)
{
  std::string output;
  output.push_back(ptr[2]);
  output.push_back(ptr[4]);
  return output;
}

int my_own_strlen(char *ptr)
{
  int length;
  length = 0;
  while (*(ptr++))
  {
    length++;
  }
  return length;
}

void element_swapper(int *ptr1, int *ptr2, int n)
{
  ptr1 += n;
  ptr2 += n;

  int temp = *ptr1;
  *ptr1 = *ptr2;
  *ptr2 = temp;
}