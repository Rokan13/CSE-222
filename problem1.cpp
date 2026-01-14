#include <iostream>
using namespace std;

int main() {
    int n,sum=0;
    float avarage=0;
int arr[n];
cin>>n;
for(int i=0;i<n;i++){
    cin>>arr[i];
    sum=sum+arr[i];

}
int max=arr[0];
int min=arr[0];
for(int i=0;i<n;i++){
    if(arr[i]>max){
        max=arr[i];
    }
    if(arr[i]<min){
        min=arr[i];
    }
}
avarage=(float)sum/(float)n;
cout<<"Sum="<<sum<<endl;
cout<<"Avarage="<<avarage<<endl;
cout<<"maximum"<<max<<endl;
cout<<"minimum"<<min<<endl;


}
