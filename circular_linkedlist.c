#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node *add;
};

struct node *head = NULL;

void insertend(int val)
{
    struct node *newnode = malloc(sizeof(struct node));
    newnode->data = val;
    newnode->add = NULL;

    if(head==NULL)
    {
        head = newnode;
        newnode->add = head;
        return;
    }

    struct node *temp = head;
    while(temp->add != head)
    {
        temp = temp->add;
    }
    temp->add=newnode;
    newnode->add=head;
}
void display()
{
    if(head == NULL)
    {
        printf("list is empty\n");
        return;
    }
    struct node *temp = head;
    do
    {
        printf("%d -> ", temp->data);
        temp=temp->add;
    }while(temp != head);

    printf("(head)\n");
}
void deleteEnd()
{
    if(head==NULL)
    {
        printf("list is empty \n");
        return;
    }
    if(head->add == head)
    {
        free(head);
        head = NULL;
        return;
    }

    struct node *temp = head;
    struct node *prev = NULL;
}
void insertBegin( int val)
{
    struct node *newnode=malloc(sizeof(struct node));
    newnode->data = val;
    newnode->add = NULL;

    if(head == NULL){
        head=newnode;
        newnode->add=head;
        return;
    }
    newnode->add=head;

    struct node *temp=head;
    while(temp->add!=newnode->add){
        temp=temp->add;
    }
    temp->add=newnode;
    head=newnode;
}

void deleteBegin()
{
    if(head == NULL)
    {
        printf("list is empty\n ");
        return;
    }
   
    if(head->add == head)
    {
        free(head);
        head = NULL;
        return;
    }

    struct node *temp = head;

    while(temp->add != head)
    {
        temp = temp->add;
    }

    struct node *del = head;
    head = head->add;

    temp->add = head;

    free(del);
}



int main()
{
  insertBegin(10);
  insertBegin(20);
  insertBegin(30);
  insertBegin(40);

  deleteBegin();

  display();

  return 0;
}