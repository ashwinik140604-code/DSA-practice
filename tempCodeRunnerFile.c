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
    insertbegin(10);
    insertbegin(20);
    insertbegin(30);
    insertbegin(40);
    display();

    
}