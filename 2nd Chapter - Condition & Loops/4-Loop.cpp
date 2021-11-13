// for loop in C++
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the Number :";
//     cin>>n;

//     int sum = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         sum = sum + i;
//     }
//     cout<<sum;
//     return 0;
// }

// While loop in C++
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the Number :";
//     cin>>n;

//     while (n>0)
//     {
//         cout<<"Number is \n"<<n;
//         cout<<"Enter again :";
//         cin>>n;
//     }
//     return 0;
// }

// Do While loop in C++
#include<iostream>
using namespace std;
int main(){
   int n;
   cout<<"Enter a number:";
   cin>>n;

   do
   {
       cout<<"Your number :"<<n<<endl;
       cout<<"Enter again :";
       cin>>n;

   } while (n>0);
 return 0;
}

