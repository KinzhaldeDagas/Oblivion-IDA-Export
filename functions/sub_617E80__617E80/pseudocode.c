void __thiscall sub_617E80(_DWORD *this)
{
  int v2; // esi
  _DWORD *v3; // ebx
  _DWORD *v4; // ebp
  TESForm *v5; // eax
  _DWORD *v6; // eax
  int v7; // eax
  _DWORD *v8; // eax
  UInt32 v9; // eax
  TESForm *v10; // eax
  UInt32 *v11; // esi
  _DWORD *v12; // ecx
  UInt32 *v13; // esi
  _DWORD *v14; // ecx
  UInt32 *v15; // esi
  _DWORD *v16; // ecx
  UInt32 *v17; // esi
  _DWORD *v18; // ecx
  UInt32 *v19; // esi
  _DWORD *v20; // ecx
  void **v21; // eax
  int *v22; // eax
  int *v23; // eax
  int v24; // ecx
  int *v25; // eax
  int **v26; // edx
  int v27; // [esp-8h] [ebp-14h]
  int **v28; // [esp-4h] [ebp-10h]

  sub_5660F0(this);
  v2 = *(this + 0x10);
  v3 = 0;
  while ( v2 )
  {
    if ( !*(_DWORD *)(v2 + 4) && !*(_DWORD *)v2 )
      break;
    v4 = *(_DWORD **)v2;
    v5 = TESForm_LookupByFormID(**(_DWORD **)v2);
    v6 = OblivionDynamicCast(
           v5,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &Actor `RTTI Type Descriptor',
           0);
    *v4 = v6;
    if ( !v6 || (v7 = v6[2], (v7 & 0x800) != 0) || (v7 & 0x20) != 0 )
    {
      if ( v3 )
      {
        BSSimpleList_Remove(v3, (int)v4);
        v2 = v3[1];
      }
      else
      {
        v8 = *(_DWORD **)(v2 + 4);
        if ( v8 )
        {
          *(_DWORD *)(v2 + 4) = v8[1];
          *(_DWORD *)v2 = *v8;
          FormHeapFree((unsigned int)v8);
        }
        else
        {
          *(_DWORD *)v2 = 0;
        }
      }
      FormHeapFree((unsigned int)v4);
    }
    else
    {
      v3 = (_DWORD *)v2;
      v2 = *(_DWORD *)(v2 + 4);
    }
  }
  v9 = *(this + 0x4B);
  if ( v9 )
  {
    v10 = TESForm_LookupByFormID(v9);
    *(this + 0x4B) = OblivionDynamicCast(
                       v10,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                       &Actor `RTTI Type Descriptor',
                       0);
  }
  *(this + 0x1E) = *(this + 0x1D);
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x5Fu )
  {
    sub_614D10(*(this + 0x17));
    sub_614D10(*(this + 0x18));
    sub_614D10(*(this + 0x19));
    v11 = (UInt32 *)*(this + 0x24);
    if ( v11 )
    {
      v12 = (_DWORD *)v11[1];
      if ( v12 )
        sub_485BC0(v12);
      if ( *v11 )
        *v11 = MagicItem_LookupByFormID(*v11);
    }
    v13 = (UInt32 *)*(this + 0x25);
    if ( v13 )
    {
      v14 = (_DWORD *)v13[1];
      if ( v14 )
        sub_485BC0(v14);
      if ( *v13 )
        *v13 = MagicItem_LookupByFormID(*v13);
    }
    v15 = (UInt32 *)*(this + 0x26);
    if ( v15 )
    {
      v16 = (_DWORD *)v15[1];
      if ( v16 )
        sub_485BC0(v16);
      if ( *v15 )
        *v15 = MagicItem_LookupByFormID(*v15);
    }
    v17 = (UInt32 *)*(this + 0x27);
    if ( v17 )
    {
      v18 = (_DWORD *)v17[1];
      if ( v18 )
        sub_485BC0(v18);
      if ( *v17 )
        *v17 = MagicItem_LookupByFormID(*v17);
    }
    v19 = (UInt32 *)*(this + 0x28);
    if ( v19 )
    {
      v20 = (_DWORD *)v19[1];
      if ( v20 )
        sub_485BC0(v20);
      if ( *v19 )
        *v19 = MagicItem_LookupByFormID(*v19);
    }
    v21 = (void **)*(this + 0x24);
    if ( v21 && *v21 && *(this + 0x23) == MagicItem_GetFormID(*v21) )
      *(this + 0x23) = *(this + 0x24);
    else
      *(this + 0x23) = 0;
    v22 = sub_614D60(*(this + 0x1F), (int **)*(this + 0x18));
    v28 = (int **)*(this + 0x17);
    v27 = *(this + 0x20);
    *(this + 0x1F) = v22;
    v23 = sub_614D60(v27, v28);
    v24 = *(this + 0x21);
    *(this + 0x20) = v23;
    v25 = sub_614D60(v24, (int **)*(this + 0x19));
    v26 = (int **)*(this + 0x19);
    *(this + 0x21) = v25;
    *(this + 0x22) = sub_614D60(*(this + 0x22), v26);
  }
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x66u )
    sub_614D10(*(this + 0x1A));
  *((_BYTE *)this + 0x1BD) = 1;
  *((_BYTE *)this + 0x59) = 0;
}
