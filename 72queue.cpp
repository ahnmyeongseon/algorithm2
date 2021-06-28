//
// Created by gohardsun on 2021/06/19.
//
#include <iostream>
#include <queue>

using namespace std;

queue<int> q;
int ch[3];

int main(){
    int n, m, x;
    cin >> n >> m;

    for(int i=1; i<=n; i++){
        q.push(i);
    }

    while(!q.size()){
        for(int i=1; i<m; i++) {
            x = q.front();
            q.push(x);
            q.pop();
        }
        q.pop();
        if(q.size()==1){
            cout<< q.front();
            q.pop();
        }
    }
}
