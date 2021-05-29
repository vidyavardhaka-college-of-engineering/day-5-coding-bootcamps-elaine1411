//You will be given a string 'str'. Your task is to find the number of vowels in 'str' and print it
//Input: loop Output: 2
#include<stdio.h>

int main()
{
	char str[10];
  int i,n;

  printf("Enter a word:");
	scanf("%s",str); 

  while(str[i]!='\0')
  {
    if(str[i]=='A'||str[i]=='a'||str[i]=='E'||str[i]=='e'||str[i]=='I'||str[i]=='i'||str[i]=='O'||str[i]=='o'||str[i]=='U'||str[i]=='u')
    {
      n++;
      i++;
    }
  }
 printf("The number of vowels in the string are:%d",n);
  

  

	//Write your code here

	return 0;
}
