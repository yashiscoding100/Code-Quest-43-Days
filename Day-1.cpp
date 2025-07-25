#include <vector>

class Solution {
public:
    int findNumbers(std::vector<int>& nums) {
        int even_count = 0;

        for (int num : nums) {
            int digits = 0;
            while (num > 0) {
                num = num / 10;
                digits++;
            }

            if (digits % 2 == 0) {
                even_count++;
            }
        }
        
        return even_count;
    }
};
