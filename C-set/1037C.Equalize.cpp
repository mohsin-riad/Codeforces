/***from dust i have come, dust i will be***/

#include<bits/stdc++.h>

typedef long long int ll;
typedef unsigned long long int ull;

#define dbg printf("in\n")
#define nl printf("\n");
#define N 300110
#define inf 1000000000

#define sf(n) scanf("%d", &n)
#define sff(n,m) scanf("%d%d",&n,&m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n,m) scanf("%I64d%I64d",&n,&m)

#define pf(n) printf("%d ",n)
#define pff(n,m) printf("%d %d\n",n,m)
#define pffl(n,m) printf("%I64d %I64d\n",n,m)
#define pfl(n) printf("%I64d\n",n)
#define pfs(s) printf("%s",s)

#define pb push_back
#define pp pair<int,int>

using namespace std;

int main()
{
    int i,j,k;
    int n,m;

    string a,b;

    cin>>n;
    cin>>a>>b;

    int cnt=0;
    for(i=0;i<n-1;i++)
    {
        if(a[i]==b[i]) continue;

        else
        {
            if(a[i+1]==b[i+1])
                cnt++;
            else
            {
                if(a[i]!=a[i+1]){
                    swap(a[i],a[i+1]);
                    cnt++;
                }

                else
                    cnt++;
            }
        }
    }

    if(a[n-1]!=b[n-1]) cnt++;

    cout<<cnt;

    return 0;
}
