#include <iostream>

enum class Months {
    January = 1,
    February = 2,
    March = 3,
    April = 4,
    May = 5,
    June = 6,
    July = 7,
    August = 8,
    September = 9,
    October = 10,
    November = 11,
    December = 12
};

int main (){
    //first task
    /*
     int first = 0;
     int second = 0;
     int third = 0;
     int max = 0;
     
     std:: cout <<"Enter first number: ";
     std:: cin >> first;
     std:: cout <<"Enter second number: ";
     std:: cin >> second;
     std:: cout <<"Enter third number: ";
     std:: cin >> third;
     
     if (first > second && first > third)
     {
     max = first;
     std:: cout << "Max is first number " << first << std::endl;
     }
     else if (second > first && second > third)
     {
     max = second;
     std:: cout << "Max is second number " << second << std::endl;
     }
     else if (third > first && third > second)
     {
     max = third;
     std:: cout << "Max is third number " << third << std::endl;
     }
     else
     {
     std:: cout <<"Two or more maximal numbers!" << std::endl;
     
     }
     */
    
    //second task
    /*
     int a = 0;
     int b = 0;
     
     std:: cout << "Enter a: ";
     std:: cin >> a;
     std:: cout << "Enter b: ";
     std:: cin >> b;
     int min = a < b ? a : b;
     std:: cout << "Min is: " << min << std:: endl;
     */
    //third task
    /*
     int num = 0;
     
     std:: cout << "Enter num: ";
     std:: cin >> num;
     
     if (num % 5 == 0){
     if (num % 11 == 0)
     {
     std:: cout << "Number is divisible by 5 and 11 simult." << std:: endl;
     }
     else
     std:: cout << "Number is divisible only by 5." << std:: endl;
     }
     else
     std:: cout << "Number is not divisible by 5." << std:: endl;
     */
    //forth task
    /*
     int first_angle = 0;
     int second_angle = 0;
     int third_angle = 0;
     
     std:: cout << "Enter first angle: ";
     std:: cin >> first_angle;
     std:: cout << "Enter second angle: ";
     std:: cin >> second_angle;
     std:: cout << "Enter third angle: ";
     std:: cin >> third_angle;
     
     if (first_angle + second_angle + third_angle == 180 && first_angle > 0 && second_angle > 0 && third_angle > 0)
     std:: cout << "This angles can form tringle." << std:: endl;
     else
     std:: cout << "This angles can not form tringle." << std:: endl;
     */
    
    //fifth task
    /*
     int month = 0;
     std:: cout << "Enter number of month: ";
     std:: cin >> month;
     Months current_month = static_cast<Months>(month);
     
     switch (current_month) {
     
     case Months::January :
     std:: cout << "January." << std::endl;
     break;
     case Months::February :
     std:: cout << "February." << std::endl;
     break;
     case Months::March :
     std:: cout << "March." << std::endl;
     break;
     case Months::April :
     std:: cout << "April." << std::endl;
     break;
     case Months::May :
     std:: cout << "May." << std::endl;
     break;
     case Months::June :
     std:: cout << "June." << std::endl;
     break;
     case Months::July :
     std:: cout << "July." << std::endl;
     break;
     case Months::August :
     std:: cout << "August." << std::endl;
     break;
     case Months::September :
     std:: cout << "September." << std::endl;
     break;
     case Months::October :
     std:: cout << "October." << std::endl;
     break;
     case Months::November :
     std:: cout << "November." << std::endl;
     break;
     case Months::December :
     std:: cout << "December." << std::endl;
     break;
     
     default:
     std:: cout << "You entered wrong number, no such month!" << std::endl;
     break;
     }
     */
    //sixth task
    /*
    int month = 0;
    std:: cout << "Enter number of month: ";
    std:: cin >> month;
    Months current_month = static_cast<Months>(month);
    
    switch (current_month) {
            
        case Months::December :
        case Months::January :
        case Months::February :
            std:: cout << "Winter." << std::endl;
            break;
        case Months::March :
        case Months::April :
        case Months::May :
            std:: cout << "Spring." << std::endl;
            break;
        case Months::June :
        case Months::July :
        case Months::August :
            std:: cout << "Summer." << std::endl;
            break;
        case Months::September :
        case Months::October :
        case Months::November :
            std:: cout << "Autumn." << std::endl;
            break;
            
            
        default:
            std:: cout << "You entered wrong number, no such month or season!" << std::endl;
            break;
            
    }
     */
}
