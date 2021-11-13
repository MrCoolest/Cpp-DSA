// // Switch case in C++
// #include<iostream>
// using namespace std;
// int main(){
//     char button;
//     cout<<"Enter the character ";
//     cin>>button;
//     switch (button)
//     {
//     case 'a':
//         cout<<"Hello";
//         break;
//     case 'b':
//         cout<<"Namaste";
//         break;
//     case 'c':
//         cout<<"jai shree krishna";
//         break;
//     case 'd':
//         cout<<"Wadacome";
//         break;       
//     default:
//         cout<<"Still i am learing more languages";
//         break;
//     }
//     return 0;
// }

// Simple calculator
#include<iostream>
using namespace std;
int main(){
    int n1,n2;
    cout<<"Enter two numbers :";
    cin>>n1>>n2;

    char op;
    cout<<"Enter an Operator :";
    cin>>op;

    switch (op)
    {
    case '+':
        cout<<n1+n2;
        break;
    case '-':
        cout<<n1-n2;
        break;
    case '*':
        cout<<n1*n2;
        break;
    case '/':
        cout<<n1/n2;
        break;
    default:
        cout<<"Not valid";
        break;
    }


    return 0;
}