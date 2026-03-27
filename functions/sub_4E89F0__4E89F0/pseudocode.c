char __thiscall sub_4E89F0(TESWorldSpace **this, _BYTE *a2)
{
  TESWorldSpace *v3; // edi
  int (__thiscall ***v4)(_DWORD); // eax
  TESObjectCELL *v5; // eax
  _DWORD *v6; // eax
  _DWORD *v7; // eax
  int v8; // eax
  TESWorldSpace *WorldSpace; // eax
  TESWorldSpace *v10; // ecx

  if ( !sub_4EF2B0(a2[4]) )
    return ((char (__thiscall *)(_DWORD, _BYTE *))(*(this + 0xB))->vtbl->Unk_0D)(*(this + 0xB), a2);
  v3 = 0;
  switch ( a2[4] )
  {
    case '0':
      v5 = (TESObjectCELL *)OblivionDynamicCast(
                              a2,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                              &TESObjectCELL `RTTI Type Descriptor',
                              0);
      goto LABEL_14;
    case '7':
      v7 = OblivionDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESTerrainLODQuadRoot `RTTI Type Descriptor',
             0);
      if ( !v7 )
        goto LABEL_17;
      v8 = v7[1];
      if ( v8 )
        WorldSpace = *(TESWorldSpace **)(v8 + 0x10);
      else
        WorldSpace = 0;
LABEL_16:
      v3 = WorldSpace;
      goto LABEL_17;
    case '8':
      v6 = OblivionDynamicCast(
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESRoad `RTTI Type Descriptor',
             0);
      if ( v6 )
        v3 = (TESWorldSpace *)v6[0xB];
      goto LABEL_17;
  }
  v4 = (int (__thiscall ***)(_DWORD))OblivionDynamicCast(
                                       a2,
                                       0,
                                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                       &TESChildCell `RTTI Type Descriptor',
                                       0);
  if ( v4 )
  {
    v5 = (TESObjectCELL *)(**v4)(v4);
LABEL_14:
    if ( !v5 )
      goto LABEL_17;
    WorldSpace = TESObjectCELL_GetWorldSpace(v5);
    goto LABEL_16;
  }
LABEL_17:
  v10 = *(this + 0xB);
  if ( v3 == v10 )
    return a2[4] != 0x37;
  else
    return ((int (__thiscall *)(TESWorldSpace *, TESWorldSpace *))v10->vtbl->Unk_0D)(v10, v3);
}
