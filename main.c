#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,y,z;


    printf("please enter  int x :");
    scanf("%d",&x);
    printf("please enter  int y :");
    scanf("%d",&y);
     printf("please enter  int z :");
    scanf("%d",&z);

     if(x<=0||y<=0||z<=0){
        printf("please enter +ve integers ");
     }
     else if(x == 13 || y == 13 || z == 13){
        printf("%.d + %.d + %.d = %.d",x,y,z,z);
     }

     else{
        printf("%.d + %.d + %.d = %.d",x,y,z,x+y+z);
     }








 return 0;
}
