/*
 * @lc app=leetcode id=1 lang=cpp
 *
 * [1] Two Sum
 *
 * https://leetcode.com/problems/two-sum/description/
 *
 * algorithms
 * Easy (42.36%)
 * Total Accepted:    1.6M
 * Total Submissions: 3.7M
 * Testcase Example:  '[2,7,11,15]\n9'
 *
 * Given an array of integers, return indices of the two numbers such that they
 * add up to a specific target.
 * 
 * You may assume that each input would have exactly one solution, and you may
 * not use the same element twice.
 * 
 * Example:
 * 
 * 
 * Given nums = [2, 7, 11, 15], target = 9,
 * 
 * Because nums[0] + nums[1] = 2 + 7 = 9,
 * return [0, 1].
 * 
 * 
 * 
 * 
 */
#include<iostream>
#include<map>
#include<vector>
using namespace std;
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        map<int,int> nummap;
        vector<int> b;
        for(int i=0;i<nums.size();i++)
        {
            int num=target-nums[i];
            if(nummap.find(num)!=nummap.end()){
                b.push_back(nummap.find(num)->second);
                b.push_back(i);  
                break;
            }
            nummap.insert(pair<int,int>(nums[i],i));
        }  
        return b; 
    }
};
int main(){
    vector<int> a;
    a.push_back(1);
    a.push_back(2);
    a.push_back(3);
    a.push_back(4);
    Solution sol;
    for(int i=0;i<sol.twoSum(a,6).size();i++){
        cout<<sol.twoSum(a,6)[i]<<endl;
    }
    return 0;
}

