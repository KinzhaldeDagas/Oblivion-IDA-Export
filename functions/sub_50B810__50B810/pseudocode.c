bool __cdecl sub_50B810(
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
  const char *v18; // [esp-8h] [ebp-Ch]
  UInt16 v19[2]; // [esp+0h] [ebp-4h] BYREF

  *(_DWORD *)v19 = 0;
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v19);
  if ( result )
  {
    v9 = (TESObjectREFR *)OblivionDynamicCast(
                            a4,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                            &Actor `RTTI Type Descriptor',
                            0);
    v10 = v9;
    if ( v9 && *(_DWORD *)v19 )
    {
      v11 = sub_5E03A0(v9);
      v12 = *(_DWORD *)v19;
      if ( v11 != *(_DWORD *)v19 )
      {
        ExtraPackage = ExtraDataList::GetExtraPackage(&v10->member.baseExtraList);
        v12 = *(_DWORD *)v19;
        if ( ExtraPackage != *(BSExtraDataVtbl **)v19 )
        {
          Name = TESObjectREFR_GetName(v10);
          v15 = (const char *)(*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)v19 + 0xD4))(*(_DWORD *)v19, Name);
          PrintError("Package %s is not  %s current package", v15, v18);
          return 1;
        }
      }
      v16 = *(_BYTE *)(v12 + 0x20);
      if ( v16 == 2 )
      {
        sub_5668E0((_DWORD *)v12, 1);
        (*((void (__thiscall **)(TESObjectREFRVtbl *, int))v10[1].vtbl->super.super.InitializeComponent + 0x5F))(
          v10[1].vtbl,
          2);
        return 1;
      }
      if ( v16 != 7 && v16 != 1 )
      {
        v17 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0xD4))(v12);
        PrintError("Package %s is not a follow or an escort. ", v17);
        return 1;
      }
      sub_5668E0((_DWORD *)v12, 1);
    }
    return 1;
  }
  return result;
}
