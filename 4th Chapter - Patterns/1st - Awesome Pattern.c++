// Rectangle Pattern
// #include<iostream>
// using namespace std;
// int main(){
//     int row, colm;
//     cout<<"Enter the rows and columns :";
//     cin>>row>>colm;

//     for(int i=1;i<=row;i++){
//         for(int j=1;j<=colm;j++){
//         cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// Hollow rectangle
// #include<iostream>
// using namespace std;
// int main(){
//     int row,col;
//     cout<<"Enter the row & column:";
//     cin>>row>>col;
//     for(int i=1; i<=row;i++){
//         for(int j=1;j<=col;j++){
//             if(i==1 || i==row || j==1 || j==col)
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


// inverted half pyramid
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;

//     for(int i=n;i>=1;i--){
//         for (int j = 1; j<=i ; j++)
//         {
//             cout<<"*";
//         }
//         cout<<endl;
//     }
// }

// Half pyramid after 180 Rotation
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number : ";
//     cin>>n;

//     for(int i=1;i<=n;i++){
//         for (int j = 1; j<=n ; j++)
//         {
//             if(j<=n-i){
//                 cout<<" ";
//             }
//             else
//             {
//                 cout<<"*";
//             }
            
//         }
//         cout<<endl;
//     }
// }

// Half pyramid using number
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the numbers :";
//     cin>>n;
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= i;j++)

//         {
//             cout<<i;
//         }
//         cout<<endl;
//     }
    
// }

// Floyd's Triangle
// #include<iostream>
// using namespace std;
// int main(){
//     int n,count=1;
//     cout<<"Enter the number :";
//     cin>>n;

//     for(int i = 1; i<=n;i++){
//         for(int j = 1; j<=i;j++){
//             cout<<count<<" ";
//             count++;
//         }
//         cout<<endl;

//     }
// }


// Butterfly Pattern
#include<iostream>
using namespace std;
int main(){
    int n=4;
    cout<<"Enter the numbers :";
    cin>>n;

    for (int i = 1; i <=n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        int space = 2*n-2*i;
        for (int j = 1; j<=space;j++)
        {
            cout<<" ";
        }
         for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        
       cout<<endl; 
    }
     for (int i = n; i>=1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        int space = 2*n-2*i;
        for (int j = 1; j<=space;j++)
        {
            cout<<" ";
        }
         for (int j = 1; j <= i; j++)
        {
            cout<<"*";
        }
        
       cout<<endl; 
    }
}


