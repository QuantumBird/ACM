#include <iostream>
using namespace std;
int arr[7];
int get_ans(void){
	/////////////////////////////////
	int ans = arr[6];
	arr[6] = 0;
	// proc 6 * 6
	ans += arr[5];
	arr[1] = max(0, arr[1] - arr[5]*11);
	arr[5] = 0;
	// proc 5 * 5 & 1 * 1
	ans += arr[4];
	if(arr[4] <= arr[2] / 5){
		arr[2] -= arr[4] * 5;
	}else{
		arr[1] = max(0, arr[1] - (arr[4] - arr[2] / 5)*20 - (5 - arr[2] % 5)*4);
		arr[2] = 0;
	}
	arr[4] = 0;
	// proc 4 * 4 & 2 * 2 & 1 * 1
	ans += arr[3] / 4;
	arr[3] %= 4;
	ans += 1;
	switch(arr[3]){
		case 3:	{
			if(arr[2] >= 1){
				arr[2] -= 1;
				arr[1] = max(0, arr[1] - 5);
			}else{
				arr[1] = max(0, arr[1] - 9);
			}
		} break;
		case 2:	{
			if(arr[2] >= 3){
				arr[2] -= 3;
				arr[1] = max(0, arr[1] - 6);
			}else{
				arr[1] = max(0, arr[1] + arr[2]*4 - 18);
				arr[2] = 0;
			}
		} break;
		case 1:	{
			if(arr[2] >= 5){
				arr[2] -= 5;
				arr[1] = max(0, arr[1] - 7);
			}else{
				arr[1] = max(0, arr[1] + arr[2]*4 - 32);
				arr[2] = 0;
			}
		} break;
		case 0:	ans -= 1;	break;
	}
	arr[3] = 0;
	// proc 3 * 3 & 2 * 2 & 1 * 1 (TODO)
	ans += arr[2] / 9;
	arr[2] %= 9;
	if(arr[2] > 0){
		ans += 1;
		arr[1] = max(0, arr[1] - (9 - arr[2])*4);
	}
	arr[2] = 0;
	// proc 2 * 2 & 1 * 1
	ans += arr[1] / 36;
	arr[1] %= 36;
	if(arr[1] > 0){
		ans += 1;
	}
	arr[1] = 0;
	// proc 1 * 1
	/////////////////////////////////
	return ans;
}
int main(){
	while(true){
		bool fext = true;
		for(int i = 1; i <= 6; i ++){
			cin>>arr[i];
			if(arr[i] != 0)
				fext = false;
		}
		if(fext)
			return 0;
		cout<<get_ans()<<endl;
	}
}
