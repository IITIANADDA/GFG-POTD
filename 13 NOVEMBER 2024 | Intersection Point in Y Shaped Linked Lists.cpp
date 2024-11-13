int intersectPoint(Node* head1, Node* head2) {
        // Your Code Here
        int l1 = 0, l2 = 0;
        for (auto cur = head1; cur != NULL; cur = cur -> next)
            l1++;
        for (auto cur = head2; cur != NULL; cur = cur -> next)
            l2++;
        
        for (; l1 > l2; l1--) 
            head1 = head1 -> next;
        for (; l1 < l2; l2--) 
            head2 = head2 -> next;
        
        while (head1 != NULL and head2 != NULL) {
            if (head1 == head2) return head1 -> data;
            head1 = head1 -> next;
            head2 = head2 -> next;
        }
        
        return -1;
    }
