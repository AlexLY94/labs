#include <iostream>
#include <cstdlib>
#include <ctime>

const int ROWS = 5;
const int COLUMNS = 5;

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arr[], int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // Обмін елементів, якщо поточний більший за наступний
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}





enum class SortingDirection { ByRows, ByColumns };

void swapRows(int arr[ROWS][COLUMNS], int row1, int row2) {
    for (int col = 0; col < COLUMNS; col++) {
        int temp = arr[row1][col];
        arr[row1][col] = arr[row2][col];
        arr[row2][col] = temp;
    }
}

void swapColumns(int arr[ROWS][COLUMNS], int col1, int col2) {
    for (int row = 0; row < ROWS; row++) {
        int temp = arr[row][col1];
        arr[row][col1] = arr[row][col2];
        arr[row][col2] = temp;
    }
}

int partition(int arr[ROWS][COLUMNS], int low, int high, SortingDirection direction) {
    int pivotIndex = low;
    int pivotValue;

    if (direction == SortingDirection::ByRows) {
        pivotValue = arr[high][0];
    } else {
        pivotValue = arr[low][COLUMNS - 1];
    }

    for (int i = low; i < high; i++) {
        if ((direction == SortingDirection::ByRows && arr[i][0] <= pivotValue) ||
            (direction == SortingDirection::ByColumns && arr[i][COLUMNS - 1] <= pivotValue)) {
            for (int j = 0; j < COLUMNS; j++) {
                std::swap(arr[i][j], arr[pivotIndex][j]);
            }
            pivotIndex++;
        }
    }

    for (int j = 0; j < COLUMNS; j++) {
        std::swap(arr[pivotIndex][j], arr[high][j]);
    }

    return pivotIndex;
}

void quicksort(int arr[ROWS][COLUMNS], int low, int high, SortingDirection direction) {
    if (low < high) {
        int pivotIndex = partition(arr, low, high, direction);

        quicksort(arr, low, pivotIndex - 1, direction);
        quicksort(arr, pivotIndex + 1, high, direction);
    }
}



void sort(int arr[ROWS][COLUMNS], SortingDirection direction) {
    if (direction == SortingDirection::ByRows) {
        quicksort(arr, 0, ROWS - 1, direction);
    } else {
        quicksort(arr, 0, COLUMNS - 1, direction);
    }
}

void printArray(int arr[ROWS][COLUMNS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLUMNS; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

int main() {

        const int size = 5;
        int arr[size];
        for(int i = 0; i < size; i++)
            arr[i] =  rand() % 10;
        
        std::cout << "Array:";
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout<< std::endl;
        
        
        bubbleSort(arr, size);
        
        std::cout << "Sorted array: ";
        for (int i = 0; i < size; ++i) {
            std::cout << arr[i] << " ";
        }
        std::cout<< std::endl;
        
        
        int array[ROWS][COLUMNS];
        
        srand(static_cast<unsigned int>(time(nullptr)));
        
        for (int i = 0; i < ROWS; i++) {
            for (int j = 0; j < COLUMNS; j++) {
                array[i][j] = rand() % 10;
            }
        }
        
        SortingDirection direction = SortingDirection::ByRows;
        
        std::cout << "Original Array:\n";
        printArray(array);
        
        sort(array, direction);
        
        std::cout << "\nSorted Array " << (direction == SortingDirection::ByRows ? "by Rows:\n" : "by Columns:\n");
        printArray(array);
        
        return 0;
    }



//#include <iostream>
//
//bool binarySearch(int arr[], int size, int x)
//{
//    int l = 0;
//    int r = size - 1;
//
//    while (l <= r) {
//        const int m = l + (r - l) / 2;
//
//        if (arr[m] == x)
//            return true;
//
//        if (arr[m] < x)
//            l = m + 1;
//        else
//            r = m - 1;
//    }
//
//    return false;
//}
//
//// ??? Evaluate algorithmic complexity of this program
//int main()
//{
//    const int ROWS = 20;
//    const int COLUMNS = 30;
//    int arr[ROWS][COLUMNS] = {};
//    const int toFind = 0;
//
//    //...
//    //Code to setup array and value to find
//    //in one way or another
//    //..
//
//    for (int i = 0; i < ROWS; i++)
//    {
//        if (binarySearch(arr[i], COLUMNS, toFind))
//        {
//            std::cout << "FOUND";
//            break;
//        }
//    }
//}

//time complexity O(log n)
//store complexity O(1)
