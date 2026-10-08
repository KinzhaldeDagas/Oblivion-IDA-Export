void __thiscall sub_617E80(_DWORD *this)
{
  int v2; // esi
  int *v3; // ebx
  UInt32 *v4; // ebp
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

  TESPackage_InitLoadGame((TESPackage *)this); /*0x617e85*/
  v2 = *(this + 0x10); /*0x617e8a*/
  v3 = 0; /*0x617e8d*/
  while ( v2 ) /*0x617e91*/
  {
    if ( !*(_DWORD *)(v2 + 4) && !*(_DWORD *)v2 ) /*0x617e9e*/
      break; /*0x617ea1*/
    v4 = *(UInt32 **)v2; /*0x617ea7*/
    v5 = TESForm_LookupByFormID(**(_DWORD **)v2); /*0x617ebb*/
    v6 = OblivionDynamicCast( /*0x617ec4*/
           v5,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &Actor `RTTI Type Descriptor',
           0);
    *v4 = (UInt32)v6; /*0x617ece*/
    if ( !v6 || (v7 = v6[2], (v7 & 0x800) != 0) || (v7 & 0x20) != 0 ) /*0x617ee5*/
    {
      if ( v3 ) /*0x617ef0*/
      {
        BSSimpleList_Remove(v3, (int)v4); /*0x617f19*/
        v2 = v3[1]; /*0x617f1e*/
      }
      else
      {
        v8 = *(_DWORD **)(v2 + 4); /*0x617ef2*/
        if ( v8 ) /*0x617ef7*/
        {
          *(_DWORD *)(v2 + 4) = v8[1]; /*0x617efc*/
          *(_DWORD *)v2 = *v8; /*0x617f02*/
          FormHeapFree((unsigned int)v8); /*0x617f04*/
        }
        else
        {
          *(_DWORD *)v2 = 0; /*0x617f0e*/
        }
      }
      FormHeapFree((unsigned int)v4); /*0x617f22*/
    }
    else
    {
      v3 = (int *)v2; /*0x617ee7*/
      v2 = *(_DWORD *)(v2 + 4); /*0x617ee9*/
    }
  }
  v9 = *(this + 0x4B); /*0x617f33*/
  if ( v9 ) /*0x617f3b*/
  {
    v10 = TESForm_LookupByFormID(v9); /*0x617f4c*/
    *(this + 0x4B) = OblivionDynamicCast( /*0x617f5d*/
                       v10,
                       0,
                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                       &Actor `RTTI Type Descriptor',
                       0);
  }
  *(this + 0x1E) = *(this + 0x1D); /*0x617f66*/
  if ( g_TESSaveLoadGame->currentVersion >= 0x5Fu ) /*0x617f72*/
  {
    sub_614D10(*(this + 0x17)); /*0x617f7e*/
    sub_614D10(*(this + 0x18)); /*0x617f89*/
    sub_614D10(*(this + 0x19)); /*0x617f94*/
    v11 = (UInt32 *)*(this + 0x24); /*0x617f99*/
    if ( v11 ) /*0x617fa1*/
    {
      v12 = (_DWORD *)v11[1]; /*0x617fa3*/
      if ( v12 ) /*0x617fa8*/
        sub_485BC0(v12); /*0x617faa*/
      if ( *v11 ) /*0x617faf*/
        *v11 = MagicItem_LookupByFormID(*v11); /*0x617fbe*/
    }
    v13 = (UInt32 *)*(this + 0x25); /*0x617fc0*/
    if ( v13 ) /*0x617fc8*/
    {
      v14 = (_DWORD *)v13[1]; /*0x617fca*/
      if ( v14 ) /*0x617fcf*/
        sub_485BC0(v14); /*0x617fd1*/
      if ( *v13 ) /*0x617fd6*/
        *v13 = MagicItem_LookupByFormID(*v13); /*0x617fe5*/
    }
    v15 = (UInt32 *)*(this + 0x26); /*0x617fe7*/
    if ( v15 ) /*0x617fef*/
    {
      v16 = (_DWORD *)v15[1]; /*0x617ff1*/
      if ( v16 ) /*0x617ff6*/
        sub_485BC0(v16); /*0x617ff8*/
      if ( *v15 ) /*0x617ffd*/
        *v15 = MagicItem_LookupByFormID(*v15); /*0x61800c*/
    }
    v17 = (UInt32 *)*(this + 0x27); /*0x61800e*/
    if ( v17 ) /*0x618016*/
    {
      v18 = (_DWORD *)v17[1]; /*0x618018*/
      if ( v18 ) /*0x61801d*/
        sub_485BC0(v18); /*0x61801f*/
      if ( *v17 ) /*0x618024*/
        *v17 = MagicItem_LookupByFormID(*v17); /*0x618033*/
    }
    v19 = (UInt32 *)*(this + 0x28); /*0x618035*/
    if ( v19 ) /*0x61803d*/
    {
      v20 = (_DWORD *)v19[1]; /*0x61803f*/
      if ( v20 ) /*0x618044*/
        sub_485BC0(v20); /*0x618046*/
      if ( *v19 ) /*0x61804b*/
        *v19 = MagicItem_LookupByFormID(*v19); /*0x61805a*/
    }
    v21 = (void **)*(this + 0x24); /*0x61805c*/
    if ( v21 && *v21 && *(this + 0x23) == MagicItem_GetFormID(*v21) ) /*0x618078*/
      *(this + 0x23) = *(this + 0x24); /*0x618080*/
    else
      *(this + 0x23) = 0; /*0x618088*/
    v22 = sub_614D60(*(this + 0x1F), (int **)*(this + 0x18)); /*0x61809c*/
    v28 = (int **)*(this + 0x17); /*0x6180aa*/
    v27 = *(this + 0x20); /*0x6180ab*/
    *(this + 0x1F) = v22; /*0x6180ae*/
    v23 = sub_614D60(v27, v28); /*0x6180b1*/
    v24 = *(this + 0x21); /*0x6180b6*/
    *(this + 0x20) = v23; /*0x6180bc*/
    v25 = sub_614D60(v24, (int **)*(this + 0x19)); /*0x6180c9*/
    v26 = (int **)*(this + 0x19); /*0x6180ce*/
    *(this + 0x21) = v25; /*0x6180d1*/
    *(this + 0x22) = sub_614D60(*(this + 0x22), v26); /*0x6180e6*/
  }
  if ( g_TESSaveLoadGame->currentVersion >= 0x66u ) /*0x6180f6*/
    sub_614D10(*(this + 0x1A)); /*0x6180fe*/
  *((_BYTE *)this + 0x1BD) = 1; /*0x618103*/
  *((_BYTE *)this + 0x59) = 0; /*0x61810a*/
}
