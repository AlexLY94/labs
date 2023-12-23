#include <iostream>
#include <cstring>

void translateArray(int numbers[], int size){
    
    for(int i = 0; i < size; i++){
        
        if(numbers[i] >= 0)
            numbers[i] *= 2;
        
        if(numbers[i] <= 0)
            numbers[i] = 0;
        
        std::cout << numbers[i] << "|";
    }
    std::cout << std::endl;
}


void toUppercase(char str[], int &size_s){
    
    
    for(int i = 0; i < size_s; i++)
           putchar(toupper(str[i]));
    
    std::cout << std::endl;
}


bool check_polindrom(std::string word)
{
    unsigned long len = word.length();
    for(int i = 0; i < len/2; ++i)
    {
        if(word[i] != word[len-i-1])
        {
            std::cout << "Word is not a palindrom! " << std::endl;
            return false;
        }
    }
    std::cout << "Word is palindorme!" << std::endl;
    return true;
}


void parseStringLetters(std::string str, int& vowelsCount, int& consonantsCount){
    
    unsigned long len = str.length();

    std::string vowels = "aeiouy";
    std::string consonants = "bcdfghjklmnpqrstwxvz";
    
    for(int i = 0; i < len; i++ ){
        for(int j = 0; j < vowels.length(); j++){
            if(str[i] == vowels[j])
                vowelsCount++;
                }
    }
    for(int i = 0; i < len; i++ ){
        for(int j = 0; j < consonants.length(); j++){
            if(str[i] == consonants[j])
                consonantsCount++;
                }
    }
    
    std::cout << "Amount of vowels in your word: " << vowelsCount << std::endl;
    std::cout << "Amount of consonants in your word: " << consonantsCount << std::endl;

}

bool isEqual(std::string s1, std::string s2){
    
    unsigned long len1 = s1.length();
    unsigned long len2 = s2.length();
   
    if(len1 != len2){
        std::cout << "Different lenght of strings, they are no equal!!!" << std::endl;
        return false;
    }
    
    for(int i = 0; i < len1 ; i++){
        
        if(s1[i] != s2[i]){
            std::cout << "Strings are not equal!" << std::endl;
            return false;
        }
    }
            std::cout << "Strings are equal!" << std::endl;
            return true;
        
    
}


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
            int size = 10;
            int numbers[size];
            for(int i = 0; i < size; i++) {
                std::cout <<"Enter " << i << " element of array:";
                std::cin >> numbers[i];
            }
            translateArray(numbers,size);
            for(int i = 0; i < size; i++){
              
                std::cout << numbers[i] << "|";
            }
            std::cout << std::endl;
            break;
        }
        case 2:{
            int size_s = 0;
            std::cout << "Enter size of string: ";
            std::cin >> size_s;
            char str[size_s];
            std::cout <<"Enter string:";
            
            for(int i = 0; i < size_s; i++) {
                std::cin >> str[i];
            }
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
