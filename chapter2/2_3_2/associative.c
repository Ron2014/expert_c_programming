#include <stdio.h>

int foo0()
{
    printf("foo0\n");
    return 0;
}

int foo1()
{
    printf("foo1\n");
    return 1;
}

int foo2()
{
    printf("foo2\n");
    return 2;
}

int arithmetic()
{
    // 算数运算符：左结合性

    int x;

    printf("add:\n");
    x = foo0() + foo1() + foo2();
    printf("x = %d\n", x);

    printf("sub:\n");
    x = foo0() - foo1() - foo2();
    printf("x = %d\n", x);

    printf("mul:\n");
    x = foo0() * foo1() * foo2();
    printf("x = %d\n", x);

    printf("sub:\n");
    x = foo0() / foo1() / foo2();
    printf("x = %d\n", x);

    printf("misc:\n");
    x = foo0() + foo1() * foo2();
    printf("x = %d\n", x);

    return 0;
}

int boolean()
{
    // 布尔运算符：左结合性
    printf("and:\n");
    if (foo0() && foo1() && foo2())
    {
    }

    printf("or:\n");
    if (foo0() || foo1() || foo2())
    {
    }

    return 0;
}

int assign()
{
    // 赋值运算符：右结合性
    int a, b = 1, c = 2;
    printf("a=%d, b=%d, c=%d\n", a, b, c);

    a = b = c;
    printf("a=%d, b=%d, c=%d\n", a, b, c);

    return 0;
}

int bit()
{
    // 位运算符：左结合性
    size_t x;

    printf("0 & 1 | 2:\n");
    x = foo0() & foo1() | foo2();
    printf("x = %zd\n", x);             // x = 2

    printf("0 | 1 & 2:\n");
    x = foo0() | foo1() & foo2();
    printf("x = %zd\n", x);             // x = 0

    printf("!0 | 1 & 2:\n");
    x = !foo0() | foo1() & foo2();
    printf("x = %zd\n", x);             // x = 1

    printf("0 & 1 & 2:\n");
    x = foo0() & foo1() & foo2();
    printf("x = %zd\n", x);             // x = 0

    printf("0 | 1 | 2:\n");
    x = foo0() | foo1() | foo2();
    printf("x = %zd\n", x);             // x = 3

    return 0;
}

int main(int argc, char *argv[])
{
    assign();
    boolean();
    arithmetic();
    bit();
    return 0;
}