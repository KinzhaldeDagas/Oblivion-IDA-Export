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

  v3 = (TESForm *)OblivionDynamicCast( /*0x4ca447*/
                    a2,
                    0,
                    (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                    &TESObjectCELL `RTTI Type Descriptor',
                    0);
  v4 = (ExtraDataList *)v3; /*0x4ca44c*/
  if ( !v3 ) /*0x4ca453*/
    return 1; /*0x4ca453*/
  if ( TESForm_CompareAllComponentsTo(this, v3) ) /*0x4ca45f*/
    return 1; /*0x4ca45f*/
  v6 = v4[1].members.m_presenceBitfield[8]; /*0x4ca468*/
  v7 = *((_BYTE *)this + 0x24); /*0x4ca46b*/
  if ( v7 != v6 ) /*0x4ca470*/
    return 1; /*0x4ca459*/
  v8 = *((_DWORD **)this + 0xF); /*0x4ca475*/
  if ( (v7 & 1) != 0 ) /*0x4ca47a*/
  {
    if ( (v6 & 1) != 0 ) /*0x4ca482*/
      vtbl = v4[3].vtbl; /*0x4ca488*/
    else
      vtbl = 0; /*0x4ca484*/
    if ( !v8 || !vtbl ) /*0x4ca495*/
      return ExtraDataList_CompareList((ExtraDataList *)this + 2, v4 + 2) != 0; /*0x4ca495*/
    v10 = 0x28; /*0x4ca49b*/
    while ( (void *)*v8 == *vtbl ) /*0x4ca4a4*/
    {
      v10 -= 4; /*0x4ca4a6*/
      ++vtbl; /*0x4ca4a9*/
      ++v8; /*0x4ca4ac*/
      if ( v10 < 4 ) /*0x4ca4b2*/
      {
        if ( !v10 ) /*0x4ca4b6*/
          goto LABEL_41; /*0x4ca4b6*/
        break; /*0x4ca4b6*/
      }
    }
    v11 = *(unsigned __int8 *)v8 - *(unsigned __int8 *)vtbl; /*0x4ca4bc*/
    if ( v11 ) /*0x4ca4c4*/
      goto LABEL_39; /*0x4ca4c4*/
    v12 = v10 - 1; /*0x4ca4ca*/
    v13 = (unsigned __int8 *)vtbl + 1; /*0x4ca4cd*/
    v14 = (unsigned __int8 *)v8 + 1; /*0x4ca4d0*/
    if ( v12 ) /*0x4ca4d5*/
    {
      v11 = *v14 - *v13; /*0x4ca4e1*/
      if ( v11 ) /*0x4ca4e3*/
        goto LABEL_39; /*0x4ca4e3*/
      v15 = v12 - 1; /*0x4ca4e9*/
      v16 = v13 + 1; /*0x4ca4ec*/
      v17 = v14 + 1; /*0x4ca4ef*/
      if ( v15 ) /*0x4ca4f4*/
      {
        v11 = *v17 - *v16; /*0x4ca500*/
        if ( v11 ) /*0x4ca502*/
          goto LABEL_39; /*0x4ca502*/
        v18 = v16 + 1; /*0x4ca50b*/
        v19 = v17 + 1; /*0x4ca50e*/
        if ( v15 != 1 ) /*0x4ca513*/
        {
          v11 = *v19 - *v18; /*0x4ca51f*/
          v20 = *v19 == *v18; /*0x4ca51f*/
          goto LABEL_38; /*0x4ca521*/
        }
      }
    }
LABEL_41:
    v31 = 0; /*0x4ca5bb*/
    goto LABEL_42; /*0x4ca5bb*/
  }
  if ( (v6 & 1) != 0 ) /*0x4ca528*/
    v21 = 0; /*0x4ca52a*/
  else
    v21 = v4[3].vtbl; /*0x4ca52e*/
  if ( !v8 || !v21 ) /*0x4ca53b*/
    return ExtraDataList_CompareList((ExtraDataList *)this + 2, v4 + 2) != 0; /*0x4ca53b*/
  v22 = 8; /*0x4ca541*/
  while ( (void *)*v8 == *v21 ) /*0x4ca54a*/
  {
    v22 -= 4; /*0x4ca54c*/
    ++v21; /*0x4ca54f*/
    ++v8; /*0x4ca552*/
    if ( v22 < 4 ) /*0x4ca558*/
    {
      if ( !v22 ) /*0x4ca55c*/
        goto LABEL_41; /*0x4ca55c*/
      break; /*0x4ca55c*/
    }
  }
  v11 = *(unsigned __int8 *)v8 - *(unsigned __int8 *)v21; /*0x4ca55e*/
  if ( v11 ) /*0x4ca566*/
    goto LABEL_39; /*0x4ca566*/
  v23 = v22 - 1; /*0x4ca568*/
  v24 = (unsigned __int8 *)v21 + 1; /*0x4ca56b*/
  v25 = (unsigned __int8 *)v8 + 1; /*0x4ca56e*/
  if ( !v23 ) /*0x4ca573*/
    goto LABEL_41; /*0x4ca573*/
  v11 = *v25 - *v24; /*0x4ca57b*/
  if ( v11 ) /*0x4ca57d*/
    goto LABEL_39; /*0x4ca57d*/
  v26 = v23 - 1; /*0x4ca57f*/
  v27 = v24 + 1; /*0x4ca582*/
  v28 = v25 + 1; /*0x4ca585*/
  if ( !v26 ) /*0x4ca58a*/
    goto LABEL_41; /*0x4ca58a*/
  v11 = *v28 - *v27; /*0x4ca592*/
  if ( v11 ) /*0x4ca594*/
    goto LABEL_39; /*0x4ca594*/
  v29 = v27 + 1; /*0x4ca599*/
  v30 = v28 + 1; /*0x4ca59c*/
  if ( v26 == 1 ) /*0x4ca5a1*/
    goto LABEL_41; /*0x4ca5a1*/
  v11 = *v30 - *v29; /*0x4ca5a9*/
  v20 = *v30 == *v29; /*0x4ca5a9*/
LABEL_38:
  if ( v20 ) /*0x4ca5ab*/
    goto LABEL_41; /*0x4ca5ab*/
LABEL_39:
  v31 = 1; /*0x4ca5ad*/
  if ( v11 <= 0 ) /*0x4ca5b4*/
    v31 = 0xFFFFFFFF; /*0x4ca5b6*/
LABEL_42:
  if ( v31 ) /*0x4ca5bf*/
    return 1; /*0x4ca5c7*/
  return ExtraDataList_CompareList((ExtraDataList *)this + 2, v4 + 2) != 0; /*0x4ca455*/
}
