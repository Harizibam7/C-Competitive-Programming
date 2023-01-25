1 .Write a short c program that declares and initializes (to any value you like) a double, an int, and a char. next declare and initialize a pointer to each of the three variables.  Your program should then print the address of, and value stored in, and the memory size (in bytes) of each of the six variables. Use the "%0x%x" formatting specifier to print addresses in hexadecimal. You should see addresses that look something like this: "0xbfe55918". The initial characters "0x" tell you that hexadecimal notation is being used; the remainder of the digits give the address itself. Use "%f" to print a floating value.  Use the sizeof operator to determine the memory size allocated for each variable.

#include<stdio.h>
int main()
{
    double a=3.14;
    int b=7;
    char c='a';
    double *d;
    int *e;
    char *f;
    d=&a;
    e=&b;
    f=&c;
    printf("The address of a is %0x%x",&a);
    printf("\nThe address of pointer d is %0x%x",&d);
    printf("\nThe value of a is %lf",a);
    printf("\nThe value of pointer d %p",*d);
    printf("\nSize of the value a %d",sizeof(a));
    printf("\nSize of the pointer d %d",sizeof(d));

    printf("\nThe address of a is %0x%x",&b);
    printf("\nThe address of pointer e is %0x%x",&e);
    printf("\nThe value of a is %d",b);
    printf("\nThe value of pointer d %p",*e);
    printf("\nSize of the value a %d",sizeof(b));
    printf("\nSize of the pointer d %d",sizeof(e));

    printf("\nThe address of a is %0x%x",&c);
    printf("\nThe address of pointer f is %0x%x",&f);
    printf("\nThe value of a is %c",c);
    printf("\nThe value of pointer d %p",*f);
    printf("\nSize of the value a %d",sizeof(c));
    printf("\nSize of the pointer d %d",sizeof(f));


      return 0;


}
