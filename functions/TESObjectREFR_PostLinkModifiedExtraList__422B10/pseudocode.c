void __thiscall TESObjectREFR_PostLinkModifiedExtraList(ExtraDataList *this, int a2, int a3, int a4)
{
  BSExtraData *ExtraData; // eax
  TESObjectREFR **vtbl; // eax
  BSExtraData *v7; // eax
  _DWORD *v8; // eax
  _DWORD *v9; // eax

  if ( !a4 || !(*(unsigned __int8 (__thiscall **)(int))(*(_DWORD *)a4 + 0x190))(a4) ) /*0x422b23*/
  {
    if ( (a2 & 0x100000) != 0 ) /*0x422b34*/
    {
      ExtraData = BaseExtraList_GetExtraData(this, kExtraData_Teleport); /*0x422b3a*/
      if ( ExtraData ) /*0x422b41*/
        vtbl = (TESObjectREFR **)ExtraData[1].vtbl; /*0x422b43*/
      else
        vtbl = 0; /*0x422b48*/
      sub_42B580(vtbl); /*0x422b4c*/
    }
    if ( (a2 & 0x200000) != 0 ) /*0x422b58*/
    {
      v7 = BaseExtraList_GetExtraData(this, kExtraData_Seed|kExtraData_Havok); /*0x422b6c*/
      v8 = OblivionDynamicCast( /*0x422b72*/
             v7,
             0,
             (struct _s_RTTICompleteObjectLocator *)&BSExtraData `RTTI Type Descriptor',
             &NonActorMagicTarget `RTTI Type Descriptor',
             0);
      if ( v8 ) /*0x422b7c*/
      {
        v9 = (_DWORD *)(*(int (__thiscall **)(_DWORD *))(v8[3] + 8))(v8 + 3); /*0x422b88*/
        ActiveEffect_Base_PostLinkAEList(v9, 0);// Verified TESObjectREFR_PostLinkModifiedExtraList runs the post-link phase for changed NonActorMagicTarget ExtraData (mask 0x200000): obtains its embedded MagicTarget active-effect list and calls ActiveEffect_Base_PostLinkAEList(list, nullptr). The list link phase runs earlier in ExtraDataList_LoadModified. /*0x422b8b*/
      }
    }
  }
}
