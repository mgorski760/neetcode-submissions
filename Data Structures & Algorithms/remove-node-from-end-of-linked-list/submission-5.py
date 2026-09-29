# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        
        curr = head
        sz = 0
        while curr:
            sz += 1
            curr = curr.next

        if n == sz:
            head = head.next
            return head
        else:
            toDel = sz-n
            idx = 0
            curr = head
            prev = None
            while idx != toDel:
                idx += 1
                prev = curr
                curr = curr.next
            
            prev.next = curr.next

        return head
            

