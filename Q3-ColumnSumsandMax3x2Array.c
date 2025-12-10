/*
 * Program Description:
 * This program inputs values into a 3x2 array, calculates the row and column sums,
 * and displays the highest value.
 */

 #include <stdio.h>

 #define ROWS 3
 #define COLS 2
 
 int main() {
     int arr[ROWS][COLS], max;
     int rowSum[ROWS] = {0}, colSum[COLS] = {0};
 
     // Input values
     printf("Enter 6 values (3x2):\n");
     for (int i = 0; i < ROWS; i++) {
         for (int j = 0; j < COLS; j++) {
             scanf("%d", &arr[i][j]);
             rowSum[i] += arr[i][j];
             colSum[j] += arr[i][j];
         }
     }
 
     // Find max
     max = arr[0][0];
     for (int i = 0; i < ROWS; i++) {
         for (int j = 0; j < COLS; j++) {
             if (arr[i][j] > max) {
                 max = arr[i][j];
             }
         }
     }
 
     // Display sums
     for (int i = 0; i < ROWS; i++) {
         printf("Sum of row %d = %d\n", i, rowSum[i]);
     }
     for (int j = 0; j < COLS; j++) {
         printf("Sum of column %d = %d\n", j, colSum[j]);
     }
 
     printf("Highest value in the array: %d\n", max);
 
     return 0;
 }
 