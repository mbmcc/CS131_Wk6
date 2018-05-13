// Write a program to find the max of integer values. 
// The program will ask the user to input the 10 values and put them in an array. 
// The output of the program shows a pointer which points to the max value.
#include <iostream>


int main(){
    const int count = 10;
    int numbers[count] = {};
    int max = 0;
    int *ptrMax;
    int location = 0;
    ptrMax = numbers;

// Get input from the user to fill the 10 values in the array
    std::cout << "Enter 10 integers \n";
        for (int &elements : numbers)
        std::cin >> elements;
    
//find max value of the array
    max = numbers[0]; // assume max is at element 0
    for (int i=1; i<count; i++){
      if (numbers[i] > max) {
        max = numbers[i];
        ptrMax = &numbers[i];
        location = i;
      }
    }
    std::cout << "The maximum value is " << *ptrMax << " at location " << location << " in the array, Memory Address " << ptrMax << std::endl;
}