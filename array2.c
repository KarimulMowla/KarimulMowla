#include<stdio.h>
int main()
{
   int a[5],sum=0,i;
   a[0] = 1;
   a[1] = 2;
   a[2] = 3;
   a[3] = 4;
   a[4] = 5;

   for(i=0; i<5; i++)
   {
       sum = sum + a[i];
   }
   printf("the sum is : %d\n",sum);
   printf("the average is : %.3lf",(float)sum/5);

}
