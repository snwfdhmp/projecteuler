#include <stdio.h>
#include <time.h>

#define INC 20

int main(int argc, char const *argv[])
{
	time_t t_start, t_end;
	time(&t_start);

	unsigned long long int n;
	int i, b=1;
	for(n=INC; (b!=0); n+=INC){
		b = 0;
		for(i=1;i<=20;i++){
			b+=(n%i);	
		}
		
	}
	n-=INC;
	for(i=1;i<=20;i++){
		b+=(n%i);
	}
	time(&t_end);
	printf("N founded : %llu (b=%d) (in %.0f seconds)\n", n, b, difftime(t_end, t_start));
	return 0;
}