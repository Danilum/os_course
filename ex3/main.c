//
//  main.c
//  ex3
//
//  Created by Daniil Shilintsev on 29/08/2018.
//  Copyright © 2018 Daniil Shilintsev. All rights reserved.
//

#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	scanf("%d", &n);
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < 2*n - 1; ++j){
            if (j < n - i - 1 || j > n + i - 1){
                printf("%c", ' ');
            }
            else{
                printf("%c", '*');
            }
        }
        printf("\n");
    }
	return 0;
}
