/*Given a string, return whether or not it forms a palindrome ignoring case and non-alphabetical characters. 
Note: a palindrome is a sequence of characters that reads the same forwards and backwards. 

Ex: Given the following strings...
"level", return true
"algorithm", return false
"A man, a plan, a canal: Panama.", return true*/

#include <iostream>

bool validPalindrome(std::string s);

int main(){
    std::string s="level";
    std::cout<<validPalindrome(s);
    s="algorithm";
    std::cout<<validPalindrome(s);
    s="A man, a plan, a canal: Panama.";
    std::cout<<validPalindrome(s);
    return 0;
}

bool validPalindrome(std::string s){
    for(int i=0;i<s.length();i++){
        if(s[i]>='a'&&s[i]<='z')
            continue;
        if(s[i]>='A'&&s[i]<='Z'){
            s[i]=s[i]-'A'+'a';
            continue;
        }
        s[i]=' ';
    }
    int left=0,right=s.length()-1;
    while(left<right){
        if(s[left]==' '){
            left++;
            continue;
        }
        if(s[right]==' '){
            right--;
            continue;
        }
        if(s[left++]!=s[right--])
            return false;
    }
    return true;
}