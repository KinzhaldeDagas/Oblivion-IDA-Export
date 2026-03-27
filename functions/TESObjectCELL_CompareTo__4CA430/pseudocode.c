bool __thiscall TESObjectCELL_CompareTo(TESForm *this, void *a2)
{
  TESForm *v3; // eax
  ExtraDataList *v4; // ebx
  UInt8 v6; // al
  char v7; // cl
  _DWORD *v8; // edx
  void **vtbl; // ecx
  unsigned int v10; // eax
  int v11; // esi
  unsigned int v12; // eax
  unsigned __int8 *v13; // ecx
  unsigned __int8 *v14; // edx
  unsigned int v15; // eax
  unsigned __int8 *v16; // ecx
  unsigned __int8 *v17; // edx
  unsigned __int8 *v18; // ecx
  unsigned __int8 *v19; // edx
  bool v20; // zf
  void **v21; // ecx
  unsigned int v22; // eax
  unsigned int v23; // eax
  unsigned __int8 *v24; // ecx
  unsigned __int8 *v25; // edx
  unsigned int v26; // eax
  unsigned __int8 *v27; // ecx
  unsigned __int8 *v28; // edx
  unsigned __int8 *v29; // ecx
  unsigned __int8 *v30; // edx
  int v31; // eax

  v3 = (TESForm *)OblivionDynamicCast(
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESObjectCELL `RTTI Type Descriptor',
                    0);
  v4 = (ExtraDataList *)v3;
  if ( !v3 )
    return 1;
  if ( TESForm_CompareAllComponentsTo(this, v3) )
    return 1;
  v6 = v4[1].members.m_presenceBitfield[8];
  v7 = *((_BYTE *)this + 0x24);
  if ( v7 != v6 )
    return 1;
  v8 = *((_DWORD **)this + 0xF);
  if ( (v7 & 1) != 0 )
  {
    if ( (v6 & 1) != 0 )
      vtbl = v4[3].vtbl;
    else
      vtbl = 0;
    if ( !v8 || !vtbl )
      return ExtraDataList_CompareList((ExtraDataList *)this + 2, v4 + 2) != 0;
    v10 = 0x28;
    while ( (void *)*v8 == *vtbl )
    {
      v10 -= 4;
      ++vtbl;
      ++v8;
      if ( v10 < 4 )
      {
        if ( !v10 )
          goto LABEL_41;
        break;
      }
    }
    v11 = *(unsigned __int8 *)v8 - *(unsigned __int8 *)vtbl;
    if ( v11 )
      goto LABEL_39;
    v12 = v10 - 1;
    v13 = (unsigned __int8 *)vtbl + 1;
    v14 = (unsigned __int8 *)v8 + 1;
    if ( v12 )
    {
      v11 = *v14 - *v13;
      if ( v11 )
        goto LABEL_39;
      v15 = v12 - 1;
      v16 = v13 + 1;
      v17 = v14 + 1;
      if ( v15 )
      {
        v11 = *v17 - *v16;
        if ( v11 )
          goto LABEL_39;
        v18 = v16 + 1;
        v19 = v17 + 1;
        if ( v15 != 1 )
        {
          v11 = *v19 - *v18;
          v20 = *v19 == *v18;
          goto LABEL_38;
        }
      }
    }
LABEL_41:
    v31 = 0;
    goto LABEL_42;
  }
  if ( (v6 & 1) != 0 )
    v21 = 0;
  else
    v21 = v4[3].vtbl;
  if ( !v8 || !v21 )
    return ExtraDataList_CompareList((ExtraDataList *)this + 2, v4 + 2) != 0;
  v22 = 8;
  while ( (void *)*v8 == *v21 )
  {
    v22 -= 4;
    ++v21;
    ++v8;
    if ( v22 < 4 )
    {
      if ( !v22 )
        goto LABEL_41;
      break;
    }
  }
  v11 = *(unsigned __int8 *)v8 - *(unsigned __int8 *)v21;
  if ( v11 )
    goto LABEL_39;
  v23 = v22 - 1;
  v24 = (unsigned __int8 *)v21 + 1;
  v25 = (unsigned __int8 *)v8 + 1;
  if ( !v23 )
    goto LABEL_41;
  v11 = *v25 - *v24;
  if ( v11 )
    goto LABEL_39;
  v26 = v23 - 1;
  v27 = v24 + 1;
  v28 = v25 + 1;
  if ( !v26 )
    goto LABEL_41;
  v11 = *v28 - *v27;
  if ( v11 )
    goto LABEL_39;
  v29 = v27 + 1;
  v30 = v28 + 1;
  if ( v26 == 1 )
    goto LABEL_41;
  v11 = *v30 - *v29;
  v20 = *v30 == *v29;
LABEL_38:
  if ( v20 )
    goto LABEL_41;
LABEL_39:
  v31 = 1;
  if ( v11 <= 0 )
    v31 = 0xFFFFFFFF;
LABEL_42:
  if ( v31 )
    return 1;
  return ExtraDataList_CompareList((ExtraDataList *)this + 2, v4 + 2) != 0;
}
