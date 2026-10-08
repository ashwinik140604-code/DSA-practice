#include <stdio.h>
struct mobile{
    int series;
    char name[10];
    int price;
    char model[10];
};
int main()
{
    int n;
    printf("\n enter num of customers:");
    scanf("%d" ,&n);

    struct mobile s1[n];

    for(int i=0;i<n;i++)
    {
        printf("\n enter customer details: %d \n" ,(i+1));
        printf("\n enter customer name:");
        scanf("%s " ,s1[i].name);
         printf("\n enter model name:");
        scanf("%s " ,s1[i].model);
         printf("\n enter series num:");
        scanf("%d " ,&s1[i].series);
         printf("\n enter price paid:");
        scanf("%d " ,&s1[i].price);
    }

printf("\n--------------customer data---------------");
for(int i=0;i<n;i++){
    printf("\n customer name: %s " ,s1[i].name);
     printf("\n model name: %s " ,s1[i].model);
      printf("\n series num: %d " ,s1[i].series);
       printf("\n price paid: %d " ,s1[i].price);
}

return 0;
}