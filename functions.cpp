#include <string>
#include <iostream>
#include <algorithm>
#include <random>
#include "functions.h"
#include "color.h"
using namespace std;

std::random_device rd;
std::mt19937 gen(rd());




// range is inclusive
int random_number_in_range(int min, int max) {
    std::uniform_int_distribution<> dis(min, max);
    return dis(gen);
}

void compare_and_check( string correct_answer ){

    string user_answer;
    getline(cin,user_answer);

    if ( user_answer.compare(correct_answer) != 0)  {
        // Wrong answer
        cout<< color::blue_bg <<"The correct answer is: "<< color::reset << color::green << "  "<<correct_answer << color::reset <<endl;
    }
}

// Shuffle Array with Template Implementation
template <typename T>
void shuffle_this_array(T array[], short lenth_of_array , bool print) {
    std::shuffle(array, array + lenth_of_array, gen);
    if (print){
        for(int i = 0; i < lenth_of_array; i++) {
            cout << array[i] << " ";
        }
        cout <<endl;
    }
};
// Explicit template instantiation for types used in the project
template void shuffle_this_array<int>(int array[], short lenth_of_array, bool print=false);
template void shuffle_this_array<char>(char array[], short lenth_of_array, bool print=false);
template void shuffle_this_array<short>(short array[], short lenth_of_array, bool print=false);
template void shuffle_this_array<std::string>(std::string array[], short lenth_of_array, bool print=false);
