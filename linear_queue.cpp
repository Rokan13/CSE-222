#include<bits/stdc++.h>
using namespace std;
# define N 5

int queuearr[N];
int front = -1;
int rear = -1;

void enqueue(int data){
   if(rear == N-1)
    cout<<"Over flow\n";
   else if(front == -1 && rear == -1){
    front = rear = 0;
    queuearr[rear] = data;
   }

}

void dequeue()
{
    if(front == -1 && rear == -1){
        cout<< " Under flow\n";
    }
    else if(front == rear){
        cout<< "deleted value"<<queuearr[front]<<endl;
        front = rear= -1;
    }
    else{
        cout<< " ";
        front++;
    }
}
void display() {
    if (front == -1) {
        cout << "Queue is empty\n";
    } else {
        cout << "Queue elements: ";
        for (int i = front; i <= rear; i++) {
            cout << queuearr[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
int choice,value;
while(true)
{
    cout<<"\nChosse option: \n";
    cout<<"1.Enqueue\n";
    cout<<"2.Dqueue\n";
    cout<<"3.Peek\n";
    cout<<"4.Dislay\n";
    cout<<"5.Exit\n";
    cout<<"Enter your Choice: \n";
    cin>>choice;

    switch(choice){
  case 1:
    cout<<" Enter value; ";
    cin>>value;
    enqueue(value);
    break;
  case 2:
      dequeue();
      break;

  case 3:
    display();
    break;
  case 4:
    exit(0);
  default:
    cout<< "Invalid choice! "<< endl;
    }
}

}
