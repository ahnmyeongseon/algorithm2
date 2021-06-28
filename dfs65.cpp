//
// Created by gohardsun on 2021/04/28.
//
#include<iostream>
using namespace std;

int map[7][7], ch[7][7];
int n, m, cnt=0;
int dx[4] = {-1, 0, 1, 0};
int dy[4] = {0, 1, 0, -1};

void dfs(int x, int y){
    int xx, yy;
    if(x==7&&y==7){
        cnt++;
    }
    else{
        for(int k=0; k<4; k++){
           xx = x+dx[k];
           yy = y+dy[k];

            if(xx<1 || xx>7 || yy<1 || yy>7) continue;
            if(map[xx][yy]==0 && ch[xx][yy]==0){
                   ch[xx][yy] = 1;
                   dfs(xx, yy);
                   ch[xx][yy] = 0;
           }
        }
    }
}
int main(){
    for(int i=1; i<=7;i++){
        for(int j=1; j<=7; j++){
            cin>>map[i][j];
        }
    }
    //ch[1][1] = 0;
    dfs(1,1);
    cout<<cnt;
}
