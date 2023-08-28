#include <stdio.h>

int main(void)
{
    /*Array of structures*/

    struct account
    {
        int no;
        float bal;
    };
    struct account a[10];
    int i, acc;
    float balance;

    for (i = 0; i < 10; i++)
    {
        printf("Enter acc no and balance\n");
        scanf("%d %f", &acc, &balance);
        a[i].no = acc;
        a[i].bal = balance;
        printf("%d %f", a[i].no, a[i].bal);
    }
    
}