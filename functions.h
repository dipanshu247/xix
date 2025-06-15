#pragma once
#include <string>

// functions.cpp
void compare_and_check( std::string correct_answer );
template <typename T>
void shuffle_this_array(T array[] , short lenth_of_array,bool print=false);
void print_array(int array[], int size);
int random_number_in_range(int min, int max);
void print_highlight(std::string text);


// math.cpp
void square();
void cube();
void values();
void multiply(short times , short by);
