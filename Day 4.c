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

2. Implement a program that differentiate between ordinary arguments which are passed by value, and pointer arguments, which are passed by reference
#include<stdio.h>
void swp(int *a,int *b)
{
  *a=20;
  *b=10;
}
void swap(int a,int b)
{
  a=20;
  b=10;
}
int main()
{
  int a=10;
  int b=20;
  swap(a,b);
  printf(" %d %d ",a,b);
  swp(&a,&b);
  printf("\n %d %d",a,b);
  return 0;
}

3. Read a line of text, store it in a one-dimensional character array, and then analyze the individual array elements. An appropriate counter will be incremented for each character. The value of each counter (number of vowels, number of consonants, etc.) can then be written out after all of the characters have been analyzed.

#include<stdio.h>

int main()
{
  char a[]="Rule 1 :Hello coder Harizibam (It's time Coding think like coder)";
  int alphabets_count=0;
  int number_count=0;
  int symbols_count=0;
  int vowels=0;
  int space_count=0;
  int size=sizeof(a)/sizeof(a[0]);
  for(int i=0;i<size;i++)
  {
    if(((int)a[i]>=65)&&((int)a[i]<=90) || (((int)a[i]>=97)&&((int)a[i]<=122)))
    {
      if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u' || a[i]=='A' || a[i]=='E' || a[i]=='I' || a[i]=='O' || a[i]=='U')
      {
        vowels++;
      }
      alphabets_count++;
    }
    else if(((int)a[i]>=48)&&((int)a[i]<=57) )
    {
      number_count++;
    }
    else if((int)a[i]==32)
    {
      space_count++;
    }
    else
    {
      symbols_count++;
    }
  }
  printf("\n Number of Alphabets : %d",alphabets_count);
  printf("\n Number of Numbers : %d",number_count);
  printf("\n Number of Symbols : %d",symbols_count);
  printf("\n Number of Vowels : %d",vowels);
  printf("\n Number of space : %d",space_count);
  printf("\n NUmber of consontant : %d",alphabets_count-vowels);
  return 0;
}

