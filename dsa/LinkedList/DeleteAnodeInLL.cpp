Node* deleteNode(Node *head,int x)
{

    Node* temp = head;
    int c = 2;
    
    if(x==1)
        return head->next;
    
    while(c<x && temp)
    {
        temp = temp->next;
        c++;
    }
    
    if(temp->next)
    {
        temp->next = temp->next->next;
    }
    
    return head;
}
