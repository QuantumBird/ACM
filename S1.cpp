
    #include<cstdio>
    #include<cmath>
    #include<algorithm>
    using namespace std;
    typedef long long ll;
    ll tab[]={0,5,3,1};
    ll slove(ll x[])
    {
    	ll num3=ceil(x[3]/4.0);//3*3的必须使用的盒子数量 
    	ll ans=x[6]+x[5]+x[4]+num3;//不包括1*1和2*2 时必须使用的盒子的数量 
    	ll num2=5*x[4]+tab[x[3]%4];//统计能放2*2的个数
    	num2=min(num2,x[2]); //计算能使用的2*2的方块最大数量
    	x[2]-=num2;//2*2的方格使用掉
    	ll rest=36*ans-x[6]*36-x[5]*25-x[4]*16-x[3]*9-num2*4;//剩余位置
    	rest=min(rest,x[1]);
    	x[1]-=rest;//使用1*1的方块 
    	rest=x[2]*4+x[1];//看是否有剩余，有的话，单独找个大箱子 
    	return ans+ceil(rest/36.0);
    }
    int main()
    {
    	ll x[10];
    	//freopen("shuju.txt ","r",stdin);
    	while(~scanf("%lld",&x[1]))
    	{
    		int kase=x[1];//坑了我一次WA，自己思维不够严谨
    		for(ll i=2;i<=6;++i)
    		{
    			scanf("%lld",&x[i]);
    			if(x[i])
    			{
    				kase=1;
    			}
    		}
    		if(!kase)//全为零结束
    		{
    			break;
    		}
    		printf("%lld\n",slove(x));
    	}
    	return 0;
    }