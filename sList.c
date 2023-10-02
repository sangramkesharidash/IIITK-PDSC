#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    struct node *next;
};

struct node *head=NULL;
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
    printf(" null \n");
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
                insert(n);
        }
    }


    //insert(17); insert(42); insert(16); insert(18); insert(18);
    traverseLinkedList();
    printList();
    //traverseLinkedListRecurr();
    return 0;
}

