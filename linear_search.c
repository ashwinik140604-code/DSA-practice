#include <stdio.h>

int main()
{
    int arr[]={1,2,3,4,5,6};
    int len=6;
    int key;
    int i;
    
    printf("\n enter a key:");
    scanf("%d" ,&key);

    for(i=0;i<len;i++)
    {
        if(arr[i]==key){
            printf("\n key found at location: %d" ,i);
            return 0;
        }
    }
    printf("\n key not found");

    return 0;
}