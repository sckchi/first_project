#include <stdio.h>

void main()
{
	char a[20] = {0};
	char b[20] = {0};
	int i;

	strcpy(a, "1234567890");
	printf("a = %s\n", a);

	for (i=0; i < strlen(a); i++)
	{
		b[i] = a[strlen(a)-1-i];
		//strcat(b, a[strlen(a)-i]);
		printf("a = %c\n", a[strlen(a)-1-i]);
		printf("b = %c\n", b[i]);
	}
	printf("b = %s\n", b);	


}
