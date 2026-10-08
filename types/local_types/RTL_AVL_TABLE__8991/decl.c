struct _RTL_AVL_TABLE
{
RTL_BALANCED_LINKS BalancedRoot;
void *OrderedPointer;
ULONG WhichOrderedElement;
ULONG NumberGenericTableElements;
ULONG DepthOfTree;
PRTL_BALANCED_LINKS RestartKey;
ULONG DeleteCount;
PRTL_AVL_COMPARE_ROUTINE CompareRoutine;
PRTL_AVL_ALLOCATE_ROUTINE AllocateRoutine;
PRTL_AVL_FREE_ROUTINE FreeRoutine;
void *TableContext;
};
