    bool isPalindrome(Node *head)
    {
        Node* head1 = head;
        stack<int> s;
        //Your code here
        while(head1)
        {
            s.push(head1->data);
            head1 = head1->next;
        }
        
        while(s.size()!=0 && s.top()==head->data)
        {
            s.pop();
            head = head->next;
        }
        
        if(s.size()==0)
            return true;
        
        return false;
    }
