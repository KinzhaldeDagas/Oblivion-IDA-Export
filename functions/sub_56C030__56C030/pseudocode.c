int __thiscall sub_56C030(_DWORD **this)
{
  int v3; // edi
  int v4; // edi
  int v5; // eax
  const char *v6; // eax
  int v7; // edi
  UInt32 *v8; // esi
  TESForm *v9; // eax
  const char *v10; // eax
  int v12; // [esp-Ch] [ebp-14h]
  int v13; // [esp-8h] [ebp-10h]
  const char *v14; // [esp-4h] [ebp-Ch]

  v3 = 0;
  if ( sub_45A170() )
    v3 = 6;
  v4 = sub_73D5D0() + v3;
  v5 = **(this + 6);
  if ( v5 )
    v6 = *(const char **)(v5 + 0x34);
  else
    v6 = 0;
  v7 = v4 + (unsigned __int16)sub_452400(v6) + 0x35;
  if ( Global_DebugSaveBuffer )
  {
    v8 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    if ( v8 )
    {
      v9 = TESForm_LookupByFormID(*v8);
      v10 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v9->vtbl->GetEditorName)(
                            v9,
                            *(UInt32 *)((char *)v8 + 5),
                            0x90,
                            "..\\TES Shared\\TempEffects\\BSTempEffectDecal.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v7,
        *v8,
        v10,
        v12,
        v13,
        v14);
      return v7;
    }
    sub_40FEC0(
      "GetSaveSize(): %-5i ending at line %i in file %s",
      v7,
      0x90,
      "..\\TES Shared\\TempEffects\\BSTempEffectDecal.cpp");
  }
  return v7;
}
