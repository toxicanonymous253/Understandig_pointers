#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *link;
}node;
/*Function protoype*/

void append(node **q, int num);

int main(void)
{
    node *p = NULL;
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
    printf("%d", num);
    printf("\n");
    return;
}
