#include<iostream>
using namespace std;
#define MAX 5
int stack[MAX];
int top=-1;

void print()
{
    cout<<"Stack is: ";
    for(int i=0;i<=top;++i)
    {
        cout<< stack[i]<<" ";
    }
    cout<<endl;
}
void push(int data)
{
    if(top==MAX-1)
    {
        cout<<"Stack overflow"<<endl;
    }
    else{
        top++;
        stack[top]=data;
    }
}
void pop()
{
    if(top==-1)
    {
        cout<<"Stack Underflow"<<endl;
    }
    else{
        cout<<"The popped element is:"<<stack[top]<<endl;
        top--;
    }
}
int main()
{
    int ch,data;
    cout<<"1. Push in the stack"<<endl;
    cout<<"2. Pop out of the stack"<<endl;
    cout<<"3. Display stack"<<endl;
    cout<<"4. Exit"<<endl;
    do
    {
        /* code */
        cout<<"Enter what you want to do according to the number above:";
        cin>>ch;
        switch(ch)
        {
            case 1:
            {
                cout<<"Enter the value you want to push into the stack:";
                cin>>data;
                push(data);
                break;
            }
            case 2:
            {
                pop();
                break;
            }
            case 3:
            {
                print();
                break;
            }
            case 4:
            {
                cout<<"Exit"<<endl;
                break;
            }
            default:
            {
                cout<<"Enter valid choice";
            }
        }
    } while (ch!=0);
    return 0;
}
