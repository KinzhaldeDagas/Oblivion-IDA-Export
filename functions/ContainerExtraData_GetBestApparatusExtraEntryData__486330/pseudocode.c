_DWORD *__thiscall ContainerExtraData_GetBestApparatusExtraEntryData(_DWORD *this, int a2)
{
  _DWORD **v2; // esi
  TESObjectREFR *v3; // ecx
  TESContainer *Container; // eax
  TESContainer_Entry *p_list; // edi
  unsigned __int8 *v6; // esi
  _DWORD *v7; // eax
  char v8; // dl
  int v9; // eax
  int count; // ecx
  int *v11; // ebp
  int v12; // edi
  TESForm *v13; // eax
  TESForm *v14; // esi
  TESObjectREFR *v15; // ecx
  TESContainer *v16; // eax
  _DWORD *v17; // eax
  char v18; // dl
  int v19; // edi
  _DWORD *v20; // esi
  _DWORD *v21; // eax
  _DWORD *v22; // eax
  TESObjectREFR *v24; // ecx
  TESContainer *v25; // eax
  TESForm *v26; // [esp+8h] [ebp-14h]
  _DWORD **v27; // [esp+Ch] [ebp-10h]
  float v28; // [esp+10h] [ebp-Ch]
  TESForm *v29; // [esp+14h] [ebp-8h]
  float v30; // [esp+18h] [ebp-4h]
  float v31; // [esp+18h] [ebp-4h]
  unsigned __int8 v32; // [esp+20h] [ebp+4h]

  v28 = flt_A3B888;
  v2 = (_DWORD **)this;
  v3 = (TESObjectREFR *)*(this + 1);
  v27 = v2;
  v26 = 0;
  v29 = 0;
  if ( v3 )
    Container = TESObjectREFR_GetContainer(v3);
  else
    Container = 0;
  p_list = &Container->list;
  if ( Container != (TESContainer *)0xFFFFFFF8 )
  {
    do
    {
      if ( p_list->data )
      {
        v6 = (unsigned __int8 *)OblivionDynamicCast(
                                  p_list->data->type,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                  &TESObjectAPPA `RTTI Type Descriptor',
                                  0);
        if ( v6 )
        {
          v7 = *v27;
          v8 = 1;
          if ( !*v27 )
            goto LABEL_14;
          while ( v8 )
          {
            if ( *v7 && *(unsigned __int8 **)(*v7 + 8) == v6 )
              v8 = 0;
            else
              v7 = (_DWORD *)v7[1];
            if ( !v7 )
              goto LABEL_14;
          }
          if ( v7 )
            v9 = *v7;
          else
LABEL_14:
            v9 = 0;
          if ( v6[0x78] == a2 )
          {
            if ( !v9 || (count = p_list->data->count, count + *(_DWORD *)(v9 + 4) > 0) || count < 0 )
            {
              v30 = (float)sub_46E3F0(v6);
              if ( v28 < (double)v30 )
              {
                v28 = v30;
                v26 = (TESForm *)v6;
              }
            }
          }
        }
      }
      p_list = p_list->next;
    }
    while ( p_list );
    v2 = v27;
  }
  v11 = *v2;
  if ( *v2 )
  {
    do
    {
      v12 = *v11;
      if ( *v11 )
      {
        v13 = (TESForm *)OblivionDynamicCast(
                           *(void **)(v12 + 8),
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                           &TESObjectAPPA `RTTI Type Descriptor',
                           0);
        v14 = v13;
        if ( v13 )
        {
          if ( LOBYTE(v13[5].vtbl) == a2 )
          {
            if ( *(_DWORD *)(v12 + 4) )
            {
              v15 = (TESObjectREFR *)v27[1];
              if ( v15 )
                v16 = TESObjectREFR_GetContainer(v15);
              else
                v16 = 0;
              if ( !TESContainer_HasForm(v16, v14) )
              {
                v31 = (float)sub_46E3F0(v14);
                if ( v28 < (double)v31 )
                {
                  v28 = v31;
                  v29 = v14;
                }
              }
            }
          }
        }
      }
      v11 = (int *)v11[1];
    }
    while ( v11 );
    if ( v29 )
    {
      if ( v29 != v26 )
      {
        if ( !v26 || (v32 = sub_46E3F0(v29), v32 > sub_46E3F0(v26)) )
          v26 = v29;
      }
    }
  }
  v17 = *v27;
  v18 = 1;
  if ( !*v27 )
    goto LABEL_49;
  while ( v18 )
  {
    if ( *v17 && *(TESForm **)(*v17 + 8) == v26 )
      v18 = 0;
    else
      v17 = (_DWORD *)v17[1];
    if ( !v17 )
      goto LABEL_49;
  }
  if ( v17 )
    v19 = *v17;
  else
LABEL_49:
    v19 = 0;
  v20 = 0;
  if ( v26 )
  {
    v21 = (_DWORD *)FormHeapAlloc(0xCu);
    if ( v21 )
    {
      v21[2] = 0;
      *v21 = 0;
      v21[1] = 0;
    }
    else
    {
      v21 = 0;
    }
    v20 = v21;
  }
  if ( !v19 )
  {
    if ( v26 )
    {
      v20[2] = v26;
      v24 = (TESObjectREFR *)v27[1];
      if ( v24 )
        v25 = TESObjectREFR_GetContainer(v24);
      else
        v25 = 0;
      v20[1] = TESContainer_GetFormCount(v25, v26);
    }
    return v20;
  }
  v20[2] = *(_DWORD *)(v19 + 8);
  if ( !*(_DWORD *)v19 || !**(_DWORD **)v19 )
    return v20;
  v22 = (_DWORD *)FormHeapAlloc(8u);
  if ( v22 )
  {
    *v22 = 0;
    v22[1] = 0;
  }
  else
  {
    v22 = 0;
  }
  *v20 = v22;
  BSSimpleList_PushFront(v22, **(_DWORD **)v19);
  v20[1] = *(_DWORD *)(v19 + 4);
  return v20;
}
