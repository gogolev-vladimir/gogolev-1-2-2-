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

int main() {
	int i;
	Seed(6723);
	for (i = 0; i < 100; i++)
		printf("%f\n", unirand0());
}
