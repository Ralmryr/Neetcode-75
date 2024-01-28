#include "contains_duplicate.h"

// Given an integer array nums, return true if any value appears at least twice in the array, and return false if every element is distinct.

bool contains_duplicate(std::vector<int>& nums) {
    std::map<int, int> freq_map;
    for(const auto& num : nums) {
        freq_map[num] += 1;
        if(freq_map[num] > 1) {
            return true;
        }
    }
    return false;
}


bool ContainsDuplicate::test(bool debug) {
    display_test_name("Contains Duplicate");
    bool flag = true;

    std::vector<int> nums1 {1,2,3,1}; // true;
    std::vector<int> nums2 {1,2,3,4}; // false;
    std::vector<int> nums3 {1,1,1,3,3,4,3,2,4,2}; // true;

    flag &= test_value<bool>(true, contains_duplicate(nums1), debug);
    flag &= test_value<bool>(false, contains_duplicate(nums2), debug);
    flag &= test_value<bool>(true, contains_duplicate(nums3), debug);

    return flag;
}

