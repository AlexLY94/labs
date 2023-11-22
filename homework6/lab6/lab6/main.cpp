#include <iostream>
#include <cctype>
#include <locale>

int main (){
    
    //first task
    /*
     int first_element = 0;
     int step = 0;
     int last_number = 0;
     unsigned int next_element = 0;
     
     std::cout <<"Enter first element of arithmetic progression: ";
     std::cin >> first_element;
     std::cout <<"Enter step of arithmetic progression: ";
     std::cin >> step;
     std::cout <<"Enter number of last element of arithmetic progression: ";
     std::cin >> last_number;
     
     for(int i = 0; i < last_number; i++){
     next_element = first_element + step * i;
     std::cout << next_element << " | ";
     }
     std::cout << std::endl;
     */
    
    //second task
    /*
     int f1 = 0;
     int f2 = 1;
     int fib_element = 0;
     unsigned int element = 0;
     
     std::cout <<"Enter number of element of Fibonacci series: ";
     std::cin >> fib_element;
     
     for(int i = 0; i < fib_element; i++){
     element = f1 + f2;
     f2 = f1;
     f1 = element;
     }
     
     std::cout <<"Your element is: " << element << std::endl;
     */
    
    //third task
    /*
     unsigned int n = 0;
     unsigned long result = 1;
     std::cout <<"Enter number for factorial convertion: ";
     std::cin >> n;
     
     for(int i = 1; i <= n; i++)
     result = result * i;
     
     std::cout <<"Your number " << n <<" factorial is: " << result << std::endl;
     */
    
    //forth task
    /*
     int height = 0;
     std::cout << "Enter height of figure: ";
     std:: cin >> height;
     std:: cout <<"1) " << std::endl;
     
     for (int i = height; i >= 0; i--){
     for (int j = height -1 * i; j <= height; j++)
     std::cout << '*';
     std:: cout << std::endl;
     }
     std:: cout <<"2) " << std::endl;
     
     for (int i = 0; i < height; i++){
     for (int j = height -1 * i; j <= height; j++)
     std::cout << '*';
     std:: cout << std::endl;
     }
     std:: cout <<"3) " << std::endl;
     
     for (int i = 0; i < height; i++){
     for (int j = 0; j <= height; j++)
     std::cout << '*';
     std:: cout << std::endl;
     }
     std:: cout <<"4) " << std::endl;
     
     for (int i = 0; i < height; i++){
     
     for (int j = 0; j <= height; j++){
     
     if(i > j * i)
     for(int y = 0; y < i; y++)
     std::cout << ' ';
     
     std::cout << '*';}
     std:: cout << std::endl;
     }
     std:: cout <<"5) " << std::endl;
     
     for (int i = 0; i < height; i++){
     for (int j = height -1 * i; j <= height; j++)
     if(j % 2 == 0)
     std::cout << '0';
     else
     std::cout << '1';
     
     std:: cout << std::endl;
     }
     */
    //fifth task
    /*
    char symbol;
    int sum = 0;
    char upcase_letter;
    std::cout <<"Please enter symbol, it could be a letter or a number: ";
    while (true){
        
        std::cin >> symbol;
        
        int its_a_letter = isalpha(symbol);
        if(its_a_letter){
            upcase_letter = toupper(symbol);
            std::cout << upcase_letter << std::endl;
           }
        
        int its_a_digit = isdigit(symbol);
        if(its_a_digit)
            sum +=  symbol - '0';
        
        int its_a_punct = ispunct(symbol);
        if(its_a_punct)
            std::cout <<"I can't process it!" << std::endl;
        
       if(symbol == '.')
           break;
    }
    std::cout << sum << std::endl;
     */
}
   
    
    

