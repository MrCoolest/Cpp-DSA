// Sum of fisrt n natural numbers

// int Sum(int n){
//     return n*(n+1)/2;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cout<<"Enter the number :";
//     cin>>n;

//     cout<<"Answer is :"<<Sum(n);
// }


// // Check pythagorian triplet
// #include<bits/stdc++.h>
// using namespace std;

// bool pythagorian(int x, int y, int z){
//     int a = max(x, max(y,z));
//     int b,c;
//     if(a==x){
//         b = y;
//         c = z;
//     }else if(a==y){
//         b = x;
//         c = z;
//     }else{
//         b = x;
//         c = y;
//     }

//     if ((a*a)==((b*b)+(c*c)))
//         return true;
//     return false;    
    
// }

// int main(){
//     int x,y,z;
//     cout<<"Enter three numbers :";
//     cin>>x>>y>>z;
    
//     if (pythagorian(x,y,z))
//     {
//         cout<<"Yess it is Pythagorian!";
//     }else{
//         cout<<"No its not Pythagorian!";
//     }
//     return 0;
// }



// // Conversion
// #include<bits/stdc++.h>
// using namespace std;

// int BinaryToDecimal(int n){
//     int ans = 0;
//     int x = 1;
//     while(n>0){
//         int y = n%10;
//         ans += x*y;
//         x*=2;
//         n/=10;
//     }
//     return ans;
// }


// int OctalToDecimal(int n){
//     int ans = 0;
//     int x = 1;
//     while (n>0)
//     {
//         int y = n%10;
//         ans+= x*y;
//         x*=8;
//         n/=10;
//     }
    
//     return ans;
// }

// int HexaToDecimal(string n){
//     int ans=0;
//     int x = 1;
//     int s = n.size();

//     for (int i = s-1; i>= 0 ; i--)
//     {
//         if (n[i]>='0' && n[i] <= '9')
//         {
//             ans += x*(n[i]-'0');
//         }
//         else if(n[i]>='A' && n[i] <= 'F')
//         {
//             ans += x*(n[i]-'A'+10);
//         }
//         x*=16;
//     }
//     return ans;
// }

// int DecimalToBinary(int n){
//     int x =1 ;
//     int ans = 0;

//     while (x <= n){
//         x *= 2;
//     }
//     x/=2;

//     while(x>0){
//         int lastDigit = n/x;
//         n -= lastDigit*x;
//         x/=2;
//         ans = ans*10 + lastDigit;
//     }
//     return ans;
// }

// int DecimalToOctal(int n){
//         int x = 1;
//         int ans = 0;
//         while(x<=n)
//         {
//             x*=8;
//         }
//         x/=8;
        
//         while(x>0)
//         {
//             int lastdigit = n/x;
//             n -= lastdigit*x;
//             x/=8;
//             ans = ans*10 + lastdigit;
//         }
//     return ans;        
// }

// string DecimalToHexa(int n){
//     int x = 1;
//     string ans = "";
//     while (x<=n)
//     {
//         x*=16;
//     }
//     x/=16;

//     while (x>0)
//     {
//         int last = n/x;
//         n -= last*x;
//         x /= 16;

//         if (last <= 9)
//         {
//             ans = ans + to_string(last); 
//         }else{
//             char c = 'A' + last - 10;
//             ans.push_back(c);
//         }
//     }
//     return ans;
// }

// int main(){
//     int num;
//     // string num;
//     cout<<"Enter the number :";
//     cin>>num;

//     // cout<<"Binart to Decimal "<<BinaryToDecimal(num)<<endl;
//     // cout<<"Ocatal to Decimal "<<OctalToDecimal(num)<<endl;
//     // cout<<"HexaDeciaml To Decimal :"<<HexaToDecimal(num)<<endl;
//     cout<<"Decimal to Binary :"<<DecimalToBinary(num)<<endl;
//     cout<<"Decimal to Octal :"<<DecimalToOctal(num)<<endl;
//     cout<<"Decimal to HexaDecimal :"<<DecimalToHexa(num)<<endl;
// }



// Add Two Binary numbers

#include<bits/stdc++.h>
using namespace std;

int reverse(int n){
    int ans = 0;
    while(n>0){
        int lastDigit = n%10;
        ans = ans*10 + lastDigit;
        n/=10;
    }
    return ans;
}

int addBinary(int a, int b){
    int ans = 0;
    int prevCarry = 0;
    while((a>0) && (b>0)){
        if (a%2==0 && b%2==0)
        {
            ans = ans*10 + prevCarry;
            prevCarry = 0;
        }
        else if ((a%2==0 && b%2==1) || (a%2==1 && b%2==0))
        {
            if (prevCarry == 1)
            {
                ans = ans*10 + 0;
                prevCarry = 1;
            }else{
                ans = ans*10 + 1;
                prevCarry = 0;
            }
        }
        else{
            ans = ans*10 + prevCarry;
            prevCarry = 1;
        }
        a/=10;
        b/=10;
    }

    while (a>0)
    {
        if (prevCarry==1)
        {
            if (a%2==1)
            {
                ans = ans*10+0;
                prevCarry = 1;
            }
            else
            {
                ans = ans*10 +1;
                prevCarry = 0;
            }
        }
        else
        {
            ans = ans*10+(a%2);
        }
        a/=10;
    }

    while (b>0)
    {
        if (prevCarry==1)
        {
            if (b%2==1)
            {
                ans = ans*10+0;
                prevCarry = 1;
            }
            else
            {
                ans = ans*10 +1;
                prevCarry = 0;
            }
        }
        else
        {
            ans = ans*10+(b%2);
        }
        b/=10;
    }
    
    if (prevCarry ==1)
    {
        ans = ans*10 +1;
    }
    
    ans = reverse(ans);

    return(ans);
    
}

int main(){

    int a,b;
    cout<<"Enter two binary numbers to add :";
    cin>>a>>b;

    cout<<addBinary(a,b)<<endl;
}