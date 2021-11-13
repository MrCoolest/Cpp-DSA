// // Transpose of matrix
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
//             // cout<<i<<j<<" ";
//         }
//         // cout<<endl;
//     }

//     //transpose
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cout<<a[j][i]<<" ";
//             // cout<<j<<i<<" ";
//         }
//         cout<<endl;
//     }
    
//     return 0;
    
// }


// // Matrix Multiplication
// #include<iostream>
// using namespace std;
// int main(){
//     int n1,n2,n3;
//     cout<<"Enter the dimesions of 2-D arrays :";
//     cin>>n1>>n2>>n3;
//     int arr1[n1][n2];
//     int arr2[n2][n3];

//     //First Array input
//     cout<<"Enter the first array"<<endl;
//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n2; j++)
//         {
//             cin>>arr1[i][j];
//         }
        
//     }

//     //Second Array input
//     cout<<"Enter the second array"<<endl;
//     for (int i = 0; i < n2; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             cin>>arr2[i][j];
//         }
        
//     }

//     //printing the Array one
//     cout<<"Printing the array one :"<<endl;
//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n2; j++)
//         {
//             cout<<arr1[i][j]<<" ";
//         }
//         cout<<endl;
//     }

//     //printing th Array two
//     cout<<"Printing the array two :"<<endl;
//     for (int i = 0; i < n2; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             cout<<arr2[i][j]<<" ";
//         }
//         cout<<endl;
//     }
    
//     int ans[n1][n3];
//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             ans[i][j] = 0; 
//         }
        
//     }

//     // cout<<"Printing the answer before :"
//     // for (int i = 0; i < n1; i++)
//     // {
//     //     for (int j = 0; j < n3; j++)
//     //     {
//     //         cout<<ans[i][j]<<endl;
//     //     }
//     // }
    
//     cout<<"Printing the calculation"<<endl;
//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             for (int k = 0; k < n2; k++)
//             {
//                 ans[i][j] += arr1[i][k]*arr2[k][j];
//                 cout<<ans[i][j]<<" ";
//                 // cout<<"Running loop"<<endl;;
//             }
            
//         }
        
//     }
    
//     cout<<"Printing the Answer Array :"<<endl;
//     for (int i = 0; i < n1; i++)
//     {
//         for (int j = 0; j < n3; j++)
//         {
//             cout<<ans[i][j]<<" ";
//                 // cout<<"Running loop 2"<<endl;;
//         }
//         cout<<endl;
//     }

//     return 0;
    
// }

// Matrix Search
// Brute force Approch
// #include<iostream>
// using namespace std; 
// int main(){
//     int n,m;
//     cout<<"Enter the dimensions of 2-D array :";
//     cin>>n>>m;

//     int a[n][m];

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin>>a[i][j];
//         }
        
//     }

//     int target;
//     cout<<"Enter the target :";
//     cin>>target;

//     bool flage = false;


//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             if (a[i][j] == target)
//             {
//                 flage = true;
//             }
            
//         }
        
//     }
    
//     if (flage)
//     {
//         cout<<target<<" is in Array !";
//     }
//     else{
//         cout<<target<<" is not in Array !";

//     }
//}


// Optimised Approach
// #include<iostream>
// using namespace std;
// int main(){
//     int n,m;
    
//     cout<<"Enter the rows and columns of the array :"; 
//     cin>>n>>m;
    
//     int arr[n][m];
    
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < m; j++)
//         {
//             cin>>arr[i][j];
//         }
//     }
//     int target;
 
//     cout<<"Enter the target :";
//     cin>>target;

//     int r = 0, c = m-1;
//     bool found = false;

//     while (r<n&& c>=0)
//     {
//         if (arr[r][c] == target)
//         {
//             found = true;
//         }
//         if (arr[r][c]>target)
//         {
//             c--;
//         }
//         else
//         {
//             r++;
//         }    
//     } 

//     if (found)
//         {
//             cout<<"Target is found";
//         }
//         else
//         {
//             cout<<"Not Found";
//         }  
//     return 0;  

// }
