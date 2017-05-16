//
//  2579. 계단 오르기.cpp
//  acmicpc
//
//  Created by Jeewoo Yoon on 2017. 5. 14..
//  Copyright © 2017년 Jeewoo Yoon. All rights reserved.
//

#include <stdio.h>
#include <algorithm>

using namespace std;

int d[3][305];
int stairs[305];
int N;

int main() {
    scanf("%d",&N);
    for(int i=1;i<=N;i++) {
        scanf("%d",&stairs[i]);
    }
    //init
    d[1][1] = stairs[1];
    d[1][2] = stairs[1] + stairs[2];
    d[2][1] = 0;
    d[2][2] = stairs[2];
    
    for(int i=3;i<=N;i++) {
        d[1][i] = d[2][i-1] + stairs[i];
        d[2][i] = max(d[2][i-2],d[1][i-2]) + stairs[i];
    }
    
    int ans = max(d[1][N],d[2][N]);
    
    printf("%d\n",ans);
}
