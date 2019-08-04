#include <iostream>
using namespace std;
const int MAXN = 1e5 + 1;
bool mark[MAXN];
int main(){
    int n;
    cin>>n;
    int top = n;
    for(int i = 0; i < n; i ++){
        int t;
        cin>>t;
        mark[t] = true;
        while(mark[top]){
            cout<<top<<" ";
            top --;
        }
        cout<<endl;
    }
    return 0;
}