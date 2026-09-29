class Solution:
    def search(self, nums: List[int], target: int) -> int:
        
        l = 0
        r = len(nums)-1

        while l <= r:

            if nums[l] == target:
                return l
            elif nums[r] == target:
                return r
            

            m = (r+l)//2

            if nums[m] == target:
                return m

            if nums[l] < nums[m]:
                #case that mid is upper of right-side
                if target > nums[l] and target < nums[m]:
                    r = m-1
                else:
                    l = m+1
            else:
                if target > nums[m] and target < nums[r]:
                    l = m+1
                else:
                    r = m-1

        return -1            

