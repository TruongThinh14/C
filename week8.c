#include <stdio.h>
//Qa. Define a function to print all array elements
void print_array(int array[], int size) {
printf("All elements in normal order: \n");
for (int i = 0; i < size; i++) {
printf("%d ", array[i]);
}
printf("\n");
}
int main(){
//Declare and initialize the array
int arr[] = {10, 8, 24, 8, 36};
const int SIZE = sizeof(arr)/sizeof(arr[0]);
//Call function (array is pass by ADDRESS as a pointer)
print_array(arr, SIZE);
return 0;
}

//Qb.
void print_array(int array[], int size) {
printf("All elements in normal order: \n");
for (int i = 0; i < size; i++) {
printf("%d ", array[i]);
}
printf("\n");
}
int main(){
//Declare and initialize the array
int arr[] = {10, 8, 24, 8, 36};
const int SIZE = sizeof(arr)/sizeof(arr[0]);
//Call function (array is pass by ADDRESS as a pointer)
print_array(arr, SIZE);
return 0;
}