//   QUESTION  //

Given a non-empty array of decimal digits representing a non-negative integer, increment one to the integer.

The digits are stored such that the most significant digit is at the head of the list, and each element in the array contains a single digit.

You may assume the integer does not contain any leading zero, except the number 0 itself.

 

Example 1:

Input: digits = [1,2,3]
Output: [1,2,4]
Explanation: The array represents the integer 123.
Example 2:

Input: digits = [4,3,2,1]
Output: [4,3,2,2]
Explanation: The array represents the integer 4321.
Example 3:

Input: digits = [0]
Output: [1]
 

Constraints:

1 <= digits.length <= 100
0 <= digits[i] <= 9
Accepted
876,319
Submissions
2,081,155
  
  //   CODE   //
  
  
  class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
         for(int i = digits.size()-1;i>-1;--i){
        if(digits[i] != 9){
            ++digits[i];
            return digits;
        }
        digits[i] = 0;
    }
    if(digits[0] == 0) digits.insert(digits.begin(), 1);
    return digits;
    }
};
  
