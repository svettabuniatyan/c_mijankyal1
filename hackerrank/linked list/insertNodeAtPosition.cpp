SinglyLinkedListNode* insertNodeAtPosition(SinglyLinkedListNode* llist, int data, int position) {
    SinglyLinkedListNode* x = new SinglyLinkedListNode(data);
    if(position==0)
    {   
        x->next=llist;
        return x;
    }
    
    SinglyLinkedListNode* current = llist;
    for (int i = 0; i < position - 1; i++) {
        current = current->next;
    }
    
    x->next = current->next;
    current->next = x;
    
    return llist;
}
