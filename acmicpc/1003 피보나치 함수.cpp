//
//  1003 피보나치 함수.cpp
//  acmicpc
//
//  Created by Jeewoo Yoon on 2017. 5. 16..
//  Copyright © 2017년 Jeewoo Yoon. All rights reserved.
//

#include <stdio.h>

//0과 1의 출력 횟수
int zero_cnt = 0;
int one_cnt = 0;
//피보나치 수열 계산 함수
int fibonacci(int n) {
    if (n==0) {
        zero_cnt++;
        return 0;
    } else if (n==1) {
        one_cnt++;
        return 1;
    } else {
        return fibonacci(n-1) + fibonacci(n-2);
    }
}

int main() {
    int T,num;
    scanf("%d",&T);
    for(int i=0;i<T;i++) {
        scanf("%d",&num);
        fibonacci(num);
        printf("%d %d\n",zero_cnt,one_cnt);
        //초기화
        zero_cnt=0;
        one_cnt=0;
    }
}
