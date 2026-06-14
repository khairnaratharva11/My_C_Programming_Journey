#include<stdio.h>
 int main()
 {
    int i = 10; // 32bit:31bit, 1 bit
    int j = -10; // 32bit:31bit, 1 bit
    int k = +10; // 32bit:31bit, 1 bit

    signed int a = 10; // 32bit:31bit, 1 bit
    signed int b = -10; // 32bit:31bit, 1 bit
    signed int c = +10; // 32bit:31bit, 1 bit

   unsigned int x = 10; // 
   unsigned int y = +10; // 
   unsigned int z = -10; // 

   printf("%d\n", x);
   printf("%d\n", y);
   printf("%d\n", z);


   return 0;
 }