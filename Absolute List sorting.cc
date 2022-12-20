#User function Template for python3

class Solution:

    

    def sortList(self,head):

        temp=head

        l=[]

        while temp:

            l.append(temp.data)

            temp=temp.next

        l.sort()

        i=0

        t=head

        head=t

        while t:

            t.data=l[i]

            t=t.next

            i+=1

        return head


#{ 
 # Driver Code Starts
#Initial Template for Python 3

#contributed by RavinderSinghPB
# Node Class
class Node:
    def __init__(self, data):   # data -> value stored in node
        self.data = data
        self.next = None

# Linked List Class
class LinkedList:
    def __init__(self):
        self.head = None
        self.last=self.head

    # creates a new node with given value and appends it at the end of the linked list
    def append(self, new_value):
        new_node = Node(new_value)
        if self.head is None:
            self.head = new_node
            self.last=new_node
            return
        self.last.next=new_node
        self.last=self.last.next
        

    
def PrintList(head):
    while head:
        print(head.data,end=' ')
        head=head.next


if __name__ == '__main__':
    t=int(input())
    for cases in range(t):
        
        n=int(input())
        ll = LinkedList() # create a new linked list 'll1'.
        nodes_ll = list(map(int, input().strip().split()))
        for nodes in nodes_ll:
            ll.append(nodes)  # add to the end of the list
        ob=Solution()
        
        PrintList(ob.sortList(ll.head))
        print()


# } Driver Code Ends
