#include<stdio.h>


struct node{
int value;
struct node *next;
}


typedef struct node *NODE;

//For allocating memory space-

NODE getnode()
{
    NODE temp;
    temp=(NODE)malloc(sizeof(struct node));

    if(temp==NULL)
    {
        printf("Memory could not be allocated.");
    }

    return(temp);

}


//Inserting values at the beginning-

NODE insert_beg(NODE first,int item)
{
    NODE temp;
    temp=getnode();

    temp->value=item;
    temp->next=NULL;

    if(first==NULL)
        return temp;
    else
    {
        temp->next=first;
        first=temp;
        return first;
    }

}

//Inserting at the end-

NODE insert_end(NODE first,int item)
{
    NODE New,last;
    New=getnode();
    New->value=item;
    New->next=NULL;

    if(first==NULL)
        return New;
   
    if(first->next=NULL)
    {
    first->next=New;
    return first;
    }
  
    last=getnode();
    last=first;

    while(last->next!=NULL)
        last=last->next;
    
    last->next=New;



    return first;

}


//For deleting at the beginning-

NODE delete_beg(NODE first)
{
    NODE temp;
    temp=getnode();

    if(first==NULL)
    {
        printf("There is nothing to delete");
        return NULL;
    }

    temp=first;
    temp=temp->next;

    printf("Item has been deleted:%d",first->value);
    free(first);

    return(temp);
}

//For deleting at the end-


NODE delete_end(NODE first)
{
    NODE prev,curr;

    if(first==NULL)
    {
        printf("Nothing to delete");
        return NULL;
    }

    prev=getnode();
    curr=getnode();

    prev=NULL;
    curr=first;

    while(curr->next!=NULL)
    {   
        prev=curr;
        curr=curr->next;
    }

    prev->next=NULL;
    free(curr);
    return(first);
}

//For displaying-

void display(NODE first)
{
    NODE temp;
    temp=getnode();
    temp=first;

    while(temp!->NULL)
    {
        printf("\nValue stored in node:%d",temp->value);
        temp=temp->next;
    }
}



