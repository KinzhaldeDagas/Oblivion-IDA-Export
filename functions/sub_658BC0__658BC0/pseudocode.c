unsigned __int16 __thiscall sub_658BC0(_DWORD *this, int a2, int a3)
{
  unsigned __int16 v5; // di
  unsigned __int16 v6; // bp
  unsigned __int16 v7; // di
  UInt32 *v8; // esi
  TESForm *v9; // eax
  const char *v10; // eax
  int v12; // [esp-Ch] [ebp-1Ch]
  int v13; // [esp-8h] [ebp-18h]
  const char *v14; // [esp-4h] [ebp-14h]

  v5 = sub_647060(this, a2, a3);
  v6 = v5;
  if ( sub_45A170() )
    v5 += 6;
  v7 = v5 + 4;
  if ( (a2 & 0x100000) != 0 )
    v7 += AVCollection_GetSaveSize(this + 0x25);
  if ( Global_DebugSaveBuffer )
  {
    v8 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    if ( v8 )
    {
      v9 = TESForm_LookupByFormID(*v8);
      v10 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v9->vtbl->GetEditorName)(
                            v9,
                            *(UInt32 *)((char *)v8 + 5),
                            0x230,
                            ".\\AI\\MiddleLowProcess.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v7 - v6,
        *v8,
        v10,
        v12,
        v13,
        v14);
      return v7;
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v7 - v6, 0x230, ".\\AI\\MiddleLowProcess.cpp");
  }
  return v7;
}
