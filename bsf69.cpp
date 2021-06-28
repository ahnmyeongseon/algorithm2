//
// Created by gohardsun on 2021/06/15.
//
#include <iostream>
#include <vector>
int q[100], ch[100], f = -1, b=-1;
vector<int> map[10];

int main(){
    int a, b, x;

    for(int i=0; i<6; i++){
        cin >> a >> b;
        map[a].push_back(b);
        map[b].push_back(a);
    }


    ch[1] = 1;
    q[++b] = 1;

    while(f<b) {
        x = q[++f];
        cout<<x;

        for (int i = 0; i < map[x].size(); i++) {
            if (ch[map[x][i]] == 0) {
                ch[map[x][i]] = 1;
                q[++b] = map[x][i];

            }
        }
    }
}