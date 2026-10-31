bool has_cycle(Node* head) {
    if (head==nullptr || head->next==nullptr) {
        return false;
    }
    
    Node* move1=head;
    Node* move2=head;
    
    while(move2!=nullptr && move2->next!= nullptr){
        move1=move1->next;
        move2=move2->next->next;
        
        if(move1==move2)return true;
    }
    
    return false;
}
