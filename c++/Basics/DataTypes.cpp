#include<iostream>
#include<string>
using namespace std;

int main(){
    int id;
    float version;
    string name;
    bool output;
    char decission;

    cout <<"Enter your ID: ";
    cin>>id;
    cout <<"Enter version: ";
    cin>>version;
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter Y to see result else enter N: ";
    cin>>decission;

    if(decission == 'Y' || decission == 'y')
        output=true;
    else
        output=false;

    if(!output)
        return 0;

    cout<<"Id : "<<id<<endl;
    cout<<"Version: "<<version<<endl;
    cout<<"Name: "<<name<<endl;
    return 0;
    
}