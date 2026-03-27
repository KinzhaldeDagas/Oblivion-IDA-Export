char __thiscall sub_4B7210(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // esi
  BSSimpleList_VoidPtr *v6; // ebx
  void **p_flags; // esi
  int v8; // edi
  void **v9; // edi

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESObjectDOOR `RTTI Type Descriptor',
                    0);
  v4 = v3;
  if ( !v3
    || TESForm_CompareAllComponentsTo(this, v3)
    || *((Data **)this + 0x16) != v4[3].member.modlist.data
    || *((TESForm::ModReferenceList **)this + 0x17) != v4[3].member.modlist.next
    || *((TESFormVtbl **)this + 0x18) != v4[4].vtbl
    || *((_BYTE *)this + 0x64) != v4[4].member.type )
  {
    return 1;
  }
  v6 = (BSSimpleList_VoidPtr *)((char *)this + 0x68);
  p_flags = (void **)&v4[4].member.flags;
  v8 = BSSimpleList_Count((_DWORD *)this + 0x1A);
  if ( v8 != BSSimpleList_Count(p_flags) )
    return 1;
  if ( p_flags )
  {
    do
    {
      v9 = (void **)p_flags[1];
      if ( !v9 && !*p_flags )
        break;
      if ( !sub_446C30(v6, *p_flags) )
        return 1;
      p_flags = v9;
    }
    while ( v9 );
  }
  return 0;
}
