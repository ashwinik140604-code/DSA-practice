#include<stdio.h>
int getMax(int arr[],int len){
    //2,3,4,5,1,2,3    len 7
    int max=arr[0];
    for(int i=0;i<len;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    return max;
}
void countingsort(int arr[],int len){
    //2,3,4,5,1,2,3  len 7
    //1.fing max element
    int max=getMax(arr,len); //9
    //2.create count arr
    int count[max+1];
    //3.initilize zero
    for(int i=0;i<max+1;i++){
        count[i]=0;
    }

    //4.store count of original digits
    for(int i=0;i<len;i++){
        count[arr[i]]++;
    }

    //5.update original arr
    int index=0;
    int i=0;
    for(i=0;i<max+1;i++){
        while(count[i]>0){
            arr[index]=i;
            count[i]--;
            index++;
        }
    }
}
void display(int arr[],int len){
    for(int i=0;i<len;i++){
        printf("%d" ,arr[i]);
    }
}
int main()
{
    int arr[]={2,9,4,5,1,7,2};
    int len=7;
    printf("\n before sorting:");
    display(arr,len);
    countingsort(arr,len);
    printf("\n after sorting:");
    display(arr,len);

    return 0;
}