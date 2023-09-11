#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
}node;

/*Function protoype*/
void append(node **q, int num);
void addatbeg(node **q, int num);
void display(node *q);
int count(node *q);
void delete(node **q, int num);
void addafter(node *q, int loc, int num);
int main(void)
{
    node *p =   NULL;



    return (0);
}
/*This function will add a node at the end of a list*/
void append(node **q, int num)
{
    node *temp, *r;/*temp will be used to traverse the list while r will be used to create a new node*/

    temp = *q;/*Setting temp to point at the first node where q is pointin at*/

    /*If there is no list we will create our own node*/
    if (*q == NULL)
    {
        temp = malloc(sizeof(node));
        temp->data = num;
        temp->link = NULL;
        *q = temp;/*Making the head pointer to point at the first part of the node*/
    }
    /*If list is not empty*/
    else{
        temp = *q;/*Temp points at the first node*/
        while(temp->link != NULL)
        {
            temp = temp->link;
        }
        r = malloc(sizeof(node));
        r->data = num;
        r->link = NULL;
        temp->link = r;
    }
    return;
}

/*This function will add a node at the beginning of a list*/
void addatebeg(node **q, int num)
{
    node *temp;

    temp = malloc(sizeof(node));

    if (temp == NULL)
    {
        fprintf(stderr, "Memory not allocated\n");
        exti(1);
    }
    temp->data = num;
    temp->link = NULL;
    *q = temp;/*The new head is created and the head pointer points to the new node created*/

    return;
}

/*This will display the numbers of a list*/
void display(node *q)
{
    if(q != NULL)
    {
        printf("%d ", q->data);
        q = q->link;
    }
    printf("\n");
    return;
}

/*This function will count the number of nodes*/
int count(node *q)
{
    int count = 0;
    if(q != NULL)
    {
        q = q->link;
        count++;
    }
    return (count);
}

/*Add a node after a specified node*/
void addafter(node *q, int loc, int num)
{
    int i;
    node *temp, *r;

    temp = q;

    for(i = 0; i < loc; i++)
    {
        temp = temp->link;

        if(temp == NULL)
        {
            printf("The number of nodes is less then %d\n", loc);
            return;
        }
    }
    /*creating a new node*/
    r = malloc(sizeof(node));
    r->data = num;
    r->link = NULL;
    temp->link = r;
    return;
}

/*This will delete a node*/
void delete(node **q, int num)
{
    node *temp, *old;/*temp to traverse the list and old to point to the previous node*/

    temp = *q;
    while(temp != NULL)
    {
        /*Looking for the number to be deleted*/
        if(temp->data == num)
        {
            if(temp = *q)
            {
                *q = temp->link;
                free(temp);
                return;
            }
            /*If node to be deleted is the intermidiate node*/
            else
            {
                old->link = temp->link;
                free(temp);
                return;
            }
        }
        /*Traversing the list*/
        else
        {
            old = temp;
            temp = temp->link;
        }
    }
    return;
}
