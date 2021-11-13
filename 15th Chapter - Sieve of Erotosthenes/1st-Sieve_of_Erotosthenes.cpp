// #include<iostream>
// using namespace std;

// void primeSieve(int n){

//     int prime[n+1] = {0};

//     for (int i = 2; i <= n; i++)
//     {
//          if (prime[i]==0)
//          {
//             for (int j = i*i; j <= n; j+=i)
//             {
//                 prime[j]=1;
//             }
//          }
//     }
//     for (int i = 2; i <= n; i++)
//     {
//         if (prime[i]==0)
//         {
//             cout<<i<<" ";
//         }
//     }cout<<endl;
// }

// int main(){

//     int n;
//     cout<<"Enter the size of array :-";
//     cin>>n;

//     primeSieve(n);

//     return 0;
// }



// Prime Factorisation using Sieve
// #include<iostream>
// using namespace std;

// void primeFacor(int n){

//     int spf[100] = {0};
//     for (int i = 2; i <= n; i++)
//     {
//         spf[i]=i;
//     }

//     for (int i = 2; i <= n; i++)
//     {
//         if (spf[i]==i)
//         {
//             for (int j = i*i; j <= n; j+=i)
//             {
//                 if (spf[j]==j)
//                 {
//                     spf[j]=i;
//                 }
                
//             }
            
//         }
        
//     }
//     while (n!=1)
//     {
//         cout<<spf[n]<<" ";
//         n=n/spf[n];
//     }   
// }

// int main(){

//     int n;
//     cin>>n;
//     primeFacor(n);

//     return 0;
// }


// Second Attempt 

// Prime numbers using steve of Erotheses

// #include<iostream>
// using namespace std;

// void primeSteve(int n){
//     int arr[100] = {0};
//     for (int i = 2; i <=n; i++)
//     {
//         if (arr[i] == 0)
//         {
//             for (int j = i*i; j <=n; j+=i)
//             {
//                 arr[j] = 1;
//             }
            
//         }
        
//     }

//     for (int i = 2; i <= n ; i++)
//     {
//         if (arr[i] == 0)
//         {
//             cout<<i<<" ";
//         }
        
//     }cout<<endl;
    
// }

// int main(){
//     primeSteve(50);
// }


// Prime Factours using steve
#include<iostream>
using namespace std;

void primeFactors(int n){
    int arr[100] = {0};
    for (int i = 2; i <= n; i++)
    {
        arr[i] = i;
    }
    
    for (int i = 2; i <= n; i++)
    {
        if (arr[i] == i)
        {
            for (int j = i*i; j <= n; j+=i)
            {
                if (arr[j] == j)
                {
                    arr[j] = i;
                }
                
            }
            
        }
        
    }
    
    while (n!=0)
    {
        cout<<arr[n]<<" ";
        n = n/arr[n];
    }
    
}

int main(){
    int n;
    cin>>n;
    primeFactors(n);
}