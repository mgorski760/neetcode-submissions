# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:

    def maxPathSum(self, root: Optional[TreeNode]) -> int:

        global_max = [root.val]
        

        def dfs(root):

            if root is None:
                return 0

            leftMax = max(dfs(root.left), 0)
            rightMax = max(dfs(root.right),0)

            localMax = root.val + leftMax + rightMax
           
            global_max[0] = max(global_max[0], localMax)


            return max(root.val+leftMax, root.val+rightMax)
            
                

        dfs(root)
        return global_max[0]



        
        
        
        