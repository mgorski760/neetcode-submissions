# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next

class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        
        dummy = node = ListNode()

        while list1 and list2: #Iterate until one of the list pointers are null
            if list1.val < list2.val: #If list1 curr is next, add to list
                node.next = list1
                list1 = list1.next
            else: # otherwise list2 is next
                node.next = list2
                list2 = list2.next
            
            node = node.next #iterate through the dummy (return) list

        node.next = list1 or list2 #if one is null, set the dummy list's next to the list that isnt null. Since they are in order

        return dummy.next
