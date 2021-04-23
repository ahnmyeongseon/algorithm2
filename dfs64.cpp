//
// Created by gohardsun on 2021/04/23.
//
#include <iostream>
using namespace std;

int n, m, cnt=0;
int mat[21][21];
int ch[21];

void dfs(int k){
    if(k==n){
        cnt++;
    }
    else{
        for(int i=1; i<=n; i++){
            if(mat[k][i]==1 && ch[i]==0){
                ch[i]=1;
                dfs(i);
                ch[i]=0;
            }
        }
    }
}

int main(){
    int a, b;
    cin >> n >>m;

    for(int i=1; i<=m; i++){
        cin>>a>>b;
        mat[a][b] =1;
    }
    dfs(1);
}
