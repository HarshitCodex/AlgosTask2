#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,q;
    cin>>n>>q;
    ll num[n+2];
    for(ll i=0;i<n+1;i++)
    {
        num[i]=i;
    }
    while(q--)
    {
        ll l,r,v;
        cin>>l>>r>>v;
        num[l]+=v;
        num[r+1]-=v;
    }
    /*for(ll i=0;i<n+1;i++)
    {
        cout<<num[i]<<" ";
    }*/
    ll sum=0,res=LONG_LONG_MIN;
    //cout<<endl;
    for(ll i=1;i<n+1;i++)
    {
        sum+=num[i];
        sum-=(i-1);
        //cout<<sum<<" ";
        res=max(res,sum);
    }
    cout<<res<<endl;
}
