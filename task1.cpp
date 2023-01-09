#include <iostream>
#include "task1.h"


void swap(int *ptra, int *ptrb){
    int change = *ptra;
    *ptra = *ptrb;
    *ptrb = change;
}

void task1(){
    std::cout << "task1:" << std::endl;
    int a = 0;
    std::cout << "Put in a" << std::endl;
    std::cin  >> a;
    int b = 0;
    std::cout << "Put in b" << std::endl;
    std::cin  >> b;
    int *ptra = &a;
    int *ptrb = &b;
    swap(ptra, ptrb);
    std::cout << a << b << std::endl;

}
