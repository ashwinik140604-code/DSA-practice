#include <stdio.h>
#include <stdlib.h>
struct Node{
    int data;
    struct Node *next;
    struct Node *prev;
};

struct Node *head=NULL;

void insertbegin(int val){//40
    struct Node *newnode=malloc(sizeof(struct Node));
    //newnode -a200
    newnode->data=val;
    newnode->next=head;
    newnode->prev=NULL;

    if(head!=NULL){
        head->prev=newnode;
    }
    head=newnode;
}
void deletefrombegin(){
 if(head==NULL){
        printf("list is empty");
        return;
    }
    struct Node *temp=head;

    head=temp->next;
    head->prev=NULL;

    free(temp);
    printf("value removed!");
}
void insertend(int val){
    
    struct Node *newnode = malloc(sizeof(struct Node));

    newnode->data = val;
    newnode->next = NULL;

    if(head == NULL){
        newnode->prev = NULL;
        head = newnode;
        return;
    }

    struct Node *temp = head;

    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newnode;
    newnode->prev = temp;
}
void deleteEnd(){
    if(head==NULL){
        printf("list is empty");
        return;
    }
    struct Node *temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->prev->next=NULL;
    free(temp);
    printf("\n value removed");
    
     
}

void search(int val)
{
    struct Node *temp=head;
   while(temp!=NULL){
    if(temp->data==val){
        printf("\n key found  %d\n" ,val);
        return;
    }
   temp=temp->next;
 }
    printf("\n value not found\n");
} 
   

void display(){
    if(head==NULL){
        printf("LIST is empty");
        return;
    }

struct Node *temp=head;//a400

while(temp!=NULL){
    printf("%d -> " ,temp->data);
    temp=temp->next;
}
}
int main()
{
    
    insertbegin(30);
    insertbegin(40);
    
    insertend(50);
    
    search(30);
    display();

    
}