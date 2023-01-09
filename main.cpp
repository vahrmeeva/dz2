#include <iostream>
#include "task1.h"
#include "task5.h"
#include "task7.h"
#include "task9.h"
#include "task11.h"
#include "task13.h"
#include <vector>

int main()
{
////task3
std::cout << "task3" << std::endl;
double **p = 0;
double *pp = new double(2);
std::cout << "Result" << *pp << std::endl;
delete pp;


int task;
std::cout << "Enter Number of the task (1, 5, 7, 9, 11, 13)" << std::endl;
std::cin >> task;
if (task == 1){
    task1();
}else if (task == 5){
    task5();
}else if (task == 7){
    task7();
}else if (task == 9){
    task9();
}else if (task == 11){
    task11();
}else if (task == 13){
    task13();
}
    return 0;
}
