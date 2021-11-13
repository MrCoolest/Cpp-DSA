// Operators in C++
// #include<iostream>
// using namespace std;

// int main(){
//     int i = 1;
//     int j;
//     // i++ (Post incrementer) // ++i (Pre incrementar)
//     j = i++ + ++i;
//     cout<<j<<endl;
//     return 0;
// }

// 2nd example

// #include<iostream>
// using namespace std;

// int main(){
//     int i = 1;
//     int j = 2;
//     int k;
//     //  1 + 2 +  1  + 2   +  3  +  4 = 13
//     k = i + j + i++ + j++ + ++i + ++j;
//     cout<<"i = "<<i<<" j = "<<j<<" k = "<<k<<endl;

//     return 0;
// }

// 3rd example

// #include<iostream>
// using namespace std;

// int main(){
//     int i = 0;
//     int j;
//     //   0  -  0  +  1  -  1
//     j = i++ - --i + ++i - i--;
     
//     cout<<j<<endl;
//     return 0;
// }

// 4th example
// #include<iostream>
// using namespace std;

// int main(){
//     int i = 1, j = 2, k=3;
//     int m = i-- - j-- - k--;
//     cout<<i<<endl;
//     cout<<j<<endl;
//     cout<<k<<endl;
//     cout<<m<<endl;
//     return 0;
// }

// 5th example
#include<iostream>
using namespace std;

int main(){
    int i = 10, j=20, k;
    //  10  -  9  +  19 - 20  +   9 - 20  +  10 - 19
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
    
    cout<<i<<endl; //10
    cout<<j<<endl; //20
    cout<<k<<endl; //-20

    return 0;
}