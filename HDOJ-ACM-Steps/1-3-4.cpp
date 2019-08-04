#include <iostream>
#include <algorithm>
using namespace std;
const int MAXN = 1000000;
typedef struct time{
    int hh, mm, ss;
    friend istream & operator>>(istream & in, time & d);
} time;
istream & operator>>(istream & in, time & d){
    char a, b;
    in>>time.hh>>a>>time.mm>>b>>time.ss;
    return in;
}
bool operator<(time & a, time & b){
    if(a.hh < b.hh) return true;
    if(a.mm < b.mm) return true;
    if(a.ss < b.ss) return true;
    return false;
}
struct note{
    int odr;
    int solved;
    time t;
    int score;
};
bool cmp1(note & a, note & b){
    if(a.solved < b.solved) return true;
    if(a.t < b.t) return true;
    return false;
}
bool cmp2(note & a, note & b){
    return a.odr < b.odr;
}
note arr[MAXN];
int main(){
    int n;
    while(cin>>n, n != -1){
        for(int i = 0; i < n; i ++){
            arr[i].odr = i;
            cin>>arr[i].solved;
            cin>>arr[i].t;
        }
        sort(arr, arr + n, cmp1);
        int top = 100;
        int nows = 5;
        for(int i = 0; i < n; i ++){
            if(arr[i].solved == 5){
                arr[i].score = 100;
            }else if(arr[i].solved == 0){
                arr[i].score = 50;
            }else{
                if(arr[i].solved != nows){
                    arr[i].score = top - 5;
                    top -= 10;
                    nows = arr[i].solved;
                }else{
                    arr[i].score = top;
                }
            }
        }
        sort(arr, arr + n, cmp2);
        for(int i = 0; i < n; i ++){
            cout<<arr[i].score<<endl;
        }
    }
    return 0;
}
