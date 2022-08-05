#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,sum;
    long long int sum1,sum2;
    cin>>n;
    sum1=((n/2)*((n/2)+1)*2)/2;
    sum2=((n+1)/2)*((n+1)/2);
    sum=sum1-sum2;
    cout<<sum;

    return 0;
}
