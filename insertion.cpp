#include<bits/stdc++.h>
using namespace std;

char ch[1000][1000];
bool vis[1000][1000];
int m,n;

bool isvalid(int x,int y)
{
    if(x<1||x>m || y<1 || y>n)
        return false;
    if(vis[x][y]==true || ch[x][y]=='#')
        return false;
    return true;
}

void dfs(int x,int y)
{
    vis[x][y]==true;
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
    cin>>m>>n;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
            cin>>ch[i][j];
    }
    int cnt=0;
    for(int i=1;i<=m;i++)
    {
        for(int j=1;j<=n;j++)
            if(ch[i][j]=='.'&&vis[i][j]==false)

            dfs(i,j),cnt++;
    }
    //cout<<endl;
    cout<<cnt;

}
