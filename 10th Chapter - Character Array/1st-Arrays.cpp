//Character Array
// #include<iostream>
// using namespace std;
// int main(){
//     char arr[100] = "Ankit";
//     int i=0;

//     while (arr[i] != '\0')
//     {
//         cout<<arr[i];
//         i++;
//     }
    
//     return 0;
// }



// // To take input
// #include<iostream>
// using namespace std;
// int main(){
//     char arr[100];
//     cin>>arr;

//     cout<<arr;
//     return 0;
// }


// // Check Palindrome
// #include<iostream>
// using namespace std; 
// int main(){
//     int n;
//     cin>>n;

//     char arr[n+1];
//     cin>>arr;

//     bool check = true;

//     for (int i = 0; i < n; i++)
//     {
//         if (arr[i] != arr[n-1-i])
//         {
//             check=false;
//             break;
//         }
//     }

//     if (check){
//         cout<<"Yes it is Palindrome Array !";
//     }
//     else{
//         cout<<"NO it is not Palindrome Array !";
//     }        
//     return 0;
// }



//Anwer is wrong
//Max length in a Sentence
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();

    
    char a[n+1];
    cin.getline(a,n);
    cin.ignore();

    int i =0 , curr= 0, maxlen = 0, maxst = 0, st =0;
    while (true)
    {
        if (a[i] == ' ' || a[i] == '\0')
        {
            if (curr> maxlen)
            {
                maxlen = curr;
                maxst = st;
            }
            curr = 0;
            st = i+1;
        }
        else{
            curr++;
            // cout<<curr<<endl;
        }
        
        if (a[i] == '\0')
        {
            break;
        }
        i++;
    }

    cout<<maxlen<<endl;;

    for (int i = 0; i < maxst; i++)
    {
        cout<<a[maxst+i];
    }
    
    
}