__int16 sub_5C0D60()
{
  int v0; // edi
  unsigned int i; // edx
  _DWORD *v2; // eax
  bool v3; // zf
  UInt32 *v4; // esi
  TESForm *v5; // eax
  const char *v6; // eax
  int v8; // [esp-10h] [ebp-14h]
  int v9; // [esp-Ch] [ebp-10h]
  const char *v10; // [esp-8h] [ebp-Ch]

  v0 = 0;
  if ( sub_45A170() )
    v0 = 6;
  for ( i = 0; i < 0x20; i += 4 )
  {
    v2 = (_DWORD *)dword_B3B444[i];
    ++v0;
    while ( v2 )
    {
      v3 = v2[2] == 0;
      v2 = (_DWORD *)*v2;
      if ( !v3 )
        v0 += 4;
    }
  }
  if ( Global_DebugSaveBuffer )
  {
    v4 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    if ( v4 )
    {
      v5 = TESForm_LookupByFormID(*v4);
      v6 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v5->vtbl->GetEditorName)(
                           v5,
                           *(UInt32 *)((char *)v4 + 5),
                           0x368,
                           ".\\Interface\\Menus\\QuickKeysMenu.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        (unsigned __int16)v0,
        *v4,
        v6,
        v8,
        v9,
        v10);
      return v0;
    }
    sub_40FEC0(
      "GetSaveSize(): %-5i ending at line %i in file %s",
      (unsigned __int16)v0,
      0x368,
      ".\\Interface\\Menus\\QuickKeysMenu.cpp");
  }
  return v0;
}
