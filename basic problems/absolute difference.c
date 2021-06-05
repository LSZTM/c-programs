//2. Write a C program to get the absolute difference between n and 51. If n is greater than 51 return triple the absolute difference.
#include <stdio.h>
int main() {
    // Write C code here

    int n1;


    printf("enter n1 value :");
    scanf("%d",&n1);
    if(n1>51){
        printf("%.d-%.d = %.d",n1,51,3*n1-51);
    }
    else{
        printf("%.d-%.d = %.d",n1,51,n1-51);
    }

    return 0;
}












