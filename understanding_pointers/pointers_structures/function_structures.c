#include <stdio.h>

int main(void)
{
    /*passing structure variable to a function*/
    /*This program is not fucntional*/

    struct player
    {
        char name[20];
        int age;
    };
    struct player p1 = {"Nick yates", 30};
    display(p1.name, p1.age); /*Passing individual elements*/
    show(p1); /*Passing structre variable*/
    d(p1.name, &p1.age); /*Passing addresses of structure elements*/
    print(&p1); /*Passing addresses of structure variables*/
    

    return (0);
}