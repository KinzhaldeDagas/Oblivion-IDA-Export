// Verified graph-node connection-list accessor: returns this+0x20. TESPathGrid and TESRoad graph code both traverse this as a BSSimpleList of adjacency pointers.
BSSimpleList_VoidPtr *__thiscall PathGraphNode_GetConnections(void *this)
{
  return (BSSimpleList_VoidPtr *)((char *)this + 0x20); /*0x4e7de3*/
}
