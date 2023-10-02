#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head=NULL;
struct node *tail=NULL;

void traverseLinkedList()
{
    struct node *temp=head;
    if(head==NULL)
    {
        printf("Linked List is empty. ");
        return;
    }

    while(temp)
    {
        //printf("%d\n",temp->data);
        printf("%d ",temp->data);
        temp=temp->next;
    }

}
void printList()
{
    struct node *ptr= head;
    printf("head ->");
    while(ptr != NULL)
    {

        printf(" %d -> ", ptr->data);
        ptr = ptr -> next;
    }
    printf(" null \n");
}

void traverseLinkedListRecurr(struct node *head)
{
    if(head==NULL)
        return;

    printf("%d\n",head->data);
    traverseLinkedListRecurr(head->next);

}

//insert at beginning
void insert(int data)
{
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=data;
    new_node->next=head;
    head=new_node;
}

//insert at end O(N)
void insertatend(int data)
{
    struct node *temp=head;
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=data;
    new_node->next=NULL;

    if(head==NULL)
    {
        head=new_node;
        return;
    }

    while(temp!=NULL&&temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=new_node;
}
//insert at tail by me O(1)
void insertattail(int data)
{   printf("Inside-insert at tail \n");

    struct node *temp=head;
    struct node *new_node=(struct node*)malloc(sizeof(struct node));
    new_node->data=data;
    new_node->next=NULL;

    //new_node->next=head;
    //new_node->prev=NULL;

    sleep(1);
    printList(); printf("\n");

    if(head==NULL)
        {   head=new_node;
            tail=new_node;
            return;
        }
    else {
            tail -> next = new_node;
            tail = new_node;
    }

    //head->prev=new_node;

    //head=new_node;
}



void insertaftervalue(int checkValue, int insertItem)
{

struct node *temp=head;
struct node *ptr= head;
struct node *new_node=(struct node*)malloc(sizeof(struct node));

 new_node->data=insertItem;
 new_node->next=NULL;
 printf("Inside-insertaftervalue \n");
 printList();


    while(ptr != NULL)
    {  printf("%d |", ptr-> data);
       if(ptr-> data == checkValue)
       {    printf("%d <-", new_node-> data);
            temp=ptr->next;
            new_node->next=temp;
            ptr->next=new_node;

            sleep(10);
            ptr = ptr -> next;
       }

       else{
            ptr = ptr -> next;
       }
    }
   printList();
}

int main()
{

    int n=0;
    while(1)
    {
        scanf("%d",&n);

        if(n==-999)
        {
            break;
        }

        else{
                //insert(n);
                //insertatend(n);
                insertattail(n);
        }
    }
    //int checkValue, insertItem;
    //scanf("%d %d",&checkValue,&insertItem);
    //insertaftervalue(checkValue,insertItem);
    //insert(17); insert(42); insert(16); insert(18); insert(18);
    traverseLinkedList();
    printf("\n");
    printList();
    //traverseLinkedListRecurr();
    return 0;
}

//Tested https://ide.geeksforgeeks.org/M9bQ4qI46i
