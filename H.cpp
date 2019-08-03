#include <iostream>
#include <algorithm>
using namespace std;
const int MAXN = 1e5 + 1;
int arr[MAXN];
int main(){
    int n;
    cin>>n;
    for(int i = 0; i < n; i ++) cin>>arr[i];
    sort(arr, arr + n);
    int ans = n - 2;
    for(int i = 1; arr[i] == arr[0]; i ++) ans --;
    for(int i = n - 2; arr[i] == arr[n - 1]; i --) ans --;
    cout<<max(ans, 0)<<endl;
    return 0;
}