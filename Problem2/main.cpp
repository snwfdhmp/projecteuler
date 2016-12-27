#include <stdio.h>

#define TAILLE 10000
#define MAX 4000000

int main(int argc, char const *argv[])
{
	int fibonacci[TAILLE];
	int i;
	unsigned int sum = 2;
	fibonacci[0] = 1;
	fibonacci[1] = 2;
	for(i=2;i<TAILLE && fibonacci[i-1]+fibonacci[i-2] < MAX;i++) {
		fibonacci[i] = fibonacci[i-1]+fibonacci[i-2];
		if(fibonacci[i] % 2 == 0)
			sum+=fibonacci[i];
		printf("%d, ", fibonacci[i]);
	}
	printf("\nSUM : %u\n", sum);
	return 0;
}