/*
 * Program Description:
 * This program initializes two 3x4 arrays and multiplies each corresponding
 * element into a third 3x4 array.
 */

 #include <stdio.h>

 #define ROWS 3
 #define COLS 4
 
 int main() {
     // Initialize 3x4 arrays
     int array1[ROWS][COLS] = {
         {1, 2, 3, 4},
         {5, 6, 7, 8},
         {9, 10, 11, 12}
     };
 
     int array2[ROWS][COLS] = {
         {2, 2, 2, 2},
         {3, 3, 3, 3},
         {4, 4, 4, 4}
     };
 
     int array3[ROWS][COLS];
 
     // Multiply elements and store in array3
     for (int i = 0; i < ROWS; i++) {
         for (int j = 0; j < COLS; j++) {
             array3[i][j] = array1[i][j] * array2[i][j];
         }
     }
 
     // Display result
     printf("Resulting array3:\n");
     for (int i = 0; i < ROWS; i++) {
         for (int j = 0; j < COLS; j++) {
             printf("%4d", array3[i][j]);
         }
         printf("\n");
     }
 
     return 0;
 }
 