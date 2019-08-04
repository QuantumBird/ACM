    #include<stdio.h>
    #include<string.h>
    #include<math.h>
    #include<algorithm>
    using namespace std;
    int a[100010];
    int b[100010];
    int main()
    {
        int n;
        while(scanf("%d",&n)!=EOF)
        {
            for(int i=0;i<n;i++)
                scanf("%d",&a[i]);
            int k=n;
            memset(b,-1,sizeof(b));
            for(int i=0;i<n;i++)
            {
                if(a[i]!=k)
                {
                    b[a[i]]=a[i];
                    printf("\n");
                }
                else
                {
                    k--;
                    printf("%d",a[i]);
                    if(i!=0)
                    {
                        for(int j=k;j>=n-i;j--)
                        {
                            if(b[j]==-1)
                                break;
                            else
                             {
                                 k--;
                                 printf(" %d",b[j]);
                                 b[j]=-1;
                             }
                        }
                    }
                    printf("\n");
                }
            }
        }
        return 0;
    }