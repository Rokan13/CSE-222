#include<iostream>
#define MAX 100
using namespace std;

class stack{
  int *arr;
  int top,capacity;

   public:
       stack(int size){
       capacity=size;
       arr=new int[capacity];
       top=-1;

       }

     ~stack(){
         delete[]arr;
     }

     bool isfull(){
     return top==capacity-1;
     }
     bool isempty()
     {
         return top==-1;
     }

  void push(int data){
      if(isfull())
        cout<<"over flow\n";
      else{
        arr[++top]=data;
        cout<<data<<"pushed\n";
      }
  }

  int pop()
  {
      if(isempty()){
        cout<<"underflow\n";
        return -1;
      }
      cout<<arr[top]<<" popped";
      return arr[top--];
  }

  int peek(){
  if(isempty()) {
    cout<<"stack is empty\n";
    return -1;
  }
  cout<<"Top element: "<< arr[top]<<endl;
  return arr[top];
  }

  void display(){
   if(isempty()){
    cout<<"stack is empty\n";
   cout<<"stack element= ";
   for(int i=0;i<=top;i++){
    cout<<arr[i]<< " ";
    cout<<endl;
   }
  }
 }
};

int main(){

   int size;
   cout<<"enter stack size= ";
   cin>>size;

   stack s(size);
   int choice,value,newMax;
   do{
        cout<<"\n stack menu\n";
        cout<<" 1 push\n 2 pop\n .... 0 exit\n";
        cout<<"enter choice ";
        cin>> choice;

  switch(choice){
      case 1:cout<<"enter value= ";
           cin>> value;
           s.push(value);
           break;

      case 2:s.pop();
             break;
      case 3:s.peek();
             break;
      case 4:s.display();
             break;
      case 5: cout<< (s.isempty()?"empty\n":"not emptyu\n");
             break;
  }
}
}
