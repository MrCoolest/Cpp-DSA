// Check if a number is prime or not

// #include<iostream>
// using namespace std;
// int main(){
//     long n;
//     cout<<"Enter a number to check  number is Prime or Not : ";
//     cin>>n;

//     bool flag = true;

//     for (long i = 2; i < n; i++)
//     {
//         if (n%i==0)
//         {
//             cout<<n<<" is Non-Prime number !";
//             flag = false;
//             break;
//         }
//     }

//     if (flag)
//     {
//         cout<<n<<" is a Prime number !";
//     }
    
//     return 0;

// }



// Reverse number
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a nimber :";
//     cin>>n;

//     while (n>0)
//     {
//         int rem = n%10;
//        cout<<rem<<endl;
//         n=n/10;
//     }
//     return 0;
// }

// // Check if a number is Armstrong number

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number :";
//     cin>>n;

//     int m = n;
//     int a =0 ;
//     while(n>0){
//         int rem = n%10;
//         a += rem*rem*rem;
//         n = n/10;
//     }
//     if(a==m){
//         cout<<"Yes, it is ArmStrong !";
//     }else{
//         cout<<"No, its not ArmStrong !";
//     }

//     return 0;
// }

