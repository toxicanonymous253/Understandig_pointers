#include <stdio.h>
/*Passing address of a structure variable*/
typedef struct book
{
    char name[25];
    char author[25];
    int callno;
}book1;
/*Function prototype*/
void display(book1 *b);
int main(void)
{
    book1 book1_instance= {"Let us C", "YPK", 101};
    display(&book1_instance);
    return (0);
}

void display(book1 *b)
{
    printf("%s %s %d\n", b->name, b->author, b->callno);
    return;
}
