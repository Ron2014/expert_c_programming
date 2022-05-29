#include <stdio.h>

int foo()
{
    int x = 1, y = 2, z;
    z = y+++x;

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    return 0;
}

int foo1()
{
    int x = 1, y = 2, z;
    // z = y+++++x;
    // z = y++ ++ +x;
    z = y++ + ++x;

    printf("x = %d\n", x);
    printf("y = %d\n", y);
    printf("z = %d\n", z);
    return 0;
}

int main(int argc, char *argv[])
{
    foo();
    foo1();
    return 0;
}