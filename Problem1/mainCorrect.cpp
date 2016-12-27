#include <stdio.h>
#include <math.h>

#define MAX 1000

int main(int argc, char const *argv[])
{
	unsigned short int max3 = (MAX-1)/3, max5 = (MAX-1)/5, i, j;
	unsigned short int actual3 = 0, actual5 = 0;
	printf("Max3 : %u, Max5 : %u\n", max3, max5);
	unsigned long int sum = 0;
	for (i = 0; i < max3; ++i)
	{
		actual3+=3;
		sum+=actual3;
	}
	for(i=0; i < max5; ++i)
	{
		actual5+=5;
		if(actual5%3 != 0)
			sum+=actual5;
	}


	printf("SUM : %lu\n", sum);
	return 0;
}