#include <iostream>
#include <iomanip>
#include "addition.h"

int main(){
    
    double numberOne = 1.7;
    double numberTwo = 2.4;
    double sum = 0;
    sum = numberOne + numberTwo;
    double res = addition(numberOne, numberTwo, sum);
    std::cout << sum << "\n";
    std::cout << res << "\n";

    return 0;
}
