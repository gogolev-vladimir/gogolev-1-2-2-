/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define IA 16807
#define IM 2147483647
#define AM (1./IM)
#define IQ 12773
#define IR 2836
#define NTAB 32
#define NWUP 8
#define NDIV (1+(IM-1)/NTAB)
#define EPS 1.2e-7
#define RNMX (1.0-EPS)
#define MASK 123456789

static long dummy;
void Seed(long dum) {
	dummy = dum;
}

float unirand0(void) {
	long k;
	float ans;

	dummy ^= MASK;	
	k = dummy / IQ;

	if ((dummy = IA * (dummy - k * IQ) - IR * k) < 0)
		dummy += IM;

	ans = AM * dummy;

	dummy ^= MASK;	

	return(ans);
}

float unirand1(void) {
	int j;
	long k;
	static long iy = 0, iv[NTAB];
	float temp;
	
	if (dummy <= 0 || !iy) {
		if (dummy < 0) dummy = -dummy; else
			if (dummy == 0) dummy = 1;
		for (j = NTAB + NWUP - 1; j >= 0; j--) {
			k = dummy / IQ;

			if ((dummy = IA * (dummy - k * IQ) - IR * k) < 0)
				dummy += IM;

			if (j < NTAB)
				iv[j] = dummy;
		}

		iy = iv[0];
	}

	k = dummy / IQ;
	if ((dummy = IA * (dummy - k * IQ) - IR * k) < 0)
		dummy += IM;

	iy = iv[j = iy / NDIV];
	iv[j] = dummy;

	if ((temp = AM * iy) > RNMX)
		return(RNMX);
	else
		return(temp);
}

int main() {
	int i;
	Seed(6723);
	for (i = 0; i < 100; i++)
		printf("%f\n", unirand1());
}

