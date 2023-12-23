#include <iostream>
#include <cstdlib>

void PointerSwap(int *a, int *b)
{
    int temp ;
    temp = *a;
    *a = *b;
    *b = temp;
}

void ReferenceSwap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    std::cout << "First = " << a << std::endl;
    std::cout << "Second = " << b << std::endl;
}

bool calculateSum(const double* arr, int arrSize, double& sum){
    
    if (arrSize < 0){
        std::cout << "I don't have solution for 0 size array!" << std::endl;
        return false;
    }
    
    for(int i = 0; i < arrSize; i++){
        std::cout << arr[i]<< std::endl;
        sum += arr[i];
    }
    
    std::cout << "Sum of array is: " << sum << std::endl;
    return true;
}

bool find(const int* arr, int size, int elem){
    int counter = 0;
    bool status = false;
    
    for(int i = 0; i < size; i++){
        if(elem == *(arr + i)){
            status = true;
            counter ++;
        }
    }
    if(status){
        std::cout << "I have found it " << counter << " times!" << std::endl;
        return true;
    }
        else
            std::cout << "I haven't found it, try another number!" << std::endl;
            return false;
        
}


int main(){
    
    int m = 0;
    std::cout << "1)Change numbers by references and pointers;" <<std::endl;
    std::cout << "2)Show sum of random array;" <<std::endl;
    std::cout << "3)Find number in random array;" <<std::endl;
    std::cout << "Select operation:";
    
    std::cin >> m;
    
    if(m == 1){
        //first task
        int first = 0;
        int second = 0;
        
        std::cout << "Enter first number: ";
        std::cin >> first;
        
        std::cout << "Enter second number: ";
        std::cin >> second;
        
        PointerSwap(&first, &second);
        
        std::cout << "First: " << first << std::endl;
        std::cout << "Second: " << second << std::endl;
        ReferenceSwap(first, second);
    }
    
    if(m == 2){
        //second task
        int sizeDob = 0;
        double arraySum = 0;
        
        std::cout << "Enter size of array: ";
        std::cin >> sizeDob;
        
        double arrayDob[sizeDob];
        
        for(int i = 0; i < sizeDob; i ++)
            arrayDob[i] = rand() % 100;
        calculateSum(arrayDob, sizeDob, arraySum);
    }
    
    if(m == 3){
        //third task
        int element = 0;
        
        std::cout << "Number you want to find:";
        std::cin >> element;
        
        int sizeInt = 0;
        
        std::cout << "Enter size of array: ";
        std::cin >> sizeInt;
        
        int arrayInt[sizeInt];
        
        for(int i = 0; i < sizeInt; i ++)
            arrayInt[i] = rand() % 10;
        
        
        find(arrayInt, sizeInt, element);
    }
    
    if(m < 0 || m > 3)
        std::cout << "Wrong operation!!!" << std::endl;
    
    return 0;
}

