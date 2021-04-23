//
// Created by gohardsun on 2021/04/23.
//
#include <iostream>
using namespace std;

int matrix[30][30];
int main(){
    int n, m;
    int a, b, c;

    cin>>n>>m;

    //간선의 수와 그에 대한 가중치 정보가 주어짐
    for(int i=1; i<=m; i++) {
        cin >> a >> b >> c;
        matrix[a][b] = c;
    }

    for(int i=1; i<=n; i++){
        for(int j=1; i<=n; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

