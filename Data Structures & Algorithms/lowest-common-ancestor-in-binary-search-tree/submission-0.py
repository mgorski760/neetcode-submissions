# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def lowestCommonAncestor(self, root: TreeNode, p: TreeNode, q: TreeNode) -> TreeNode:
        curr = root

        while curr is not None:

            if curr.left is q or curr.left is p and curr.right is q or curr.right is q: #Finds the value
                return curr
            elif curr.val < p.val and curr.val < q.val: #p and q are in the right subtree
                curr = curr.right
            elif curr.val > p.val and curr.val > q.val: #p and q are in the left subtree
                curr = curr.left
            else: #p and q cannot exist together either in left or right subtree, therefore curr is LCA
                return curr
        
        return root

        