#include <stdio.h>
#include <time.h>

#define INC 380 //grow n by INC

int main(int argc, char const *argv[])
{
	time_t t_start, t_end;
	unsigned long long int n;
	int i, b=1;

	time(&t_start);

	for(n=INC; (b!=0); n+=INC){
		b = 0;
		for(i=1;i<=20;i++){
			b+=(n%i);	
		}
		
	}
	n-=INC;

	time(&t_end);

	for(i=1;i<=20;i++){
		b+=(n%i);
	}

	printf("N founded : %llu (b=%d) (in %.0f seconds)\n", n, b, difftime(t_end, t_start));
	return 0;
}