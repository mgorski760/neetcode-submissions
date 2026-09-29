# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def isValidBST(self, root: Optional[TreeNode]) -> bool:

        #right -> (right boundary, left boundary)
        def valid(node, left, right):

            if not node: #Nullptr
                return True

            if not (node.val < right and node.val > left):
                return False

                #(curr.left, min, max)                  (curr.right, min, max)
            return valid(node.left, left, node.val) and valid(node.right, node.val, right);
        
        return valid(root, float("-inf"), float("inf"))

        
        