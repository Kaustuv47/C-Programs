//
//  main.c
//  Parallel
//
//  Created by Kaustuv Mandal on 15/08/18.
//  Copyright © 2018 Kaustuv Mandal. All rights reserved.
//

#include <stdio.h>

int t = omp_get_thread_num(4);

int main() {
    
#pragma omp parallel
    {
        int x ;
        x = omp_get_thread_num();
#pragma omp master
        t += x ;
    }
    printf("%d",t);

    return 0;
}
