//
// Created by gohardsun on 2021/06/14.
//
//지료형 pair - 따로 include 하지 않아도 된다.
// 두개의 자료형을 한쌍으로
//pair<int, int> p;
//p = make_pair(10, 20);
//cout<<p.first << p.second;

#include <vector>
#include <iostream>

int n, m,min=21470000, ch[30];
vector<int> map3[20];

int dfs(int xx, int sum){
    if(xx=n){
        if(sum<min) min = sum;
    }
    else{
        for(int i=0; i<map[xx].size(); i++){
            if( ch[map3[xx].first] == 0){
                ch[map3[xx].first] = 1;
                dfs(map3[xx].first, sum + map3[xx].second );
                ch[map3[xx].first] = 0;
            }
        }
    }

}
int main(){

    int a,b,c;
    cin<< n << m;

    for(int i=0; i<m; i++){
        cin<<a<<b<<c;
        map3[a].push_back(make_pair(b,c));
    }

    ch[1] = 1;
    dsf(1, 0);

    cout>>min;
}