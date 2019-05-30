#include<stdio.h>

void main()
{
	char str[20], n;
	int i = 0;
	scanf("%s", &str);
	while (str[i] != "\0")
	{
		n = str[i];
		if (n >= '0' && n <= '9' || n == 46 || n == 101 || n == 43 || n == 45)
			printf("");
		else {
			break;
		}
		i++;
	}
	if (str[i] == '\0')
		printf("it is a number");
	else
		printf("not a number\n");
}

