/*
 * @lc app=leetcode id=242 lang=cpp
 *
 * [242] Valid Anagram
 *
 * https://leetcode.com/problems/valid-anagram/description/
 *
 * algorithms
 * Easy (63.39%)
 * Likes:    10838
 * Dislikes: 341
 * Total Accepted:    2.7M
 * Total Submissions: 4.3M
 * Testcase Example:  '"anagram"\n"nagaram"'
 *
 * Given two strings s and t, return true if t is an anagram of s, and false
 * otherwise.
 * 
 * An Anagram is a word or phrase formed by rearranging the letters of a
 * different word or phrase, typically using all the original letters exactly
 * once.
 * 
 * 
 * Example 1:
 * Input: s = "anagram", t = "nagaram"
 * Output: true
 * Example 2:
 * Input: s = "rat", t = "car"
 * Output: false
 * 
 * 
 * Constraints:
 * 
 * 
 * 1 <= s.length, t.length <= 5 * 10^4
 * s and t consist of lowercase English letters.
 * 
 * 
 * 
 * Follow up: What if the inputs contain Unicode characters? How would you
 * adapt your solution to such a case?
 * 
 */

// @lc code=start
class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size() ) 
            return false ;
        // for (int i = 0 ; i < s.size() ; i++ ){
        //     for (int j = 0 ; j < t.size() ; j++ ){
        //         if ( t[j] == s[i] ) 
        //         break ;
        //     }
        // }

         for (int i = 0 , j =0  ; i < s.size() ; i++ )  {
             while (t[j] != s[i] && j < t.size() ) {
                 j++;
             }
             if (t[j] == s[i]) 
             return true;
             else if (j = t.size())
             return  false ;
         }

        // sort(s , s + s.size() );
        // sort(t , t + t.size() );

        //  sort(s.begin(), s.end());
        // sort(t.begin(), t.end());
        
        //     for (int j = 0 ; j < t.size() ; j++ ){
        //         if (s[j] != t[j]) 
        //         return false ;
        //     }
        
        return true;
    }
};
// @lc code=end

