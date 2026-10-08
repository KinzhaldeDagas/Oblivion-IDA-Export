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

  *(_DWORD *)v19 = 0; /*0x50b83a*/
  result = Script_ExtractArgs(a1, a2, a3, a4, argC, a5, l, v19); /*0x50b842*/
  if ( result ) /*0x50b84c*/
  {
    v9 = (TESObjectREFR *)OblivionDynamicCast( /*0x50b860*/
                            a4,
                            0,
                            (struct _s_RTTICompleteObjectLocator *)&TESObjectREFR `RTTI Type Descriptor',
                            &Actor `RTTI Type Descriptor',
                            0);
    v10 = v9; /*0x50b865*/
    if ( v9 && *(_DWORD *)v19 ) /*0x50b877*/
    {
      v11 = sub_5E03A0(v9); /*0x50b87f*/
      v12 = *(_DWORD *)v19; /*0x50b884*/
      if ( v11 != *(_DWORD *)v19 ) /*0x50b88a*/
      {
        ExtraPackage = ExtraDataList::GetExtraPackage(&v10->member.baseExtraList); /*0x50b88f*/
        v12 = *(_DWORD *)v19; /*0x50b894*/
        if ( ExtraPackage != *(BSExtraDataVtbl **)v19 ) /*0x50b89a*/
        {
          Name = TESObjectREFR_GetName(v10); /*0x50b89e*/
          v15 = (const char *)(*(int (__thiscall **)(_DWORD, char *))(**(_DWORD **)v19 + 0xD4))(*(_DWORD *)v19, Name); /*0x50b8b0*/
          PrintError("Package %s is not  %s current package", v15, v18); /*0x50b8b8*/
          return 1; /*0x50b8c4*/
        }
      }
      v16 = *(_BYTE *)(v12 + 0x20); /*0x50b8c5*/
      if ( v16 == 2 ) /*0x50b8ca*/
      {
        sub_5668E0((_DWORD *)v12, 1); /*0x50b8ce*/
        (*((void (__thiscall **)(TESObjectREFRVtbl *, int))v10[1].vtbl->super.super.InitializeComponent + 0x5F))( /*0x50b8e0*/
          v10[1].vtbl,
          2);
        return 1; /*0x50b8e6*/
      }
      if ( v16 != 7 && v16 != 1 ) /*0x50b8ed*/
      {
        v17 = (const char *)(*(int (__thiscall **)(int))(*(_DWORD *)v12 + 0xD4))(v12); /*0x50b8f7*/
        PrintError("Package %s is not a follow or an escort. ", v17); /*0x50b8ff*/
        return 1; /*0x50b90b*/
      }
      sub_5668E0((_DWORD *)v12, 1); /*0x50b90e*/
    }
    return 1; /*0x50b913*/
  }
  return result; /*0x50b850*/
}
