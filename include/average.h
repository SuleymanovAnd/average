#include <iostream>
template <typename T>
void input (T array [8]){
    std::cout << "Fill the array (8) :";

    for (int i = 0; i < 8; i++){
        std::cout << "Input " << i+1 << " element:";
        std::cin >> array [i];
    }
}

template <typename T>
T average (T array[8]) {
    T average;
    for (int i = 0; i<8;i++ ){
        average += array[i];
    }
    return average/8;
};