/**
 *  Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.
 *
 * You may assume that each input would have exactly one solution, and you may not use the same element twice.
 * You can return the answer in any order.
 *
 * Example 1:
 *
 * Input: nums = [2,7,11,15], target = 9
 * Output: [0,1]
 * Explanation: Because nums[0] + nums[1] == 9, we return [0, 1].
 *
 * Example 2:
 * Input: nums = [3,2,4], target = 6
 * Output: [1,2]
 *
 * Example 3:
 * Input: nums = [3,3], target = 6
 * Output: [0,1]
 *
 * Constraints:
 * 2 <= nums.length <= 104
 * -109 <= nums[i] <= 109
 * -109 <= target <= 109
 * Only one valid answer exists.
 *
 * Follow-up: Can you come up with an algorithm that is less than O(n2) time complexity?
 *
 * Solution:
 * We can use a hash map to store the indices of the elements we have seen so far.
 * For each element, we check if the complement exists in the map.
 * If it does, we return the indices of the two numbers.
 * Otherwise, we store the current element in the map and continue the loop.
 *
 * Time complexity: O(n)
 * Space complexity: O(n)
 *
 *
 * @param {number[]} nums
 * @param {number} target
 * @return {number[]}
 *
 * #First Solution
 * Time complexity: O(n)
 * Space complexity: O(n)
 *
 * The idea is to iterate over the array and store the index of the current element in a map.
 * For each element, we calculate the complement and check if it exists in the map.
 * If it does, we return the indices of the two numbers. Otherwise, we store the current element in the map and continue the loop.
 *
 **/
function twoSum(nums: number[], target: number): number[] {
  const map = new Map<number, number>();
  for (let i = 0; i < nums.length; i++) {
    const complement = target - nums[i];
    if (map.has(complement)) {
      return [map.get(complement)!, i];
    }
    map.set(nums[i], i);
  }
  return [];
}

// Note:
// The above solution is the most optimal solution with O(n) time complexity.
// The brute-force solution would be to use two nested loops to check all possible pairs of numbers.
// This would have O(n^2) time complexity.
// The above solution is much more efficient than the brute-force solution.
// The space complexity is O(n) because we store the indices of the elements in a map.
// The space complexity could be O(1) if we are allowed to modify the input array.
// We could sort the array and use two pointers to find the two numbers that add up to the target.
// However, this would change the order of the elements in the array.

// Test cases:
// Input: nums = [2,7,11,15], target = 9
// Output: [0,1]
console.log(twoSum([2, 7, 11, 15], 9));

// Input: nums = [3,2,4], target = 6
// Output: [1,2]
console.log(twoSum([3, 2, 4], 6));

// Input: nums = [3,3], target = 6
// Output: [0,1]
