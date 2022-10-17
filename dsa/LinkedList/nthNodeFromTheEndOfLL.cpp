int getNthFromLast(Node *head, int n)
{
    /*Node *one = head;
    Node *two = head;
    
    while(n-- && one->next)
    {
        one = one->next;
    }
    
    while(one->next)
    {
        one = one->next;
        two = two->next;
    }
    return two->data;
       // Your code here*/
       
    
    
    Node* one = head;
    int c = 0;
    while(one)
    {
        c++;
        one = one -> next;
    }
    
    if(c<n) return -1;
    
    int m = c - n;
    
    while(m--)
    {
        head = head->next;
    }
    
    return head->data;
}
