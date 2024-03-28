#include<iostream>
using namespace std;
int main(){
    float a, b;
    char c;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number: ";
    cin>>b;
    cout<<"Enter the operator(+,-,*,/): ";
    cin>>c;
    if(c=='+'){
        cout<<"Answer: "<<a+b;
    }
    else if(c=='-'){
        cout<<"Answer: "<<a-b;
    }
    else if(c=='*'){
        cout<<"Answer: "<<a*b;
    }
    else if(c=='/'){

        cout<<"Answer: "<<a/b;
    }
    else{
        cout<<"Enter valid operator";
    }


}