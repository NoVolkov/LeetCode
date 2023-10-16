#ifndef REVERSEINTEGER_H
#define REVERSEINTEGER_H
#include <climits>

// 7. Reverse Integer
// Medium

/**
 * The algorithm is quite simple: we
 * multiply the last digit of the
 * number by 10, pushing it forward,
 * and add the next last digit to it.
 * The big difficulty here was caused
 * by the overflow of the int data
 * type, which was solved by
 * increasing the range through the
 * long data type.
 */
int reverse(int x) {
    long res=0;
    int cur;
    while(x){
        cur=x%10;
        res=res*10+cur;
        x/=10;
    }
    if(res > INT_MAX || res < INT_MIN){
        return 0;
    }
    return res;
}

#endif // REVERSEINTEGER_H
