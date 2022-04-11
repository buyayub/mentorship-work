class ListNode:
    def __init__(self, val=0, next=None):
        self.val = val
        self.next = next

def removeDuplicates(anchor_node):
    current = anchor_node
    node = anchor_node.next
    while (node != None):
        if current.val != node.val:
            current = node
            node = node.next
        else:
            current.next = node.next
            node = node.next
    return anchor_node
            
def printList(anchor_node):
    node = anchor_node
    while (node != None):
        print(node.val, " ", end = "")
        node = node.next

anchor = ListNode(0)
node1 = ListNode(1)
node2 = ListNode(1)
node3 = ListNode(1)
node4 = ListNode(1)
node5 = ListNode(2)
node6 = ListNode(2)
node7 = ListNode(2)
node8 = ListNode(2)

anchor.next = node1
node1.next = node2
node2.next = node3
node3.next = node4
node4.next = node5
node5.next = node6
node6.next = node7
node7.next = node8

printList(anchor)

anchor = removeDuplicates(anchor)

print()
printList(anchor)
