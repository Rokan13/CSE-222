#include<bits/stdc++.h>
using namespace std;
int main(){
  int n;
  cout<<"enyter your element number= ";
  cin>>n;
  int arr[n];
  cout<<"write your element= ";

  for(int i = 0; i < n; i++)
    cin >> arr[i];

    for( int i = 1; i < n; i++){
        int key=arr[i];
        int j=i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
    cout<<" insertion sorted array= ";
    for(int i = 0;i < n; i++)
        cout<<arr[i]<< " ";



}
