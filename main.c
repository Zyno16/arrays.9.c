#include <stdio.h>
#include <stdlib.h>

int main()
{
   int t[8];
   int i,j,tmp;
   printf("enter the arrays number");
   for(i=0;i<8;i++){
    printf("t[%d]=",i+1);
    scanf("%d",&t[i]);
   }
   for(i=0;i<8;i++){
    for(j=i+1;j<8;j++){
        if(t[i]>t[j]){
            tmp=t[i];
            t[i]=t[j];
            t[j]=tmp;
        }
    }

   }
   printf("the number of arrays");
   for(i=0;i<8;i++)
    printf("%d",t[i]);
    return 0;
}
