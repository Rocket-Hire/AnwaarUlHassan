// Given an array of characters, determine if the array is a palindrome or not

// Example
// Input: arr = "redivider"
// Output: True

// Input: arr = "ogo"
// Output: True

// Example
// Input: arr = "zambia"
// Output: False

#include <iostream>

int main() {
  std::cout << "Hello World!\n";
  string s ="zamaz";
  cout<<"enter string"<<endl;
  for(i=0 ;i<s.length(); i++){
    if(s[i]!=s[s.length()-i-1]){
      return "No";
    }
  }else{
  return "Yes";
      }
}

// Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

// Example 1:

// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
// Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
// Example 2:

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
// Example 3:

// Input: nums = [3,3], target = 6
// Output: [0,1]