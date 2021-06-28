//
// Created by gohardsun on 2021/04/23.
//
#include <iostream>
using namespace std;

int n, pt1, pt2, pt3;
int arr[101], temp[101];

void dvi(int lt, int rt){
    int mid;
    mid = lt+rt/2;

    if(lt<rt){
        dvi(lt, mid);
        dvi(mid+1, rt);
        // 정렬

    }

    return;
}
int main(){
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>arr[i];
    }
    dvi(1,n);
    return 0;
}