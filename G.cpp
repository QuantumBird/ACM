#include <iostream>
#include <algorithm>
using namespace std;
int arr[10000000];
int main(){
    int n;
    while(cin>>n){
        for(int i = 1; i <= n; i ++) cin>>arr[i];
        sort(arr + 1, arr + n + 1);
        cout<<arr[(1 + n) / 2];
    }
    return 0;
}