#include<stdio.h>
#include<limits.h>
//#include<float.h>

void main()
{
    // char
    printf("char %d bits\n", CHAR_BIT);

    // signed char
    printf("signed char %d min bits\n", SCHAR_MIN);
    printf("signed %d max bits\n", SCHAR_MAX);
    

    // short
    printf("short %d min bits\n", SHRT_MIN);
    printf("short %d max bits\n", SHRT_MAX);


    // int
    printf("int %d min bits\n", INT_MIN);
    printf("int %d max bits\n", INT_MAX);

    // long 
    printf("long %d min bits\n", LONG_MIN);
    printf("long %d max bits\n", LONG_MAX);


    // ulong
    printf("ulong %d max bits\n", LONG_MAX);
}
