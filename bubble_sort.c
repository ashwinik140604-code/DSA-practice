#include<stdio.h>
#define max 20
int main()
{
    int i,j;
    int arr[max];
    int len;
    
    printf("\n enter len of array:");
    scanf("%d" ,&len);
    printf("\n enter array elements to sort:");
    for(i=0;i<len;i++)
    {
        scanf("%d" ,&arr[i]);
    }
    for(i=0;i<len;i++)
    {
        for(j=0;j<len-i - 1;j++)
        {
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    printf("\n sorted array :");
    for(i=0;i<len;i++)
    {
        printf("%d" ,arr[i]);
    }
    return 0;
}