#include <stdio.h>
int getMax(int arr[],int len)
{
    int max=arr[0];
    for(int i=0;i<len;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}

void countingsort(int arr[],int len,int expo)
{
    int count[10]={0};
    //counting sort of original arr digits
    for(int i=0;i<len;i++){
        count[(arr[i]/expo)%10]++;  //0000201011  0002010101  4010000000

    }
    //update count array store indexing
    for(int i=1;i<10;i++){
      count[i]+=count[i-1];
    }
    
    int output[len];
    for(int i=len-1;i>=0;i--){
        int digit=(arr[i]/expo)%10;     //0000223345   0002233445  4455555555
        output[count[digit]-1]=arr[i];
        count[digit]--;
    }

    //original array update
    for(int i=0;i<len;i++){
        arr[i]=output[i];
    }
}
void expo(int arr[],int len){
    int max=getMax(arr,len);

    for(int i=1;max/i>0;i*=10){
        countingsort(arr,len,i);
    }
}
void display(int arr[],int len)
{
    for(int i=0;i<len;i++){
        printf("%d " ,arr[i]);
    }
}
int main()
{
    int arr[]={234,99,56,22,56};
    int len=5;
    printf("\n before sorting:");
    display(arr,len);
    expo(arr,len);
    printf("\n after sorting:");
    display(arr,len);

    return 0;
}