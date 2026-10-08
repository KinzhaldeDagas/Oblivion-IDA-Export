// Hot Reload OBSE decode: script variable-list cleanup. Frees each VariableInfo name buffer and payload, removes extra list nodes, leaves script->varList empty.
void __thiscall sub_4FC6C0(BSSimpleList_VoidPtr *this)
{
  BSSimpleList_VoidPtr *v1; // edi
  unsigned int data; // esi
  BSSimpleList_VoidPtr::NodeVoid *next; // eax

  v1 = this + 9; /*0x4fc6c2*/
  if ( this != (BSSimpleList_VoidPtr *)0xFFFFFFB8 ) /*0x4fc6c9*/
  {
    while ( !BSSimpleList_IsEmpty(v1) ) /*0x4fc6d9*/
    {
      data = (unsigned int)v1->firstNode.data; /*0x4fc6db*/
      if ( v1->firstNode.data ) /*0x4fc6db*/
      {
        FormHeapFree(*(_DWORD *)(data + 0x18)); /*0x4fc6e5*/
        *(_DWORD *)(data + 0x18) = 0; /*0x4fc6eb*/
        *(_WORD *)(data + 0x1E) = 0; /*0x4fc6ee*/
        *(_WORD *)(data + 0x1C) = 0; /*0x4fc6f2*/
        FormHeapFree(data); /*0x4fc6f6*/
      }
      next = v1->firstNode.next; /*0x4fc6fe*/
      if ( next ) /*0x4fc703*/
      {
        v1->firstNode.next = next->next; /*0x4fc708*/
        v1->firstNode.data = next->data; /*0x4fc70e*/
        FormHeapFree((unsigned int)next); /*0x4fc710*/
      }
      else
      {
        v1->firstNode.data = 0; /*0x4fc71a*/
      }
    }
  }
}
