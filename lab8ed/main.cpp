#include <iostream>
#include "regularFunction.hpp"
#include "recursiveFunction.hpp"

int main(){
    
    int menu = 0;
    std::cout <<"1)Counter of numbers;" << std::endl;
    std::cout <<"2)Factorial conversion by regular function;" << std::endl;
    std::cout <<"3)Factorial conversion by recursive function;" << std::endl;
    std::cout <<"4)Print natural numbers by regular function;" << std::endl;
    std::cout <<"5)Print natural numbers by recursive function;" << std::endl;
    std::cout <<"Choose option:" << std::endl;
    std::cin >> menu;

                       
        //first task
        if(menu == 1){
            int quant = 0;
            std::cout <<"Enter quantity of numbers: ";
            std::cin >> quant;
            counters(quant);        }
        //second task
        int n = 0;
        
        if (menu == 2){
            std::cout <<"Enter number for factorial convertion: ";
            std::cin >> n;
            factorial(n);
            std::cout <<"Your number in recursive function " << n <<" factorial is: " << recurs_factorial(n) << std::endl;

        }
        
        if (menu == 3){
            std::cout <<"Enter number for factorial convertion: ";
            std::cin >> n;
            std::cout <<"Your number in recursive function " << n <<" factorial is: " << recurs_factorial(n) << std::endl;
        
        }
        
        //third task
        int count = 0;
        
        if (menu == 4){
            
            std::cout <<"Enter amount of natural numbers: ";
            std::cin >> count;
            printNaturalNumbers_from_lower(count);
            printNaturalNumbers_from_higher(count);

        }
        if (menu == 5){
            std::cout <<"Enter amount of natural numbers: ";
            std::cin >> count;
            recurs_printNaturalNumbers_from_higher(count);
            recurs_printNaturalNumbers_from_lower(count);

           
        }
    
    if (menu > 6 || menu <= 0)
        std::cout <<"No option, I'm closing..." << std::endl;
    }

