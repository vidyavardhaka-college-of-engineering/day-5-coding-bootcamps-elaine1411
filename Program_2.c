//You will be given a string 'str'. Your task is to reverse 'str' and print it.
//Input: vvce & Output: ecvv

#include<stdio.h>

int main()
{
	char str[10];
  int length,i;

  printf("Enter the string to be reversed:");
	scanf("%s", str);

  length=strlen(str);
  for(i=length-1;i>=0;i--)
  {
    printf("%c",str[i]);
  }

	//Write your code here

	return 0;
}
