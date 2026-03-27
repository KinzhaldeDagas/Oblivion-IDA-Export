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

  sub_56A750(this);
  result = a2;
  next = this;
  for ( i = a2; i; i = i->next )
  {
    if ( !i->next && !i->data )
      break;
    v5 = (_DWORD *)FormHeapAlloc(0x18u);
    v6 = v5 ? (_DWORD *)Condition_constr_(v5) : 0;
    sub_56AB80(v6, i->data);
    if ( v6 )
    {
      v7 = next;
      p_next = (int)&next->firstNode.next;
      if ( next->firstNode.next )
      {
        do
        {
          v7 = *(BSSimpleList_VoidPtr **)p_next;
          v9 = *(_DWORD *)(*(_DWORD *)p_next + 4) == 0;
          p_next = *(_DWORD *)p_next + 4;
        }
        while ( !v9 );
      }
      if ( v7->firstNode.data )
      {
        v10 = (BSSimpleList_VoidPtr::NodeVoid *)FormHeapAlloc(8u);
        if ( v10 )
        {
          v10->data = v6;
          v10->next = 0;
          v7->firstNode.next = v10;
        }
        else
        {
          v7->firstNode.next = 0;
        }
      }
      else
      {
        v7->firstNode.data = v6;
      }
    }
    result = next->firstNode.next;
    if ( result )
      next = (BSSimpleList_VoidPtr *)next->firstNode.next;
  }
  return result;
}
