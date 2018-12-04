/* test_max.c */

#include <stdio.h>
#define DEFINIR_MAX(TYPE) \
TYPE max##TYPE(TYPE a, TYPE b) {return a >=b ? a : b;}

DEFINIR_MAX(int)     /* maxint(int a, int b) est maintenant disponible*/
DEFINIR_MAX(float)   /* maxfloat(float a, float b) est maintenant disponible */


int main(int argc, char* argv[])
{
	printf("%d\n", maxint(10,2));
	printf("%f\n", maxfloat(1,2));
	
	return 0;
}
