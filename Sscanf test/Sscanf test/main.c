//
//  main.c
//  Sscanf test
//
//  Created by Kaustuv Mandal on 08/07/18.
//  Copyright © 2018 Kaustuv Mandal. All rights reserved.
//

#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* timeConversion(char* s) {
    int hr,mn,sc;
    char c;
    char buffer[20];
    sscanf(s,"%d%c%d%c%d%c%c",&hr,&c,&mn,&c,&sc,&c,&c);
    //buffer, "Sum of %d and %d is %d", a, b, c
    printf("%d%d%d",hr,mn,sc);
    sprintf(buffer, "%d:%d:%d", hr, mn, sc);
    printf("%s",buffer);
    return (buffer);
}

int main(int argc, const char * argv[]) {
    char s[]="18:05:20PM";
    char* result = timeConversion(s);
    
    printf("%s\n", result);
    return 0;
}
