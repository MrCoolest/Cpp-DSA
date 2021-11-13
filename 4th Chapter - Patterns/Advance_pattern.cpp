

// Print Diamond using Stars : Given n, print diamond with 2*n rows.
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number"; cin>>n;

//     for (int i = 1; i <= n; i++)
//     {
//         // int j;
//         for (int j = 1; j <= n-i; j++)
//         {
//             cout<<"  ";
//         }
        
//         for (int j = 1 ; j <= (i*2)-1 ; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }

//     for (int i = n; i >= 1; i--)
//     {
//         // int j;
//         for (int j = 1; j <= n-i; j++)
//         {
//             cout<<"  ";
//         }
        
//         for (int j = 1 ; j <= (i*2)-1 ; j++)
//         {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }   

// }



// // // Print Hollow Diamond using Stars
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :"; cin>>n;

//     //  first half
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n-i ; j++)
//         {
//             cout<<"  "; 
//         }

//         for (int j = 1; j <= (i*2)-1; j++)
//         {
//             if (j==1 || j==(i*2)-1)
//             {
//                 cout<<"* ";
//             }else
//             {
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }

// // Second Half Pattern

//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <= n-i ; j++)
//         {
//             cout<<"  "; 
//         }
//         for (int j = 1; j <= (i*2)-1; j++)
//         {
//             if (j==1 || j==(i*2)-1)
//             {
//                 cout<<"* ";
//             }else
//             {
//                 cout<<"  ";
//             }
//         }
//         cout<<endl;
//     }
    
// }




// // // Print Hollow Diamond Inscribed in a Rectangle

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :";
//     cin>>n;

//     int space = (2*n-1)/2;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= space; j++)
//         {
//             cout<<"* ";
//         }
//         for(int j=1; j<=(i*2)-1 ; j++)
//         {
//             if (j==1 || j==(i*2)-1)
//             {
//                 cout<<"* ";
//             }else
//             {
//                 cout<<"  ";
//             }
//         }
//         for (int j = 1; j <= space; j++)
//         {
//             cout<<"* ";
//         }
        
//        cout<<endl; 
//        space --;
//     }

//     space = 0;

//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1; j <= space; j++)
//         {
//             cout<<"* ";
//         }
//         for(int j=1; j<=(i*2)-1 ; j++)
//         {
//             if (j==1 || j==(i*2)-1)
//             {
//                 cout<<"* ";
//             }else
//             {
//                 cout<<"  ";
//             }
//         }
//         for (int j = 1; j <= space; j++)
//         {
//             cout<<"* ";
//         }
        
//        cout<<endl; 
//        space ++;
//     }
    
// }




// // // Rhombus Pattern
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :";
//     cin>>n;

//     for (int  i = 1; i <= n; i++)
//     {
        
//         for (int j = 1; j <= n-i; j++)
//         {
//             cout<<" ";
//         }

//         for (int j=1; j <= n; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


// Print Hollow Rhombus

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :";
//     cin>>n;

//     for (int  i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n-i ; j++)
//         {
//             cout<<"  ";
//         }
//         for (int j = 1; j <= n; j++)
//         {
//             if (j==1 || j==n || i==1 || i == n)
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
// }



// Pyramid pattern for Numbers
// #include<iostream>
// using namespace std;
// int main(){
//     int  n;
//     cout<<"Enter the number :";
//     cin>>n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n-i; j++)
//         {
//             cout<<" ";
//         }
        
//         for (int j = 1; j <= i ; j++)
//         {
//             cout<<i<<" ";
//         }
//         cout<<endl;
//     }

// }



// Pyramid Pattern for Numbers - 2
// #include<iostream>
// using namespace std;
// int  main(){
//     int n;
//     cout<<"Enter the number :";  cin>>n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n-i; j++)
//         {
//             cout<<" ";
//         }
//         for (int j = 1; j <= i; j++)
//         {
//             cout<<j<<" ";
//        }
//         cout<<endl;
//     }
    
// }



// Print Sold Butterfly Pattern

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :";
//     cin>>n;

// // First half
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1;  j <= i ; j++)
//         {
//             cout<<"*";
//         }
//         for (int j = 1; j <= (n*2)-(i*2) ; j++)
//         {
//             cout<<" ";
//         }
//         for (int j = 1; j <= i ; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// // Second Half 

//     for (int i = n; i >= 1; i--)
//     {
//         for (int j = 1;  j <= i ; j++)
//         {
//             cout<<"*";
//         }
//         for (int j = 1; j <= (n*2)-(i*2) ; j++)
//         {
//             cout<<" ";
//         }
//         for (int j = 1; j <= i ; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }


// Print Hollow Butterfly Pattern

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :";
//     cin>>n;

// // First Half
//     for (int i = 1; i <= n ; i++)
//     {
//         for (int j = 1; j <=  i ; j++)
//         {
//             if ( j==1 || j==i)
//             {
//                 cout<<"*";
//             }
//             else
//             { cout<<" ";}
//         }

//         for (int j = 1; j <= (n*2)-(i*2) ; j++)
//         {
//             cout<<" ";
//         }
        
//          for (int j = 1; j <=  i ; j++)
//         {
//             if ( j==1 || j==i)
//             {
//                 cout<<"*";
//             }
//             else
//             {
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }
    
// // Second Half

//      for (int i = n; i >= 1 ; i--)
//     {
//         for (int j = 1; j <=  i ; j++)
//         {
//             if ( j==1 || j==i)
//             {
//                 cout<<"*";
//             }
//             else
//             {
//                 cout<<" ";
//             }
//         }

//         for (int j = 1; j <= (n*2)-(i*2) ; j++)
//         {
//             cout<<" ";
//         }
        
//          for (int j = 1; j <=  i ; j++)
//         {
//             if ( j==1 || j==i)
//             {
//                 cout<<"*";
//             }
//             else
//             {
//                 cout<<" ";
//             }
//         }
//         cout<<endl;
//     }

// }


// Print Pascal¶s Triangle

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the numbers :";
    cin>>n;

    int k = 1;
    for (int  i = 0; i < n; i++)
    {
        for (int j = 1 ; j <= n-i ; j++)
        {
           cout<<" ";
        }

        for (int j = 0; j <= i ; j++)
        {
          
             if (j==0 || i ==0)
            {
                k = 1;
                cout<<k<<" ";
            }
            else
            {
                k = k*(i-j+1)/j;
                cout<<k<<" ";
            }
        }
        cout<<endl;
    }

    return 0;

}


// // Zig-Zag Pattern
// #include<iostream>
// using namespace std;
// int main(){
//     int n;

//     cout<<"Enter the name :";
//     cin>>n;

//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= (n*n); j++)
//         {
//             if ((i+j)%4==0 || (i==2 && j%4==0))
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
    
// return 0;

// }


