// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }

//     //for printing sub array
//     int max_sub = INT_MIN;
//     int sum = 0;
//     for (int i = 0; i < n; i++)
//     {
//         for (int j = i; j < n; j++)
//         {
//             for (int k = i; k <= j; k++)
//             {
//                 sum += a[k];
//                 // cout<<a[k]<<" ";
//             }
//             cout<<endl;
//             max_sub = max(max_sub, sum);    
//             sum =0 ;
//         }
//     }
//     cout<<max_sub<<endl;
//     return 0;
    
// }


// 2nd Way 
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int a[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin>>a[i];
//     }

//     int cur[n+1];
//     cur[0] = 0;
//     for (int i = 1; i <= n ; i++)
//     {
//         cur[i] = cur[i-1] + a[i-1];
//     }
    
//     int maxSum = INT_MIN;

//     for (int i = 1; i <= n; i++)
//     {
//         int sum = 0;
//         for (int j = 0; j < i; j++)
//         {
//             sum = cur[i] - cur[j];
//             maxSum = max(maxSum, sum);
//         }
//     }
    
//     cout<<maxSum;
// }


// // Kadane's Algorithms
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//      int n;
//      cin>>n;
//      int a[n];
//      for (int i = 0; i < n; i++)
//      {
//           cin>>a[i];
//      }
     
//      int curr_Sum = 0;
//      int max_sum = INT_MIN;

//      for (int i = 0; i < n; i++)
//      {
//           curr_Sum+=a[i];
//           if (curr_Sum < 0)
//           {
//                curr_Sum=0;
//           }
//           max_sum = max(max_sum,curr_Sum);
//      }
//      cout<<max_sum<<endl;
//      return 0;
// }


// Maximum Circular Subarray Sum

// #include<iostream>
// #include<climits>
// using namespace std;

// int kaden(int a[], int n){
//      int curr_sum = 0;
//      int max_sum = INT_MIN;
//      for (int i = 0; i < n; i++)
//      {
//           curr_sum += a[i];
//           if (curr_sum < 0)
//           {
//                curr_sum = 0;
//           }
//           max_sum = max(max_sum, curr_sum);
//      }
//      return max_sum;
// }

// int main(){
//      int n;
//      cin>>n;
//      int a[n];
//      for (int i = 0; i < n; i++)
//      {
//           cin>>a[i];
//      }


//      int wrapsum;
//      int nonwrapsum;

//      nonwrapsum = kaden(a,n);
//      int totalsum = 0;
//      for (int i = 0; i < n; i++)
//      {
//           totalsum +=a[i];
//           a[i] = -a[i];
//      }

//      wrapsum = totalsum + kaden(a,n);

//      cout<<max(wrapsum, nonwrapsum)<<endl;

//      return 0;
     
// }

// Pair Sum Problem

// #include<iostream >
// #include<climits>
// using namespace std;

// bool Pairsum(int arr[], int n, int k){
//     for (int i = 0; i < n-1; i++)
//     {
//         for (int j = i+1; j < n; j++)
//         {
//             if (arr[i]+arr[j]==k)
//             {
//                 cout<<i<<" "<<j<<endl;
//                 return true;
//             }
//         }
//     }
//     return false;
// }

// int main(){
//     int arr[] = {2,4,7,11,14,16,20,21};
//     int k=31;

//     cout<<Pairsum(arr,8,k)<<endl;

//     return 0;

//     }


// Pair Sum Problem 2nd Way 
// big O(n)

// #include<iostream>
// #include<climits>
// using namespace std;

// bool Pairsum(int arr[], int n, int k){
//     int low = 0;
//     int high = n-1 ;
//     while (low<high)
//     {
//         if (arr[low] + arr[high] == k)
//         {
//             cout<<low<<" "<<high<<endl;
//             return true;
//         }
//         else if (arr[low]+arr[high]>k)
//         {
//             high--;
//         }
//         else
//         {
//             low++;
//         }
//     }
//     return false;
// }

// int main(){
//     int arr[] = {2,4,7,11,14,16,20,21};
//     int k=31;

//     cout<<Pairsum(arr,8,k)<<endl;

//     return 0;

//     }
