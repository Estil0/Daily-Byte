/*Given a string, reverse all of its characters and return the resulting string.
Ex: Given the following strings...
“Cat”, return “taC”
“The Daily Byte”, return "etyB yliaD ehT”
“civic”, return “civic”*/

#include<algorithm>
#include<iostream>

std::string reverseString(std::string s);

int main(){
    std::string s;
    std::cin>>s;
    std::cout<<reverseString(s);
    return 0;
}

std::string reverseString(std::string s){
    /*
    //Solution 1: manually reversing string by iteration
    for(int i=0;i<s.length()/2;i++)
        std::swap(s[i],s[s.length()-1-i]);
    return s;
    //time complexty: O(n), space complexity: O(1)
    
    //Solution 2: creating new string as a backwards copy of s
    std::string sReverse="";
    for(char c:s)
        sReverse=c+sReverse;
    return sReverse;
    //time complexity: O(n), space complexity: O(1)
    */
    //Solution 3: using built-in reverse() function
    reverse(s.begin(),s.end());
    return s;
    //time complexity: O(n), space complexity: O(1)
}