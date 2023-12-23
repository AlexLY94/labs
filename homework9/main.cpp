#include <iostream>
#include <cstring>
#include "functions.h"



int main(){
    int m;
    std::cout << "1)Translate array;" << std::endl;
    std::cout << "2)String to uppercase;" << std::endl;
    std::cout << "3)Check if polindrome;" << std::endl;
    std::cout << "4)Count vowels and consonants;" << std::endl;
    std::cout << "5)Compare strings;" << std::endl;
    
    std::cout << "Choose option: " << std::endl;
    
    std::cin >> m;
    
    switch (m) {
        case 1:{
            int numbers[10];
            translateArray(numbers);
            break;
        }
        case 2:{
            int size_s = 0;
            std::cout << "Enter size of string: ";
            std::cin >> size_s;
            char str[size_s];
            toUppercase(str, size_s);
            break;
        }
        case 3:{
            std::string Word;
            std::cout << "Enter string: ";
            std::cin >> Word;
            check_polindrom(Word);
            break;
        }
        case 4:{
            std::string str;
            int vowelsCount = 0, consonantsCount = 0;
            std::cout << "Enter string: ";
            std::cin >> str;
            parseStringLetters(str,vowelsCount,consonantsCount);
            break;
        }
        case 5:{
            std::string s1;
            std::string s2;
            std::cout << "Enter string 1: ";
            std::cin >> s1;
            std::cout << "Enter string 2: ";
            std::cin >> s2;
            isEqual(s1,s2);
            break;
        }
        default:
            std::cout << "No such option!" << std::endl;
    }
    
}
