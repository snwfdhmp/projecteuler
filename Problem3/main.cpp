#include <stdio.h>
#include <time.h>

int main(int argc, char const *argv[])
{
	time_t t_start, t_end;
	time(&t_start);

	unsigned long long int n;
	int i, b=1;
	for(n=20; (b!=0); n+=20){
		b = n%20;
		if(n%10000==0)
			printf("\r%llu", n);
		for(i=1;i<=20;i++){
			b+=(n%i);
		}
	}
	printf("Result : \n");
	b = 0;
	for(i=1; i<=20; i++) {
		b+=n%i;
		printf("%llu mod %d = %d (b=%d)\n", n, i, n%i, b);
	}
	time(&t_end);
	printf("\nN founded : %llu (b=%d) (in %.0f seconds)\n", n, b, difftime(t_end, t_start));
	return 0;
}