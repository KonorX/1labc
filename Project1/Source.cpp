#include <stdio.h>

int main()
{ 
	int cube[] = { 1,8,2,7,6,4,1,2,5,2,1,6,3,4,3,5,1,2,7,2,9,1,0,0,0,1,3,3,1,1,7,2,8,2,1,9,7,2,7,4,4,3,3,7,5,4,0,9,6,4,9,1,3,5,8,3,2,6,8,5,9,8,0,0,0 };
	int n;
	printf("what digit do you want to know? n<65\n");
	scanf_s("%i", &n);
	if (n >= 0 && n < 65)
	{
		printf("The number is %i ", cube[n-1], " ");
		

	}
	else
	{
		printf("error 37");
	}

	return 0;
}