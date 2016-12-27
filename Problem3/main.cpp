#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	time_t t_start, t_end;
	time(&t_start);

	unsigned int n;
	int i, b=1;
	for(n=0; (b!=0); n+=20){
		b = 0;
		if(n%10000==0)
			printf("\r%d", n);
		for(i=1;i<=20;i++){
			b+=(n%i);
		}
	}
	time(&t_end);
	printf("\nN founded : %d (in %.0f seconds)\n", n, difftime(t_end, t_start));
	return 0;
}