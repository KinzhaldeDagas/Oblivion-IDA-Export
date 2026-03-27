unsigned __int16 __cdecl sub_471130(int a1, int a2)
{
  __int16 v2; // si
  unsigned __int16 v3; // si
  __int16 v4; // si
  __int16 v5; // dx
  UInt32 *v6; // edi
  TESForm *v7; // eax
  const char *v8; // eax
  int v10; // [esp-10h] [ebp-14h]
  int v11; // [esp-Ch] [ebp-10h]
  const char *v12; // [esp-8h] [ebp-Ch]

  v2 = 0;
  if ( sub_45A170() )
    v2 = 6;
  v3 = v2 + 4;
  if ( a2 )
  {
    if ( *(_DWORD *)(a2 + 0x24) )
    {
      v4 = v3 + 2;
      v5 = 0xD;
      if ( *(_DWORD *)(a2 + 0x10) )
        v5 = sub_49F550() + 0xE;
      v3 = v5 + v4;
    }
  }
  if ( Global_DebugSaveBuffer )
  {
    v6 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    if ( v6 )
    {
      v7 = TESForm_LookupByFormID(*v6);
      v8 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v7->vtbl->GetEditorName)(
                           v7,
                           *(UInt32 *)((char *)v6 + 5),
                           0xF57,
                           "..\\TES Shared\\Animation.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v3,
        *v6,
        v8,
        v10,
        v11,
        v12);
      return v3;
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v3, 0xF57, "..\\TES Shared\\Animation.cpp");
  }
  return v3;
}
