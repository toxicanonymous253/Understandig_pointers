/*Program to maintain a linked list*/
#include <stdio.h>
#include <stdlib.h>
/*Structrure containing a data part and a link part*/
typedef struct node
{
    int data;
    struct node *link;
}node;
/*Function prototypes*/
void append(node **q, int num);/*Adds a node at the end of a linked list*/
void addatbeg(node **q, int num);/*Adds a node at the beginning of a linked list*/
void addafter(node *q, int loc, int num);/*Adds a new node after the specified number of nodes*/
void display(node *q);/*Display the contents of a linked list*/
int count(node *q);/*Counts the number of nodes present in the linked list*/
void delete(node **q, int num);/*Deletes a specified node from the linked list*/


int main(void)
{
    node *p = NULL;/*Empty linked list*/
    printf("Number of elements int the linked list = %d\n", count(p));
    append(&p, 1);
    append(&p, 2);
    append(&p, 3);
    append(&p, 4);
    display(p);
    addatbeg(&p, 90);
    addatbeg(&p, 80);
    display(p);
    addafter(p, 2, 5);
    addafter(p, 1, 5);
    display(p);
    delete(&p, 80);
    display(p);
    printf("Number of elements in the linked list = %d\n", count(p));
    return (0);
}
/**
 * append - this function adds a node at the end of a linked list
 * @q: pointer to a pointer
 * @num: the number to be add at the end
 * Return: void
 */
void append(node **q, int num)
{
    node *temp, *r;
    temp = *q;
    
    /*If the list is empty create the first node*/
    
    if(*q == NULL)
    {
        temp = malloc(sizeof(node));
        temp->data = num;
        temp->link = NULL;
        *q = temp;
    }
    else
    {
        temp = *q;
        /*Go to last node*/
        while (temp->link != NULL)
        {
            temp = temp->link;
            /*Add node at the end*/
            r = malloc(sizeof(node));
            r->data = num;
            r->link = NULL;
            temp->link = r;
        }
    }
    return;
}

/**
 * addatbeg - this function adds a new node at the beginnig of a linked list
 * @q:pointer that stores the address of a pointer
 * @num: the number to be added at the beginnig
 * Return: void 
 */
void addatbeg(node **q, int num)
{
    node *temp;
    /*add new node*/
    temp = malloc(sizeof(node));
    temp->data = num;
    temp->link = *q;
    *q = temp;
    return;
}

/**
 * addafter - adds a new node after a specified number of nodes
 * @q: pointer that stores the address of a variable
 * @loc: location at which a node should be added
 * @num: the number to be added
 */
void addafter(node *q, int loc, int num)
{
    node *temp, *r;
    int i;

    temp = q;
    /*skip to desired portion*/
    for (i = 0; i < loc; i++)
    {
        temp = temp->link;
        /*If end of linked list is encountered*/
        if (temp == NULL)
        {
            printf("There are less than %d elements in list\n", loc);
            return; 
        }
        /*Insert new node*/
        r = malloc(sizeof(node));
        r->data = num;
        r->link = temp->link;
        temp->link = r;
    }
    return;
}
/**
 * dispay - displays the content of the linked list
 * @q: pointer that stores an address of a variable
 * Return: void
 */
void display(node *q)
{
    printf("\n");
    /*Traverse entire list*/
    while (q != NULL)
    {
        printf("%d", q->data);
        q = q->link;
    }
    printf("\n");
    return;
}

/**
 * count - this function counts the number of lists in the linked list
 * @q: th
 */
int count(node *q)
{
    int c = 0;
    while (q != NULL)
    {
        q = q->link;
        c++;
    }
    return (c);
}

void delete(node **q, int num)
{
    node *old, *temp;
    temp = *q;

    while (temp != NULL)
    {
        if(temp->data == num)
        {
            /*if node to be deleted is the first node in the linked list*/
            if(temp == *q)
            {
                *q = temp->link;
                /*free the memory by the node*/
                free(temp);
                return;
            }
            /*deletes the intermidiate node in the linked list*/
            else
            {
                old->link = temp->link;
                free(temp);
                return;
            }
        }
        /*traverse the linked list till the last node is realched*/
        else
        {
            old = temp;/*old points to the previous node*/
            temp = temp->link;/*go to the next node*/
        }
    }
    printf("Elemnt %d not found\n", num);
}
