// // Calculating the factorial of a number n;
// #include<iostream>
// using namespace std;
// int mian(){
//     int n;
//     cout<<"Enter the number :";
//     cin>>n;
//     int fac = 1;

//     for (int i = 1; i <= n; i++)
//     {
//         fac= fac * i;
//     }

//     cout<<"Factorial of "<<n<<" is :"<<fac <<endl;

//     return 0;
// }

// print first n term of Fibonacci series with starting terms as 0,1

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :";
//     cin>>n;

//     int a = 0, b = 1,current;


// if (n==1)
// {
//         cout<<0<<endl;
// }else if (n==2)
// {
//     cout<<0<<endl;
//     cout<<1<<endl;
// }else
// {
//     cout<<0<<endl;
//     cout<<1<<endl;
//     for (int i = 3; i <= n; i++)
//     {   
//         current = a+b;
//         cout<<current<<endl;
//         a=b;
//         b=current;
//     }
// }
//     return 0;
    
// }

// // Reversing a number
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :";
//     cin>>n;

//     int rev = 0;
//     while (n>0)
//     {
//         int rem = n%10;
//         rev = rev*10+rem;
//         n = n/10;
//     }
//     cout<<rev<<endl;
//     return 0;
// }



// Write a prigfram to print the ASCII Value of any given charcter

// #include<iostream>
// using namespace std;
// int main(){
//     char input;
//     cout<<"Enter any character :";
//     cin>>input;

//     char a = ' ' ; 

//     for (int i = 32; i <= 126 ; i++)
//     {
//         if (input == a)
//         {
//             cout<<"The Decimal ASCII Value of given Character is :"<<i<<endl;
//             break;
//         }else
//         {
//             a++;
//         }
    
//     }
//     return 0;
// }

// Write a program to display all factorial of a number
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter a number :";
//     cin>>n;

//     for (int i = 1; i <= n; i++)
//     {
//         if (n%i==0)
//         {
//             cout<<i<<" ";
//         }
//     }
//     return 0;
// }


// Write a program to find whether a given character is a vowel or a consonant

#include<iostream>
using namespace std; 
int main(){
    char input;
    cout<<"Enter a character to check its vowel or consonant :";
    cin>>input;


    if ( input == 'a' || input == 'A' || input == 'e' || input == 'E' || input == 'i' || input == 'I' || input == 'o' || input == 'O' || input == 'u' || input == 'U')
    {
        cout<<input<<" is Vowel !";
    }
    else
    {
        cout<<input<<" is Consonant !";
    }
    
    return 0;
}