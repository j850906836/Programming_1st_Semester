#include <stdio.h>
#include <stdlib.h>

struct IntNode {
	int id;
	int count;
	struct IntNode * next;
};
void OrderInsert( IntPtr &head, int id );
typedef IntNode *IntPtr;
int main()
{
		int id = -1;
		IntPtr intList = NULL;
		
		scanf("%d",&id);
		
		while( id != -1 ) {
			OrderInsert( intList,id );
			scanf("%d",&id);
		}
		
		while( intList != NULL ) {
			printf("%d\t%d\n",intList->id,intList->count);
			intList = intList->next;
		}
		return 0;
}
void OrderInsert( IntPtr &head, int id ) 
{
	IntPtr lastp;
	IntPtr ptr;
	IntPtr new = (IntPtr) malloc(sizeof(IntPtr));
	lastp = ptr;
	
	if( head == NULL ) {
		new -> id = id;
		new -> count = 1;
		head = new;
		return;
	}
	lastp = ptr = head;
	while( 	ptr != NULL && id >= ptr->id ) {
		lastp = ptr;
		ptr = ptr->next;
	}
	if( lastp == ptr ) {
		if( lastp->id == id ) {
			lastp->count += 1;
			return;
		}
		new->id = id;
		new->count = 1;
		new->next = ptr;
		head = new;
		return;
	}
	else {
		if( lastp->id == id ) {
			lastp->count += 1;
			return;
		}
		new->id = id;
		new->count = 1;
		lastp->next = new;
		new->next = ptr;
		return;
	}
}
