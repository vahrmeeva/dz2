#include <iostream>
#include "task5.h"

void task5(){
    setlocale (LC_CTYPE, "Russian");
    srand(time(NULL));

    const int size = 8;
    const int size2 = 8;
    int arr1[size] = {58, 39,46, -37, 141, -58,-46,101};
    int arr2[size2];
    int l = 0;
    int k = 0;
    for (int i = 0; i <size; i++){
        if (arr1[i] >0) {
            l++;
        }
    }
    std::cout << "task5:" << std::endl;
    for (int i = 0; i < size; ++i)
        std::cout << arr1[i] << " ";
    std::cout << std::endl;

    std::cout << "Amount of positive elements = " << l << std::endl;
    l = size - l;

    for (int i = 0; i < size; i++){
        if (arr1[i]>0){
            arr2[l]=arr1[i];
            l++;
        } else if (arr1[i]<0){
            arr2[k]=arr1[i];
            k++;
        }
    }

    for (int i = 0; i < size2; ++i)
        std::cout << arr2[i] << " ";
    std::cout << std::endl;
}
