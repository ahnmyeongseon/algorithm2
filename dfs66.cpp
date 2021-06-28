//
// Created by gohardsun on 2021/06/11.
//
//
#include <iostream>
#include <vector>

int n, m, cnt=0, ch[30];
vector<int> map[30];

int dfs(int xx){
    if (xx = n){
        cnt++;
    }
    else {
        for (int i = 0; i <= map[xx].size(); i++) {
            if (ch[map[xx][i]] == 0){
                ch[map[xx][i]] = 1;
                dfs(map[xx][i]);
                ch[map[xx][i]] = 0;
            }
        }
    }
}

int main(){

    int x, y;

    cin>>n>>m;

    for(int i=1; i<=m; i++){
        cin>>x>>y;
        map[x].push_back(y);
    }

    dfs(1);

    cout<<cnt;

}