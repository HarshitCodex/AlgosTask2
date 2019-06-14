#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s;ll cnt=0;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t=0;
    cin>>t;
    while(t--)
    {
        cin>>s;
        cnt=0;
        ll flag=0;
        ll n=s.length();
        ll i=0;
        for(i=0;i<n;i++)
        {
            if(s[i]=='<')
            {
                flag++;
            }
            else
                flag--;
            if(flag==0)
            {
                cnt=i+1;
            }
            else if(flag<0)
            {
                break;
            }
        }
        cout<<cnt<<endl;
    }
}
