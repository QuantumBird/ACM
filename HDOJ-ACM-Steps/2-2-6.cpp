#include <iostream>
using namespace std;
const int MAXN = 101;
int c[MAXN];
int main(){
    c[1] = 1;
    for(int i = 2; i < MAXN; i ++)
        c[i] = c[i - 1]*(4 * i - 2) / (i + 1);  // h(n) = h(n - 1) * (4 * n - 2) /( n+ 1)
    int n;
    while(cin>>n)
        cout<<c[n]<<endl;
    return 0;
}