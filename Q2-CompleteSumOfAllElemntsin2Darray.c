/*
 * Program Description:
 * This program calculates the sum of all elements in a partially defined 2D array.
 */

 #include <stdio.h>

 int main() {
     int data[4][6] = {
         {3, 2, 5, 7, 4, 2},
         {1, 4, 4, 8, 13, 1},
         {9, 1, 0, 2, 0, 0},   // missing values assumed to be 0
         {0, 2, 6, 3, -1, -8}
     };
 
     int i, j, sum = 0;
 
     // Calculate the sum
     for (i = 0; i < 4; i++) {
         for (j = 0; j < 6; j++) {
             sum += data[i][j];
         }
     }
 
     // Display the result
     printf("Sum of all elements = %d\n", sum);
 
     return 0;
 }
 