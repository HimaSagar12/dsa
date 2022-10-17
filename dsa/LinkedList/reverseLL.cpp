    struct Node* reverseList(struct Node *head)
    {
        // code here
        // return head of reversed list
        Node *curr = head;
        Node *prev = NULL;
        
        while(curr)
        {
            Node* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
