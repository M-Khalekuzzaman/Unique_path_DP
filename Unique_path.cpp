#include<bits/stdc++.h>
using namespace std;

const int N = 101;
int dp[N][N];

int Unique_paths(int n,int m)
{
    // 1. base case
    if(n == 0 && m == 0)
    {
        return 1;
    }

    if(dp[n][m] != -1)
    {
        return dp[n][m];
    }
    int ans = 0;
    if(n>0)
    {
        ans += Unique_paths(n-1,m);
    }
    if(m>0)
    {
        ans += Unique_paths(n,m-1);
    }
    dp[n][m] = ans;
    return dp[n][m];
}
int main()
{
    int row,col;
    cin>>row>>col;

    for(int i = 0; i<row; i++)
    {
        for(int j = 0; j<col; j++)
        {
            dp[i][j] = -1;
        }
    }

    cout<<Unique_paths(row-1,col-1)<<endl;




    return 0;
}
