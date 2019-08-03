#include <iostream>
#include <algorithm>
using namespace std;
int arr[7];
int get_ans(void){
    int ans = arr[6];
    if(arr[5] > 0){
        ans += arr[5];
        arr[5] = 0;
        arr[1] = max(0, arr[1] - 11);
    }
    if(arr[4] > 0){
        if(arr[4] <= (arr[2] / 5)){
            ans += arr[4];
            arr[4] = 0;
            arr[2] -= arr[4] * 5;
        }else{
            ans += arr[4];
            arr[4] -= arr[2] / 5;
            arr[2] %= 5;
            arr[1] = max(0, arr[1] - (5 - arr[2])*4 - arr[4]*20);
        }
    }
    if(arr[3] > 0){
        ans += arr[3] / 4;
        arr[3] %= 4;
        ans += arr[3];
        if(arr[3] <= (arr[2] / 5)){
            arr[2] -= arr[3] * 5;
            arr[1] = max(0, arr[1] - arr[3] * 7);
        }else{
            arr[3] -= arr[2] / 5;
            arr[2] %= 5;
            if(arr[2] > 0){
                arr[3] -= 1;
                arr[1] = max(0, arr[1] - ((5 - arr[2]) * 4 + 7) - arr[3]*27);
                arr[3] = 0;
            }
        }
    }
    if(arr[2] > 0){
        ans += arr[2] / 9;
        arr[2] %= 9;
        if(arr[2] > 0){
            ans += 1;
            arr[1] = max(0, arr[1] - (9 - arr[2])*4);
            arr[2] = 0;
        }
    }
    if(arr[1] > 0){
        ans += arr[1] / 36;
        arr[1] %= 36;
        if(arr[1] > 0){
            ans += 1;
            arr[1] = 0;
        }
    }
    return ans;
}
int main(){
    for(;;){
        bool flag = true;
        for(int i = 1; i <= 6; i ++){
            cin>>arr[i];
            if(arr[i] != 0)
                flag = false;
        }
        if(flag){
            return 0;
        }
        cout<<get_ans()<<endl;
    }
}