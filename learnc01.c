#include <stdio.h>

int main(){
	double temp, convFactor;

	 printf("Enter Temp in C: ");
  	 scanf("%lf", &temp);

	 convFactor = (temp * 9/5) + 32;

	printf("The Temp in F is %lf.\n", convFactor);

	return 0;
}
