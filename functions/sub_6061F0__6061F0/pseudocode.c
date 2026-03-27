unsigned __int16 __thiscall sub_6061F0(char *this)
{
  __int16 v3; // di
  char *v4; // eax
  __int16 v5; // di
  __int16 v6; // cx
  unsigned __int16 v7; // di
  UInt32 *v8; // esi
  TESForm *v9; // eax
  const char *v10; // eax
  int v12; // [esp-Ch] [ebp-14h]
  int v13; // [esp-8h] [ebp-10h]
  const char *v14; // [esp-4h] [ebp-Ch]

  v3 = 0;
  if ( sub_45A170() )
    v3 = 6;
  v4 = this + 0x1C;
  v5 = v3 + 0x23;
  v6 = 0;
  if ( this != (char *)0xFFFFFFE4 )
  {
    do
    {
      if ( *(_DWORD *)v4 )
        ++v6;
      v4 = *((char **)v4 + 1);
    }
    while ( v4 );
  }
  v7 = v5 + 4 * v6 + 2;
  if ( Global_DebugSaveBuffer )
  {
    v8 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    if ( v8 )
    {
      v9 = TESForm_LookupByFormID(*v8);
      v10 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v9->vtbl->GetEditorName)(
                            v9,
                            *(UInt32 *)((char *)v8 + 5),
                            0xFA,
                            ".\\AI\\AlarmPackage.cpp");
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
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v7, 0xFA, ".\\AI\\AlarmPackage.cpp");
  }
  return v7;
}
