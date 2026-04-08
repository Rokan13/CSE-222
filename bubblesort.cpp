#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter number of element= ";
    cin>>n;
    int arr[n];
    cout<<"enter element= ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-i-1;i++){
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
    cout<<"sorted array: \n";
    for(int i=0;i<n;i++){
        cout<<arr[i]<< " ";
    }


}
