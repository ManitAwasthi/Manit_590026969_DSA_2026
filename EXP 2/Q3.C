void insertBeginning(struct node** head, int data){
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=data;
    newnode->next=*head;
    *head=newnode;
}

void insertEnd(struct node** head, int data){
    struct node *newnode=(struct node*)malloc(sizeof(struct node)), *temp=*head;
    newnode->data=data;
    newnode->next=NULL;

    if(*head==NULL){
        *head=newnode;
        return;
    }

    while(temp->next)
        temp=temp->next;
    temp->next=newnode;
}

After inserting at beginning: 5 10 20
After inserting at end: 5 10 20 30
