BSExtraData *__userpurge sub_6489E0@<eax>(double a1@<st2>, double a2@<st1>, double a3@<st0>, _DWORD *a4, float a5)
{
  BSExtraData *result; // eax
  BSExtraData *v6; // edi
  int *v7; // eax
  int *v8; // esi
  void (__thiscall **v9)(BSExtraData *); // eax
  void (__thiscall **v10)(BSExtraData *); // eax
  BSExtraDataVtbl *vtbl; // ebx
  void (__thiscall *Destructor)(BSExtraData *); // edi
  void (__thiscall **v13)(BSExtraData *); // esi
  int v14; // eax
  bool v15; // zf
  void (__thiscall **v16)(BSExtraData *); // eax
  TESObjectREFR *v17; // edi
  int *v18; // eax
  char v19; // bl
  int v20; // esi
  BSExtraDataVtbl *ExtraPackage; // ebp
  int v22; // esi
  BSExtraDataVtbl *v23; // ebp
  char v24; // al
  double v25; // st7
  char v26; // [esp+1Bh] [ebp-15h]
  int *v27; // [esp+1Ch] [ebp-14h]
  void (__thiscall **v28)(BSExtraData *); // [esp+20h] [ebp-10h]
  TESObjectREFR **i; // [esp+24h] [ebp-Ch]
  ExtraDataList *v30; // [esp+28h] [ebp-8h]
  BSExtraData *v31; // [esp+2Ch] [ebp-4h]

  v26 = 0; /*0x6489f7*/
  if ( (*(unsigned __int8 (__usercall **)@<al>(_DWORD *@<ecx>, _DWORD, double@<st0>, double@<st1>, double@<st2>))(*a4 + 0x198))( /*0x648a0a*/
         a4,
         0,
         a3,
         a2,
         a1)
    || (a4[2] & 0x800) != 0 )
  {
    v26 = 1; /*0x648a0c*/
  }
  v30 = (ExtraDataList *)(a4 + 0x11); /*0x648a14*/
  result = (BSExtraData *)ExtraDataList_GetFollowerExtra(); /*0x648a18*/
  v6 = result; /*0x648a1d*/
  v31 = result; /*0x648a21*/
  if ( result ) /*0x648a25*/
  {
    v7 = (int *)FormHeapAlloc(8u); /*0x648a2d*/
    if ( v7 ) /*0x648a37*/
    {
      v8 = v7; /*0x648a39*/
      *v7 = 0; /*0x648a3b*/
      v7[1] = 0; /*0x648a3d*/
      v27 = v7; /*0x648a40*/
    }
    else
    {
      v27 = 0; /*0x648a46*/
      v8 = 0; /*0x648a4a*/
    }
    v9 = (void (__thiscall **)(BSExtraData *))FormHeapAlloc(8u); /*0x648a4e*/
    if ( v9 ) /*0x648a58*/
    {
      *v9 = 0; /*0x648a5a*/
      v9[1] = 0; /*0x648a5c*/
      v28 = v9; /*0x648a5f*/
    }
    else
    {
      v28 = 0; /*0x648a65*/
    }
    v10 = v28; /*0x648a69*/
    vtbl = v6[1].vtbl; /*0x648a6e*/
    for ( i = (TESObjectREFR **)v28; vtbl; v10 = v28 ) /*0x648a77*/
    {
      Destructor = vtbl->Destructor; /*0x648a80*/
      if ( !vtbl->Destructor ) /*0x648a80*/
        break; /*0x648a84*/
      v13 = v10; /*0x648a86*/
      v14 = (int)(v10 + 1); /*0x648a88*/
      if ( *(_DWORD *)v14 ) /*0x648a8b*/
      {
        do /*0x648a98*/
        {
          v13 = *(void (__thiscall ***)(BSExtraData *))v14; /*0x648a90*/
          v15 = *(_DWORD *)(*(_DWORD *)v14 + 4) == 0; /*0x648a92*/
          v14 = *(_DWORD *)v14 + 4; /*0x648a95*/
        }
        while ( !v15 ); /*0x648a98*/
      }
      if ( *v13 ) /*0x648a9a*/
      {
        v16 = (void (__thiscall **)(BSExtraData *))FormHeapAlloc(8u); /*0x648aa0*/
        if ( v16 ) /*0x648aaa*/
        {
          *v16 = Destructor; /*0x648aac*/
          v16[1] = 0; /*0x648aae*/
          v13[1] = (void (__thiscall *)(BSExtraData *))v16; /*0x648ab1*/
        }
        else
        {
          v13[1] = 0; /*0x648ab8*/
        }
      }
      else
      {
        *v13 = Destructor; /*0x648abd*/
      }
      vtbl = (BSExtraDataVtbl *)vtbl->CompareTo; /*0x648abf*/
      v8 = v27; /*0x648ac4*/
    }
    if ( v10 ) /*0x648ad0*/
    {
      do /*0x648ada*/
      {
        v17 = *i; /*0x648ada*/
        if ( !*i ) /*0x648ade*/
          break; /*0x648ade*/
        if ( !v26 ) /*0x648ae9*/
        {
          if ( v17 != (TESObjectREFR *)reference ) /*0x648b2c*/
          {
            v19 = 0; /*0x648b36*/
            v20 = sub_5E03A0(a4); /*0x648b41*/
            ExtraPackage = ExtraDataList::GetExtraPackage(v30); /*0x648b4a*/
            if ( !v20 || TESPackage::IsTemporaryOverrideType((TESPackage *)v20) ) /*0x648b50*/
            {
              if ( ExtraPackage ) /*0x648b5b*/
                v20 = (int)ExtraPackage; /*0x648b5d*/
            }
            if ( v20 ) /*0x648b61*/
            {
              if ( *(_BYTE *)(v20 + 0x20) == 2 ) /*0x648b67*/
                v19 = 1; /*0x648b69*/
            }
            v22 = sub_5E03A0(v17); /*0x648b75*/
            v23 = ExtraDataList::GetExtraPackage(&v17->member.baseExtraList); /*0x648b7e*/
            if ( !v22 || TESPackage::IsTemporaryOverrideType((TESPackage *)v22) && v23 ) /*0x648b8f*/
              v22 = (int)v23; /*0x648b91*/
            if ( v19 || v22 && ((v24 = *(_BYTE *)(v22 + 0x20), v24 == 1) || v24 == 7) ) /*0x648ba4*/
            {
              if ( Actor::GetProcessLevel((Actor *)v17) ) /*0x648bb4*/
              {
                v25 = ((double (__thiscall *)(TESObjectREFR *, _DWORD))v17->vtbl[1].super.Unk_06)(v17, LODWORD(a5)); /*0x648bcf*/
                RunScripts(v17, a1, a2, v25); /*0x648bd3*/
              }
            }
            else
            {
              BSSimpleList_PushFront(v27, (int)v17); /*0x648bab*/
            }
            v8 = v27; /*0x648bd8*/
          }
          goto LABEL_49; /*0x648bd8*/
        }
        if ( !*v8 ) /*0x648aed*/
          goto LABEL_28; /*0x648aed*/
        v18 = (int *)FormHeapAlloc(8u); /*0x648af1*/
        if ( !v18 ) /*0x648afb*/
        {
          *(_DWORD *)4 = v8[1]; /*0x648b19*/
          v8[1] = 0; /*0x648b1c*/
LABEL_28:
          *v8 = (int)v17; /*0x648b1f*/
          goto LABEL_49; /*0x648b21*/
        }
        *v18 = *v8; /*0x648aff*/
        v18[1] = 0; /*0x648b01*/
        v18[1] = v8[1]; /*0x648b07*/
        v8[1] = (int)v18; /*0x648b0a*/
        *v8 = (int)v17; /*0x648b0d*/
LABEL_49:
        i = (TESObjectREFR **)i[1]; /*0x648bde*/
      }
      while ( i ); /*0x648ada*/
    }
    if ( v27 ) /*0x648bf8*/
    {
      do /*0x648c15*/
      {
        if ( !*v8 ) /*0x648c00*/
          break; /*0x648c04*/
        sub_424D00(v30, *v8); /*0x648c0b*/
        v8 = (int *)v8[1]; /*0x648c10*/
      }
      while ( v8 ); /*0x648c15*/
    }
    BSSimpleList_Clear(v28); /*0x648c1b*/
    FormHeapFree((unsigned int)v28); /*0x648c25*/
    BSSimpleList_Clear(v27); /*0x648c2f*/
    FormHeapFree((unsigned int)v27); /*0x648c35*/
    result = (BSExtraData *)v31[1].vtbl; /*0x648c3e*/
    if ( !*(_DWORD *)&result->members.type && !result->vtbl ) /*0x648c49*/
      return ExtraDataList_RemoveFollowerExtra(v30); /*0x648c51*/
  }
  return result; /*0x648c56*/
}
