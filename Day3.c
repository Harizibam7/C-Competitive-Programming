1. Given two strings [character pointer] s and t, return true if t is an anagram of s, and false otherwise. An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once. Use character pointer.
ANWSER 1:
#include<stdio.h>
#include<string.h>
int main()
{  char a[30],b[30];
  int found=0,isfound=0;
  printf("Enter the string 1");
  scanf("%s",a);
  printf("Enter the string 2");
  scanf("%s",b);
  int len1=strlen(a);
  int len2=strlen(b);
  if(len1==len2){
    for(int i=0;i<len2;i++)
    {
      found=0;
      for(int j=0;j<len1;j++)
      {
        if(a[i]==b[j])
        {
          found=1;
          break;
        }
      }
      if(found==0){
        isfound=1;
      }
    }
    if(isfound==1){
      printf("Not an anagram");
    }
    else{
      printf("anagram");
    }
  }
  else{
    printf("Not a anagram");
  }
}
ANSWER 2:
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
bool anagram(char* s,char* t);
int main()
{
  char s[100] , t[100];
  printf("Enter the string 1\n");
  scanf("%s",s);
  printf("Enter the string 2\n");
  scanf("%s",t);
  if(anagram(s,t)){printf("Anagram");}
  else{printf("Not anagram");}
  return 0;
}
bool anagram(char* s,char* t)
{
  int count=0;
  if(strlen(s)==strlen(t)){
    for(int i=0;i<strlen(s);i++){
      for(int j=0;j<strlen(t);j++){
        if(s[i]==t[j]){         //OWL    
          count++;              //low
        }
      }
    }
    if(count==strlen(s)){return true;}
    else{return false;}
  }
  else{return false;}
}

2)You are given an integer array nums. In one move, you can pick an index i where 0 <= i < nums. length and increment nums[i] by 1. Return the minimum number of moves to make every value in nums unique using pointers.

#include<stdio.h>
int main()
{
  int arr[9]={1,2,3,4,4,5,5,6,7};
  int move=0;
  int len=sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<len;i++)
  {
    for(int j=i+1;j<len;j++){
      if(arr[i]==arr[j])
      {
        move=j;
        move=len-move;
        printf("\nNumber of Move : %d",move);
      }
    }

  }
  
  
  return 0;
}

3)Given a palindromic string of lowercase English letters palindrome, replace exactly one character with any lowercase English letter so that the resulting string is not a palindrome and that it is the lexicographically smallest one possible.

#include<stdio.h>
#include<string.h>
int main()
{
  char a[50]={"Malayalam"};
  int n=strlen(a);
  char b;
  printf("Enter the target: ");
  scanf("%c",&b);
  for(int i=0;i<n;i++)
  {
   if(b==a[i])
   {
     int c=a[i];
     int b=c-1;
     a[i]=b;
     break;
   }
  }
  for(int i=0;i<n;i++)
  {
    printf("%c",a[i]);
  }
  return 0;
}

4)There are no children standing in a line. Each child is assigned a rating value given in the integer array ratings using pointers. You are giving candies to these children subjected to the following requirements: Each child must have at least one candy. Children with a higher rating get more candies than their neighbors. Return the minimum number of candies you need to have to distribute the candies to the children

int main()
{
  int ratting[]={1,3,3};
  int students=sizeof(ratting)/sizeof(ratting[0]);
  int no_of_candies=0;
  for(int i=0;i<students;i++)
  {
    if(ratting[i]==1)
    {
      no_of_candies=no_of_candies+1;
    }
    else{
      int n=ratting[i]/1;
      no_of_candies=no_of_candies+n;
    }
  }
  printf("Number of Candies : %d",no_of_candies);
  return 0;


}

5. Sort the set of n numbers using pointers

#include<stdio.h>
void swap(int *a,int *b)
{
  int t;
  t=*a;
  *a=*b;
  *b=t;
}
void sort(int arr[],int size)
{
  int t;
  for(int i=0;i<size;i++)
  {
    for(int j=i+1;j<size;j++)
    {
      if(*(arr+i)>*(arr+j))
      {
        swap((arr+i),(arr+j));
      }
    }
  }
  for(int i=0;i<size;i++)
  {
    printf("%d ",*(arr+i));
  }
}
int main()
{
  int arr[]={6,8,5,9,2};
  int size=sizeof(arr)/sizeof(arr[0]);
  sort(arr,size);
  
  return 0;
}
