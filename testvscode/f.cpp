#include <iostream>
using namespace std;
// void push(int);
// int pop();
// int top=-1,choice;
// const int maxSize=5;
// int stack[maxSize];
// void menu();
// bool isEmpety();
// void displayStack();
// int main()
// {
//     int element,popped;
//     menu();
//     while(choice!=4)
//     {
//         switch(choice)
//         {
//             case 1:
//             cout<<"enter the element you want :";
//             cin>>element;
//             push(element)
//             break;
//         }
//     }

// }
// void menu()
// {
//     cout<<"**********************\n";
//     cout<<"Enter the stack operation you want to make:\n";
//     cout<<"1- add element from stack\n";
//     cout<<"2- add element from stack\n";
//     cout<<"3- add element from stack\n";
//     cout<<"4 Exit\n";
//     cin>>choice
//     cout<<"**************\n";
// }
// void push(int element)
// {
//     if(top==size-1){
//         cout<<"sorry the stack is full!\n";
//     }
//     else
//     {
//         top++;
//         stack[top]=element;
//     }
    
// }
// int pop()
// {
//     int element;
//     if(top<0){
//         cout<<"sorry stack is empety!\n";
//         return-1;
//     }
//     else
//     {
//         element=stack[pop];
//         top--;
//     }
//     return element;
// }
// void displayStack()
// {
//     cout<<"**********\n";
//     if(isEmpety)
// {
//     cout<<"stack is empety\n";
// }
//     else
//     {
//         for(int i=0;i<+top;i++)
//         cout<<"element"<<(i+1)<<"is :"<<stack[i]<<endl;
//     }
//     cout<<"*****************\n";
// }

//stack
// const int maxSize=10;
// void push(int);
// int pop();
// void minu();
// bool isEmpety();
// int top=-1,choice;
// int stack[maxSize];
// void displayStack();
// void minu()
// {
//     cout<<"Enter the stack operation you want to make\n";
//     cout<<"1- add element to stack\n";
//     cout<<"2- remove element from stack\n";
//     cout<<"3-display stack content\n";
//     cout<<"4- exit\n";
//     cin>>choice;
//     cout<<"**************\n";

// }

// int main()
// {
//   int element,choice;
//   do
//   {
//     minu();
//     cout<<"please enter your choice\n";
//     cin>>choice;
//     switch(choice)
//     {
//      case 1:
//         cout<<"enter element to inserted:";
//         cin>>element;
//         push(element);
//         break;
//     case 2:
//     if(!isEmpety)
//     {
//         cout<<"popped element is "<<pop()<<endl;
//     }
//     else 
//     {
//         cout<<"stack is empty\n";
//     }
//     break;
//     case 3:
//     displayStack();
//     break;
//     case 4:
//     cout<<"programm is finished,thank you"<<endl;
//     break;
//     default:
//     cout<<"choice is invaild\n";
//     break;

//     }
//   } while (choice != 4);
//   return 0;
  
// }
// void push(int element)
// {
//     if(top==maxSize-1)
//     {
//         cout<<"sorry  stack is full\n";
//     }
//     else
//     {
//         stack[top]=element;
//         top++;
//     }
// }
// int pop()
// {
//     int element;
//     if(top<0)
//     {
//         cout<<"sorry the stack is empty\n";
//     }
//     else
//         {
//             element=stack[top];
//             top--;
//         }
//         return element;
// }
// bool isEmpty()
// {
//     if(top==-1)
//     return true;
//     else
//     return false;
// }
// void displayStack()
// {
//     if(isEmpty()){
//         cout<<"the stack is empety\n";
//     }
//     else
//     {
//         for(int i=0;i<=top;i++){
//             cout<<"element"<<(i+1)<<stack[i]<<endl;
//         }
//     }
//     cout<<"**************\n";
// }

const int maxSize=5;
int queue[maxSize];
int front=-1,rear=-1,choice;
void enqueue(int);
int dequeue();
void minu();
bool isEmpty();
bool isFull();
void displayQueue();
void peek();
void minu()
{
    cout<<"enter the queue opetration you want to make\n";
    cout<<"1- add element to queue\n";
    cout<<"2-remove element from queue\n";
    cout<<"3- display element to queue\n";
    cout<"Exit\n";
    cin>>choice;
    cout<<"************\n";
}
void enqueue(int element);
{
    if(isFull){
        cout<<"sorry queue is full\n";
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
        rear++;
        queue[rear]=element;
    }
}
int dequeue()
{
    int element;
    if(isEmpty())
    {
        cout<<"sorry ,queue is empty\n";
    }
    else 
    {
        element=queue[front];
        front++;
    }
    return element;
}
bool isFull()
{
    if(front==0 && rear= maxSize-1 )
    return true;
    else 
    return false;
}
bool isEmpty()
{
    if(front==-1||front>rear)
    return true;
    else 
    return false;
}
void peek()
{
    if(isEmpty()){
        cout<<"queue is empty\n";

    }
    else 
    {
        cout<<"element at the front is :"<<queue[front];
    }
}










