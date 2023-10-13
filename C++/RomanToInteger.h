#ifndef ROMANTOINTEGER_H
#define ROMANTOINTEGER_H
#include <map>
#include <string>
#include <vector>
#include <numeric>

// 13. Roman to Integer
// Easy

//  Solution 1
std::map<char, unsigned> dict{
        {'I', 1},
        {'V', 5},
        {'X', 10},
        {'L', 50},
        {'C', 100},
        {'D', 500},
        {'M', 1000},
    };

/**
 * In Roman numerals, numbers can be easily
 * counted from left to right - they just
 * add up. The exception is IV (4), IX (9),
 * XL (40), XC (90), CD (400), CM (900) -
 * to count such numbers, you need to look
 * at the next character after the current
 * one (it will take 2 characters).
 * If there is no exception, then you can
 * simply add the numbers, otherwise subtract
 * the left character from the right. Thus,
 * it is easier to walk along the string from
 * right to left (a smaller numerical order
 * will still be on the right).
 */
int romanToIntWithDict(std::string s) {
    int str_size=s.size();

    int res=dict[s[str_size-1]];
    for(int i=str_size-2;i>=0;i--){
        if(
            dict[s[i]] >= dict[s[i+1]]
        ){
            res+=dict[s[i]];
        }else{
            res-=dict[s[i]];
        }
    }
    return res;
}

//  Solution 2 - faster and less memory
/**
 * The previous solution, but the reference to
 * map structure was replaced by std::vector
 * with already translated Arabic numerals
 * from Roman numerals.
 */
int romanToIntFaster(std::string s){
    int str_size=s.size();
    std::vector<int> data;
    int res;
    for(const char &c:s){
        switch (c) {
            case 'I': data.push_back(1);break;
            case 'V': data.push_back(5);break;
            case 'X': data.push_back(10);break;
            case 'L': data.push_back(50);break;
            case 'C': data.push_back(100);break;
            case 'D': data.push_back(500);break;
            case 'M': data.push_back(1000);break;
        }
    }
    res=data.at(str_size-1);
    for(int i=str_size-2;i>=0;i--){
        if(
            data[i] >= data[i+1]
        ){
            res+=data[i];
        }else{
            res-=data[i];
        }
    }
    return res;
}
#endif // ROMANTOINTEGER_H
