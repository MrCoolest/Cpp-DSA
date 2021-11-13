// Reverse a string using resursion

// #include<iostream>
// using namespace std;

// void reverse(string s){

//     // Base Case
//     if (s.length() == 0)
//     {
//         return;
//     }

//     string res = s.substr(1);
//     reverse(res);
//     cout<<s[0];
// }

// int main(){
//     string name = "Ankit"; 
//     reverse(name);
//     return 0;
// }


// Replace pi with 3.14 in string

// #include<iostream>
// using namespace std;

// void replacePi(string s){

//     // Base Case
//     if (s.length()==0)
//     {
//         return;
//     }
    
//     if (s[0]=='p' && s[1]=='i')
//     {
//         cout<<"3.14";
//         replacePi(s.substr(2));
//     }else{
//         cout<<s[0];
//         replacePi(s.substr(1));
//     }

// }

// int main(){
//     string s = "pizxsfdsfpisafcaspiscpixvppzpivdip";
//     replacePi(s);
//     return 0;
// }



// Tower of Hanoi
// #include<iostream>
// using namespace std;

// void towerofHanoi(int n, char src, char dest, char helper){

//     if (n==0)
//     {
//         return;
//     }
    

//     towerofHanoi(n-1, src, helper, dest);
//     cout<<" Move from "<<src<<" to "<<dest<<endl;
//     towerofHanoi(n-1, helper, dest, src);

// }

// int main(){

//     towerofHanoi(3,'A','C','B');

//     return 0;
// }


// Remove all duplicates from the string

// #include<iostream>
// using namespace std;


// string removeDup(string s){

//     if (s.length()==0)
//     {
//         return "";
//     }
    
//     char ch = s[0];
//     string ans = removeDup(s.substr(1));

//     if (ch == ans[0])
//     {
//         return ans;
//     }
//     return (ch+ans);
// }

// int main(){
//     cout<<removeDup("aaaannnbbbddbaaabbdd");
//     return 0;
// }



// Move all X to the emd of the string

// #include<iostream>
// using namespace std;

// string moveallX(string s){

//     if (s.length()==0)
//     {
//         return "";
//     }

//     char ch = s[0];
//     string ans = moveallX(s.substr(1));


//     if (ch=='x')
//     {
//         return ans+ch;
//     }
    
//     return ch+ans;
// }

// int main(){

//     cout<<moveallX("sdfwszcxcccxxsafxxascxxsacxx");
//     return 0;
// }


// // Gentrate all substring of a string
// #include<iostream>
// using namespace std;

// void subseq(string s, string ans){

//     if (s.length() == 0)
//     {
//         cout<<ans<<endl;
//         return;
//     }
    
//     char ch = s[0];
//     string res = s.substr(1);

//     subseq(res, ans);
//     subseq(res, ans+ch);
// }

// int main(){
//     subseq("ABC","");
// }



// // Generate substring with ASCII number
// #include<iostream>
// using namespace std;

// void asciiSUbSeq(string s, string ans){

//     if(s.length() == 0){
//         cout<<ans<<endl;
//         return;
//     }

//     char ch = s[0];
//     int code = ch;
//     string res = s.substr(1);

//     asciiSUbSeq(res, ans);
//     asciiSUbSeq(res, ans+ch);
//     asciiSUbSeq(res, ans+ to_string(code));

// }

// int main(){
//     asciiSUbSeq("AB","");
//     return 0;
// }


// Print all possible words from phone digits
#include<iostream>
using namespace std;

string keys[] = {"","./","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};

void keypad(string s, string ans){

    if (s.length() == 0)
    {
        cout<<ans<<endl;
        return;
    }

    char ch = s[0];
    string code = keys[ch-'0'];
    string ros = s.substr(1);

    for (int i = 0; i < code.length(); i++)
    {
        keypad(ros, ans + code[i]);
    }
    

    
}

int main(){
    keypad("23","");
    return 0;
}