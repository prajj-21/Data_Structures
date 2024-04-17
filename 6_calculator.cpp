#include<iostream>
using namespace std;

int main(){

    float a,b;
    cout<<"INPUT 2 NUMBERS:";
    cin>>a>>b;

    char op;
    cout<<"INPUT AN OPERATOR";
    cin>>op;

    switch (op)
    {
    case '+':
    cout<<a+b<<endl;
    break;

    case '-':
    cout<<a-b<<endl;
    break;
    
    case '/':
    cout<<a/b<<endl;
    break;

    case '*':
    cout<<a*b<<endl;
    break;
    
    default:

    cout<<"enter another operator"<<endl;
        break;
    }

    return 0;
}