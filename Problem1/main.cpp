#include <stdio.h>

#define MAX 1000

int main(int argc, char const *argv[])
{
	unsigned short int max3 = (MAX-1)/3, max5 = (MAX-1)/5, i, j;
	unsigned short int actual3 = 0, actual5 = 0;
	printf("Max3 : %u, Max5 : %u\n", max3, max5);
	for (i = 0; i < max3; ++i)
	{
		actual3+=3;
		for (j = 0; j < max5; ++j)
		{
			actual5+=5;
			//printf("%d + %d = ", actual3, actual5); //prints the sum
			printf("%d",actual3+actual5);
			if(j+1 < max5)
				printf(", ");
			if(j%3 == 0)
				printf("\n");
		}
		actual5 = 0;
	}
	return 0;
}