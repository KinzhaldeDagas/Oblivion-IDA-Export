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

  v28 = flt_A3B888; /*0x48633b*/
  v2 = (_DWORD **)this; /*0x486340*/
  v3 = (TESObjectREFR *)*(this + 1); /*0x486342*/
  v27 = v2; /*0x48634a*/
  v26 = 0; /*0x48634e*/
  v29 = 0; /*0x486352*/
  if ( v3 ) /*0x486356*/
    Container = TESObjectREFR_GetContainer(v3); /*0x486358*/
  else
    Container = 0; /*0x48635f*/
  p_list = &Container->list; /*0x486361*/
  if ( Container != (TESContainer *)0xFFFFFFF8 ) /*0x486366*/
  {
    do /*0x486425*/
    {
      if ( p_list->data ) /*0x486370*/
      {
        v6 = (unsigned __int8 *)OblivionDynamicCast( /*0x48638f*/
                                  p_list->data->type,
                                  0,
                                  (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                                  &TESObjectAPPA `RTTI Type Descriptor',
                                  0);
        if ( v6 ) /*0x486396*/
        {
          v7 = *v27; /*0x4863a0*/
          v8 = 1; /*0x4863a4*/
          if ( !*v27 ) /*0x4863a0*/
            goto LABEL_14; /*0x4863a0*/
          while ( v8 ) /*0x4863aa*/
          {
            if ( *v7 && *(unsigned __int8 **)(*v7 + 8) == v6 ) /*0x4863b5*/
              v8 = 0; /*0x4863b7*/
            else
              v7 = (_DWORD *)v7[1]; /*0x4863bb*/
            if ( !v7 ) /*0x4863c0*/
              goto LABEL_14; /*0x4863c0*/
          }
          if ( v7 ) /*0x486418*/
            v9 = *v7; /*0x48641a*/
          else
LABEL_14:
            v9 = 0; /*0x4863c2*/
          if ( v6[0x78] == a2 ) /*0x4863cc*/
          {
            if ( !v9 || (count = p_list->data->count, count + *(_DWORD *)(v9 + 4) > 0) || count < 0 ) /*0x4863e1*/
            {
              v30 = (float)sub_46E3F0(v6); /*0x4863f7*/
              if ( v28 < (double)v30 ) /*0x48640a*/
              {
                v28 = v30; /*0x48640c*/
                v26 = (TESForm *)v6; /*0x486410*/
              }
            }
          }
        }
      }
      p_list = p_list->next; /*0x486420*/
    }
    while ( p_list ); /*0x486425*/
    v2 = v27; /*0x48642b*/
  }
  v11 = *v2; /*0x48642f*/
  if ( *v2 ) /*0x48642f*/
  {
    do /*0x4864d2*/
    {
      v12 = *v11; /*0x486440*/
      if ( *v11 ) /*0x486440*/
      {
        v13 = (TESForm *)OblivionDynamicCast( /*0x48645b*/
                           *(void **)(v12 + 8),
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESBoundObject `RTTI Type Descriptor',
                           &TESObjectAPPA `RTTI Type Descriptor',
                           0);
        v14 = v13; /*0x486460*/
        if ( v13 ) /*0x486467*/
        {
          if ( LOBYTE(v13[5].vtbl) == a2 ) /*0x486471*/
          {
            if ( *(_DWORD *)(v12 + 4) ) /*0x486473*/
            {
              v15 = (TESObjectREFR *)v27[1]; /*0x48647c*/
              if ( v15 ) /*0x486481*/
                v16 = TESObjectREFR_GetContainer(v15); /*0x486483*/
              else
                v16 = 0; /*0x48648a*/
              if ( !TESContainer_HasForm(v16, v14) ) /*0x48648f*/
              {
                v31 = (float)sub_46E3F0(v14); /*0x4864ac*/
                if ( v28 < (double)v31 ) /*0x4864bf*/
                {
                  v28 = v31; /*0x4864c1*/
                  v29 = v14; /*0x4864c5*/
                }
              }
            }
          }
        }
      }
      v11 = (int *)v11[1]; /*0x4864cd*/
    }
    while ( v11 ); /*0x4864d2*/
    if ( v29 ) /*0x4864de*/
    {
      if ( v29 != v26 ) /*0x4864e6*/
      {
        if ( !v26 || (v32 = sub_46E3F0(v29), v32 > sub_46E3F0(v26)) ) /*0x486505*/
          v26 = v29; /*0x48650b*/
      }
    }
  }
  v17 = *v27; /*0x486513*/
  v18 = 1; /*0x486517*/
  if ( !*v27 ) /*0x486513*/
    goto LABEL_49; /*0x486513*/
  while ( v18 ) /*0x486522*/
  {
    if ( *v17 && *(TESForm **)(*v17 + 8) == v26 ) /*0x48652d*/
      v18 = 0; /*0x48652f*/
    else
      v17 = (_DWORD *)v17[1]; /*0x486533*/
    if ( !v17 ) /*0x486538*/
      goto LABEL_49; /*0x486538*/
  }
  if ( v17 ) /*0x486560*/
    v19 = *v17; /*0x486562*/
  else
LABEL_49:
    v19 = 0; /*0x48653a*/
  v20 = 0; /*0x486540*/
  if ( v26 ) /*0x486544*/
  {
    v21 = (_DWORD *)FormHeapAlloc(0xCu); /*0x486548*/
    if ( v21 ) /*0x486552*/
    {
      v21[2] = 0; /*0x486554*/
      *v21 = 0; /*0x486557*/
      v21[1] = 0; /*0x486559*/
    }
    else
    {
      v21 = 0; /*0x486566*/
    }
    v20 = v21; /*0x486568*/
  }
  if ( !v19 ) /*0x48656c*/
  {
    if ( v26 ) /*0x4865b7*/
    {
      v20[2] = v26; /*0x4865bd*/
      v24 = (TESObjectREFR *)v27[1]; /*0x4865c0*/
      if ( v24 ) /*0x4865c5*/
        v25 = TESObjectREFR_GetContainer(v24); /*0x4865c7*/
      else
        v25 = 0; /*0x4865ce*/
      v20[1] = TESContainer_GetFormCount(v25, v26); /*0x4865d8*/
    }
    return v20; /*0x4865d8*/
  }
  v20[2] = *(_DWORD *)(v19 + 8); /*0x486571*/
  if ( !*(_DWORD *)v19 || !**(_DWORD **)v19 ) /*0x48657a*/
    return v20; /*0x4865dc*/
  v22 = (_DWORD *)FormHeapAlloc(8u); /*0x486580*/
  if ( v22 ) /*0x48658a*/
  {
    *v22 = 0; /*0x48658c*/
    v22[1] = 0; /*0x48658e*/
  }
  else
  {
    v22 = 0; /*0x486593*/
  }
  *v20 = v22; /*0x486595*/
  BSSimpleList_PushFront(v22, **(_DWORD **)v19); /*0x48659e*/
  v20[1] = *(_DWORD *)(v19 + 4); /*0x4865a7*/
  return v20; /*0x4865ad*/
}
