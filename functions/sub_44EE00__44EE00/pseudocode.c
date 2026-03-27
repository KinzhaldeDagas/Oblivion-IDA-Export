_BYTE *__stdcall sub_44EE00(void *a1, float *a2, _DWORD *a3)
{
  bool v3; // zf
  float *v4; // eax
  void *v5; // edi
  _BYTE *v6; // ebp
  TESObjectCELL *v7; // eax
  TESObjectCELL *v8; // esi
  int *v9; // ebx
  int v10; // ebp
  TESObjectREFR **TeleportExtraData; // edi
  TESWorldSpace *v12; // eax
  TESWorldSpace *v13; // esi
  int *i; // eax
  int v15; // eax
  float *v16; // ecx
  int v17; // ebx
  int v18; // eax
  TESObjectREFR **v19; // esi
  TESObjectCELL *v20; // edi
  TESWorldSpace *v21; // eax
  TESObjectCELL *v22; // esi
  TESWorldSpace *v23; // ebp
  _DWORD *v24; // edi
  _BYTE *v26; // [esp+14h] [ebp-20h]
  int *v27; // [esp+18h] [ebp-1Ch]
  _DWORD v28[5]; // [esp+20h] [ebp-14h] BYREF

  if ( (dword_B33AD4 & 1) == 0 )
  {
    dword_B33AD4 |= 1u;
    NiTPointerMap<TESForm *,bool>::NiTPointerMap<TESForm *,bool>((NiTPointerMap<TESForm *,bool> *)dword_B33AC4, 0x25u);
    atexit(sub_A18360);
    v28[4] = 0xFFFFFFFF;
  }
  v3 = dword_B33AC0 == 0;
  v4 = a2;
  *a2 = Vector3_InitValue_;
  v4[1] = *(&Vector3_InitValue_ + 1);
  v26 = 0;
  v4[2] = dword_B3F9B0;
  if ( v3 )
  {
    if ( a3 )
      BSSimpleList_Clear(a3);
  }
  v5 = a1;
  v6 = OblivionDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
         &TESWorldSpace `RTTI Type Descriptor',
         0);
  v7 = (TESObjectCELL *)OblivionDynamicCast(
                          v5,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESObjectCELL `RTTI Type Descriptor',
                          0);
  v8 = v7;
  if ( (!v7 || !TESObjectCELL_IsInterior(v7)) && (!v6 || !sub_4EF130(v6)) )
    return 0;
  ++dword_B33AC0;
  NiTMap_SetAt(dword_B33AC4, (int)v5, 1);
  v28[0] = 0;
  v28[1] = 0;
  if ( v8 )
    sub_4CBD30(v8, v28);
  else
    sub_4EF270(v6, v28);
  v9 = v28;
  do
  {
    v10 = *v9;
    v3 = *v9 == 0;
    v9 = (int *)v9[1];
    if ( !v3 && (*(_DWORD *)(v10 + 8) & 0x20) == 0 && (*(_DWORD *)(v10 + 8) & 0x800) == 0 )
    {
      TeleportExtraData = (TESObjectREFR **)GetTeleportExtraData((_BYTE *)v10);
      v12 = sub_42B470(TeleportExtraData);
      v13 = v12;
      if ( v12 )
      {
        if ( !sub_4EF130(v12) )
        {
          v26 = v13;
          v15 = sub_6899C0((char *)TeleportExtraData);
          v16 = a2;
          *a2 = *(float *)v15;
          v16[1] = *(float *)(v15 + 4);
          v16[2] = *(float *)(v15 + 8);
          if ( a3 )
            BSSimpleList_PushFront(a3, v10);
          goto LABEL_40;
        }
      }
    }
  }
  while ( v9 );
  for ( i = v28; ; i = v27 )
  {
    v17 = *i;
    v27 = (int *)i[1];
    if ( *i )
    {
      v18 = *(_DWORD *)(v17 + 8);
      if ( (v18 & 0x20) == 0 && (v18 & 0x800) == 0 )
      {
        v19 = (TESObjectREFR **)GetTeleportExtraData((_BYTE *)v17);
        v20 = sub_42B460(v19);
        v21 = sub_42B470(v19);
        v22 = 0;
        v23 = v21;
        if ( v20 && TESObjectCELL_IsInterior(v20) )
        {
          v22 = v20;
        }
        else if ( v23 )
        {
          if ( sub_4EF130(v23) )
            v22 = (TESObjectCELL *)v23;
        }
        LOBYTE(a1) = 0;
        if ( !sub_4D6760(dword_B33AC4, (int)v22, &a1) || !(_BYTE)a1 )
        {
          v24 = a3;
          v26 = sub_44EE00(v22, a2, a3);
          if ( v26 )
            break;
        }
      }
    }
    if ( !v27 )
      goto LABEL_40;
  }
  if ( v24 )
    BSSimpleList_PushFront(v24, v17);
LABEL_40:
  v3 = dword_B33AC0-- == 1;
  if ( v3 )
    NiTMap_Clear(dword_B33AC4);
  BSSimpleList_Clear(v28);
  return v26;
}
