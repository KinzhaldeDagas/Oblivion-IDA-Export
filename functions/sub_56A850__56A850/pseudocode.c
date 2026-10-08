BSSimpleList_VoidPtr::NodeVoid *__thiscall sub_56A850(BSSimpleList_VoidPtr *this, BSSimpleList_VoidPtr::NodeVoid *a2)
{
  BSSimpleList_VoidPtr::NodeVoid *result; // eax
  BSSimpleList_VoidPtr::NodeVoid *i; // ebp
  _DWORD *v5; // eax
  _DWORD *v6; // edi
  BSSimpleList_VoidPtr *v7; // esi
  int p_next; // eax
  bool v9; // zf
  BSSimpleList_VoidPtr::NodeVoid *v10; // eax
  BSSimpleList_VoidPtr *next; // [esp+14h] [ebp-10h]

  sub_56A750(this); /*0x56a877*/
  result = a2; /*0x56a87c*/
  next = this; /*0x56a884*/
  for ( i = a2; i; i = i->next )
  {
    if ( !i->next && !i->data ) /*0x56a895*/
      break; /*0x56a898*/
    v5 = (_DWORD *)FormHeapAlloc(0x18u); /*0x56a8a0*/
    v6 = v5 ? (_DWORD *)Condition_constr_(v5) : 0;
    sub_56AB80(v6, i->data); /*0x56a8cf*/
    if ( v6 ) /*0x56a8d6*/
    {
      v7 = next; /*0x56a8d8*/
      p_next = (int)&next->firstNode.next; /*0x56a8de*/
      if ( next->firstNode.next ) /*0x56a8de*/
      {
        do /*0x56a8ed*/
        {
          v7 = *(BSSimpleList_VoidPtr **)p_next; /*0x56a8e5*/
          v9 = *(_DWORD *)(*(_DWORD *)p_next + 4) == 0; /*0x56a8e7*/
          p_next = *(_DWORD *)p_next + 4; /*0x56a8ea*/
        }
        while ( !v9 ); /*0x56a8ed*/
      }
      if ( v7->firstNode.data ) /*0x56a8ef*/
      {
        v10 = (BSSimpleList_VoidPtr::NodeVoid *)FormHeapAlloc(8u); /*0x56a8f5*/
        if ( v10 ) /*0x56a8ff*/
        {
          v10->data = v6; /*0x56a901*/
          v10->next = 0; /*0x56a903*/
          v7->firstNode.next = v10; /*0x56a906*/
        }
        else
        {
          v7->firstNode.next = 0; /*0x56a90d*/
        }
      }
      else
      {
        v7->firstNode.data = v6; /*0x56a912*/
      }
    }
    result = next->firstNode.next; /*0x56a918*/
    if ( result ) /*0x56a91d*/
      next = (BSSimpleList_VoidPtr *)next->firstNode.next; /*0x56a91f*/
  }
  return result; /*0x56a92e*/
}
