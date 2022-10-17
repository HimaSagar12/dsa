Node *removeDuplicates(Node *head)
{
 // your code goes here
 Node* temp = head;
 if(temp == NULL || temp->next == NULL)
    return temp;
 while(  temp->next)
 {
     if (temp->data == temp->next->data)
     {
         temp->next = temp->next->next;
     }
     else
        temp = temp->next;
 }
 return head;
}
