int my_strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return i;
}

/*
#include <stdio.h>

int main(void)
{
	int n;
	char str[] = "ABCDE";

	n = my_strlen(str);
	printf("%d\n", n);

	return 0;
}
*/

