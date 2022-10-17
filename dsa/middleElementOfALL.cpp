    int getMiddle(Node *head)
    {
        Node* one = head;
        Node* two = head;
        while(one->next && one->next->next)
        {            
            one = one->next->next;

            two = two->next;
        }
        
        if(one->next)   return two->next->data;
        
        return two->data;
    }
