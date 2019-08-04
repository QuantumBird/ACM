#include <stdio.h>
#include <string.h>
#define M 40000

bool ans[3][M];

int main()
{
    int p, e, i, d;
    int n(0);

    while(scanf("%d%d%d%d", &p, &e, &i, &d) != EOF && p >= 0)
    {
        memset(ans, 0, sizeof(ans));

        p = p % 23;
        e = e % 28;
        i = i % 33;

        for(int x = p; x < M; x += 23)
            ans[0][x] = true;

        for(int x = e; x < M; x += 28)
            ans[1][x] = true;

        for(int x = i; x < M; x += 33)
            ans[2][x] = true;


        for(int x = d + 1; x < M; x++)
            if(ans[0][x] == 1 && ans[1][x] == 1 && ans[2][x] == 1 )
        {
            printf("Case %d: the next triple peak occurs in %d days.\n", ++n, x - d);
            break;
        }
    }

    return 0;
}