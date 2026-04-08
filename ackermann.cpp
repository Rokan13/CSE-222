#include<bitds/stdc++.h>
using namespace std;
int ackerment(int a, int b){
    if(a==0){
        return b+1;
    }
    else if(b==0){
        return ackerment(a-1,1);
    }
    else{
        return ackerment(a-1,ackerment(a,b-1));
    }
}

int main(){
    int a,b;
    cout<<"enter vakue= ";
    cin>>a >> b;

    int result=ackerment(a,b);
    cout<<"Ackermann("<<a<<","<<b<<")="<<result<<endl;
    return 0;
}
