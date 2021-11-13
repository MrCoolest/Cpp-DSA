// #include<iostream>
// using namespace std;
// int main(){
//     int arr[4]={10,20,30,40};

//     // cout<<arr<<endl;
//     cout<<arr[3]<<endl;
//     return 0;
// }

// // Array input from user
// #include<iostream>
// using namespace std;
// int main(){
//     int n;

//     cout<<"Enter the size of Array :";
//     cin>>n;
//     int arr[n];

//     // Input from user
//     cout<<"Enter the values of array :";
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }

//     // Output from user
//     cout<<"Printing the Array :";
//     for (int i = 0; i < n; i++)
//     {
//         cout<<arr[i]<<" ";
//     }
    
//     return 0;
    
// }



// Max ans min From Array
// #include<iostream>
// #include<climits>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the size of array :";
//     cin>>n;

//     int arr[n];
//     cout<<"Enter the values of Array :";
//     for (int i = 0; i < n; i++)
//     {
//         cin>>arr[i];
//     }
    
//     int maxNo = INT_MIN;
//     int minNo = INT_MAX;

//     for (int i = 0; i < n; i++)
//     {
//         maxNo = max(maxNo,arr[i]);
//         minNo = min(minNo, arr[i]);
//     }
    
//     cout<<"Maximum is :"<<maxNo<<endl;
//     cout<<"Minumum is :"<<minNo<<endl;

//     return 0;
// }


// // Runing Sum of Array

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
    
//     int tot = 0;
//     int total[n];

//     for (int i = 0; i < n; i++)
//     {
//         tot += arr[i];
//         total[i] = tot;
//     }
    
//     cout<<"Sum of the array is :";
//     for (int i = 0; i < n; i++)
//     {
//         cout<<total[i]<<" ";
//     }
    
//     return 0;
// }


// Kids with the greatest number of candies

#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Hom many kids have candies :";
    cin>>n;

    int kids[n];
    cout<<"Enter the number of candies kids have :";
    for (int i = 0; i < n; i++)
    {
        cin>>kids[i];
    }
    
    int Max= INT_MIN;
    for (int i = 0; i < n; i++)
    {
        Max = max(Max,kids[i]);
    }

    int Extra = 5;

    int AddingExtra[n];

    for (int i = 0; i < n; i++)
    {
        AddingExtra[i] = kids[i] + Extra;
    }
    
    bool result[n];

    for (int i = 0; i < n; i++)
    {
        if (AddingExtra[i] > Max)
        {
            result[i] = true;
        }
        else
        {
            result[i]=false;
        }
        
    }

    cout<<"Printing the result :";
    for (int i = 0; i < n; i++)
    {
        cout<<result[i]<<" ";
    }
    return 0;
    
}