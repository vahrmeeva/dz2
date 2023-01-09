#include <iostream>
#include "task7.h"

void task7(){
    srand(time(NULL));
    const int size = 8;
    int arr[size] = {5, 9,4, -7, 14, -5,6,1};
    for (int i = 0; i < size; ++i)
        std::cout << arr[i] << " ";
    std::cout << std::endl;
    int min = 0;
    for (int i = 0; i <size; i++){
        if (i == 0 && arr[i] < arr[i+1]) min++;
        else if (i > 0 && i < size-1 && arr[i] < arr[i-1] && arr[i] < arr[i+1]) min++;
        else if (i == size-1 && arr[i] < arr[i-1]) min++;
    }
    std::cout << "task7:" << std::endl;
    std::cout << "Amount of locmin: " << min << std::endl;
}