#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
typedef long long ll;
int size[101];
int v[6]={1,4,9,16,25,36};
int main(){
    ios::sync_with_stdio(false);
    while (1){   
        int flag=1;
        int ans=0;
        for (int i = 0; i < 6; i++){
                cin >> size[i];
                if(size[i]!=0)
                    flag=0;
            }
        if(flag)break;
        ans=size[3]+size[4]+size[5]+(size[2]+3)/4;
        int n=size[1]-5*size[3];
        if(size[2]%4==1) n-=5;
        if(size[2]%4==2) n-=3;
        if(size[2]%4==3) n-=1;
        if(n>0) ans+=(n+8)/9;
        int tol=ans*36-size[1]*v[1]-size[2]*v[2]-size[3]*v[3]-size[4]*v[4]-size[5]*v[5];
        if((tol)<size[0])
        ans += (size[0]-tol+35)/36;
        cout<<ans<<endl;
    }
    return 0;
}
