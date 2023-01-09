#include <iostream>
#include <string>
#include "task9.h"


template <typename T>
static int BubbleSort(T arr[], int arr_size);
template <typename T>
static int BubbleSortmin(T arr[], int arr_size);


template <typename T>
static int BubbleSort(T *arr, int arr_size) {
    for (int i = 0; i < arr_size-1; i++) { // 2 вложенных цикла из-за того, чтобы уйти сравнивая за последний элемент
        for (int j = 0; j < arr_size-1; j++) {
            if (arr[j] > arr[j + 1])
                std::swap(arr[j], arr[j+1]);//свапаем соседние элементы, если левый меньше правого
        }
    }
}

template <typename T>
static int BubbleSortmin(T arr[], int arr_size) {
    for (int i = 0; i < arr_size-1; i++) { // 2 вложенных цикла из-за того, чтобы уйти сравнивая за последний элемент
        for (int j = 0; j < arr_size-1; j++) {
            if (arr[j] < arr[j + 1])
                std::swap(arr[j], arr[j+1]);//свапаем соседние элементы, если левый меньше правого
        }
    }
}



void task9(){
    srand(time(NULL));

    const int s = 15;
    int array[s] = {58, 39,46, -37, 141, -58,-46,101, 23, -19, 43, 67, -98, 54, 77};

    int m = 0;
    int g = 0;
    BubbleSort(array, s);
    std::cout << "task9:" << std::endl;
    for (int i = 0; i < s; ++i)
        std::cout << array[i] << " ";
    std::cout << std::endl;

    int lenght = 0;
    for(int i = 0; i < s; i++){
        if (array[i] >0) {
            lenght++;
        }
    }
    std::cout << "Amount of positive elements = " << lenght << std::endl;
    int array1[s-lenght];
    int array2[lenght];

    for (int i = 0; i<s; i++){
        if(array[i]<0) {
            array1[m]= array[i];
            m++;
        } else if(array[i]>0){
            array2[g]= array[i];
            g++;
        }
    }
    for (int i = 0; i < s-lenght; i++)
        std::cout << array1[i] << " ";
    std::cout << std::endl;

    for (int i = 0; i < lenght; i++)
        std::cout << array2[i] << " ";
    std::cout << std::endl;

    BubbleSortmin(array2, lenght);
    for (int i = 0; i < lenght; i++)
        std::cout << array2[i] << " ";
    std::cout << std::endl;

    int p = 0; int d = 0;
    int result[s];
    for(int i = 0; i < s ; i++){
        if (i<s-lenght) {
            result[i] = array1[p];
            p++;
        } else {
            result[i] = array2[d];
            d++;
        }
    }


    for (int i = 0; i < s; i++)
        std::cout << result[i] << " ";
    std::cout << std::endl;
}