//Bismillahir Rahmanir Rahim
//Allahumma Rabbi Jhidni Elma
///A lot of mistakes is happened without understanding questions clearly.\
Please,make sure that understand question clearly.Think from every possible output.\
Make different algorithm to answer the question.Don't think that you have tried all possible ways.\
There is always simple and tricky way to solve the brute force type question.
/*--------Please carefully check--------
    1.Overflow and underflow
    2.Corner test case
    3. divide zero

*/
#pragma GCC optimize("Ofast")
#pragma GCC target("avx,avx2,fma")
#pragma GCC optimization("unroll-loops")
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long  ull;
typedef long double ld;
const ld PI = 2*acosl(0.0);
const int inf=2e5+7;
const int mxN=3000000;
const int mod=1e9+7;
#define speed ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define endl "\n"
#define pb push_back
#define reset(a) memset(a,0,sizeof a)
#define gcd(a,b) __gcd((a),(b))
#define lcm(a,b) (a/gcd(a,b)*b)
#define abs(a) (a<0?-(a):a)
#define debug1(x)  cout << #x << "=" << x << endl
#define debug2(x, y)  cout << #x << "=" << x << "," << #y << "=" << y << endl
#define digit2(x) floor((log2(x)))
#define digit2(x) floor((log2(x)))
#define sc(a) scanf("%d",&a)
#define pf(a) printf("%d\n",a)
#define DEBUG 0
//cout<<"Case "<<cas<<": "<<
int main()
{
    int n,m,t,i,j;
    cin>>t;
    while(t--)
    {
        cin>>n>>m;
        char grid[n][m];
        for(i=0;i<n;i++)
        {
            for(j=0;j<m;j++)
            {
                cin>>grid[i][j];
            }
        }
        for(i=0;i<n;i++)
        {
            for(j=1;j<m;j++)
            {
                int df=(grid[i][j]-'0')^(grid[i][j-1]-'0');
                //cout<<df<<endl;
                grid[i][j]= (df+'0');
                //cout<<grid[i][j]<<endl;
            }
        }


            for(j=1;j<n;j++)
            {
               // cout<<(grid[m-1][j]-'0')<<" "<<(grid[m-1][j-1]-'0')<<endl;
                int df=(grid[j][m-1]-'0') ^ (grid[j-1][m-1]-'0');
               // cout<<df<<endl;
                grid[j][m-1]= (df+'0');
            }
            if(grid[n-1][m-1]-'0' == 1)
            {
                cout<<"YES\n";
            }
            else
                cout<<"NO\n";

    }
}

