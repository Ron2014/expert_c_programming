#include <stdio.h>
#include <stdlib.h>

typedef struct _tagTestStruct
{
    int iMember;
} TestStruct;

#define N 10

int main(int argc, char *argv[])
{
    TestStruct t = { 4 };
    TestStruct *q = &t;

    size_t p = N * sizeof * q;

    printf("p = %zd\n", p);                     // 40
    printf("test = %zd\n", N * sizeof q);       // 80

    size_t apple = sizeof(int) * p;

    printf("apple = %zd\n", apple);             // 160
    printf("test = %zd\n", sizeof ((int *)p));  // 8
    printf("test = %zd\n", sizeof *(int *)q);   // 4

    return 0;
}