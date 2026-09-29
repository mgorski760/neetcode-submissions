# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def kthSmallest(self, root: Optional[TreeNode], k: int) -> int:
        values = []
        self.dfs(root, values)
        return values[k-1];

    def dfs(self, curr, values):
        if curr is None:
            return
        
        self.dfs(curr.left, values)
        values.append(curr.val)
        self.dfs(curr.right, values)
    

        