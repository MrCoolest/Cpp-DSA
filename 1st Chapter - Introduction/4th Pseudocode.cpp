// Convert tempreature from fahrenhit to celsius
#include<iostream>
using namespace std;
int main(){
    int f;
    float c;
    cout<<"Enter Fahrenhit temperature :";
    cin>>f;
    c = (f-32)*5/9;
    cout<<f<<" in Celsius "<<c;
    return 0;
}