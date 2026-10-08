struct BSTPersistentListPointer
{
void *allocatorVtable;
BSTPersistentListPointerNode *head;
BSTPersistentListPointerNode *tail;
BSTPersistentListPointerNode *freeHead;
unsigned int count;
};
