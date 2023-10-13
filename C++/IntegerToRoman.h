#ifndef INTEGERTOROMAN_H
#define INTEGERTOROMAN_H
#include <string>
#include <vector>
#include <algorithm>

// 12. Integer To Roman
// Medium

// Solution 1 - A head-on solution
std::string intToRoman(int num) {
    int t=num;
    int n; // digit of the number
    int ind_order=1; // ordinal index
    std::vector<std::string> acc;
    std::string res;
    // passage from a smaller to a larger ordinal index
    while(t){
        n=t%10;
        switch (ind_order) {
            // Ones
            case 1:
                if(n==9){
                    acc.push_back("IX");break;
                }
                if(n>5){
                    acc.push_back('V'+std::string(n%5,'I'));break;
                }
                if(n==4){
                    acc.push_back("IV");
                }else{
                    acc.push_back(std::string(n,'I'));
                }
            break;
            // Tens
            case 2:
                if(n==9){
                    acc.push_back("XC");break;
                }
                if(n>5){
                    acc.push_back('L'+std::string(n%5,'X'));break;
                }
                if(n==4){
                    acc.push_back("XL");
                }else{
                    acc.push_back(std::string(n,'X'));
                }
            break;
            // Hundreds
            case 3:
                if(n==9){
                    acc.push_back("CM");break;
                }
                if(n>5){
                    acc.push_back('D'+std::string(n%5,'C'));break;
                }
                if(n==4){
                    acc.push_back("CD");
                }else{
                    acc.push_back(std::string(n,'C'));
                }
            break;
            // Thousands
            case 4:
                acc.push_back(std::string(n,'M'));
            break;
        }
        ind_order++;
        t/=10;
    }
    std::reverse(acc.begin(),acc.end());
    for(std::string s: acc){
        res+=s;
    }
    return res;
}
#endif // INTEGERTOROMAN_H
