int intersectPoint(Node* head1, Node* head2)
{
       // Your Code Here
   while(head1){
       Node *tmp = head1->next;
       head1->next = NULL;
       head1 = tmp;
   }
   
   while(head2){
       if(head2->next == NULL){
           return head2->data;
       }
       head2 = head2->next;
   }
   return -1;
    
}
