#ifndef TWOSUM_H
#define TWOSUM_H
#include <vector>
#include <map>
// 1. Two Sum
// Easy

std::vector<int> twoSum(std::vector<int>& nums, int target) {
    // map<num,i>
    std::map<int, int> dict;
    for(int i=0;i<nums.size();i++){
        int diff=target-nums[i];
        if(dict.count(diff)){
            return std::vector<int>{i,diff};
        }else{
            dict[nums[i]]=i;
        }
    }
    return std::vector<int>{};
}
#endif // TWOSUM_H
