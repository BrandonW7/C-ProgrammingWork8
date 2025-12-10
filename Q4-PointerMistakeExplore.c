/*
 * Program Description:
 * This program demonstrates common pointer mistakes and correct usage.
 */

 #include <stdio.h>

 int main() {
     int var1;
     int *ptr;
 
     var1 = 1;
     ptr = &var1;
 
     printf("The address of var1 is %p\n", (void*)&var1);    // %p for pointer addresses
     printf("ptr contains %p\n", (void*)ptr);                // correctly prints address stored in ptr
     printf("*ptr contains %d\n", *ptr);                     // dereferencing to access value
 
     return 0;
 }
 