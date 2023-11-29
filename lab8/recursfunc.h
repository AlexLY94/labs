
unsigned long recurs_factorial (int n){
    
    if (n < 0)
        std::cout <<"Error!!!";
    
    if ( n == 0)
        return 1;
    
    if (n > 0)
    return n * recurs_factorial(n - 1);
    
    return 0;
}

void recurs_printNaturalNumbers_from_higher(int count){
    
    if (count <= 0)
        return;
    
       std::cout << count << " / ";
       return recurs_printNaturalNumbers_from_higher(count - 1);
 
    }



void recurs_printNaturalNumbers_from_lower(int count){

    if (count > 1)
        recurs_printNaturalNumbers_from_lower(count - 1);
        std::cout << count << " \\ ";
        
}
