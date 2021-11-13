#include<iostream>
using namespace std;

int main()
{
    int a; //declaration
    a = 21; //initialisation
    cout<<"Size of int "<<sizeof(a)<<endl;

    float b;
    cout<<"Size of float "<<sizeof(b)<<endl;

    char c;
    cout<<"Size of char "<<sizeof(c)<<endl;

    bool d;
    cout<<"Size of boolean "<<sizeof(d)<<endl;

    double e;
    cout<<"Size of double "<<sizeof(e)<<endl;

    short int si;
    cout<<"Size of Short int "<<sizeof(si)<<endl;

    long int li;
    cout<<"Size of Long int "<<sizeof(li)<<endl;
    return 0;
}