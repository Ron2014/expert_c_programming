#include <stdio.h>

int period_than_star()
{

    do
    {
        typedef struct _tagTest
        {
            int *f;
        } Test;
        int i = 4;
        Test p = {&i};
        printf("%d\n", *p.f);
    } while (0);

    do
    {
        typedef struct _tagTest
        {
            int f;
        } Test;
        Test t = {4};
        Test *p = &t;
        printf("%d\n", (*p).f);
    } while (0);

    return 0;
}

int array_than_star()
{
    int i = 4;
    do
    {
        // pointer in array
        int *ap[10] = { &i, &i, &i, NULL };
    } while (0);
    
    do
    {
        // pointer for array
        int arr[10] = { i, i, i, };
        int (*ap)[10] = &arr;
    } while (0);

    return 0;
}

int function_than_star()
{
    do
    {
        int *fp();
        // int *fp()
        // {
        //     return NULL;
        // }
    } while (0);

    do
    {
        int (*fp)();
        fp = period_than_star;
        printf("%p\n", fp);
        fp();
    } while (0);

    return 0;
}

int compare_than_bit()
{
    int val = 0x0f;
    size_t mask = 0xf0;

    printf("exp = %d\n", val & mask != 0);          // exp = 1
    printf("exp = %d\n", (val & mask) != 0);        // exp = 0

    return 0;
}

int compare_than_assign()
{
    char c;
    char get_char = 'x';
    printf("exp = %d, c = %d/%c\n", c = get_char != 'y', c, c);     // exp = 1, c = 1
    printf("exp = %d, c = %d/%c\n", (c = get_char) != 'y', c, c);   // exp = 1, c = 'z'

    return 0;
}

int arithmetic_than_shift()
{
    size_t msb = 1;
    size_t lsb = 1;

    printf("0x%lx\n", msb << 4 + lsb);          // 0x20
    printf("0x%lx\n", (msb << 4) + lsb);        // 0x11

    return 0;
}

int all_than_comma()
{
    int i;
    do
    {
        i = 1, 2;
        printf("exp = %d\n", i);        // exp = 1
    } while (0);

    do
    {
        i = (1, 2);
        printf("exp = %d\n", i);        // exp = 2
    } while (0);
    
    return 0;
}

int main(int argc, char *argv[])
{
    period_than_star();
    array_than_star();
    function_than_star();
    compare_than_bit();
    compare_than_assign();
    arithmetic_than_shift();
    all_than_comma();
    return 0;
}