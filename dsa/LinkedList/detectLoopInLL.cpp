    bool detectLoop(Node* head)
    {
        //your code here
        Node* fast = head->next;
        Node* slow = head;
        
        while(fast && fast->next)
        {
            slow = slow->next;
            fast = fast->next->next;
            if(fast == slow)    return true;
        }
        
        return false;
        
        
      /*  
               // your code here
       Node * fast = head;
       Node * slow = head;
       while(fast!= NULL && fast->next != NULL){
           fast = fast->next->next;
           slow = slow->next;
           if(fast == slow){
               return true;
           }
       }
       return false;
       */

        
        
    }
