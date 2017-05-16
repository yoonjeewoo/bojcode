//
//  2293 동전 1.cpp
//  acmicpc
//
//  Created by Jeewoo Yoon on 2017. 5. 16..
//  Copyright © 2017년 Jeewoo Yoon. All rights reserved.
//

#include <stdio.h>

int coin[105]; //동전
int dp[10005]; //dp[i] = 주어진 동전을 가지고 i원을 만드는 경우의 수

int main() {
    int n,k; //n가지 동전 k원 만들기
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++) {
        scanf("%d",&coin[i]);
    }
    dp[0] = 1;
    for(int i=0;i<n;i++) {
        for(int j=coin[i];j<=k;j++){
            dp[j] += dp[j-coin[i]]; //해당 동전으로 k원을 채우는 방법의 수를 구한다
        }
    }
    printf("%d\n",dp[k]);
}
