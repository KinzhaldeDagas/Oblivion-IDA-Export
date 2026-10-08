// Verified: TESObjectCELL_CloneForm clones the CELL via TESForm_Clone, then clones associated LAND and TESPathGrid through vtable slot +0x38 and duplicates eligible child references through the same slot before adding them to the destination cell. This shows +0x38 is the CreateDuplicateForm virtual family.
_DWORD *__userpurge TESObjectCELL_CloneForm@<eax>(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        int a4,
        void *cloneMap)
{
  _DWORD *result; // eax
  TESForm *v8; // eax
  void *v9; // eax
  int v10; // ecx
  int v11; // ebp
  void *v12; // eax
  TESObjectLAND *v13; // eax
  TESObjectLAND *v14; // esi
  int v15; // ecx
  void *v16; // eax
  _DWORD *v17; // eax
  _DWORD *v18; // esi
  _DWORD *v19; // ecx
  int v20; // edi
  _DWORD *v21; // esi
  int v22; // ebp
  _DWORD *v23; // eax
  int *v24; // edi
  void *v25; // eax
  TESChildCELL *v26; // esi
  int v27; // [esp+24h] [ebp-Ch]
  int v28; // [esp+28h] [ebp-8h] BYREF
  _DWORD *v29; // [esp+2Ch] [ebp-4h]

  result = 0; /*0x4d56a6*/
  if ( (*(_BYTE *)(a1 + 0x24) & 1) == 0 ) /*0x4d56ac*/
  {
    v8 = TESForm_Clone((TESForm *)a1, 0, cloneMap); /*0x4d56c7*/
    v9 = OblivionDynamicCast( /*0x4d56cd*/
           v8,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESObjectCELL `RTTI Type Descriptor',
           0);
    v10 = *(_DWORD *)(a1 + 0x40); /*0x4d56d2*/
    v11 = (int)v9; /*0x4d56da*/
    v27 = (int)v9; /*0x4d56dc*/
    if ( v10 ) /*0x4d56e0*/
    {
      v12 = (void *)(*(int (__thiscall **)(int, _DWORD, void *))(*(_DWORD *)v10 + 0x38))(v10, 0, cloneMap); /*0x4d56f8*/
      v13 = (TESObjectLAND *)OblivionDynamicCast( /*0x4d56fb*/
                               v12,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               &TESObjectLAND `RTTI Type Descriptor',
                               0);
      v14 = v13; /*0x4d5700*/
      if ( v13 ) /*0x4d5707*/
      {
        sub_4C9AE0(v11, (int)v13); /*0x4d570c*/
        sub_4BFDC0(v14, (TESObjectCELL *)v11); /*0x4d5714*/
        (*(void (__thiscall **)(TESObjectLAND *, int))(*(_DWORD *)v14 + 0x90))(v14, 1); /*0x4d5725*/
      }
    }
    v15 = *(_DWORD *)(a1 + 0x44); /*0x4d5727*/
    if ( v15 ) /*0x4d572c*/
    {
      v16 = (void *)(*(int (__thiscall **)(int, _DWORD, void *))(*(_DWORD *)v15 + 0x38))(v15, 0, cloneMap); /*0x4d5744*/
      v17 = OblivionDynamicCast( /*0x4d5747*/
              v16,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESPathGrid `RTTI Type Descriptor',
              0);
      v18 = v17; /*0x4d574c*/
      if ( v17 ) /*0x4d5753*/
      {
        v19 = *(_DWORD **)(v11 + 0x44); /*0x4d5755*/
        if ( v19 != v17 ) /*0x4d575a*/
        {
          if ( v19 ) /*0x4d575e*/
            (*(void (__thiscall **)(_DWORD *, int))(*v19 + 0x10))(v19, 1); /*0x4d5767*/
          *(_DWORD *)(v11 + 0x44) = v18; /*0x4d5769*/
        }
        sub_4A6D70(v18, v11); /*0x4d576f*/
        (*(void (__thiscall **)(_DWORD *, int))(*v18 + 0x90))(v18, 1); /*0x4d5780*/
      }
    }
    sub_496EA0((char *)&unk_B35C80, (TESObjectCELL *)a1); /*0x4d5788*/
    v20 = 0; /*0x4d578d*/
    v21 = (_DWORD *)(a1 + 0x48); /*0x4d578f*/
    v28 = 0; /*0x4d5794*/
    v29 = 0; /*0x4d5798*/
    if ( a1 != 0xFFFFFFB8 ) /*0x4d579c*/
    {
      do /*0x4d5806*/
      {
        if ( !v21[1] && !*v21 ) /*0x4d57a6*/
          break; /*0x4d57a9*/
        v22 = *v21; /*0x4d57ab*/
        if ( (*(_DWORD *)(*v21 + 8) & 0x4000) == 0 /*0x4d57c8*/
          && ((*(_BYTE *)(a1 + 0x24) & 1) != 0
           || (*(_DWORD *)(a1 + 8) & 0x400) != 0
           || !TESObjectREFR_IsPersistent((TESObjectREFR *)*v21)) )
        {
          if ( v20 ) /*0x4d57d3*/
          {
            v23 = (_DWORD *)FormHeapAlloc(8u); /*0x4d57d7*/
            if ( v23 ) /*0x4d57e1*/
            {
              *v23 = v20; /*0x4d57e3*/
              v23[1] = 0; /*0x4d57e5*/
            }
            else
            {
              v23 = 0; /*0x4d57ee*/
            }
            v23[1] = v29; /*0x4d57f4*/
            v29 = v23; /*0x4d57f7*/
          }
          v20 = v22; /*0x4d57fb*/
        }
        v21 = (_DWORD *)v21[1]; /*0x4d57fd*/
        v11 = v27; /*0x4d5802*/
      }
      while ( v21 ); /*0x4d5806*/
      v28 = v20; /*0x4d5808*/
    }
    sub_496F50(&unk_B35C80, (TESObjectCELL *)a1); /*0x4d5812*/
    v24 = &v28; /*0x4d5817*/
    do /*0x4d588b*/
    {
      if ( !v24[1] && !*v24 ) /*0x4d5826*/
        break; /*0x4d5829*/
      v25 = (void *)(*(int (__thiscall **)(int, _DWORD, void *))(*(_DWORD *)*v24 + 0x38))(*v24, 0, cloneMap); /*0x4d5847*/
      v26 = (TESChildCELL *)OblivionDynamicCast( /*0x4d584f*/
                              v25,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                              (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                              0);
      if ( v26 ) /*0x4d5856*/
      {
        TESObjectREFR_SetPersistance(v26, a2, a3, (*(_DWORD *)(v11 + 8) & 0x400) != 0); /*0x4d586b*/
        TESObjectCELL_AddReference((TESObjectCELL *)v11, (TESObjectREFR *)v26); /*0x4d5873*/
        (*((void (__thiscall **)(TESChildCELL *, int))v26->vtbl + 0x24))(v26, 1); /*0x4d5884*/
      }
      v24 = (int *)v24[1]; /*0x4d5886*/
    }
    while ( v24 ); /*0x4d588b*/
    BSSimpleList_Clear(&v28); /*0x4d5891*/
    return (_DWORD *)v11; /*0x4d5898*/
  }
  return result; /*0x4d589b*/
}
