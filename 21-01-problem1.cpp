
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ls,lp,max;
    cout<<"Enter length of array=";
    cin>> ls ;
    cout<<"Enter length of patern= ";
    cin>> lp;
    max=ls-lp+1;
    int arr[ls],arr2[lp];


    for(int i=0;i<ls;i++){
        cin>>arr[i];
    }
    for(int j=0;j<lp;j++){
        cin>>arr2[j];
    }
    for(int i=0;i<max;i++){
            bool flag=true;

        for(int j=0;j<lp;j++){
            if(arr[i+j]!=arr2[j]){
                flag=false;
                break;
            }
        }
            if(flag==true){
                     cout<< i ;
                return 0;
            }


    }
}
