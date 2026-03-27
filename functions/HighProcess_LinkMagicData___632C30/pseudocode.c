TESForm *__thiscall HighProcess_LinkMagicData_(UInt32 *this, int a2, int a3, void *a4)
{
  TESForm *v5; // eax
  TESForm *v6; // eax
  TESForm *v7; // eax
  void *v8; // eax
  int v9; // esi
  _DWORD *v10; // ebp
  void **v11; // ebx
  UInt32 v12; // eax
  TESForm *v13; // eax
  _DWORD *v14; // eax
  TESForm *result; // eax
  UInt32 *v16; // esi
  int v17; // ebx
  TESForm *v18; // eax
  TESForm *v19; // eax
  TESForm *v20; // eax

  MiddleHighProc_LinkMagicData_(this, a2, a3, a4);
  v5 = TESForm_LookupByFormID(*(this + 0x86));
  *(this + 0x86) = (UInt32)OblivionDynamicCast(
                             v5,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                             (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                             0);
  v6 = TESForm_LookupByFormID(*(this + 0x69));
  *(this + 0x69) = (UInt32)OblivionDynamicCast(
                             v6,
                             0,
                             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                             (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                             0);
  v7 = TESForm_LookupByFormID(*(this + 0xB1));
  v8 = OblivionDynamicCast(
         v7,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
         0);
  v9 = *(this + 0x63);
  v10 = 0;
  *(this + 0xB1) = (UInt32)v8;
  while ( v9 )
  {
    if ( !*(_DWORD *)(v9 + 4) && !*(_DWORD *)v9 )
      break;
    v11 = *(void ***)v9;
    v12 = **(_DWORD **)v9;
    if ( v12 )
    {
      v13 = TESForm_LookupByFormID(v12);
      *v11 = OblivionDynamicCast(
               v13,
               0,
               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
               &Actor `RTTI Type Descriptor',
               0);
    }
    if ( *v11 )
    {
      v10 = (_DWORD *)v9;
      v9 = *(_DWORD *)(v9 + 4);
    }
    else if ( v10 )
    {
      BSSimpleList_Remove(v10, (int)v11);
      v9 = v10[1];
      FormHeapFree((unsigned int)v11);
    }
    else
    {
      v14 = *(_DWORD **)(v9 + 4);
      if ( v14 )
      {
        *(_DWORD *)(v9 + 4) = v14[1];
        *(_DWORD *)v9 = *v14;
        FormHeapFree((unsigned int)v14);
      }
      else
      {
        *(_DWORD *)v9 = 0;
      }
      FormHeapFree((unsigned int)v11);
    }
  }
  result = (TESForm *)SaveLoad_CurrentSavegame;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x5Au )
  {
    v16 = this + 0xB2;
    v17 = 5;
    do
    {
      if ( *v16 )
      {
        v18 = TESForm_LookupByFormID(*v16);
        *v16 = (UInt32)OblivionDynamicCast(
                         v18,
                         0,
                         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                         (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                         0);
      }
      ++v16;
      --v17;
    }
    while ( v17 );
    result = (TESForm *)*(this + 0xB9);
    if ( result )
    {
      v19 = TESForm_LookupByFormID((UInt32)result);
      result = (TESForm *)OblivionDynamicCast(
                            v19,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                            (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                            0);
      *(this + 0xB9) = (UInt32)result;
    }
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x6Au )
  {
    result = (TESForm *)*(this + 0x96);
    if ( result )
    {
      v20 = TESForm_LookupByFormID((UInt32)result);
      result = (TESForm *)OblivionDynamicCast(
                            v20,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                            &Actor `RTTI Type Descriptor',
                            0);
      *(this + 0x96) = (UInt32)result;
    }
  }
  return result;
}
