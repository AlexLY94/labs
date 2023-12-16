#include "regularFunction.hpp"
#include <iostream>


int counters (int quant){
    int count_poss = 0;
    int count_neg = 0;
    int count_zero = 0;
    int mass[quant];
    
    for (int i = 0; i < quant; i++){
        std::cin >> mass[i];
        if (mass[i] > 0)
            count_poss++;
        if (mass[i] < 0)
            count_neg++;
        if (mass[i] == 0)
            count_zero++;
    }
    
    std::cout <<"Possitive: " << count_poss <<"| Negative: " << count_neg <<"| Zeros: " << count_zero << std::endl;
    
    return count_poss;
    return count_neg;
    return count_zero;
}

unsigned int factorial (int n){
    unsigned int result = 1;
    
    if (n < 0)
        std::cout <<"Error!!!";
    
    for(int i = 1; i <= n; i++)
    result = result * i;
    
   
    return result;
}

void printNaturalNumbers_from_lower(int count){
    
    for(int i = 1; i <= count; i++)
        std::cout <<"| " << i << " | ";
    
    std::cout << std::endl;
}

void printNaturalNumbers_from_higher(int count){
    
    for(int i = count; i >= 1; i--)
        std::cout <<"| " << i << " | ";
    
    std::cout << std::endl;
}

