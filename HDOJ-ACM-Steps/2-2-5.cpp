#include <iostream>
#include <algorithm>
using namespace std;
int get_ans(int n){
    int ans = 1;
    while(n != 1){
        if(n & 1)
            n = 3 * n + 1;
        else
            n /= 2;
        ans ++;
    }
    return ans;
}
int main(){
    int a, b;
    while(cin>>a>>b){
        int ans = 0;
        int ta = min(a, b);
        int tb = max(a, b);
        for(int i = ta; i <= tb; i ++)
            ans = max(ans, get_ans(i));
        cout<<a<<" "<<b<<" "<<ans<<endl;
    }
    return 0;
}