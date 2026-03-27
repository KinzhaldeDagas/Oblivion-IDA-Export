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
  char *v20; // esi
  BSExtraDataVtbl *ExtraPackage; // ebp
  char *v22; // esi
  BSExtraDataVtbl *v23; // ebp
  char v24; // al
  double v25; // st7
  char v26; // [esp+1Bh] [ebp-15h]
  int *v27; // [esp+1Ch] [ebp-14h]
  void (__thiscall **v28)(BSExtraData *); // [esp+20h] [ebp-10h]
  TESObjectREFR **i; // [esp+24h] [ebp-Ch]
  ExtraDataList *v30; // [esp+28h] [ebp-8h]
  BSExtraData *v31; // [esp+2Ch] [ebp-4h]

  v26 = 0;
  if ( (*(unsigned __int8 (__usercall **)@<al>(_DWORD *@<ecx>, _DWORD, double@<st0>, double@<st1>))(*a4 + 0x198))(
         a4,
         0,
         a3,
         a2)
    || (a4[2] & 0x800) != 0 )
  {
    v26 = 1;
  }
  v30 = (ExtraDataList *)(a4 + 0x11);
  result = (BSExtraData *)GetExtraDataFollower();
  v6 = result;
  v31 = result;
  if ( result )
  {
    v7 = (int *)FormHeapAlloc(8u);
    if ( v7 )
    {
      v8 = v7;
      *v7 = 0;
      v7[1] = 0;
      v27 = v7;
    }
    else
    {
      v27 = 0;
      v8 = 0;
    }
    v9 = (void (__thiscall **)(BSExtraData *))FormHeapAlloc(8u);
    if ( v9 )
    {
      *v9 = 0;
      v9[1] = 0;
      v28 = v9;
    }
    else
    {
      v28 = 0;
    }
    v10 = v28;
    vtbl = v6[1].vtbl;
    for ( i = (TESObjectREFR **)v28; vtbl; v10 = v28 )
    {
      Destructor = vtbl->Destructor;
      if ( !vtbl->Destructor )
        break;
      v13 = v10;
      v14 = (int)(v10 + 1);
      if ( *(_DWORD *)v14 )
      {
        do
        {
          v13 = *(void (__thiscall ***)(BSExtraData *))v14;
          v15 = *(_DWORD *)(*(_DWORD *)v14 + 4) == 0;
          v14 = *(_DWORD *)v14 + 4;
        }
        while ( !v15 );
      }
      if ( *v13 )
      {
        v16 = (void (__thiscall **)(BSExtraData *))FormHeapAlloc(8u);
        if ( v16 )
        {
          *v16 = Destructor;
          v16[1] = 0;
          v13[1] = (void (__thiscall *)(BSExtraData *))v16;
        }
        else
        {
          v13[1] = 0;
        }
      }
      else
      {
        *v13 = Destructor;
      }
      vtbl = (BSExtraDataVtbl *)vtbl->CompareTo;
      v8 = v27;
    }
    if ( v10 )
    {
      do
      {
        v17 = *i;
        if ( !*i )
          break;
        if ( !v26 )
        {
          if ( v17 != (TESObjectREFR *)TESDataHandler_g_PlayerRef )
          {
            v19 = 0;
            v20 = (char *)sub_5E03A0(a4);
            ExtraPackage = ExtraDataList::GetExtraPackage(v30);
            if ( !v20 || sub_567770(v20) )
            {
              if ( ExtraPackage )
                v20 = (char *)ExtraPackage;
            }
            if ( v20 )
            {
              if ( v20[0x20] == 2 )
                v19 = 1;
            }
            v22 = (char *)sub_5E03A0(v17);
            v23 = ExtraDataList::GetExtraPackage(&v17->member.baseExtraList);
            if ( !v22 || sub_567770(v22) && v23 )
              v22 = (char *)v23;
            if ( v19 || v22 && ((v24 = v22[0x20], v24 == 1) || v24 == 7) )
            {
              if ( Actor::GetProcessLevel((Actor *)v17) )
              {
                v25 = ((double (__thiscall *)(TESObjectREFR *, _DWORD))v17->vtbl[1].super.Unk_06)(v17, LODWORD(a5));
                RunScripts(v17, a1, a2, v25);
              }
            }
            else
            {
              BSSimpleList_PushFront(v27, (int)v17);
            }
            v8 = v27;
          }
          goto LABEL_49;
        }
        if ( !*v8 )
          goto LABEL_28;
        v18 = (int *)FormHeapAlloc(8u);
        if ( !v18 )
        {
          *(_DWORD *)4 = v8[1];
          v8[1] = 0;
LABEL_28:
          *v8 = (int)v17;
          goto LABEL_49;
        }
        *v18 = *v8;
        v18[1] = 0;
        v18[1] = v8[1];
        v8[1] = (int)v18;
        *v8 = (int)v17;
LABEL_49:
        i = (TESObjectREFR **)i[1];
      }
      while ( i );
    }
    if ( v27 )
    {
      do
      {
        if ( !*v8 )
          break;
        sub_424D00(v30, *v8);
        v8 = (int *)v8[1];
      }
      while ( v8 );
    }
    BSSimpleList_Clear(v28);
    FormHeapFree((unsigned int)v28);
    BSSimpleList_Clear(v27);
    FormHeapFree((unsigned int)v27);
    result = (BSExtraData *)v31[1].vtbl;
    if ( !*(_DWORD *)&result->members.type && !result->vtbl )
      return sub_420F00(v30);
  }
  return result;
}
