// dfs 재귀함수로 구현하기
// 부분함수의 합 . dfs 로 구현하기 dfs 전위순
#include <iostream>

using namespace std;
// 전위순회 루트 -> 왼 -> 오
int a, total=0;
int pr[11];
bool flag = 0;

void dfs(int b, int sum_0){ //b는 원소갯수만큼 증가 b+1일때 종료
    if(flag == 1) return;
    if(b==a+1){
        if(sum_0 == total-sum_0) {
            flag = 1;
        }
    }
    else{
        dfs(b+1, sum_0+pr[b]);
        dfs(b+1, sum_0);
    }
}

int main(){
    cin>>a;

    for(int i=1; i<=a; i++){
        cin>>pr[i];
        total += pr[i];
    }
    dfs(1, 0);

    if(flag == 1) cout<<"YES";
    else cout<<"NO";
}