/*Given a string representing the sequence of moves a robot vacuum makes, return whether or not it will return to its original position. The string will only contain L, R, U, and D characters, representing left, right, up, and down respectively.
Ex: Given the following strings...
"LR", return true
"URURD", return false
"RUULLDRD", return true*/

#include<cstdlib>
#include<stdbool.h>
#include<stdio.h>

bool willReturn(char*s,int sLength);

int main(){
    char s1[3]="LR";
    printf("%d ",willReturn(s1,2));
    char s2[6]="URURD";
    printf("%d ",willReturn(s2,5));
    char s3[9]="RUULLDRD";
    printf("%d ",willReturn(s3,8));
    return 0;
}

bool willReturn(char*s,int sLength){
    int horizontal=0,vertical=0;
    for(int i=0;i<sLength;i++){
        if(s[i]=='L')
            horizontal--;
        if(s[i]=='R')
            horizontal++;
        if(s[i]=='U')
            vertical++;
        if(s[i]=='D')
            vertical--;
    }
    if(horizontal==0&&vertical==0)
        return true;
    return false;
}