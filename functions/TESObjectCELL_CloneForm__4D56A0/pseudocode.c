_DWORD *__userpurge TESObjectCELL_CloneForm@<eax>(
        int a1@<ecx>,
        double a2@<st2>,
        double a3@<st1>,
        double a4@<st0>,
        int a5,
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
  TESObjectREFR *v26; // esi
  int v27; // [esp+24h] [ebp-Ch]
  int v28; // [esp+28h] [ebp-8h] BYREF
  _DWORD *v29; // [esp+2Ch] [ebp-4h]

  result = 0;
  if ( (*(_BYTE *)(a1 + 0x24) & 1) == 0 )
  {
    v8 = TESForm_Clone((TESForm *)a1, 0, cloneMap);
    v9 = OblivionDynamicCast(
           v8,
           0,
           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
           &TESObjectCELL `RTTI Type Descriptor',
           0);
    v10 = *(_DWORD *)(a1 + 0x40);
    v11 = (int)v9;
    v27 = (int)v9;
    if ( v10 )
    {
      v12 = (void *)(*(int (__thiscall **)(int, _DWORD, void *))(*(_DWORD *)v10 + 0x38))(v10, 0, cloneMap);
      v13 = (TESObjectLAND *)OblivionDynamicCast(
                               v12,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               &TESObjectLAND `RTTI Type Descriptor',
                               0);
      v14 = v13;
      if ( v13 )
      {
        sub_4C9AE0(v11, (int)v13);
        sub_4BFDC0(v14, (TESObjectCELL *)v11);
        (*(void (__thiscall **)(TESObjectLAND *, int))(*(_DWORD *)v14 + 0x90))(v14, 1);
      }
    }
    v15 = *(_DWORD *)(a1 + 0x44);
    if ( v15 )
    {
      v16 = (void *)(*(int (__thiscall **)(int, _DWORD, void *))(*(_DWORD *)v15 + 0x38))(v15, 0, cloneMap);
      v17 = OblivionDynamicCast(
              v16,
              0,
              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
              &TESPathGrid `RTTI Type Descriptor',
              0);
      v18 = v17;
      if ( v17 )
      {
        v19 = *(_DWORD **)(v11 + 0x44);
        if ( v19 != v17 )
        {
          if ( v19 )
            (*(void (__thiscall **)(_DWORD *, int))(*v19 + 0x10))(v19, 1);
          *(_DWORD *)(v11 + 0x44) = v18;
        }
        sub_4A6D70(v18, v11);
        (*(void (__thiscall **)(_DWORD *, int))(*v18 + 0x90))(v18, 1);
      }
    }
    sub_496EA0((char *)&stru_B35C80, (TESObjectCELL *)a1);
    v20 = 0;
    v21 = (_DWORD *)(a1 + 0x48);
    v28 = 0;
    v29 = 0;
    if ( a1 != 0xFFFFFFB8 )
    {
      do
      {
        if ( !v21[1] && !*v21 )
          break;
        v22 = *v21;
        if ( (*(_DWORD *)(*v21 + 8) & 0x4000) == 0
          && ((*(_BYTE *)(a1 + 0x24) & 1) != 0
           || (*(_DWORD *)(a1 + 8) & 0x400) != 0
           || !TESObjectREFR_IsPersistent_((TESObjectREFR *)*v21)) )
        {
          if ( v20 )
          {
            v23 = (_DWORD *)FormHeapAlloc(8u);
            if ( v23 )
            {
              *v23 = v20;
              v23[1] = 0;
            }
            else
            {
              v23 = 0;
            }
            v23[1] = v29;
            v29 = v23;
          }
          v20 = v22;
        }
        v21 = (_DWORD *)v21[1];
        v11 = v27;
      }
      while ( v21 );
      v28 = v20;
    }
    sub_496F50(&stru_B35C80, (TESObjectCELL *)a1);
    v24 = &v28;
    do
    {
      if ( !v24[1] && !*v24 )
        break;
      v25 = (void *)(*(int (__thiscall **)(int, _DWORD, void *))(*(_DWORD *)*v24 + 0x38))(*v24, 0, cloneMap);
      v26 = (TESObjectREFR *)OblivionDynamicCast(
                               v25,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                               0);
      if ( v26 )
      {
        TESObjectREFR_SetPersistance(v26, a2, a3, (*(_DWORD *)(v11 + 8) & 0x400) != 0);
        sub_4D35D0((TESObjectCELL *)v11, a2, a3, a4, v26);
        v26->vtbl->super.SetFromActiveFile((TESForm *)v26, 1);
      }
      v24 = (int *)v24[1];
    }
    while ( v24 );
    BSSimpleList_Clear(&v28);
    return (_DWORD *)v11;
  }
  return result;
}
