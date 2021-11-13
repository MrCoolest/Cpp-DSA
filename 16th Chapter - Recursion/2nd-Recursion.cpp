// Check if array is sorted or not

// #include<iostream>
// using namespace std;

// bool sorting(int a[], int n){

//     if (n==1)
//     {
//         return true;
//     }
    

//     bool restarray = sorting(a+1, n-1);
//     return (a[0]<a[1] && restarray);
// }

// int main(){
//     int arr[] = {1,2,3,10,5};
//     cout<<sorting(arr,5)<<endl;   

// }


// // Print number till n 1) Decresing order || 2) Increasing order

// #include<iostream>
// using namespace std;

// void Dec(int n){
//     if (n==0)
//     {
//         return;
//     }
    
//     cout<<n<<endl;
//     Dec(n-1);
// }

// void Inc(int n){
//     if (n==0)
//     {
//         return;
//     }

//     Inc(n-1);
//     cout<<n<<endl;
// }

// int main(){
//     int n;
//     cout<<"Enter the number :";
//     cin>>n;

//     Dec(n);
//     Inc(n);

//     return 0;
// }



// // find the first and last occurence of a number in an array

// #include<iostream>
// using namespace std;

// int firstocc(int arr[], int n, int i, int key){
//     if (i == n)
//     {
//         return -1;
//     }
    
//     if (arr[i]==key)
//     {
//         return i;
//     }
    
//     return firstocc(arr, n, i+1, key);
// }

// int lastocc(int arr[], int n, int i, int key){
//     if (i == n)
//     {
//         return -1;
//     }
//     int restarray = lastocc(arr, n, i+1, key);
//     if (restarray!=-1)
//     {
//         return restarray;
//     }

//     if(arr[i]==key){
//         return i;
//     }
//     return -1; 
// }

// int main(){

//     int a[] = {4,2,1,2,5,2,7};
//     cout<<firstocc(a,7,0,2)<<endl; 
//     cout<<lastocc(a,7,0,2)<<endl; 

//     return 0;
// }



// Second Attempt
// Check if an array is sorted or not 
// #include<iostream>
// using namespace std;

// bool sorted(int arr[], int n){
    
//     if (n==1)
//     {
//         return true;
//     }
    

//     bool sortingCheck = sorted(arr+1, n-1);
    
//     return (arr[1] > arr[0] && sortingCheck);
// }

// int main(){
//     int arr[] = {1,2,30,4,5,6,7,8,9};
//     cout<<sorted(arr,9);    
// }



// // Print the number in sequence
// #include<iostream>
// using namespace std;

// void inc(int n){
    
//     if (n ==1)
//     {
//         cout<<"1"<<" ";
//         return;
//     }
    
//    inc(n-1);
//    cout<<n<<" ";
// }   

// void decr(int n){

//     if (n==1)
//     {
//         cout<<"1"<<" ";
//         return;
//     }
    

//     cout<<n<<" ";
//     decr(n-1);
// }

// int main(){
//     int n;
//     cin>>n;
//     cout<<"Increasing order"<<endl;
//     inc(n);
//     cout<<"decreasing order"<<endl;
//     decr(n);

//     return 0;
// }


// Find the first and last occurence of a number in an array

#include<iostream>
using namespace std;

int firstocc(int arr[], int n, int i, int key){

    if (i==n)
    {
        return -1;
    }
    



    if (arr[i] == key)
    {
        return i;
    }
    return firstocc(arr, n, i+1, key);
}

int lastocc(int arr[], int n, int i, int key){
    if (i==n)
    {
        return -1;
    }
    
    int restArray = lastocc(arr, n, i+1, key);
    if (restArray != -1)
    {
        return restArray;
    }
    if (arr[i] == key)
    {
        return i;
    }
    return -1;
}

int main(){
    int arr[] = {4,2,1,2,5,2,7};

    cout<<firstocc(arr, 7,0,2)<<endl;
    cout<<lastocc(arr, 7,0,2)<<endl;

    return 0;
}