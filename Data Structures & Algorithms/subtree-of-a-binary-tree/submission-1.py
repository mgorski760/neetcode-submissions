# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:   
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        return self.h_isSubtree(root, subRoot)

    def h_isSubtree(self, curr: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        if curr is None:
            return False

        if curr.val == subRoot.val and self.isSameTree(curr, subRoot) is True:
            return True
        else:
            return self.h_isSubtree(curr.left, subRoot) or self.h_isSubtree(curr.right, subRoot)

    def isSameTree(self, p: Optional[TreeNode], q: Optional[TreeNode]) -> bool:
        if p is None and q is None:
            return True
        elif p is None or q is None:
            return False
        elif p.val != q.val:
            return False

        return self.isSameTree(p.left, q.left) and self.isSameTree(p.right, q.right)