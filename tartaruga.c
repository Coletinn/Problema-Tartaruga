#include <stdio.h>
#include <stdlib.h>
#include <omp.h>
  
void TaylorSeries(unsigned long long int T, double* global_S_p);
 
int main(int argc, char* argv[]) {
	double global_S = 0.0; 						/* Store result in global_S */
	unsigned long long int    n; 				/* Value of T */
	unsigned long long int    thread_count;		/*  Threads value */
 
	thread_count = strtol(argv[1], NULL, 10);
	printf("Enter T\n");
	scanf("%lld", &n);

    # pragma omp parallel num_threads(thread_count)
    TaylorSeries(n, &global_S);
 
	printf("The sum is %f\n", global_S);
 
	return 0;
} /* Main */
 
void TaylorSeries(unsigned long long int T, double* global_S_p) {
    double S = 0.0;
    unsigned long long int i;

    # pragma omp for
	for(i = 1; i <= T; i++) {
        S += (double)1/i;
    }

    # pragma omp critical
	*global_S_p += S;
    
} /* Taylor Series */