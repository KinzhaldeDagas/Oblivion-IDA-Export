struct _RTL_GENERIC_TABLE
{
PRTL_SPLAY_LINKS TableRoot;
LIST_ENTRY InsertOrderList;
LIST_ENTRY *OrderedPointer;
ULONG WhichOrderedElement;
ULONG NumberGenericTableElements;
PRTL_GENERIC_COMPARE_ROUTINE CompareRoutine;
PRTL_GENERIC_ALLOCATE_ROUTINE AllocateRoutine;
PRTL_GENERIC_FREE_ROUTINE FreeRoutine;
void *TableContext;
};
