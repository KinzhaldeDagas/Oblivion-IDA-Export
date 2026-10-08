char __thiscall sub_4B7210(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  TESForm *v4; // esi
  BSSimpleList_VoidPtr *v6; // ebx
  void **p_flags; // esi
  int v8; // edi
  void **v9; // edi

  v3 = (TESForm *)OblivionDynamicCast( /*0x4b7227*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESObjectDOOR `RTTI Type Descriptor',
                    0);
  v4 = v3; /*0x4b722c*/
  if ( !v3 /*0x4b7266*/
    || TESForm_CompareAllComponentsTo(this, v3)
    || *((Data **)this + 0x16) != v4[3].member.modlist.data
    || *((TESForm::ModReferenceList **)this + 0x17) != v4[3].member.modlist.next
    || *((TESFormVtbl **)this + 0x18) != v4[4].vtbl
    || *((_BYTE *)this + 0x64) != v4[4].member.type )
  {
    return 1; /*0x4b7236*/
  }
  v6 = (BSSimpleList_VoidPtr *)((char *)this + 0x68); /*0x4b7269*/
  p_flags = (void **)&v4[4].member.flags; /*0x4b726e*/
  v8 = BSSimpleList_Count((_DWORD *)this + 0x1A); /*0x4b7278*/
  if ( v8 != BSSimpleList_Count(p_flags) ) /*0x4b7281*/
    return 1; /*0x4b72ae*/
  if ( p_flags ) /*0x4b7285*/
  {
    do /*0x4b72a4*/
    {
      v9 = (void **)p_flags[1]; /*0x4b7287*/
      if ( !v9 && !*p_flags ) /*0x4b728e*/
        break; /*0x4b7290*/
      if ( !BSSimpleList::Contains(v6, *p_flags) ) /*0x4b729e*/
        return 1; /*0x4b729e*/
      p_flags = v9; /*0x4b72a0*/
    }
    while ( v9 ); /*0x4b72a4*/
  }
  return 0; /*0x4b7235*/
}
