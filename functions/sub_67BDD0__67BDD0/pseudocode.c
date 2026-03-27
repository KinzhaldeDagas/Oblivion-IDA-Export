int __thiscall sub_67BDD0(_DWORD *this)
{
  int v2; // esi
  int *v3; // ebx
  void **v4; // edi
  UInt32 v5; // eax
  TESForm *v6; // eax
  _DWORD *v7; // eax
  UInt32 v8; // eax
  TESForm *v9; // eax

  v2 = *this;
  v3 = 0;
  while ( v2 )
  {
    if ( !*(_DWORD *)(v2 + 4) && !*(_DWORD *)v2 )
      break;
    v4 = *(void ***)v2;
    v5 = **(_DWORD **)v2;
    if ( v5 )
    {
      v6 = TESForm_LookupByFormID(v5);
      *v4 = OblivionDynamicCast(
              v6,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &Actor `RTTI Type Descriptor',
              0);
    }
    if ( *v4 )
    {
      v3 = (int *)v2;
      v2 = *(_DWORD *)(v2 + 4);
    }
    else if ( v3 )
    {
      BSSimpleList_Remove(v3, (int)v4);
      v2 = v3[1];
      FormHeapFree((unsigned int)v4);
    }
    else
    {
      v7 = *(_DWORD **)(v2 + 4);
      if ( v7 )
      {
        *(_DWORD *)(v2 + 4) = v7[1];
        *(_DWORD *)v2 = *v7;
        FormHeapFree((unsigned int)v7);
      }
      else
      {
        *(_DWORD *)v2 = 0;
      }
      FormHeapFree((unsigned int)v4);
    }
  }
  v8 = *(this + 1);
  if ( v8 )
  {
    v9 = TESForm_LookupByFormID(v8);
    *(this + 1) = OblivionDynamicCast(
                    v9,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &Actor `RTTI Type Descriptor',
                    0);
  }
  return (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*(this + 2) + 0xE8))(*(this + 2));
}
