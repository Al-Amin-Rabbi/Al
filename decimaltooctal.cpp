#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int>oc;
int de,remi,oc_number=0;
cin>>de;
while(de!=0){
remi=de%8;
oc.push_back(remi);
de=de/8;
}
int i=oc.size()-1;
for(i;i>=0;i--){

    oc_number = oc_number * 10 +oc[i];
}
cout<<oc_number<<endl;
return 0;}
