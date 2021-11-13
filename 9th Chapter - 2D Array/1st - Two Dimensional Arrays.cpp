// 2D Arrays input & Output

// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cin>>n>>m;
//     int a[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin>>a[i][j];
//         }
//     }

//     // printing 2-D Array
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout<<a[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;    
// }


// Searching a Matrix
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
//     cout<<"Enter the row and columns of the Array:";
//     cin>>n>>m;
//     int a[n][m];
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin>>a[i][j];
//         }
//     }

//     int find;
//     cout<<"Enter the you want find in Array :";
//     cin>>find;
    
//     bool flag = false;
//     //Searching the Array
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (a[i][j]==find)
//             {
//                 flag = true;     
//             }
            
//         }
//     }
    
//     if (flag)
//     {
//         cout<<"Yes, it is Present in Array..";
//     }
//     else{
//         cout<<"No, it is Not in Array..";
//     }
//     return 0;
// }

// Spiral Order Matrix
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the row and coloumns of Array:";
    cin>>n>>m;

    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
        }
    }

    // Printing  Spiral Order Matrix
    int colom_st = 0;
    int row_st = 0;
    int colom_nd = m-1;
    int row_nd = n-1;

    while (row_st <= row_nd && colom_st <= colom_nd)
    {
        //for row start
        for (int col = colom_st; col <= colom_nd; col++)
        {
            cout<<a[row_st][col]<<" ";
        }
        
        row_st++;

        //for column start
        for (int row = row_st; row <= row_nd; row++)
        {
            cout<<a[row][colom_nd]<<" "; 
        }
        colom_nd--;

        // row end
        for (int col = colom_nd; col >= colom_st; col--)
        {
            cout<<a[row_nd][col]<<" ";
        }
        
        row_nd--;

        //coloumn end
        for (int row = row_nd; row >= row_st; row--)
        {
            cout<<a[row][colom_st]<<" ";
        }
        
        colom_st++;
        
    }

    
    
    

}
