// dfs 재귀함수로 구현하기
// 부분함수의 합 . dfs 로 구현하기 dfs 전위순
#include <iostream>

using namespace std;
// 전위순회 루트 -> 왼 -> 오
// 1,2,3,4,5,6
int a;
int pr[11];
void dfs(int b){

    if(b==a+1){
        for(int i=1; i<=a; i++){
            if(pr[i]==1) {
                cout << i << " ";}

        }
        puts(" ");
    }
    else{
        pr[b] = 1;
        dfs(b+1);
        pr[b] = 0;
        dfs(b+1);
    }

}
int main(){
    cin>>a;
    dfs(1);
}