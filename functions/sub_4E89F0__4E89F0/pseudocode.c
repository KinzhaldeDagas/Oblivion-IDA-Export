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

  if ( !sub_4EF2B0(a2[4]) ) /*0x4e8a07*/
    return ((char (__thiscall *)(_DWORD, _BYTE *))(*(this + 0xB))->vtbl->Unk_0D)(*(this + 0xB), a2); /*0x4e8ada*/
  v3 = 0; /*0x4e8a12*/
  switch ( a2[4] ) /*0x4e8a18*/
  {
    case '0': /*0x4e8a18*/
      v5 = (TESObjectCELL *)OblivionDynamicCast( /*0x4e8a9a*/
                              a2,
                              0,
                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                              &TESObjectCELL `RTTI Type Descriptor',
                              0);
      goto LABEL_14; /*0x4e8a9a*/
    case '7': /*0x4e8a18*/
      v7 = OblivionDynamicCast( /*0x4e8a71*/
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESTerrainLODQuadRoot `RTTI Type Descriptor',
             0);
      if ( !v7 ) /*0x4e8a7b*/
        goto LABEL_17; /*0x4e8a7b*/
      v8 = v7[1]; /*0x4e8a7d*/
      if ( v8 ) /*0x4e8a82*/
        WorldSpace = *(TESWorldSpace **)(v8 + 0x10); /*0x4e8a84*/
      else
        WorldSpace = 0; /*0x4e8a89*/
LABEL_16:
      v3 = WorldSpace; /*0x4e8aad*/
      goto LABEL_17; /*0x4e8aad*/
    case '8': /*0x4e8a18*/
      v6 = OblivionDynamicCast( /*0x4e8a53*/
             a2,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
             &TESRoad `RTTI Type Descriptor',
             0);
      if ( v6 ) /*0x4e8a5d*/
        v3 = (TESWorldSpace *)v6[0xB]; /*0x4e8a5f*/
      goto LABEL_17; /*0x4e8a62*/
  }
  v4 = (int (__thiscall ***)(_DWORD))OblivionDynamicCast( /*0x4e8a30*/
                                       a2,
                                       0,
                                       (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                       &TESChildCell `RTTI Type Descriptor',
                                       0);
  if ( v4 ) /*0x4e8a3a*/
  {
    v5 = (TESObjectCELL *)(**v4)(v4); /*0x4e8a42*/
LABEL_14:
    if ( !v5 ) /*0x4e8aa4*/
      goto LABEL_17; /*0x4e8aa4*/
    WorldSpace = TESObjectCELL_GetWorldSpace(v5); /*0x4e8aa8*/
    goto LABEL_16; /*0x4e8aa8*/
  }
LABEL_17:
  v10 = *(this + 0xB); /*0x4e8aaf*/
  if ( v3 == v10 ) /*0x4e8ab4*/
    return a2[4] != 0x37; /*0x4e8abc*/
  else
    return ((int (__thiscall *)(TESWorldSpace *, TESWorldSpace *))v10->vtbl->Unk_0D)(v10, v3); /*0x4e8ac9*/
}
