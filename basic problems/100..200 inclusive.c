#include <stdio.h>
//Write a C program to check a given integer and return true if it is within 10 of 100 or 200
#include <stdio.h>

int main() {
    int n;
    printf("enter the value of n :");
    scanf("%d",&n);

    //if else
    if (n== 0){
        printf("Please enter a value other than 0");
    }

    else if (100-n <= 10) {
        printf("returned true");

    }
    else if (200-n <= 10){
         printf("returned true");
    }
    else
    {
        printf("returned false");
    }















