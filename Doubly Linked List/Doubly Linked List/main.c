//
//  main.c
//  Doubly Linked List
//
//  Created by Kaustuv Mandal on 09/08/18.
//  Copyright © 2018 Kaustuv Mandal. All rights reserved.
//

#include <stdio.h>

struct node{
    struct node *previous;
    int data;
    struct node *next;
}*head=NULL,*tail=NULL,*pre=NULL;
int main() {
    int item = 0,ch;
    printf("==========================\n");
    printf("Enter Choice\n");
label:
    printf("==========================\n");
    printf("Press 1: Insertion\n");
    printf("Press 2: Deletion\n");
    printf("Press 3: Print List\n");
    printf("Press 0 Exit\n");
    printf("==========================\n");
    
    scanf("%d",&ch);
    switch (ch) {
        case 1:{
            printf("Enter Element\n");
            scanf("%d",&item);
            if(head == NULL && tail == NULL){
                tail = (struct node*)malloc(sizeof(struct node));
                head = tail;
                head->previous = NULL;
                head->data = item;
                head->next = NULL;
                pre = head;
            }
            else{
                tail = (struct node*)malloc(sizeof(struct node));
                pre->next = tail;
                tail->previous = pre;
                tail->data = item;
                tail->next = NULL;
                pre = tail;
            }
            goto label;
        }
        case 2:{
            
        }
        case 3:{
            struct node *traverse = head;
            printf("Printing Elements\n");
            if (traverse != NULL) {
                while (traverse != NULL) {
                    printf("%d ",traverse->data);
                    traverse = traverse->next;
                }
                printf("\n");
            }
            else{
                printf("UnderFlow!!\n");
            }
            goto label;
        }
        case 0:{
            printf("Terminating....\n");
            break;
        }
        default:{
            printf("Wrong Input!!\n");
            goto label;
        }
    }
    return 0;
}
