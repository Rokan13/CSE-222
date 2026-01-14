#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,even,odd;
    cin>>n;
    if(n%2==0){
        cout<<"even"<<endl;
    }
    else{
        cout<<"odd"<<endl;
    }
     int count=0;
   for(int i=0;n!=0;i++){
   n/=10;
   count++;
   }

cout<<"digit="<<count<<endl;
}
