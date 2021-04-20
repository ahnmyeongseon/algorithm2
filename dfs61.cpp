//
// dfs이용하여 특정 수 만들기
//
#include <iostream>
using namespace std;
int n, m, cnt=0;
int pr[11];

void dfs(int a, int sum){
    if(a == n+1){
        if(sum == m){ cnt++;}
        return;
    }
    else{
        dfs(a+1, sum+pr[a]);
        dfs(a+1, sum-pr[a]);
    }
}

int main(){
    cin >> n >> m;

    for(int i=1; i<=n; i++){
        cin >> pr[i];
    }
    dfs(1, 0);

    cout<<cnt;

    return 0;
}
