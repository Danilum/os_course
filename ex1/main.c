//
//  main.c
//  ex1
//
//  Created by Daniil Shilintsev on 29/08/2018.
//  Copyright © 2018 Daniil Shilintsev. All rights reserved.
//

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(){
	int x;
	float y;
	double z;
	x = INT_MAX;
	y = FLT_MAX;
	z = DBL_MAX;
	printf("%ld\n", sizeof(x));
	printf("%d\n", x);
	printf("%ld\n", sizeof(y));
	printf("%f\n" , y);
	printf("%ld\n", sizeof(z));
	printf("%f\n", z);
	return 0;
}
