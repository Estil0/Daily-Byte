/*Given a string, reverse all of its characters and return the resulting string.
Ex: Given the following strings...
“Cat”, return “taC”
“The Daily Byte”, return "etyB yliaD ehT”
“civic”, return “civic”*/

#include<cstdlib>
#include<stdio.h>
#include<string.h>

char*reverseString(char*,int);

int main(void){
    char s1[4]="Cat";
    printf("%s\n",reverseString(s1,3));
    char s2[16]="The Daily Byte";
    printf("%s\n",reverseString(s2,14));
    char s3[7]="civic";
    printf("%s\n",reverseString(s3,5));
    return 0;
}

char*reverseString(char*s, int sLength){
    /*
    //Solution 1: manually reversing string by iteration
    for(int i=0;i<sLength/2;i++){
        char temp=s[i];
        s[i]=s[sLength-1-i];
        s[sLength-1-i]=temp;
    }
    return s;
    //time complexty: O(n), space complexity: O(1)
    */
    //Solution 2: creating new string as a backwards copy of s
    char*sReverse=(char*)malloc((sLength+1)*sizeof(char));
    for(int i=0;i<sLength;i++)
        sReverse[i]=s[sLength-1-i];
    sReverse[sLength]='\0';
    return sReverse;
    //time complexity: O(n), space complexity: O(n)
    /*
    //Solution 3: using nonstandard strrev() function from string.h library
    strrev(s);
    return s;
    //time complexity: O(n), space complexity: O(1)*/
}