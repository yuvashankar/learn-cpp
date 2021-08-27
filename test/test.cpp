#include <iostream>
#include <vector>
#include <algorithm>
#include <iostream>

class Solution 
{
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) 
    {
        std::vector<int> output = {0, 0};
        for (std::size_t i = nums.size(); i > 0; i--)
        {
            for (std::size_t j = nums.size(); j > i; j--)
            {
                std::cout << "nums[" << i - 1 << "] = " << nums[i - 1] << "\t nums[" << j - 1 << "] = " << nums[j - 1] << std::endl;

                
            }
        }
        return output;
    }
    int reverse(int x)
    {
        bool is_negative = false;
        std::string number_in_string;
        int output = 0;

        if (x < 0)
        {
            is_negative = true;
        }

        number_in_string = std::to_string(abs(x));
        std::reverse(number_in_string.begin(), number_in_string.end());

        if (is_negative == true)
        {
            number_in_string.insert(0, 1, '-');
        }

        try
        {
            return std::stoi(number_in_string);
        }
        catch(const std::out_of_range& e)
        {
            return 0;
            // std::cerr << e.what() << '\n';
        }
    }
};

int main(int argc, char const *argv[])
{
    std::vector<int> test_array = {2, 7, 11, 15};
    int target = 9;
    Solution my_sol;

    std::cout << my_sol.reverse(-420) << std::endl;
    return 0;
}
