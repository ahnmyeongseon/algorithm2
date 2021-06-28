//
// Created by gohardsun on 2021/06/22.
//
#include <iostream>
#include<queue>

using namespace std;

int main(){
    int n;
    priority_queue<int> pQ;

    while(true){
        cin >> n;

        if(n==0){
            if(pQ.empty()){
                cout << "-1";
                break;
            }
            cout << pQ.top();
            pQ.pop();
        }
        else if(n==-1) break;
        else pQ.push(n);
    }



}

