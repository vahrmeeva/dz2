#include <iostream>
#include "task11.h"


void task11(){
    int M[5][5]={2,6,4,10,5,7,0,9,13,4,6,5,8,19,3,7,2,8,23,1,8,3,2,19,7};
    int Mas[5][5]={0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
    int i,j,n,naprav;

    std::cout<< "\nenter the shift direction (0 'right')\n";
    std::cin>>naprav;
    std::cout<< "\nna skolko nado sdvinyt?\n";
    std::cin>>n;
    std::cout<<std::endl;
    i=0;
    j=0;

    for (i=0; i<5; i++) // проход по столбцу
    {for (j=0; j<5; j++) //проход по стоке
            std::cout<< M[i][j]<<" " ; // вывод массива
        std::cout<<std::endl; //конец j-той строки
    }
    std::cout<<std::endl;
    if (naprav==0);
    {for (i=0; i<5; i++)
            for (j=0; j<5; j++)
                Mas[i][j]=M[i][(j+n)%5];}

    for (i=0; i<5; i++) // проход по столбцу
    {for (j=0; j<5; j++) //проход по стоке
            std::cout<< Mas[i][j]<<" " ; // вывод массива
        std::cout<<std::endl; //конец j-той строки
    }
}