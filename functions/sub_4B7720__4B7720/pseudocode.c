BSExtraData *sub_4B7720()
{
  BSExtraData *result; // eax
  BSExtraData *v1; // esi
  int *v2; // eax
  Actor **v3; // eax
  Actor **v4; // ebp
  BSExtraDataVtbl *vtbl; // ebx
  void (__thiscall *Destructor)(BSExtraData *); // edi
  int v7; // eax
  void (__thiscall **v8)(BSExtraData *); // esi
  bool v9; // zf
  void (__thiscall **v10)(BSExtraData *); // eax
  Actor *v11; // esi
  int v12; // eax
  char v13; // al
  _DWORD *v14; // edi
  void (__thiscall **v15)(_DWORD *, _DWORD); // esi
  int *v16; // eax
  int *j; // esi
  int *v18; // [esp+Ch] [ebp-10h]
  Actor **i; // [esp+10h] [ebp-Ch]
  float v20; // [esp+14h] [ebp-8h]
  BSExtraData *v21; // [esp+18h] [ebp-4h]

  result = (BSExtraData *)GetExtraDataFollower();
  v1 = result;
  v21 = result;
  if ( result )
  {
    v2 = (int *)FormHeapAlloc(8u);
    if ( v2 )
    {
      *v2 = 0;
      v2[1] = 0;
      v18 = v2;
    }
    else
    {
      v18 = 0;
    }
    v3 = (Actor **)FormHeapAlloc(8u);
    if ( v3 )
    {
      *v3 = 0;
      v3[1] = 0;
      v4 = v3;
    }
    else
    {
      v4 = 0;
    }
    vtbl = v1[1].vtbl;
    for ( i = v4; vtbl; vtbl = (BSExtraDataVtbl *)vtbl->CompareTo )
    {
      Destructor = vtbl->Destructor;
      if ( !vtbl->Destructor )
        break;
      v7 = (int)(v4 + 1);
      v8 = (void (__thiscall **)(BSExtraData *))v4;
      if ( v4[1] )
      {
        do
        {
          v8 = *(void (__thiscall ***)(BSExtraData *))v7;
          v9 = *(_DWORD *)(*(_DWORD *)v7 + 4) == 0;
          v7 = *(_DWORD *)v7 + 4;
        }
        while ( !v9 );
      }
      if ( *v8 )
      {
        v10 = (void (__thiscall **)(BSExtraData *))FormHeapAlloc(8u);
        if ( v10 )
        {
          *v10 = Destructor;
          v10[1] = 0;
          v8[1] = (void (__thiscall *)(BSExtraData *))v10;
        }
        else
        {
          v8[1] = 0;
        }
      }
      else
      {
        *v8 = Destructor;
      }
    }
    if ( v4 )
    {
      do
      {
        v11 = *i;
        if ( !*i )
          break;
        v12 = sub_5E03A0(*i);
        if ( v12 && ((v13 = *(_BYTE *)(v12 + 0x20), v13 == 1) || v13 == 7) )
        {
          Actor::GetProcessLevel(v11);
          v14 = &v11->members.super.process->__vftable;
          v15 = (void (__thiscall **)(_DWORD *, _DWORD))(*v14 + 0x1C);
          v20 = TimeGlobals_GetGameHour(&TimeGlobals) - dbl_A2F928;
          (*v15)(v14, LODWORD(v20));
        }
        else
        {
          if ( *v18 )
          {
            v16 = (int *)FormHeapAlloc(8u);
            if ( v16 )
            {
              *v16 = *v18;
              v16[1] = 0;
            }
            else
            {
              v16 = 0;
            }
            v16[1] = v18[1];
            v18[1] = (int)v16;
          }
          *v18 = (int)v11;
        }
        i = (Actor **)i[1];
      }
      while ( i );
    }
    for ( j = v18; j; j = (int *)j[1] )
    {
      if ( !*j )
        break;
      sub_424D00(&TESDataHandler_g_PlayerRef->super.super.super.super.baseExtraList, *j);
    }
    BSSimpleList_Clear(v18);
    FormHeapFree((unsigned int)v18);
    result = (BSExtraData *)v21[1].vtbl;
    if ( !*(_DWORD *)&result->members.type && !result->vtbl )
      return sub_420F00(&TESDataHandler_g_PlayerRef->super.super.super.super.baseExtraList);
  }
  return result;
}
