#include<stdio.h>
 int main()
 {
    int i = 10;
    short int j = 20;
    long int k = 30046550;

    printf("Address of i is : %lu\n",sizeof(i));
    printf("Address of j is : %lu\n",sizeof(j));
    printf("Address of k is : %lu\n",sizeof(k));
    return 0;
 }