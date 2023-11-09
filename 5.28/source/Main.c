#include<stdio.h>

char change(char c)
{
	if (c >= 'A'&&c <= 'Z')
	{
		return c + ('a' - 'A');
	}
	else if (c >= 'a'&&c <= 'z')
	{
		return c - ('a' - 'A');
	}
	else
	{
		return c;
	}
}
int main()
{
	char input;
	printf("請輸入一個字母：");
	scanf("%c", &input);
	char result = change(input);
	printf("%c\n", result);
	return 0;
}