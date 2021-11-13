// // Print all Prime between 2 given number..
// #include<iostream>
// #include<math.h>
// using namespace std;

// bool isPrime(int value){
//     for(int i=2;i<=sqrt(value);i++){
//         if (value%i==0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int main(){
//     int a,b;
//     cout<<"Enter two number :";
//     cin>>a>>b;

//     for(int i=a;i<=b;i++){
//         if(isPrime(i)){
//             cout<<"Prime number is "<<i<<endl;
//         }
//     }
//     return 0;
// }



// // Fibenacci Sequence
// #include<iostream>
// using namespace std;

// void fib(int n){
//     int t1 = 0;
//     int t2 = 1;
//     int next;

//     for(int i=1;i<=n;i++){
//         cout<<t1<<endl;
//         next = t1 + t2;
//         t1 = t2;
//         t2 = next;
//     }
//     return;
// }

// int main(){
//     int n;
//     cout<<"Enter the number :";
//     cin>>n;
//     fib(n);
// }



// // Factorial of a number n
// #include<iostream>
// using namespace std;

// int fact(int num){
//     int  factorial = 1;
//     for(int i=2;i<=num;i++){
//         factorial*=i;
        
//     }
//     return factorial;
// }


// int main(){
//     int n;
//     cout<<"Enter the number to get factorial of that number :";
//     cin>>n;

//     int ans = fact(n);
//     cout<<ans<<endl;
// }



// // Calculate nCr 
// #include<iostream>
// using namespace std;

// int fact(int num){
//     int  factorial = 1;
//     for(int i=2;i<=num;i++){
//         factorial*=i;
        
//     }
//     return factorial;
// }

// int main(){
//     int n,r;
//     cout<<"Enter two valuse to find nCr :";
//     cin>>n>>r;

//     int ans = fact(n)/(fact(r)*fact(n-r));
//     cout<<ans<<endl;
//     return 0;
// }



// Pascal Triangle


#include<iostream>
using namespace std;

int fact(int num){
    int  factorial = 1;
    for(int i=2;i<=num;i++){
        factorial*=i;
        
    }
    return factorial;
}

int main(){

    int n;
    cout<<"Enter a Number:";
    cin>>n;

    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
            cout<<fact(i)/(fact(j)*fact(i-j))<<" ";
        }

        cout<<endl;
    }

return 0;
}
