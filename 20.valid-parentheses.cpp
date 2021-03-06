/*
 * @lc app=leetcode id=20 lang=cpp
 *
 * [20] Valid Parentheses
 *
 * https://leetcode.com/problems/valid-parentheses/description/
 *
 * algorithms
 * Easy (36.00%)
 * Total Accepted:    545.7K
 * Total Submissions: 1.5M
 * Testcase Example:  '"()"'
 *
 * Given a string containing just the characters '(', ')', '{', '}', '[' and
 * ']', determine if the input string is valid.
 * 
 * An input string is valid if:
 * 
 * 
 * Open brackets must be closed by the same type of brackets.
 * Open brackets must be closed in the correct order.
 * 
 * 
 * Note that an empty string is also considered valid.
 * 
 * Example 1:
 * 
 * 
 * Input: "()"
 * Output: true
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: "()[]{}"
 * Output: true
 * 
 * 
 * Example 3:
 * 
 * 
 * Input: "(]"
 * Output: false
 * 
 * 
 * Example 4:
 * 
 * 
 * Input: "([)]"
 * Output: false
 * 
 * 
 * Example 5:
 * 
 * 
 * Input: "{[]}"
 * Output: true
 * 
 * 
 */
#include<iostream>
#include<string>
#include<stack>
#include<map>
using namespace std;
class Solution {
public:
    bool isValid(string s) {
        map<char,int> mp;
        mp['(']=1;
        mp[')']=-1;
        mp['{']=2;
        mp['}']=-2;
        mp['[']=3;
        mp[']']=-3;
        if(s.empty()){
            return true;
        }
        stack<char> sta;
        for(auto str:s){
            if(!sta.empty()){
                if(mp[sta.top()]+mp[str]==0){
                    sta.pop();
                    continue;
                }
            }
            sta.push(str);
        }
        if(!sta.empty()){
            return false;
        }
        return true;
    }
};
int main(){
    Solution sol;
    string str="()";
    cout<<sol.isValid(str)<<endl;
    return 0;
}

