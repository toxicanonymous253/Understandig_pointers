#include <stdio.h>

int main(void)
{
    struct
    {
        /* data */
        char name[20];
        int age;
    }p1 = {"Nick Yates", 30};
    
    printf("%s %d\n", p1.name, p1.age);

    return (0);
}