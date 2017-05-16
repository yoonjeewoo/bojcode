//
//  9095. 1,2,3 더하기.cpp
//  acmicpc
//
//  Created by Jeewoo Yoon on 2017. 5. 15..
//  Copyright © 2017년 Jeewoo Yoon. All rights reserved.
//

#include <stdio.h>

int d[15];
int N;

int main () {
    scanf("%d",&N);
    d[0] = 1;
    for(int i=1;i<=N;i++) {
        if(i-1>=0) {
            d[i] += d[i-1];
        }
        if(i-2>=0) {
            d[i] += d[i-2];
        }
        if(i-3>=0) {
            d[i] += d[i-3];
        }
    }
    printf("%d\n",d[N]);
}
