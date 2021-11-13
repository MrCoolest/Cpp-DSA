// // Print a solid rectangle
// #include<iostream>
// using namespace std;
// int main(){
//     int rows, colm;
//     cout<<"Enter the rows :"; cin>>rows;
//     cout<<"Enter the coloumns :"; cin>>colm;

//     for (int i = 1; i <= rows; i++)
//     {
//         for (int j = 1; j <= colm; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
//     return 0;
// }


// // Print a hallow rectangle
// #include<iostream>
// using namespace std;

// int main(){
//     int row,colm;
//     cout<<"Enter the rows";
//     cin>>row;
//     cout<<"Enter the coloums";
//     cin>>colm;

//     for (int i = 1; i <= row; i++)
//     {
//         for (int j = 1; j <= colm ; j++)
//         {
//             if (i==1 || i==row || j==1 || j==colm)
//             {
//                 cout<<"* ";
//             }
//             else
//             {
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
    
//     return 0;

// }

// // Print half Pyramid Patterns using stars
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :";
//     cin>>n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
    
// }


// Prin an inverted Half pyramid
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :";
//     cin>>n;

//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// Print Half Pyramid after 180 degree rotation
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :";
//     cin>>n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//            if (j<= n-i)
//            {
//                cout<<" ";
//            }
//            else
//            {
//                cout<<"*";
//            }
           
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// // Print Half Pyramid using numbers
// #include<iostream>
// using namespace std;
// int main(){
//     int n;

//     cout<<"Enter the number :";
//     cin>>n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }




// // Print Inverted Half Pyramid using numbers
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :";
//     cin>>n;

//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// // Print Half Pyramid using numbers - 2

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :";
//     cin>>n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// Print Inverted Half Pyramid using numbers - 2
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :";
//     cin>>n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n-i+1 ; ++j)
//         {
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// // Print Floyd's Triangle
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :";
//     cin>>n;

//     int num = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1 ; j <= i; j++)
//         {
//             cout<<num<<" "; 
//             num++;
//         }
//         cout<<endl;
          
//     }
//     return 0;
// }




// Print 0-1 Pattern
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :";
//     cin>>n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i; j++)
//         {
//             if ((i+j)%2==0)
//             {
//                 cout<<1<<" ";
//             }
//             else
//             {
//                 cout<<0<<" ";
//             }
            
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// Pattern - 5 Palindromic pattern

#include<iostream>
using namespace std;
int main(){
    int n;

    cout<<"Enter the number :";
    cin>>n;
    
    for (int i = 1; i <= n; i++)
    {
        int j;
        for ( j = 1; j <= n-i; j++)
        {
            cout<<"  ";
        }
        int k = i;
        for ( ; j <= n; j++)
        {
            cout<<k--<<" ";
            // k--;
        }
        k=2;
        for ( ; j <= (n+i-1) ; j++)
        {
            // k++;
            cout<<k++<<" ";
        }
    
        
        cout<<endl;

    }
    return 0;
}




