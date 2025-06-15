#include <algorithm>
#include <string>
#include <iostream>
#include "functions.h"
#include "color.h"
using namespace std;

void square(){
    short number_of_elements = 17;
    short square[17]={12,13,14,15,16,17,18,19,21,22,23,24,25,26,27,28,29};
    shuffle_this_array<short>(square,number_of_elements);
    // cout<<"Square of numbers from 12 to 29:"<<endl;
    for(int i = 0; i < number_of_elements; i++){
        cout << "What is the square of " << color::red << square[i] << color::reset << " ? ";
        string correct_answer = to_string(square[i] * square[i]);
        compare_and_check(correct_answer);
    }
};

void cube(){
    short number_of_elements = 19;
    short cube[19]={2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
    shuffle_this_array<short>(cube,number_of_elements);
    cout<<"Cube of numbers from 12 to 29:"<<endl;
    for(int i = 0; i < number_of_elements; i++){
        cout << "What is the cube of " << cube[i] << " ? ";
        string correct_answer = to_string(cube[i] * cube[i] * cube[i]);
        compare_and_check(correct_answer);
    }
};

void values(){
    short number_of_elements = 2;
    std::string values[2]={"root of 2", "root of 3"};
    std::string answer[2]={"1.414", "1.732"};
    short random_order[]={0,1};
    shuffle_this_array<short>(random_order,number_of_elements);
    for(int i = 0; i < number_of_elements; i++){
        cout << "What is the value of " << values[random_order[i]] << "? ";
        string correct_answer = answer[random_order[i]];
        compare_and_check(correct_answer);
    }
};


void multiply(short times, short by){
    cout<<"Enter Opposite value"<<endl;
    int a ,b,c  ;
    short min_value , max_value;


    switch (by) {
        case 2: min_value = 11; max_value = 99; break;
        case 3: min_value = 101; max_value = 999; break;
        default: break;

    }
    for(int i = 0; i < times; i++){
        a = random_number_in_range(min_value, max_value);
        b = random_number_in_range(min_value, max_value);
        c = a * b;

        cout << "What is the product of " << a << " and " << b << "? ";
        string correct_answer = to_string(c);
        reverse(correct_answer.begin(),correct_answer.end());
        compare_and_check(correct_answer);
    }
};
