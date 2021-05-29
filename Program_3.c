//You will be given a string 'str'. Your task is to check whether 'str' is a palindrome or not.

//input:
//Radar

//output:
//Palindrome
#include<stdio.h>
#include<string.h>

int main()
{
	char str[10];
  int i,length,flag=0;

  printf("Enter a string:");
	scanf("%s", str);

  length=strlen(str);

  for(i=0;i<length;i++)
  {
    if(str[i]!=str[length-i-1])
    {
      flag=1;
    }
    break;
  }
	//Write your code here
	
	return 0;
}
