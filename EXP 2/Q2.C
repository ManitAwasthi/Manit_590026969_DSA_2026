#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

int main() {
    struct node *head=NULL, *temp, *newnode;
    int n, key, pos=1, found=0;

    printf("Enter number of nodes: ");
    scanf("%d", &n);

    for(int i=0;i<n;i++){
        newnode = (struct node*)malloc(sizeof(struct node));
        scanf("%d",&newnode->data);
        newnode->next=NULL;

        if(head==NULL)
            head=temp=newnode;
        else{
            temp->next=newnode;
            temp=newnode;
        }
    }

    printf("Enter element to search: ");
    scanf("%d",&key);

    temp=head;
    while(temp){
        if(temp->data==key){
            found=1;
            break;
        }
        temp=temp->next;
        pos++;
    }

    if(found)
        printf("Element found at position %d\n",pos);
    else
        printf("Element does not exist\n");

    return 0;
}

Enter number of nodes: 3
10 20 30
Enter element to search: 20
Element found at position 2
