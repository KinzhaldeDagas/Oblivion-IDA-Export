struct InteriorCellNewReferencesMapVtable
{
void *scalarDeletingDestructor;
unsigned int (__thiscall *hash)(void *self, unsigned int key);
int (__thiscall *keysEqual)(void *self, unsigned int a, unsigned int b);
void *setValue;
void *clearValue;
void *allocateNode;
void *releaseNode;
};
