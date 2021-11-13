// Number is Prime or Not
#include<iostream>
using namespace std;
int main(){
    int p,div=2;
    cout<<"Enter the number to check its prime or not :";
    cin>>p;
    while (div<p)
    {
        if(p%div==0)
        {
            cout<<"Non-Prime";
            
        }
        else
        {
            div = div + 1;
        }  
        }
    cout<<"Prime";
    return 0;

}