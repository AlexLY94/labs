#include <iostream>
#include <cstdlib>
#include <stdio.h>

const int rows = 4;
const int columns = 4;

typedef enum
{
    sortUnknown = 0,
    sortAscending,
    sortDescending,
    sortUnsorted
} SortType;

const char *sortNames[] =
{
    "Unknown: ",
    "Ascending: ",
    "Descending:",
    "Unsorted: ",
};

SortType is_sorted(int* arr, int size)
{
    if (size <= 1)
    {
        return sortUnknown;
    }

    SortType overallSortType = sortUnknown;
    for (int i = 0; i < size - 1; ++i)
    {
        if (arr[i] < arr[i + 1])
        {
            if (overallSortType == sortDescending)
            {
                return sortUnsorted;
            }
            overallSortType = sortAscending;
        }
        else if (arr[i] > arr[i + 1])
        {
            if (overallSortType == sortAscending)
            {
                return sortUnsorted;
            }
            overallSortType = sortDescending;
        }
    }
    return overallSortType;
}

void print(int *arr, int size, SortType st)
{
    std::cout << sortNames[st] ;
    for (int i = 0; i < size; ++i)
    {
        std::cout << arr[i];
    }
    std::cout << std::endl;
}




void printArray(int (arr)[rows][columns]){
    
    for(int i = 0; i < rows; i ++){
        for(int j = 0; j < columns; j++){
            std::cout << arr[i][j] << " | ";
        }
        std::cout << std::endl;
    }
    std::cout << std::endl;
}



bool find(int (arr)[rows][columns], int toFind ){
    
    bool iFind = false;
    
    for(int i = 0; i < rows; i ++){
        for(int j = 0; j < columns; j++){
            if(arr[i][j] == toFind)
                iFind = true;
        }
    }
    if(iFind)
        return true;
    else
        return false;
}

void printArrayUpDownLeft(int (arr)[rows][columns]){
    
    for(int j = columns -1; j >= 0; j--){
        for(int i = 0; i < rows; i++){
            std::cout<< arr[i][j] << "|";
        }
        std::cout << std::endl;
    }
    
}

void printArrayDownRightUp(int (arr)[rows][columns]){
    
    for(int i = rows - 1; i > 0; i --){
        for(int j = 0; j < columns; j ++){
            std::cout << arr[i][j] << "|";
        }
        std::cout << std::endl;
        i--;
        for(int k = columns - 1; k >= 0 ; k--){
            std::cout << arr[i][k] << "|";
        }
        std::cout << std::endl;
    }
}
        



int main (){
    
    int arr[rows];
    for(int i = 0; i < rows; i++)
        (arr[i] = rand() % 10);
        
    int arr_2d[rows][columns];
  
    for(int i = 0; i < rows; i ++){
        for(int j = 0; j < columns; j++){
            (arr_2d[i][j]) = rand() % 10;
        }
    }
    
    printArray(arr_2d);
    std::cout << std::endl;
    printArrayUpDownLeft(arr_2d);
    std::cout << std::endl;
    printArrayDownRightUp(arr_2d);
    
    int toFind = 0;
    bool iFind = false;
    
    std::cout << std::endl;
    
    std::cout << "Enter number to find in array: ";
    std::cin >> toFind;
    
    
    iFind = find(arr_2d, toFind);
    
    if(iFind)
        std::cout << "I have found your element!" << std::endl;
    else
        std::cout << "I didn't find your element!" << std::endl;

    int arr1[] = { 1, 1, 2 };
        SortType st = is_sorted(arr1, 3);
        print(arr1, 3, st);

        int arr2[] = { 2, 1, -1 };
        st = is_sorted(arr2, 3);
        print(arr2, 3, st);

        int arr3[] = { 4, 7, 0, 3 };
        st = is_sorted(arr3, 4);
        print(arr3, 4, st);

        int arr4[] = { 3 };
        st = is_sorted(arr4, 1);
        print(arr4, 1, st);

        int arr5[] = { 1, 1, 1, 1, 2, 2, 2, 3, 4, 5, 6, 6, 6, 6, 7, 8, 9 };
        st = is_sorted(arr5, 17);
        print(arr5, 17, st);
    
    
    
    
}
