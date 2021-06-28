//
// Created by gohardsun on 2021/06/19.
//

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

vector<int> map[30];
queue<int> Q;
int ch[30], dis[30];

int main(){
    int a, b, n, m,x;
    cin >> a >> b;

    for(int i=0; i<b; i++){
        cin >> n >> m;
        map[n].push_back(m);
    }

    ch[1] = 1;
    q.push(1);

    while(!q.empty()){
        x = q.front();
        q.pop();
        for(int i=0; i<map[x].size(); i++){
            if(ch[map[x][i]]==0){
                ch[map[x][i]]=1;
                q.push(map[x][i]);
                dis[map[x][i]] = dis[x] + 1;
            }
        }
    }

    for(int i=2; i<=n; i++){
        cout << i << ":" << dis[i];
    }
}