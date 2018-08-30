//
//  main.c
//  ex
//
//  Created by Daniil Shilintsev on 29/08/2018.
//  Copyright © 2018 Daniil Shilintsev. All rights reserved.
//

#include <stdio.h>
#include <string.h>

int main(){
    char str[50], char reverse[50];
    scanf("%s", str);
    int length = strlen(str);
    int j = length -1;
    int i;
    for (i = 0; i < length; i++ ){
        reverse[i] = str[j];
        j--;
    }
    printf("%s", reverse);
    return 0;
}
