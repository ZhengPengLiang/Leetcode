/*
 * @lc app=leetcode id=14 lang=cpp
 *
 * [14] Longest Common Prefix
 *
 * https://leetcode.com/problems/longest-common-prefix/description/
 *
 * algorithms
 * Easy (33.08%)
 * Total Accepted:    425.6K
 * Total Submissions: 1.3M
 * Testcase Example:  '["flower","flow","flight"]'
 *
 * Write a function to find the longest common prefix string amongst an array
 * of strings.
 * 
 * If there is no common prefix, return an empty string "".
 * 
 * Example 1:
 * 
 * 
 * Input: ["flower","flow","flight"]
 * Output: "fl"
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: ["dog","racecar","car"]
 * Output: ""
 * Explanation: There is no common prefix among the input strings.
 * 
 * 
 * Note:
 * 
 * All given inputs are in lowercase letters a-z.
 * 
 */
// #include<iostream>
// #include<string>
// #include<vector>
// using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty()){
            return "";
        }
       string temp=strs[0];
       for(auto s:strs){
           int i=0;
           int len=min(temp.size(),s.size());
           for(;i<len;i++){
               if(temp[i]!=s[i]){
                   break;
               }      
           }
           temp=temp.substr(0,i);
       }
        return temp;
    }
   
};
// int main(){
//     vector<string> st;
//     st.push_back("flower");
//     st.push_back("flow");
//     st.push_back("flight");
//     Solution sol;
//     cout<<sol.longestCommonPrefix(st)<<endl;

// }

