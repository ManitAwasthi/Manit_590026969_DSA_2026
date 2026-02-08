#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Record {
    int id;
    char name[50];
};

int main() {
    struct Record *r = NULL;
    int n = 0, choice, i, delId;

    do {
        printf("\n1.Add\n2.Display\n3.Delete\n4.Exit\n");
        scanf("%d",&choice);

        switch(choice) {

        case 1:
            n++;
            r = realloc(r, n*sizeof(struct Record));
            printf("Enter id & name: ");
            scanf("%d %s",&r[n-1].id,r[n-1].name);
            break;

        case 2:
            for(i=0;i<n;i++)
                printf("%d %s\n",r[i].id,r[i].name);
            break;

        case 3:
            printf("Enter id to delete: ");
            scanf("%d",&delId);
            for(i=0;i<n;i++){
                if(r[i].id==delId){
                    r[i]=r[n-1];
                    n--;
                    r=realloc(r,n*sizeof(struct Record));
                    break;
                }
            }
            break;
        }
    } while(choice!=4);

    free(r);
}

OUTPUT:
1.Add
2.Display
3.Delete
4.Exit
1
Enter id & name: 5800298
ZOIE

1.Add
2.Display
3.Delete
4.Exit
2
5800298 ZOIE

1.Add
2.Display
3.Delete
4.Exit
3
Enter id to delete: 500298

1.Add
2.Display
3.Delete
4.Exit
1
Enter id & name: 123
A

1.Add
2.Display
3.Delete
4.Exit
4


=== Code Execution Successful ===
