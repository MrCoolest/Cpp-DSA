// // // linear searching
// #include<iostream>
// using namespace std;

// int linerSearch(int arr[], int n , int key){
//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] == key)
//         {
//             return i;
//         }
//     }
//     return -1;
// }

// int main(){
//     int n;
//     cout<<"Enter the size of Array :";
//     cin>>n;

//     int arr[n];
//     cout<<"Enter the values of array :";
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
    
//     int key;
//     cout<<"Enter the value you want !";
//     cin>>key;

//     cout<<linerSearch(arr,n,key)<<endl;

//     return 0;
// }



// Binar searching
#include<iostream>
using namespace std;

int binarySearch(int arr[], int n, int key){
    int start = 0 , end = n;
    while (start<=end)
    {
        int mid = (start+end)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]>key){
            end = mid-1;
        }else{
            start = mid+1;
        }
    }
    return -1;
}

int main(){
    int n;
    cout<<"Enter the size of array :";
    cin>>n;

    int arr[n];
    cout<<"Enter the values of Array :";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
    int key;
    cout<<"Enter the key you want :";
    cin>>key;

    cout<<binarySearch(arr,n,key)<<endl;
}
