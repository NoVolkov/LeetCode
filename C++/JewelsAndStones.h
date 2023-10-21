#ifndef JEWELSANDSTONES_H
#define JEWELSANDSTONES_H
#include <string>
#include <set>

// 771. Jewels And Stones
// Easy

// Solution 1
int numJewelsInStones(std::string jewels, std::string stones){
    int res=0;
    std::set<char> dict_jewels;
    dict_jewels.insert(jewels.begin(), jewels.end());
    for(char c: stones){
        res+=dict_jewels.count(c);
    }
    return res;
}
#endif // JEWELSANDSTONES_H
