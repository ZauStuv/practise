#include <stdio.h>



int doubles(int x);

int main(int argc, char *argv[])
{
	int a = 5;
	a = doubles(a);
	
	printf("%d\n", a);

	return 0;
}
