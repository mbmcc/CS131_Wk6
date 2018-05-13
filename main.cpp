// Write a program to find the max of integral values. 
// The program will ask the user to input the 10 values and put them in an array. 
// The output of the program shows a pointer which points to the max value.

int main(){
    int count = 10;
    int numbers[count];
    int &max = numbers[0];


//find max value of the array
    for (int i=1; i<count; i++;){
      if (numbers[i] > max){
        max = numbers[i];
        }


    }
}
