BSExtraDataVtbl *__thiscall sub_68A890(char *this, TESWorldSpace *a2, char a3)
{
  BSExtraDataVtbl *result; // eax
  char *v4; // ebx
  _BYTE *v5; // ecx
  bool v6; // zf
  TESObjectCELL **v7; // eax
  TESObjectCELL **v8; // edi
  void *v9; // eax
  void *v10; // esi
  TESWorldSpace *v11; // eax
  TESObjectREFR *v12; // eax
  ExtraTeleport *TeleportExtraData; // eax
  BSExtraData *p_super; // edi
  TESObjectCELL **v15; // eax
  void *v16; // eax
  void *v17; // esi
  TESWorldSpace *WorldSpace; // eax
  TESObjectREFR *v19; // eax
  BSExtraDataVtbl *v20; // [esp+4h] [ebp-4h]

  result = 0;
  v4 = this + 4;
  v20 = 0;
  if ( this != (char *)0xFFFFFFFC )
  {
    do
    {
      v5 = *(_BYTE **)v4;
      v6 = *(_DWORD *)v4 == 0;
      v4 = *((char **)v4 + 1);
      if ( !v6 )
      {
        v7 = (TESObjectCELL **)sub_68B0F0(v5);
        v8 = v7;
        if ( v7 )
        {
          sub_4D8AF0(v7);
          v10 = v9;
          v11 = (TESWorldSpace *)OblivionDynamicCast(
                                   v9,
                                   0,
                                   (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                   &TESWorldSpace `RTTI Type Descriptor',
                                   0);
          if ( (v11
             || (v12 = (TESObjectREFR *)OblivionDynamicCast(
                                          v10,
                                          0,
                                          (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                          (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                          0)) != 0
             && (v11 = TESObjectREFR_GetWorldSpace(v12)) != 0)
            && (!a2 || v11 == a2 || TESWorldSpace_GetParentWorldpsace(v11) == a2) )
          {
            v20 = (BSExtraDataVtbl *)v8;
          }
          else
          {
            TeleportExtraData = GetTeleportExtraData(v8);
            p_super = &TeleportExtraData->super;
            if ( TeleportExtraData )
            {
              v15 = (TESObjectCELL **)sub_42B410(&TeleportExtraData->super);
              sub_4D8AF0(v15);
              v17 = v16;
              WorldSpace = (TESWorldSpace *)OblivionDynamicCast(
                                              v16,
                                              0,
                                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                              &TESWorldSpace `RTTI Type Descriptor',
                                              0);
              if ( (WorldSpace
                 || (v19 = (TESObjectREFR *)OblivionDynamicCast(
                                              v17,
                                              0,
                                              (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                                              (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                                              0)) != 0
                 && (WorldSpace = TESObjectREFR_GetWorldSpace(v19)) != 0)
                && (!a2 || WorldSpace == a2 || TESWorldSpace_GetParentWorldpsace(WorldSpace) == a2) )
              {
                v20 = sub_42B410(p_super);
              }
            }
          }
        }
      }
      result = v20;
    }
    while ( (!v20 || a3) && v4 );
  }
  return result;
}
