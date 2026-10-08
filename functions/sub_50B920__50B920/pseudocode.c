bool __cdecl sub_50B920(
        ParamInfo *a1,
        UInt8 *a2,
        TESObjectREFR *a4,
        TESObjectREFR *argC,
        Script *a5,
        ScriptEventList *l,
        int a7,
        UInt32 *a3)
{
  bool result; // al
  TESObjectREFR *v9; // eax
  TESObjectREFR *v10; // esi
  int v11; // eax
  int v12; // ecx
  BSExtraDataVtbl *ExtraPackage; // eax
  char *Name; // eax
  const char *v15; // eax
  char v16; // al
  const char *v17; // eax
  void *v18; // eax
  const char *duration; // [esp+0h] [ebp-Ch]
  UInt16 v20[2]; // [esp+8h] [ebp-4h] BYREF

  *(_DWORD *)v20 = 0; /*0x50b94a*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v20); /*0x50b952*/
  if ( result ) /*0x50b95c*/
  {
    v9 = (TESObjectREFR *)OblivionDynamicCast( /*0x50b970*/
                            a4,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                            &Actor `RTTI Type Descriptor',
                            0);
    v10 = v9; /*0x50b975*/
    if ( v9 && *(_DWORD *)v20 ) /*0x50b987*/
    {
      v11 = sub_5E03A0(v9); /*0x50b98f*/
      v12 = *(_DWORD *)v20; /*0x50b994*/
      if ( v11 != *(_DWORD *)v20 ) /*0x50b99a*/
      {
        ExtraPackage = ExtraDataList::GetExtraPackage(&v10->member.baseExtraList); /*0x50b99f*/
        v12 = *(_DWORD *)v20; /*0x50b9a4*/
        if ( ExtraPackage != *(BSExtraDataVtbl **)v20 ) /*0x50b9aa*/
        {
          Name = TESObjectREFR_GetName(v10); /*0x50b9ae*/
          v15 = (const char *)(*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)v20 + 0xD4))(*(_DWORD *)v20, Name); /*0x50b9c0*/
          PrintError("Package %s is not  %s current package", v15, duration); /*0x50b9c8*/
          return 1; /*0x50b9d4*/
        }
      }
      v16 = *(_BYTE *)(v12 + 0x20); /*0x50b9d5*/
      if ( v16 == 2 ) /*0x50b9da*/
      {
        sub_5668E0((_DWORD *)v12, 0); /*0x50b9de*/
        (*((void (__thiscall **)(TESObjectREFRVtbl *, int))v10[1].vtbl->super.super.InitializeComponent + 0x5F))( /*0x50b9f0*/
          v10[1].vtbl,
          3);
        return 1; /*0x50b9f6*/
      }
      if ( v16 != 7 && v16 != 1 ) /*0x50b9fd*/
      {
        v17 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0xD4))(v12); /*0x50ba07*/
        PrintError("Package %s is not a follow or an escort. ", v17); /*0x50ba0f*/
        return 1; /*0x50ba1b*/
      }
      v18 = (void *)(*((int (__thiscall **)(TESObjectREFRVtbl *))v10[1].vtbl->super.super.InitializeComponent + 0x33))(v10[1].vtbl); /*0x50ba35*/
      if ( OblivionDynamicCast( /*0x50ba65*/
             v18,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
             &Actor `RTTI Type Descriptor',
             0) == reference
        && !sub_663A60((int)v10)
        && sub_663A00() > (int)stru_B36A80.value )
      {
        GameUI_QueueMessage(stru_B394E8.value, 0, 1u, kTerrainLODQuadRayDirectionZ); /*0x50ba7c*/
        return 1; /*0x50ba88*/
      }
      sub_5668E0(*(_DWORD **)v20, 0); /*0x50ba8f*/
    }
    return 1; /*0x50ba94*/
  }
  return result; /*0x50b960*/
}
