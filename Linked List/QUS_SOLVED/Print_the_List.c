/* 
 *  struct Node {
 *    int data;
 *    struct Node *next;
 *  };
 *
 *  The above structure defines the linked list node.
 */

void forwardPrint(struct Node* head) {
	if(head != NULL){
      	printf("%d-",head->data);
      	forwardPrint(head->next);
    }
}

void backwardPrint(struct Node* head) {
	if(head != NULL){
      	backwardPrint(head->next);
      	printf("%d-",head->data);
    }
}
