#include<bits/stdc++.h>
using namespace std;

int main(){

    int arr[20] = {0};

    for (int i = 2; i <=sqrt(20); i++)
    {
        for (int j = i * i; j < 20; j+=i)
        {
            arr[j - 1] = 1;
        }
    }
    for (int i = 1; i < 20; i++)
    {
        if (arr[i - 1] == 0)
            cout << i << "\t";
    }

}
