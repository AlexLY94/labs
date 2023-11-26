#include <iostream>
#include <cstdlib>
#include <ctime>
#include <math.h>



int main(){
 
        int highscore = 0;
        int currentscore = 0;
        int userNum = 0;
        int counter = 1;
        int difference = 0;
        srand (static_cast <unsigned int> (time (0)));
        const unsigned int range = 50;
        int generatedNum = rand () % range + 1;
        std::cout <<"Welcome to game: Guess my number!" << std::endl;
        std::cout <<"I have wished a number from 0 to 50! Guess it!!!" << std::endl;
        std::cout <<"Enter -1 to quit!!!" << std::endl << std::endl << std::endl;

    do {
        std::cout <<"Enter your number: ";
        std::cin >> userNum;
        
        if (userNum == generatedNum){
            currentscore = counter;
            std::cout <<"My congatulation, you win!!!" << std::endl;
            std::cout<<"Number of your attempts: " << currentscore << std::endl;
            std::cout <<"Enter -1 to quit!!!" << std::endl << std::endl << std::endl;
            
            std::cout << std::endl <<"Wait...generating new number!!!" << std::endl;
            
            if (currentscore >= counter)
                highscore = currentscore;
            
            counter = 0;
            
            srand (static_cast <unsigned int> (time (0)));
            generatedNum = rand () % range + 1;
            continue;
        }
        
        if (userNum > generatedNum){
            difference = range + userNum - generatedNum - range;
            std::cout <<"My number is less than yours!" << std::endl;
            
            if (difference >= 10)
                std::cout <<"Colder! Less than 10!" << std::endl;
            
            if (difference >= 20)
                std::cout <<"Warmer! Less than 20!" << std::endl;
            
            else
                std::cout <<"Hot!" << std::endl;
            
                counter++;
            }
        
        
        if (userNum < generatedNum){
            difference = range + generatedNum - userNum - range;
            std::cout <<"My number is more than yours!" << std::endl;
            
            if (difference >= 10)
                std::cout <<"Colder! More than 10!" << std::endl;
            
            if (difference >= 20)
                std::cout <<"Warmer! More than 20!" << std::endl;
            
            else
                std::cout <<"Hot!" << std::endl;
                counter++;
        }
    
        if (userNum > 50 || userNum < -1){
            std::cout <<"You out of range!" << std::endl;
            counter++;
        }
        
        if (userNum == -1)
            break;
    }

    while (userNum);
        
        std::cout<<"Your best score is: " << highscore << std::endl;
        return 0;
    }


