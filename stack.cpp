#include<iostream>
using namespace std;
#define SIZE 10

class stack{
char stck[SIZE];
int tos;

public:
    stack();
    void push(char ch);
    char pop();

};

stack::stack()
{
    cout<<"constructing a stack="<<endl;
    tos=0;
}

void stack::push (char ch)
{
    if(tos==SIZE)
    {
        cout<<"stak is full"<<endl;
    }
    stck[tos]=ch;
    tos++;
}
    char stack::pop()
    {
        if(tos==0)
        {
            cout<<"stack is empty"<<endl;
        }
        tos--;
        return stck[tos];
    }


int main()
{
    stack s1,s2;
    int i;

    s1.push('a');
    s2.push('x');
     s1.push('b');
    s2.push('n');
     s1.push('m');
    s2.push('h');

    for(i=0;i<3;i++) cout<<"pop s1:"<<s1.pop()<<endl;
    for(i=0;i<3;i++) cout<<"pop s2:"<<s2.pop()<<endl;

}

