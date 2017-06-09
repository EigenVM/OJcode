class Solution(object):
    def twoSum(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        check = {}
        for ind, value in enumerate(nums):
            if value not in check:
                check[target - value] = ind
            else:
                return [check[value], ind]

a = Solution()
x = a.twoSum([3,2,4], 6)
print(x)