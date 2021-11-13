// // Check if a number is prime or not
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :";
//     cin>>n;

//     bool flag = 0;
//     for (int i=2;i<sqrt(n);i++)
//     {
//         if (n%i==2){
//             cout<<"Not Prime !";
//             flag =1;
//             break;
//         }
//     }
//         if(flag==0){
//             cout<<"Prime"<<endl;
       
//     }
//     return 0;
// }



// // Reserve a given number n
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number";
//     cin>>n;

//     int rev=0;
//     while(n>0){
//         int lastdigit = n%10;
//         rev = rev*10 + lastdigit;
//         n=n/10;
//     }

//     cout<<rev<<endl;

// }


// Check if number is Armstrong or not
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n;
    cout<<"Enter Your Number :";
    cin>>n;

    int sum = 0;
    int orignal_n = n;
    while(n>0){
        int lastdigit = n%10;
        sum+= pow(lastdigit,3);
        n=n/10;
    }

    if(sum==orignal_n){
        cout<<"The Number is Armstrong"<<endl;
    }
    else
    {
        cout<<"The Number is not Armstrong"<<endl;
    }
    return 0; 
}