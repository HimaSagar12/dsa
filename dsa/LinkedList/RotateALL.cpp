    Node* rotate(Node* head, int k)
    {
        // Your code here
        Node *curr = head;
        int m = 1;
        while(curr->next)
        {
            curr = curr->next;
        }
        curr->next = head;
        
        while(k>1 && head!= NULL)
        {
            head = head->next;
            k--;
        }
        
        Node* temp = head;
        head = head->next;
        temp->next  = NULL;
        
        return head;
        
    }
