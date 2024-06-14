#include<iostream>
#include<cmath>
using namespace std;
int main()
{   int ch;
    cout<<"1.scientific part";
    cout<<"2.algebric";
    cout<<"input choice"; 
    cin>>ch;
    if(ch==1){
        int ch1;
        cout<<"enter number ";
        int num;
        cin>>num;
        cout<<"1.log 2.square root 3.roundoff";
        cout<<"enter choice";
        cin>>ch1;
        if(ch1==1){
            cout<<"answer ="<<log(num);
        }
        if(ch1==2){
            cout<<"answer ="<<sqrt(num);
        }
        if(ch1==3){
            cout<<"answer ="<< round(num);
        }
        else{
           cout<<"invalid input !!"; 
        }


    }

    if(ch==2){
        int a,b;
        char oper;
        cout<<"enter number";
        cin>>a;
        cout<<"enter operation {+;-;/;*}";
        cin>>oper;
        cout<<"enter number";
        cin>>b;
        if(oper=='+'){
            cout<<"answer = "<<a+b;
        }
        if(oper=='-'){
            cout<<"answer = "<<a-b;
        }
        if(oper=='/'){
            cout<<"answer = "<<a/b;
        }
        if(oper=='*'){
            cout<<"answer = "<<a*b;
        }

    }
    else{
       cout<< "invalid input"; 
    }

    return 0;
}
