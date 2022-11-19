#include<bits/stdc++.h>
using namespace std;

char ar[1000][1000];
bool vis[1000][1000];
int N,M;
bool isvalid(int x,int y)
{
    if(x<1||x>N||y<1||y>M)
        return false;
    if(vis[x][y]==true || ar[x][y]=='#')
        return false;
        return true;
}
void dfs(int x,int y)
{
    vis[x][y]=true;
    if(isvalid(x-1,y))
        dfs(x-1,y);
    if(isvalid(x,y+1))
        dfs(x,y+1);
    if(isvalid(x+1,y))
        dfs(x+1,y);
    if(isvalid(x,y-1))
        dfs(x,y-1);
}

int main()
{
    cin>>N>>M;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++)
            cin>>ar[i][j];
    }
    int cnt =0;
    for(int i=1;i<=N;i++){
        for(int j=1;j<=M;j++)
            if(ar[i][j]=='.'&&vis[i][j]==false)
            dfs(i,j),cnt++;
    }
    cout<<cnt;
    cout<<endl;
}
