_BYTE *__stdcall sub_44EE00(void *a1, float *a2, _DWORD *a3)
{
  bool v3; // zf
  float *v4; // eax
  void *v5; // edi
  TESObjectCELL **v6; // ebp
  TESObjectCELL *v7; // eax
  TESObjectCELL *v8; // esi
  int *v9; // ebx
  int v10; // ebp
  TESObjectREFR **TeleportExtraData; // edi
  TESWorldSpace *v12; // eax
  TESWorldSpace *v13; // esi
  int *i; // eax
  char *Head; // eax
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

  if ( (unk_B33AD4 & 1) == 0 ) /*0x44ee32*/
  {
    unk_B33AD4 |= 1u; /*0x44ee34*/
    NiTPointerMap<TESForm *,bool>::NiTPointerMap<TESForm *,bool>((NiTPointerMap<TESForm *,bool> *)unk_B33AC4, 0x25u); /*0x44ee48*/
    atexit(sub_A18360); /*0x44ee52*/
    v28[4] = 0xFFFFFFFF; /*0x44ee5a*/
  }
  v3 = unk_B33AC0 == 0; /*0x44ee66*/
  v4 = a2; /*0x44ee72*/
  *a2 = g_zeroNiPoint3.x; /*0x44ee76*/
  v4[1] = g_zeroNiPoint3.y; /*0x44ee7e*/
  v26 = 0; /*0x44ee87*/
  v4[2] = g_zeroNiPoint3.z; /*0x44ee8b*/
  if ( v3 ) /*0x44ee8e*/
  {
    if ( a3 ) /*0x44ee96*/
      BSSimpleList_Clear(a3); /*0x44ee98*/
  }
  v5 = a1; /*0x44ee9d*/
  v6 = (TESObjectCELL **)OblivionDynamicCast( /*0x44eec0*/
                           a1,
                           0,
                           (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                           &TESWorldSpace `RTTI Type Descriptor',
                           0);
  v7 = (TESObjectCELL *)OblivionDynamicCast( /*0x44eec2*/
                          v5,
                          0,
                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                          &TESObjectCELL `RTTI Type Descriptor',
                          0);
  v8 = v7; /*0x44eec7*/
  if ( (!v7 || !TESObjectCELL_IsInterior(v7)) && (!v6 || !sub_4EF130(v6)) ) /*0x44eee5*/
    return 0; /*0x44f0a0*/
  ++unk_B33AC0; /*0x44eef2*/
  NiTMap_SetAt(unk_B33AC4, (int)v5, 1); /*0x44ef01*/
  v28[0] = 0; /*0x44ef08*/
  v28[1] = 0; /*0x44ef0c*/
  if ( v8 ) /*0x44ef10*/
    sub_4CBD30(v8, v28); /*0x44ef19*/
  else
    sub_4EF270(v6, v28); /*0x44ef27*/
  v9 = v28; /*0x44ef2c*/
  do /*0x44ef70*/
  {
    v10 = *v9; /*0x44ef30*/
    v3 = *v9 == 0; /*0x44ef32*/
    v9 = (int *)v9[1]; /*0x44ef34*/
    if ( !v3 && (*(_DWORD *)(v10 + 8) & 0x20) == 0 && (*(_DWORD *)(v10 + 8) & 0x800) == 0 ) /*0x44ef4b*/
    {
      TeleportExtraData = (TESObjectREFR **)GetTeleportExtraData((_BYTE *)v10); /*0x44ef54*/
      v12 = sub_42B470(TeleportExtraData); /*0x44ef58*/
      v13 = v12; /*0x44ef5d*/
      if ( v12 ) /*0x44ef61*/
      {
        if ( !sub_4EF130(v12) ) /*0x44ef6c*/
        {
          v26 = v13; /*0x44ef7a*/
          Head = EmbeddedList_GetHead((char *)TeleportExtraData); /*0x44ef7e*/
          v16 = a2; /*0x44ef85*/
          *a2 = *(float *)Head; /*0x44ef89*/
          v16[1] = *((float *)Head + 1); /*0x44ef8e*/
          v16[2] = *((float *)Head + 2); /*0x44ef94*/
          if ( a3 ) /*0x44ef9d*/
            BSSimpleList_PushFront(a3, v10); /*0x44efa4*/
          goto LABEL_40; /*0x44efa4*/
        }
      }
    }
  }
  while ( v9 ); /*0x44ef70*/
  for ( i = v28; ; i = v27 ) /*0x44ef72*/
  {
    v17 = *i; /*0x44efbf*/
    v27 = (int *)i[1]; /*0x44efc6*/
    if ( *i ) /*0x44efbf*/
    {
      v18 = *(_DWORD *)(v17 + 8); /*0x44efd0*/
      if ( (v18 & 0x20) == 0 && (v18 & 0x800) == 0 ) /*0x44efe6*/
      {
        v19 = (TESObjectREFR **)GetTeleportExtraData((_BYTE *)v17); /*0x44efef*/
        v20 = sub_42B460(v19); /*0x44effa*/
        v21 = sub_42B470(v19); /*0x44effc*/
        v22 = 0; /*0x44f001*/
        v23 = v21; /*0x44f005*/
        if ( v20 && TESObjectCELL_IsInterior(v20) ) /*0x44f00b*/
        {
          v22 = v20; /*0x44f014*/
        }
        else if ( v23 ) /*0x44f01a*/
        {
          if ( sub_4EF130(v23) ) /*0x44f01e*/
            v22 = (TESObjectCELL *)v23; /*0x44f027*/
        }
        LOBYTE(a1) = 0; /*0x44f034*/
        if ( !sub_4D6760(unk_B33AC4, (int)v22, &a1) || !(_BYTE)a1 ) /*0x44f047*/
        {
          v24 = a3; /*0x44f049*/
          v26 = sub_44EE00(v22, a2, a3); /*0x44f05f*/
          if ( v26 ) /*0x44f063*/
            break; /*0x44f063*/
        }
      }
    }
    if ( !v27 ) /*0x44f06a*/
      goto LABEL_40; /*0x44f06a*/
  }
  if ( v24 ) /*0x44f074*/
    BSSimpleList_PushFront(v24, v17); /*0x44f079*/
LABEL_40:
  v3 = unk_B33AC0-- == 1; /*0x44f07e*/
  if ( v3 ) /*0x44f085*/
    NiTMap_Clear(unk_B33AC4); /*0x44f08c*/
  BSSimpleList_Clear(v28); /*0x44f095*/
  return v26; /*0x44f0a2*/
}
