#include<stdio.h
>
main()
{
    int a =100;
    int *ptr;
    ptr = &a;
    printf("address of a is:%d",ptr);
    /*
    ptr++;
    printf("\n after increment address of a is:%d",ptr);
    */
    printf("valua of is:%d,*ptr");
    ++*ptr;
    printf("\n after incrment valua of a is:%d",a);

}