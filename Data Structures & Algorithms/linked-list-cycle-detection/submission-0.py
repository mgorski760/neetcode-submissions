# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        
        seen = {}

        curr = head
        idx = 0
        while curr != None:

            if curr in seen:
                return True
            else:
                seen[curr] = idx
            
            idx += 1
            curr = curr.next
        
        return False
                