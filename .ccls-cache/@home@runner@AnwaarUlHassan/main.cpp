
#include <iostream>

int main() {
  std::cout << "Hello World!\n";

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


int sum =14;
int arr[]={1,4,6,3,2,8,7,3};
size_t=sizeof(arr)/sizeof(int);
for(int i=0;i<size;i++){
  for(int j=i;j<size;++j){
    if(arr[i]+arr[j]==sum)
      cout<<i<<j;
  }
}

//Complexity O(n^2)

Solution 2
8 is the max number
arr2 = {0,1,2,3,4,5,6,7,8}
arr2[sum - arr[i]]  
O(n) + O(n) + O(n)
O(3n) => O(n)

Solution 3
