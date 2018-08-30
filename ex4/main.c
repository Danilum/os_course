//
//  main.c
//  ex
//
//  Created by Daniil Shilintsev on 29/08/2018.
//  Copyright © 2018 Daniil Shilintsev. All rights reserved.
//

#include <stdlib.h>
#include <stdio.h>

void swap(int* a, int* b)
{
    int c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);
    swap(&a,&b);
    printf("%d %d", a, b);
    return 0;
}
