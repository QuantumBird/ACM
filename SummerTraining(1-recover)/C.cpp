#include <iostream>
using namespace std;
 
typedef long long ll;
const int maxn = 151000;
 
ll set[maxn];
ll num[maxn];
ll m;
 
void init(){
    for(int i = 1; i<=m ;i ++)
        set[i] = i,num[i] = 1;
}
 
ll find_ (ll x){
    return set[x] == x ? x : (set[x] = find_(set[x]));
}
 
void join(int x, int y){
    ll fx = find_ (x);
    ll fy = find_ (y);
    if(fx != fy){
        set[fy] = fx;
        num[fx] += num[fy];
    }
}
int main(){
    ll n,tmp;
    cin>>m>>n;
    init();
    tmp = n;
    while(n --){
        ll x,y;
        cin>>x>>y;
        join(x,y);
    }
    ll tot = 0;
    for(int i = 1; i <= m ; i++){
        if(set[i] == i) tot += (num[i]*(num[i]-1) / 2);
    }
    if(tmp == tot) 
        cout<<"YES\n";
    else 
        cout<<"NO\n";
    return 0;
}
