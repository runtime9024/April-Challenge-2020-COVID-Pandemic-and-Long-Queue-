# April-Challenge-2020-COVID-Pandemic-and-Long-Queue-
Code


#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main()
{
    ll t;cin>>t;
    while(t--)
    {
        ll n;cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++)
        cin>>a[i];
        
        ll ctone=0;
        for(ll i=0;i<n;i++)
        if(a[i]==1)ctone++;
        
        vector<ll>vec(ctone);
        ll k=0;
        for(ll i=0;i<n;i++)
        {
            if(a[i]==1)
            {
                vec[k]=i;
                k++;
            }
        }
        
        ll f=1;  
        for(ll i=0;i<vec.size()-1;i++)
        {
            if(vec[i+1] - vec[i] < 6 )
            {
                f=0;
                break;
            }
        }
        
         if(f==1)
         cout<<"YES"<<"\n";
         else
         cout<<"NO"<<"\n";
    }
    return 0;
}
