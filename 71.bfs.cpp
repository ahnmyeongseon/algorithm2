//
// Created by gohardsun on 2021/06/19.
//
#include <iostream>
#include <vector>
#include <queue>

using namespace std;

int ch[10001], dis[3] = {1, -1, 5};
queue<int> q;

int main(){
    int s, e, x, pos;
    cin >> s >> e;

    ch[s] = 1;
    q.push(s);

    while(!q.empty()){
        x = q.front();
        q.pop();

        for(int i=0; i<3; i++){
            pos = x + dis[i];
            //q.push(pos);
            if(pos <= 0 || pos>10000){
                continue;
            }
            if(pos == e){
                cout << ch[x];
                exit(0);
            }
            if(ch[pos]==0){
                ch[pos] = ch[x] + 1;
                q.push(pos);
            }
        }
    }
}

