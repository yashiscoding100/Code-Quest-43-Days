#include <vector>
#include <unordered_map>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        // Create a hash map to store numbers and their indices
        std::unordered_map<int, int> numMap;

        // Iterate through the vector
        for (int i = 0; i < nums.size(); ++i) {
            int currentNum = nums[i];
            int complement = target - currentNum;

            // Check if the complement exists in the map
            if (numMap.count(complement)) {
                // If found, return the indices
                return {numMap[complement], i};
            }

            // If not found, add the current number and its index to the map
            numMap[currentNum] = i;
        }

        // Return an empty vector if no solution is found (as per problem constraints, a solution is guaranteed)
        return {};
    }
};
