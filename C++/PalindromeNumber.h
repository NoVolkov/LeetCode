#ifndef PALINDROMENUMBER_H
#define PALINDROMENUMBER_H

// 9. Palindrome Number
// Easy

bool isPalindrome(int x) {
    long res=0;
    int t=x;
    if(x<0){
        return false;
    }
    while(t){
        res=res*10+t%10;
        t/=10;
    }
    return res == x;
}
#endif // PALINDROMENUMBER_H
