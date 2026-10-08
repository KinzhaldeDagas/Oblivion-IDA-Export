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

  result = (BSExtraData *)ExtraDataList_GetFollowerExtra(); /*0x4b772e*/
  v1 = result; /*0x4b7733*/
  v21 = result; /*0x4b7739*/
  if ( result ) /*0x4b773d*/
  {
    v2 = (int *)FormHeapAlloc(8u); /*0x4b7745*/
    if ( v2 ) /*0x4b774f*/
    {
      *v2 = 0; /*0x4b7751*/
      v2[1] = 0; /*0x4b7753*/
      v18 = v2; /*0x4b7756*/
    }
    else
    {
      v18 = 0; /*0x4b775c*/
    }
    v3 = (Actor **)FormHeapAlloc(8u); /*0x4b7764*/
    if ( v3 ) /*0x4b776e*/
    {
      *v3 = 0; /*0x4b7770*/
      v3[1] = 0; /*0x4b7772*/
      v4 = v3; /*0x4b7775*/
    }
    else
    {
      v4 = 0; /*0x4b7779*/
    }
    vtbl = v1[1].vtbl; /*0x4b777b*/
    for ( i = v4; vtbl; vtbl = (BSExtraDataVtbl *)vtbl->CompareTo ) /*0x4b7784*/
    {
      Destructor = vtbl->Destructor; /*0x4b7786*/
      if ( !vtbl->Destructor ) /*0x4b7786*/
        break; /*0x4b778a*/
      v7 = (int)(v4 + 1); /*0x4b7790*/
      v8 = (void (__thiscall **)(BSExtraData *))v4; /*0x4b7793*/
      if ( v4[1] ) /*0x4b778c*/
      {
        do /*0x4b77a0*/
        {
          v8 = *(void (__thiscall ***)(BSExtraData *))v7; /*0x4b7797*/
          v9 = *(_DWORD *)(*(_DWORD *)v7 + 4) == 0; /*0x4b7799*/
          v7 = *(_DWORD *)v7 + 4; /*0x4b779d*/
        }
        while ( !v9 ); /*0x4b77a0*/
      }
      if ( *v8 ) /*0x4b77a2*/
      {
        v10 = (void (__thiscall **)(BSExtraData *))FormHeapAlloc(8u); /*0x4b77a9*/
        if ( v10 ) /*0x4b77b3*/
        {
          *v10 = Destructor; /*0x4b77b5*/
          v10[1] = 0; /*0x4b77b7*/
          v8[1] = (void (__thiscall *)(BSExtraData *))v10; /*0x4b77be*/
        }
        else
        {
          v8[1] = 0; /*0x4b77c5*/
        }
      }
      else
      {
        *v8 = Destructor; /*0x4b77ca*/
      }
    }
    if ( v4 ) /*0x4b77d7*/
    {
      do /*0x4b7875*/
      {
        v11 = *i; /*0x4b77e4*/
        if ( !*i ) /*0x4b77e4*/
          break; /*0x4b77e8*/
        v12 = sub_5E03A0(*i); /*0x4b77f0*/
        if ( v12 && ((v13 = *(_BYTE *)(v12 + 0x20), v13 == 1) || v13 == 7) ) /*0x4b7802*/
        {
          Actor::GetProcessLevel(v11); /*0x4b7806*/
          v14 = &v11->members.super.process->__vftable; /*0x4b780b*/
          v15 = (void (__thiscall **)(_DWORD *, _DWORD))(*v14 + 0x1C); /*0x4b7815*/
          v20 = TimeGlobals_GetGameHour(&MEMORY[0xB332E0]) - dbl_A2F928; /*0x4b7826*/
          (*v15)(v14, LODWORD(v20)); /*0x4b7833*/
        }
        else
        {
          if ( *v18 ) /*0x4b783b*/
          {
            v16 = (int *)FormHeapAlloc(8u); /*0x4b7842*/
            if ( v16 ) /*0x4b784c*/
            {
              *v16 = *v18; /*0x4b7850*/
              v16[1] = 0; /*0x4b7852*/
            }
            else
            {
              v16 = 0; /*0x4b785b*/
            }
            v16[1] = v18[1]; /*0x4b7860*/
            v18[1] = (int)v16; /*0x4b7863*/
          }
          *v18 = (int)v11; /*0x4b7866*/
        }
        i = (Actor **)i[1]; /*0x4b7871*/
      }
      while ( i ); /*0x4b7875*/
    }
    for ( j = v18; j; j = (int *)j[1] ) /*0x4b7883*/
    {
      if ( !*j ) /*0x4b7885*/
        break; /*0x4b7889*/
      sub_424D00(&reference->super.super.super.super.baseExtraList, *j); /*0x4b7895*/
    }
    BSSimpleList_Clear(v18); /*0x4b78a3*/
    FormHeapFree((unsigned int)v18); /*0x4b78a9*/
    result = (BSExtraData *)v21[1].vtbl; /*0x4b78b2*/
    if ( !*(_DWORD *)&result->members.type && !result->vtbl ) /*0x4b78be*/
      return ExtraDataList_RemoveFollowerExtra(&reference->super.super.super.super.baseExtraList); /*0x4b78d1*/
  }
  return result; /*0x4b78c9*/
}
