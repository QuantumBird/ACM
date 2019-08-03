#include <iostream>
#include <string>
using namespace std;
int main(){
    string code;
    getline(cin, code);
    char cnt = 'a';
    if(code[0] != 'a'){
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i = 0; i < code.length(); i ++){
        if(code[i] > cnt){
            if(int(code[i] - cnt) != 1){
                cout<<"NO"<<endl;
                return 0;
            }
            cnt = code[i];
        }
    }
    cout<<"YES"<<endl;
    return 0;
}