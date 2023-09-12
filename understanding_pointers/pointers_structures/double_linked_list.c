/*program to maintain a doubly linked list*/

#include <stdio.h>
#include <stdlib.h>

typedef struct dnode
{
    struct dnode *prev;
    int data;
    struct dnode *next;
}dnode;

/*Function prototypes*/
void dappend(dnode**s, int num);


int main(void)
{
    return (0);
}

/*adds a new node at the end of a doubly linked list*/
void dappend(dnode **s, int num)
{
    dnode *r, *q = s;/*r to create a new node at the end q to traverse a list*/

    /*if the linked list is empty*/
    if (*s == NULL)
    {
        /*create a new node*/
        
    }
}