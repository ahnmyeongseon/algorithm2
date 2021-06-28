//
// Created by gohardsun on 2021/06/14.
// 최소비용
#include <iostream>
int n, m, sum=0, min=21470000;
int map[20][20], ch[20];

int dfs(int x){
    if(x==n){
        if(sum<min) {
            min = sum;
        }
    }
    else{
        for(int i=1; i<n; i++){
            if(map[x][i] != 0 && ch[i]==0){
                ch[i] = 1;
                sum += map[x][i];
                dfs(i);
                ch[i] = 0;
                sum -= map[x][i];
            }
        }
    }
}
int main(){

    int a,b,c;
    cin<< n << m;

    for(int i=0; i<m; i++){
        cin<<a<<b<<c;
        map[a][b] = c;
    }

    ch[1] = 1;
    dsf(1);

    cout>>min;
}
