#include <stdio.h>
#define max 20

int main()
{
   int arr[max];
   int i,j;
   int len;
   
   printf("enetr the len of array:");
   scanf("%d" ,&len);
   printf("\n enter array elements to sort:");
   for(i=0;i<len;i++)
   {
       scanf("%d" ,&arr[i]);
   }
   
   for(i=0;i<len;i++)
   {
       int minindex=i;
       for(j=i+1;j<len;j++)
       {
           if(arr[j]<arr[minindex]){
               minindex=j;
           }
       }
       
       int temp=arr[i];
       arr[i]=arr[minindex];
       arr[minindex]=temp;
   }
   printf("\n sorted array :");
   for(i=0;i<len;i++)
   {
      printf("%d" ,arr[i]);
   }
   
    return 0;
}