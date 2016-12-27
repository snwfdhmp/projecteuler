#include <stdio.h>
#include <time.h>
#include <math.h>

#define INC 2 //grow n by INC
#define PRIMEINDEX 10001

int main(int argc, char const *argv[])
{
	time_t t_start, t_end;
	unsigned long long int x = 3, i;
	unsigned int b=1, n=2;

	time(&t_start);

	for(n=2; n<=PRIMEINDEX; n++){
		b=1;
		while(b!=0){
			//printf("\rX = %llu   ", x);
			b = 0;
			for(i=2;i<=(int)sqrt(x) && b==0;i++) { //was before until x/2
				if(x%i==0)
					b=1;
			}
			x+=INC;
		}
		//printf("\rN = %u, x = %llu\n", n, x-2);

	}
	x-=INC;
	printf("\nx = %llu\n", x);

	time(&t_end);

	printf("\nX founded : %llu (b=%d) (in %.0f seconds)\n", x, b, difftime(t_end, t_start));
	return 0;
}