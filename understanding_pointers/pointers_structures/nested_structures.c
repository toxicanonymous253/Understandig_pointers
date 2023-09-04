#include <stdio.h>

/*Nested structs*/
int main(void)
{
    struct part
    {
        /* data */
        char type;
        int qty;
    };
    struct vehicle
    {
        char manufacturer[20];
        struct part bolt; // This means the bolt has a type and quantity
        struct part engine; // This means the engine has a type and quantity
    };
    struct vehicle v;
    v.bolt.qty = 300;
    v.engine.type = "E";
    v.engine.qty = 1;

    strcpy(v.manufacturer, "ABC Motors");

    printf("Manufacturer: %s\n", v.manufacturer);
    printf("Bolt Quantity: %d\n", v.bolt.qty);
    printf("Engine type: %c", v.engine.type);
    printf("Engine quantity: %d\n", v.engine.qty);

    return (0);
}