void __thiscall TESObjectREFR_PostLinkModifiedExtraList(ExtraDataList *this, int a2, int a3, int a4)
{
  BSExtraData *ExtraData; // eax
  BSExtraDataVtbl *vtbl; // eax
  BSExtraData *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax

  if ( !a4 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a4 + 0x190))(a4) )
  {
    if ( (a2 & 0x100000) != 0 )
    {
      ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Teleport);
      if ( ExtraData )
        vtbl = ExtraData[1].vtbl;
      else
        vtbl = 0;
      sub_42B580(vtbl);
    }
    if ( (a2 & 0x200000) != 0 )
    {
      v7 = BaseExtraList_GetExtraData(this, kExtraData_Seed|kExtraData_Havok);
      v8 = OblivionDynamicCast(
             v7,
             0,
             (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
             &NonActorMagicTarget `RTTI Type Descriptor',
             0);
      if ( v8 )
      {
        v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(v8[3] + 8))(v8 + 3);
        ActiveEffect_Base_PostLinkAEList(v9, 0);
      }
    }
  }
}
