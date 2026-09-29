class Solution:
    def findMin(self, nums: List[int]) -> int:
        l = 0
        r = len(nums)-1
        best = nums[0]
        while l <= r:
            if nums[l] < nums[r]:
                best = min(best, nums[l])
                break

            m = (l+r)//2

            best = min(best, nums[m])
            if nums[m] >= nums[l]:
                l = m+1
            else:
                r = m-1
            
        
        return best
                
        
        