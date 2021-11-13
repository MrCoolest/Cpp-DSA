// #include<iostream>
// #include<string>
// #include<algorithm>
// using namespace std;
// int main(){
    // string a = "sfhserhJHjjjJBVJb";

    // cout<<"s" - "S"<< endl;

    // // Convert into uppercase
    // for (int i = 0; i < a.length(); i++)
    // {
    //     if(a[i] >= 'a' && a[i] <= 'z'){
    //         a[i] -= 32;
    //     }
    // }
    // cout<<a<<endl;

    // // Convert into Lowercase
    // for (int i = 0; i < a.length(); i++)
    // {
    //     if(a[i] >= 'A' && a[i] <= 'Z'){
    //         a[i] += 32;
    //     }
    // }
    // cout<<a<<endl;

    // string s1 = "gfbsetbhsrt";

    // transform(s1.begin(),s1.end(), s1.begin(), ::toupper);
    // cout<<s1<<endl;
    // transform(s1.begin(),s1.end(), s1.begin(), ::tolower);
    // cout<<s1<<endl;


    // string num = "53214";
    // sort(num.begin(), num.end(),greater<int>());
    // cout<<num[0]<<endl;

//     string s = "fdbsrhnbsrneynsdvom;asb[oanasdnvpinnsmzw";

//     int freq[26];
//     for (int i = 0; i < 26; i++)
//     {
//         freq[i] = 0;
//     }

//     for (int i = 0; i < s.length(); i++)
//     {
//         freq[s[i]-'a']++;  
//     }
    
//     char ans = 'a';
//     int maxf = 0;

//     for (int i = 0; i < 26; i++)
//     {
//         if (freq[i]>maxf)
//         {
//             maxf = freq[i];
//             ans = i+'a';
//         }
        
//     }
    
//     cout<<maxf<<" "<<ans<<endl;


//  return 0;   
// }

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){

    // string st = "dfsgersfersafae";

    // // cout<<'d'-'D';
    // //Convert to upper case
    // for (int i = 0; i < st.size(); i++)
    // {
    //     if (st[i]>= 'a' && st[i]<='z')
    //     {
    //         st[i]-=32;
    //     }
                
    // }
    
    // cout<<st;

    // st = "SFDGSEFDGSDFHDGFGVZD";
    // //Convert to lower case
    // for (int i = 0; i < st.size(); i++)
    // {
    //     if (st[i]>= 'A' && st[i]<='Z')
    //     {
    //         st[i]+=32;
    //     }
                
    // }
    
    // cout<<st;


    // string s = "fddfaewsfa";

    // transform(s.begin(), s.end(), s.begin(),::toupper);
    // cout<<s<<endl;
    // transform(s.begin(), s.end(), s.begin(),::tolower);
    // cout<<s<<endl;

    // string num = "156546161655519";
    // sort(num.begin(),num.end(), greater<int>());
    // cout<<num<<endl;


    // string s =  "dsvfdvfdvfgfbzvfdfsd";

    // int freq[26];

    // for (int i = 0; i < 26; i++){
    //     freq[i] = 0;
    // }
    
    // for (int i = 0; i < s.size(); i++)
    // {
    //     freq[s[i] - 'a']++;
    // }
    
    // char ans ='a';
    // int maxf = 0;

    // for (int i = 0; i < 26; i++)
    // {
    //     if(freq[i]>maxf)
    //     {
    //         maxf = freq[i];
    //         ans = i+'a';
    //     }
        
    // }
    // cout<<maxf<<" "<<ans<<endl;



    //upper case max Frequency

//     string s1 = "FDSFSEDFDFTGRERSKDF";

//     // cout<<'F'-'f'<<endl;
//     // cout<<char(3+'A')<<endl;
//     int maxfreq[26];

//     for (int i = 0; i < 26; i++)
//     {
//         maxfreq[i] = 0;
//     }

//     for (int i = 0; i < s1.size(); i++)
//     {
//         maxfreq[s1[i] - 'A']++;
//     }
    
//     char ans = 'A';
//     int maxf =0;

//     for (int i = 0; i < 26; i++)
//     {
//         if (maxfreq[i]>maxf)
//         {
//             maxf = maxfreq[i];
//             ans = i+'A';
//         }
        
//     }
//     cout<<ans<<" "<<maxf<<endl;

//Additional question
    string s = "asaaaaaaaasssaaadsssss";
    int n = s.size();

    char ans[100];
    ans[0] = s[0];

    int cnt=1;
    for (int i = 1; i < n; i++)
    {
        if (s[i] != s[i-1])
        {
            ans[cnt] = s[i], cnt++;
        }
        
    }
     
        cout<<ans<<endl;

    return 0;
}

