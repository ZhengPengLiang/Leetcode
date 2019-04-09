/*
 * @lc app=leetcode id=28 lang=cpp
 *
 * [28] Implement strStr()
 *
 * https://leetcode.com/problems/implement-strstr/description/
 *
 * algorithms
 * Easy (31.35%)
 * Total Accepted:    400.9K
 * Total Submissions: 1.3M
 * Testcase Example:  '"hello"\n"ll"'
 *
 * Implement strStr().
 * 
 * Return the index of the first occurrence of needle in haystack, or -1 if
 * needle is not part of haystack.
 * 
 * Example 1:
 * 
 * 
 * Input: haystack = "hello", needle = "ll"
 * Output: 2
 * 
 * 
 * Example 2:
 * 
 * 
 * Input: haystack = "aaaaa", needle = "bba"
 * Output: -1
 * 
 * 
 * Clarification:
 * 
 * What should we return when needle is an empty string? This is a great
 * question to ask during an interview.
 * 
 * For the purpose of this problem, we will return 0 when needle is an empty
 * string. This is consistent to C's strstr() and Java's indexOf().
 * 
 */

// 解决字符串匹配的算法包括：
// 朴素算法（Naive Algorithm）、
// Rabin-Karp 算法、
// 有限自动机算法（Finite Automation）、
//  Knuth-Morris-Pratt 算法（即 KMP Algorithm）、
// Boyer-Moore 算法、
// Simon 算法、
// Colussi 算法、
// Galil-Giancarlo 算法、
// Apostolico-Crochemore 算法、
// Horspool 算法
// Sunday 算法等

#include<iostream>
#include<string>
using namespace std;
class Solution {
public:
    int strStr(string haystack, string needle) {
        if(needle.empty()){
            return 0;
        }
        int h_len=haystack.size();
        int n_len=needle.size();
        for(int i=0;i<=h_len-n_len;i++){
            int j=0;
            for(;j<n_len;j++){
                if(haystack[i+j]!=needle[j]){
                    break;
                }
            } 
            if(j==n_len){
                return i;
            }       
        }
        return -1;
    }
};
int main(){
    string haystack="hello";
    string needle="ll";
    Solution sol;
    cout<<sol.strStr(haystack,needle)<<endl;
    return 0;
}

