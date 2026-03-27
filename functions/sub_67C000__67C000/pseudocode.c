unsigned __int16 __thiscall sub_67C000(int *this)
{
  __int16 v3; // si
  int v4; // esi
  bool v5; // zf
  unsigned __int16 v6; // di
  unsigned __int16 v7; // ax
  UInt32 *v8; // esi
  TESForm *v9; // eax
  const char *v10; // eax
  int v12; // [esp-Ch] [ebp-18h]
  int v13; // [esp-8h] [ebp-14h]
  const char *v14; // [esp-4h] [ebp-10h]
  unsigned __int16 v15; // [esp+8h] [ebp-4h]

  v3 = 0;
  if ( sub_45A170() )
    v3 = 6;
  v15 = v3 + 2;
  v4 = *this;
  v5 = *this == 0;
  v6 = v15;
  if ( !v5 )
  {
    do
    {
      if ( !*(_DWORD *)(v4 + 4) && !*(_DWORD *)v4 )
        break;
      v7 = sub_67B730(*(_DWORD ***)v4);
      v4 = *(_DWORD *)(v4 + 4);
      v6 += v7;
    }
    while ( v4 );
  }
  if ( Global_DebugSaveBuffer )
  {
    v8 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    if ( v8 )
    {
      v9 = TESForm_LookupByFormID(*v8);
      v10 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v9->vtbl->GetEditorName)(
                            v9,
                            *(UInt32 *)((char *)v8 + 5),
                            0x218,
                            ".\\AI\\SpectatorPackage.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v6,
        *v8,
        v10,
        v12,
        v13,
        v14);
      return v6;
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v6, 0x218, ".\\AI\\SpectatorPackage.cpp");
  }
  return v6;
}
