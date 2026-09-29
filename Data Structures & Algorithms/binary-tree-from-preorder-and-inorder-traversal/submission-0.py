# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right

class Solution:
    def buildTree(self, preorder: List[int], inorder: List[int]) -> Optional[TreeNode]:
        if not preorder or not inorder: #base case where either list is empty.
            return None

        root = TreeNode(preorder[0]) #Always garrenteed.
        mid = inorder.index(preorder[0]) #we want to find mid, such that we can determine len of left and right
        root.left = self.buildTree(preorder[1:mid + 1], inorder[:mid]) #recursively building the left and right subtrees.
        root.right = self.buildTree(preorder[mid+1:], inorder[mid+1:])

        return root;

        