// Input a number n and tell whether it is equal to, less than or more than 10.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number :";
    cin>>n;

    if(n>50){
        cout<<n<<" is More than 50"<<endl;
    }
    else if (n<50)
    {
        cout<<n<<" is Less than 50"<<endl;
    }
    else
    {
        cout<<"Equal to 50"<<endl;
    }
 return 0;   
    
}