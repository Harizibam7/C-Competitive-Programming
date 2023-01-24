
1. Given two integers dividend and divisor, divide two integers without using multiplication, division, and mod operator.
  
#include<stdio.h>
#include<limits.h>
#include<stdlib.h>
int divide(int h,int j)
{
  if(h==0)
  {
     printf("Please clear the error!Divisible by 0");
     exit(-1);
  }
  int sign=1;
  if(h*j<0)
  {
    sign=-1;
  }
  h = abs(h);
  j = abs(j);
  int quot=0;
  while (h>=j)
  {
    h = h-j;
    quot++;
  }
  printf("The Remainder Value is : %d\n",h);
  return sign*quot;
}
int main(void)
{
  int dividend,divisor;
  printf("Enter the dividend value : ");
  scanf("%d",&dividend);
  printf("Enter the divisor value : ");
  scanf("%d",&divisor);
  printf("The quotient is %d\n",divide(dividend,divisor));
  return 0;

}
2. Palindrome number - Given an integer x, return true if x is a
palindrome, and false otherwise.

#include<stdio.h>
int main(){
    int a,b=0;
    int temp=0;
    printf("Enter the number");
    scanf("%d",&a);
    int r;
    temp=a;
    while(a>0){
      r=a%10;
      b=(b*10)+r;
      a=a/10;
    }
    if(temp==b)
    {
        printf("Palindrome number");
    
    }
    else{
        printf("Not a palindrome number");
    }
    return 0;
}

3. Convert Roman letters to integers for I to X (1 to 10).

#include<stdio.h>
#include<string.h>
int value(char r)
{
    if (r == 'I')
        return 1;
    if (r == 'V')
        return 5;
    if (r == 'X')
        return 10;
    return -1;
}
int DtoI(char a[])
{
  int res=0;
  for(int i=0;i<strlen(a);i++)
  {
    int v1=value(a[i]);
    if(i+1<strlen(a))
    {
      int v2=value(a[i+1]);
      if(v1>v2)
      {
        res=res+v1;
      }
      else{
        res=res+v2-v1;
        i++;
      }
    }
    else{
      res=res+v1;
    }
  }
  return res;

}
int main()
{
  char a[10];
  printf("Enter the Roman Letters 1 to 10");
  scanf("%s",a);
  printf("The Integer for Given Roman Letters is %d",DtoI(a));
  return 0;
}

4. Display auto-biography numbers in the given range a to b. (a and b included)

5. Valid paranthesis - Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.
An input string is valid if:
Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.


#include<stdio.h>
int main()
{
    char para[50];
    int x=0,i=0,y=0,j=0,z=0,k=0;
    printf("\nEnter an expression");
    scanf("%s",para);
    while(para[i]!='\0')
    {
      if(para[i]=='(')
      {
        x++;
      }
      else if(para[i]==')'){
        x--;
        if(x<0){
          break;
        }
        i++;
      }
      
      if(x==0)
      {
        printf(" () Expression is balanced");
      }
      else
      {
        printf("() Expression is unbalanced");
      }
    }
     while(para[j]!='\0')
    {
      if(para[j]=='{')
      {
        y++;
      }
      else if(para[j]=='}'){
        y--;
        if(y<0){
          break;
        }
        j++;
      }
      
      if(y==0)
      {
        printf("{} Expression is balanced");
      }
      else
      {
        printf("{} Expression is unbalanced");
      }
    }
       while(para[k]!='\0')
    {
      if(para[k]=='[')
      {
        z++;
      }
      else if(para[j]==']'){
        z--;
        if(z<0){
          break;
        }
        k++;
      }
      
      if(z==0)
      {
        printf("[] Expression is balanced");
      }
      else
      {
        printf("[] Expression is unbalanced");
      }
    }
  
}
