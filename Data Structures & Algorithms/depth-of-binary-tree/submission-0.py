# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def maxDepth(self, root: Optional[TreeNode]) -> int:
        return self.h_maxDepth(root)

    def h_maxDepth(self, curr: Optional[TreeNode]) -> int:
        if curr is None:
            return 0

        return 1 + max(self.h_maxDepth(curr.left),self.h_maxDepth(curr.right))