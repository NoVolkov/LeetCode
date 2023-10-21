#include <iostream>
#include "IntegerToRoman.h"
#include "RomanToInteger.h"
#include "ReverseInteger.h"
#include "PalindromeNumber.h"
#include "MergeTwoSortedLists.h"
#include "JewelsAndStones.h"
#include "TwoSum.h"

void test21MergeLists();
void test1TwoSum();

int main()
{
//    std::cout<<intToRoman(1994)<<std::endl;
//    std::cout<<romanToIntFaster("MCMXCIV");
//    std::cout<<reverse(-123)<<std::endl;
//    std::cout<<reverse(120)<<std::endl;
//    std::cout<<isPalindrome(121)<<std::endl;
//    test21MergeLists();
//    std::cout<<numJewelsInStones("aA","aAAbbbb")<<std::endl;
//    test1TwoSum();
}

void test1TwoSum(){
    std::vector<int> arr{2,7,11,15};
    for(int i: twoSum(arr,9)){
        std::cout<<i<<std::endl;
    }
}

void test21MergeLists(){
    ListNode* f4=new ListNode(4);
    ListNode* f2=new ListNode(2,f4);
    ListNode* f1=new ListNode(1, f2);
    ListNode* s4=new ListNode(4);
    ListNode* s3=new ListNode(3, s4);
    ListNode* s1=new ListNode(1, s3);
    ListNode* l=mergeTwoLists(f1,s1);
    ListNode tmp=*l;
    while(&tmp){
        std::cout<<tmp.val<<std::endl;
        tmp=*(tmp.next);
    }
}
