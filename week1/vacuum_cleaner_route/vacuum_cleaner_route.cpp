/*Given a string representing the sequence of moves a robot vacuum makes, return whether or not it will return to its original position. The string will only contain L, R, U, and D characters, representing left, right, up, and down respectively.
Ex: Given the following strings...
"LR", return true
"URURD", return false
"RUULLDRD", return true*/

#include<iostream>

bool willReturn(std::string s);

int main(){
    std::string s="LR";
    std::cout<<willReturn(s);
    s="URURD";
    std::cout<<willReturn(s);
    s="RUULLDRD";
    std::cout<<willReturn(s);
    return 0;
}

bool willReturn(std::string s){
    int horizontal=0,vertical=0;
    for(char c:s){
        if(c=='L')
            horizontal--;
        if(c=='R')
            horizontal++;
        if(c=='U')
            vertical++;
        if(c=='D')
            vertical--;
    }
    if(horizontal==0&&vertical==0)
        return true;
    return false;
}