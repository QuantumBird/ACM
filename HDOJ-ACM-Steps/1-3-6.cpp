#include <iostream>
#include <algorithm>
using namespace std;
const int MAXN = 1e6;
int a[MAXN];
int b[MAXN];
int main(){
    int n;
    while(cin>>n, n){
        for(int i = 0; i < n; i ++) cin>>a[i];
        for(int i = 0; i < n; i ++) cin>>b[i];
        sort(a, a + n);
        sort(b, b + n);
        int ca, cb;
        ca = cb = 0;
        for(int i = 0; i < n; i ++){
            if(a[i] > b[i]){
                ca += 2;
                cb += 0;
            }else if(a[i] == b[i]){
                ca += 1;
                cb += 1;
            }else{
                ca += 0;
                cb += 2;
            }
        }
        cout<<ca<<" vs "<<cb<<endl;
    }
    return 0;
}