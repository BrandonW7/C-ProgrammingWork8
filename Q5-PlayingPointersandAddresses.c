/*
 * Program Description:
 * This program demonstrates pointer usage, dereferencing,
 * and consequences of pointer arithmetic.
 */

 #include <stdio.h>

 int main() {
     int x;
     int *ptr;
 
     ptr = &x;
 
     // Input value
     printf("Enter an integer: ");
     scanf("%d", &x);
 
     printf("Value entered = %d\n", x);
     printf("Pointer points to = %d\n", *ptr); // dereferencing pointer
 
     // Increment pointer (not recommended on its own like this)
     ptr++;
     printf("After ptr++, pointer address = %p\n", (void*)ptr);
     printf("Value at new address = %d (this is garbage or undefined)\n", *ptr); // may cause crash or junk
 
     // Invalid pointer assignment (e.g., ptr = (int*)0xF176BA2;) is not safe or portable
     // Writing to random address like *(int*)0xFB6546 = 10; can crash the program
 
     return 0;
 }
 