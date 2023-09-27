//program to take array input from user and sort them in ascending or descending order as per user's choice

#include <stdio.h>
#include <stdlib.h>

   int main() {
   int n, i, order;
   printf("Enter the number of elements in the array: ");
   scanf("%d", &n);

   int arr[n];
   printf("Enter the elements of the array: ");
   for (i = 0; i < n; i++) {
   scanf("%d", &arr[i]);
   }

   printf("Enter the sorting order (1 - Ascending, 2 - Descending): ");
   scanf("%d", &order);

   if (order == 1) {
      for (i = 0; i < n; i++) {
        for (int j = i+1; j < n; j++) {
   if (arr[i] > arr[j]) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    }
   }
  }
  printf("Sorted array in ascending order: ");
  }
  else if (order == 2) {
    for (i = 0; i < n; i++) {
       for (int j = i+1; j < n; j++) {
    if (arr[i] < arr[j]) {
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
    }
   }
  }
  printf("Sorted array in descending order: ");
  }
  else {
    printf("Invalid sorting order choice.\n");
  return 0;
  }

  for (i = 0; i < n; i++) {
  printf("%d ", arr[i]);
  }
  printf("\n");

 return 0;
}