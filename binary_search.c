#include <stdio.h>

int main()
{
   int arr[]={1,2,3,4,5,6,7};
   int len = 7;
   int key;
   
   int start=0;
   int end=len - 1 ;
   int mid=(start+end)/2;
   
   printf("\n enter key:");
   scanf("%d" ,&key);
   
   
   while(start<=end){
       mid=(start+end)/2;
       if(key==arr[mid])
       {
           printf("\n key found at : %d" ,mid);
           
           return 0;
       }else if(key<arr[mid]){
           end=mid-1;
       }else if(key>arr[mid]){
           start=mid+1;
       }
       
   }
   printf("\n key not found");

    return 0;
}