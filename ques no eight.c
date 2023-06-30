
#include<stdio.h>
main()
{
 int i,j,count=0;
 for(i=1;i<=4;i++)
 {
     count=0;
     for(j=1;j<=4-i;j++)
       printf(" ");

       for(j=1;j<=i;j++)
         printf("%d",++count);
         count--;
         while(count)
            printf("%d",count--);
            printf("\n");
     }

     printf("\n");

 return 0;
}





