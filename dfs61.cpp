//
// dfs이용하여 특정 수 만들기
//
#include <iostream>
using namespace std;
int n, m, cnt=0;
int pr[11];
int lt[5];

// 특정 수가 될 때의 경로찍기
void dfs(int a, int sum){
    if(a == n+1){
        if(sum == m){
            cnt++;
            for(int i=1; i<=n; i++){
                cout<<lt[i]<<" ";
            }}
        return;
    }
    else{
        lt[a] = +pr[a];
        dfs(a+1, sum+pr[a]);
        lt[a] = -pr[a];
        dfs(a+1, sum-pr[a]);
        lt[a] = 0;
        dfs(a+1, sum);
    }
}

int main(){
    cin >> n >> m;

    for(int i=1; i<=n; i++){
        cin >> pr[i];
    }
    dfs(1, 0);

    if(cnt==0) cout<<"-1";
    else cout<<cnt<<"";

    return 0;
}
