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

  *(_DWORD *)v20 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v20);
  if ( result )
  {
    v9 = (TESObjectREFR *)OblivionDynamicCast(
                            a4,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                            &Actor `RTTI Type Descriptor',
                            0);
    v10 = v9;
    if ( v9 && *(_DWORD *)v20 )
    {
      v11 = sub_5E03A0(v9);
      v12 = *(_DWORD *)v20;
      if ( v11 != *(_DWORD *)v20 )
      {
        ExtraPackage = ExtraDataList::GetExtraPackage(&v10->member.baseExtraList);
        v12 = *(_DWORD *)v20;
        if ( ExtraPackage != *(BSExtraDataVtbl **)v20 )
        {
          Name = TESObjectREFR_GetName(v10);
          v15 = (const char *)(*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)v20 + 0xD4))(*(_DWORD *)v20, Name);
          PrintError("Package %s is not  %s current package", v15, duration);
          return 1;
        }
      }
      v16 = *(_BYTE *)(v12 + 0x20);
      if ( v16 == 2 )
      {
        sub_5668E0((_DWORD *)v12, 0);
        (*((void (__thiscall **)(TESObjectREFRVtbl *, int))v10[1].vtbl->super.super.InitializeComponent + 0x5F))(
          v10[1].vtbl,
          3);
        return 1;
      }
      if ( v16 != 7 && v16 != 1 )
      {
        v17 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0xD4))(v12);
        PrintError("Package %s is not a follow or an escort. ", v17);
        return 1;
      }
      v18 = (void *)(*((int (__thiscall **)(TESObjectREFRVtbl *))v10[1].vtbl->super.super.InitializeComponent + 0x33))(v10[1].vtbl);
      if ( OblivionDynamicCast(
             v18,
             0,
             (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
             &Actor `RTTI Type Descriptor',
             0) == TESDataHandler_g_PlayerRef
        && !sub_663A60((int)v10)
        && sub_663A00() > dword_B36A80 )
      {
        GameUI_QueueMessage((const char *)dword_B394E8, 0, 1u, flt_A30634);
        return 1;
      }
      sub_5668E0(*(_DWORD **)v20, 0);
    }
    return 1;
  }
  return result;
}
