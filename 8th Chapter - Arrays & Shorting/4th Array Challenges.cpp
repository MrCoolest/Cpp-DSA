// //max till i
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of Array :";
//     cin>>n;

//     int arr[n]; 
//     cout<<"Enter the values of Array:";
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }

//     // Max till i;
//     int mx = INT_MIN;
//     for (int i = 0; i < n; i++)
//     {
//         mx = max(mx,arr[i]);
//         cout<<mx<<" ";
//     }
    
//     return 0;
// }




// Sum of all Subarrays
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of Array :";
//     cin>>n;
//     int arr[n];
//     cout<<"Enter the values of Array :";
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
    
//     // sum of sub Array
//     int SUM = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cout<<"Sub array"<<endl;

//         for (int j = i; j < n; j++)
//         {
//             SUM+=arr[j];
//             cout<<SUM<<" ";
//         }
//         cout<<endl;
//         SUM = 0;
//     }
//     return 0;
// }

//// Arthimatic array
// #include<iostream>
// #include<cmath>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;

//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
    
//     int ans = 2;
//     int pv = arr[0] - arr[1];
//     int j = 2;
//     int curr = 2;
//     while (j<n)
//     {
//         if(arr[j]-arr[j-1] == pv)
//         {
//             curr++;
//         }
//         else{
//             pv = arr[j] - arr[j-1];
//             curr=2;
//         }
//         ans = max(ans,curr);
//         j++;
//     }
//     cout<<ans<<endl;
//     return 0;
// }

// Record braker
// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the Size of Array :";
//     cin>>n;

//     int a[n+1];
//     a[n] = -1 ;
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }

//     if(n==1){
//         cout<<"1"<<endl;
//         return 0;
//     }
//     int ans=0;
//     int mx = -1;
//     for (int i = 0; i < n; i++)
//     {
//         if (a[i]>mx && a[i]>a[i+1])
//         {
//             ans++;
//         }
//         mx = max(mx,a[i]);   
//     }
//     cout<<ans<<endl;
//     return 0;
// }


// Record braking

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n+1];
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }

    arr[n] = -1;
    if (n==1)
    {
        cout<<"1"<<endl;
    }else{

    int ans = 0;
    int mx = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i]>mx && arr[i] > arr[i+1])
        {
            ans++;
            mx = max(mx,arr[i]);
        }
    }
        cout<<ans<<endl;

    }
    
}