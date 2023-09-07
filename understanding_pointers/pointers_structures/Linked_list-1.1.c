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
int main(void)
{
    node *p = NULL;
    addatbeg(&p, 6);
    addatbeg(&p, 9);
    append(&p, 4);
    append(&p, 7);

    return (0);
}
/**
 * append - this function will add a new node with a number to the end of the list
 * @q: pointer to a pointer
 * @num: the number to be added
 * Return: void
 */
void append(node **q, int num)
{
    node *temp, *r;/*temp to travers the list and r to create a new node*/

    temp = *q;/*setting temp to point to the head of the list*/

    /*check if the list is empty*/
    if (*q == NULL)
    {
        /*Since it is empty we will create our own node using temp*/
        temp = malloc(sizeof(node));
        temp->data = num;
        temp->link = NULL;
        *q = temp;/*Now making the head to point to the node I created*/
    }
    /*When list is not wmpty*/
    else
    {
        temp = *q;/*The temp is point th first node where the head is pointing at*/

        /*Traverse the whole list till the end*/
        while(temp->link != NULL)
        {
            temp = temp->link;/*This loop will stop when temp reaches at the end of the list*/
        }
        /*When it is at the end of the list we create another node that will add the other number*/
        r = malloc(sizeof(node));
        r->data = num;
        r->link = NULL;
        temp->link = r;/*the last node tha wast the before will point to the new node created to make a chain of nodes*/
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
    node *temp; // Create a new node

    temp = malloc(sizeof(node)); // Allocate memory for the new node
    if (temp == NULL) {
        fprintf(stderr, "Memory allocation failed.\n");
        exit(1);
    }

    temp->data = num; // Set the data of the new node
    temp->link = *q; // Make the new node point to the current head
    *q = temp; // Update the head to point to the new node
}

/**
 * addafter - adds a new node after a specified number of nodes
 * @q: pointer that stores the address of a variable
 * @loc: location at which a node should be added
 * @num: the number to be added
 */
void addafter(node *q, int loc, int num)
{
    int i;
    node *temp, *r;/*temp will travers the list and r will be used to create a link at a certain position*/

    temp = q;
    /*traversing the list till we reach the desired destination*/
    for(i = 0; i < loc; i++)
    {
        temp = temp->link;

        /*Checking if list is empy or if it is less than the specified location*/
        if(temp == NULL)
        {
            printf("There are less than %d\n", loc);
            return;
        }
        r = malloc(sizeof(node));
        r->data = num;
        r->link = NULL;
        r->link = temp->link;/*set member of r to point to the node temp was originally pointing at*/
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

    /*traverse the whole list*/
    while(q != NULL)
    {
        printf("%d\n", q->data);
        q = q->link;
    }
    printf("\n");
    return;
}


