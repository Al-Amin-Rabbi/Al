#include<bits/stdc++.h>
using namespace std;
int bigmod(int base,int power,int mod)
{
    if(power==0)
    {
        return 1;
    }
    else if(power==mod)
    {
        return 0;
    }
    else if(power%2==0)
    {
        int a=(bigmod(base,power/2,mod)%mod);
        return (a*a)%mod;
    }
    else if(power%2==1)
    {
        int a=base%mod;
        int b=(bigmod(base,power-1,mod)%mod);
        return (a*b)%mod;
    }

}
int main()
{
    int base=2;
    int power=10000000;
    int mod=7;
    cout<<bigmod(base,power,mod)<<endl;

return 0;
}

