#include<stdio.h>
#include<time.h>

#define LOWER 0
#define UPPER 100
#define STEP 1
float fahrToCelsius(int fahr);

int main() {
	 clock_t t; 
    t = clock(); 
   
	int fahr;
	for(fahr = LOWER; fahr <= UPPER;  fahr = fahr + STEP) {
		printf("%3d %6.1f\n", fahr, fahrToCelsius(fahr));
	}
	
    t = clock() - t; 
    double time_taken = ((double)t)/CLOCKS_PER_SEC; // in seconds 
    
    printf ( "Finished in : %f seconds", time_taken);
    return 0;
}

float fahrToCelsius(int fahr) {
	return (5.0/9.0)*(fahr-32);
}