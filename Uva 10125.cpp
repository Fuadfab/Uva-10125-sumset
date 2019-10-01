#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define fi first
#define se second
#define mp make_pair
#define pb push_back

int main()
{
    int x,y,ans;
    vector<int>v;
    while(cin >> x)
    {
        if(x==0)
            break;
        for(int i=0;i<x;i++)
        {
            cin >> y;
            v.push_back(y);
        }
        sort(v.begin(),v.end());
        int flag = 0,n=0,r;
        ans=0;
        for(ll i=v.size()-1;i>=0;i--)
        {
            for(ll j =v.size()-1;j>=0;j--)
            {
                if(i!=j)
                {
                     n = v[i]-v[j];
                     for(ll l=0,r=j-1;l<r;)
                     {
                         if(v[l]+v[r]==n)
                         {
                             ans=v[i];
                             flag = 1;
                             break;
                         }
                        if(v[l]+v[r]>n)
                            r--;
                        else
                            l++;
                     }
                }
                if(flag==1)
                   break;
            }
            if(flag==1)
                break;
        }
        if(flag ==1)
            cout << ans << endl;
        else
            cout <<"no solution" <<endl;

        v.clear();
    }
}
