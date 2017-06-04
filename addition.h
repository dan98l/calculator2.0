#include <iostream>
#include <iomanip>

double addition(double numberOne, double NumberTwo, double sum){
    
    sum = numberOne + NumberTwo;
    
    std::cout.precision(3);
    std::cout.setf(std::ios::fixed, std::ios::floatfield);
    
    return sum;
}


