#include <stdio.h>

// Function to sort an array using insertion sort
void insertion_sort(int arr[], int n) {
  int i, j, key;
  for (i = 1; i < n; i++) {
    key = arr[i];
    j = i - 1;

    /* Move elements of arr[0..i-1], that are
       greater than key, to one position ahead
       of their current position */
    while (j >= 0 && arr[j] > key) {
      arr[j + 1] = arr[j];
      j = j - 1;
    }
    arr[j + 1] = key;
  }
}

// Function to print an array
void print_array(int arr[], int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");
}

int main() {
  int arr[] = {5, 2, 4, 6, 1, 3};
  int n = sizeof(arr) / sizeof(arr[0]);

  // Print the array before sorting
  printf("Original array: ");
  print_array(arr, n);

  // Sort the array
  insertion_sort(arr, n);

  // Print the array after sorting
  printf("Sorted array: ");
  print_array(arr, n);

  return 0;
}
