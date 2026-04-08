#include<bits/stdc++.h>
using namespace std;

#define N 5
int queueArr[N];
int front = -1, rear = -1;

void enqueue(int data){
    if((rear + 1) % N == front){
        cout << "Queue Overflow!" << endl;
    }
    else if(front == -1){
        front = rear = 0;
        queueArr[rear] = data;
    }
    else{
        rear = (rear + 1) % N;
        queueArr[rear] = data;
    }
}

void dequeue(){
    if(front == -1 && rear == -1){
        cout << "Queue Underflow!" << endl;
    }
    else if(front == rear){
        cout << "Deleted value: " << queueArr[front] << endl;
        front = rear = -1;
    }
    else{
        cout << "Deleted value: " << queueArr[front] << endl;
        front = (front + 1) % N;
    }
}

void peek(){
    if(front == -1 && rear == -1){
        cout << "Queue is empty!" << endl;
    }
    else{
        cout << "Front value: " << queueArr[front] << endl;
    }
}

void display(){
    if(front == -1 && rear == -1){
        cout << "Queue is empty!" << endl;
    }
    else{
        cout << "Queue elements: ";
        int i = front;
        while(true){
            cout << queueArr[i] << " ";
            if(i == rear) break;
            i = (i + 1) % N;
        }
        cout << endl;
    }
}

int main(){
    int choice, value;

    while(true){
        cout << "\nChoose an option:\n";
        cout << "1. Enqueue\n";
        cout << "2. Dequeue\n";
        cout << "3. Peek\n";
        cout << "4. Display\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch(choice){
            case 1:
                cout << "Enter value: ";
                cin >> value;
                enqueue(value);
                break;
            case 2:
                dequeue();
                break;
            case 3:
                peek();
                break;
            case 4:
                display();
                break;
            case 5:
                exit(0);
            default:
                cout << "Invalid choice!" << endl;
        }
    }
}
