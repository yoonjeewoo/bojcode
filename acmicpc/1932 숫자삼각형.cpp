//
//  1932. 숫자삼각형.cpp
//  acmicpc
//
//  Created by Jeewoo Yoon on 2017. 5. 15..
//  Copyright © 2017년 Jeewoo Yoon. All rights reserved.
//

#include <stdio.h>
#include <algorithm>

using namespace std;

int tri[500][500] = {0};

int main() {
    int N;
    int maxn = 0;
    scanf("%d",&N);
    for(int i=0;i<N;i++) {
        for(int j=0;j<i+1;j++) {
            scanf("%d",&tri[i][j]);
            
        }
    }
    for(int i= N-2;i>=0;i--) {
        for(int j=0;j<i+1;j++) {
            maxn = max(tri[i+1][j],tri[i+1][j+1]);
            tri[i][j] += maxn;
        }
    }
    printf("%d\n",tri[0][0]);
}
//#include <stdio.h>
//#include <algorithm>
//int main() {
//    int tri[500][500] = {0};
//    
//    int k;
//    scanf("%d",&k);
//    for(int i=0;i<k;i++) {
//        for(int j=0;j<i+1;j++) {
//            scanf("%d",&tri[i][j]);
//            
//        }
//    }
//    for(int i=k-2;i>=0;i--) {
//        for(int j=0;j<i+1;j++) {
//            int max = std::max(tri[i+1][j],tri[i+1][j+1]);
//            tri[i][j]+=max;
//        }
//    }
//    printf("%d",tri[0][0]);
//}
