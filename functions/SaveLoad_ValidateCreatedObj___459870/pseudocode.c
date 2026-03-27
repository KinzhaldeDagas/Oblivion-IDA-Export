void __thiscall SaveLoad_ValidateCreatedObj__(BSSimpleList_VoidPtr *this)
{
  BSSimpleList_VoidPtr *v1; // ebp
  int *v2; // edi
  void *v3; // esi
  void *v4; // ebx
  void *v5; // eax
  int *v6; // eax
  BSSimpleList_VoidPtr::NodeVoid *next; // eax
  void *data; // esi

  v1 = this + 6;
  v2 = (int *)(this + 6);
  if ( this != (BSSimpleList_VoidPtr *)0xFFFFFFD0 )
  {
    do
    {
      v3 = (void *)*v2;
      if ( !*v2
        || (v4 = OblivionDynamicCast(
                   v3,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                   (struct TypeDescriptor *)&TESBoundObject `RTTI Type Descriptor',
                   0),
            v5 = OblivionDynamicCast(
                   v3,
                   0,
                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                   &SpellItem `RTTI Type Descriptor',
                   0),
            v4)
        || v5 )
      {
        v2 = (int *)v2[1];
      }
      else
      {
        v6 = (int *)v2[1];
        if ( v6 )
        {
          v2[1] = v6[1];
          *v2 = *v6;
          FormHeapFree((unsigned int)v6);
        }
        else
        {
          *v2 = 0;
        }
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)v3 + 0x10))(v3, 1);
      }
    }
    while ( v2 );
  }
  if ( v1 )
  {
    while ( !BSSimpleList_IsEmpty(v1) )
    {
      next = v1->firstNode.next;
      data = v1->firstNode.data;
      if ( next )
      {
        v1->firstNode.next = next->next;
        v1->firstNode.data = next->data;
        FormHeapFree((unsigned int)next);
      }
      else
      {
        v1->firstNode.data = 0;
      }
      if ( data )
        (*(void (__thiscall **)(void *, int))(*(_DWORD *)data + 0x10))(data, 1);
    }
  }
}
