//
//  1010 다리 놓기.cpp
//  acmicpc
//
//  Created by Jeewoo Yoon on 2017. 5. 16..
//  Copyright © 2017년 Jeewoo Yoon. All rights reserved.
//

#include <stdio.h>

long long int bridge[305][305];

int main() {
    int T;
    int N=0;
    int M=0;
    for(int i=1;i<=300;i++) {
        for(int j=1;j<=300;j++) {
            bridge[i][j] = 1;
        }
    }
    for(int i=1;i<=300;i++) {
        bridge[1][i] = i;
    }
    scanf("%d",&T);
    for(int i=0;i<T;i++) {
        scanf("%d %d",&N,&M);
        for(int j=2;j<=N;j++) {
            for(int k=j+1;k<=M;k++) {
                bridge[j][k] = bridge[j-1][k-1] + bridge[j][k-1];
            }
        }
        printf("%lld\n",bridge[N][M]);
    }
}
