#include<stdio.h>
#include<string.h>

void main()
{
	char s[20];
	int i, n = 0, num;
	printf("Enter number\n");
	scanf("%d", &num);
	// convert integer to string
	while(num != 0)
	{
		s[n] = num % 10;
		num = num/10;
		n++;	
	}
	s[n] = '\0';
	//convert to closest palindrome
	for(i=0; i<= n/2; i++)
	{
		if(s[i] != s[n-1-i])
		s[i] = s[n-1-i];	
	}
	printf("Closest palindrome is: ");
	for(i=0; i<n; i++)
	printf("%d", s[i]);
}