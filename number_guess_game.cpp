#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
    cout<<"WELCOME USER"<<endl;
    int a;
    a= rand();
    cout<<"GUESS A NUMBER"<<endl;
    cout<<"ENTER YOUR CHOICE";
    int n;
    cin >> n;

    

    if(n==a){
        
        cout<<"YOU WON"<<endl;
    }

    else if(n<a||n>a||n>(a-10)||n<(a+10)){
        cout<<"TOO CLOSE"<<endl;
    }

    else{
        cout<<"BETTER LUCK NEXT TIME";
    }

    cout<<endl<<"results: YOUR CHOICE = "<< n<<" COMPUTER'S CHOICE ="<< a<< endl;


    

    return 0;
}
