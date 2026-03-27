unsigned __int16 __thiscall sub_441000(char *this)
{
  __int16 v2; // di
  char *v3; // eax
  __int16 v4; // di
  __int16 v5; // cx
  unsigned __int16 v6; // di
  UInt32 *v7; // esi
  TESForm *v8; // eax
  const char *v9; // eax
  int v11; // [esp-Ch] [ebp-14h]
  int v12; // [esp-8h] [ebp-10h]
  const char *v13; // [esp-4h] [ebp-Ch]

  v2 = 0;
  if ( sub_45A170() )
    v2 = 6;
  v3 = this + 0x8C;
  v4 = v2 + 4;
  v5 = 0;
  if ( this != (char *)0xFFFFFF74 )
  {
    do
    {
      if ( *(_DWORD *)v3 )
        ++v5;
      v3 = *((char **)v3 + 1);
    }
    while ( v3 );
  }
  v6 = v4 + 6 * v5;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) >= 0x32u )
    v6 += 4;
  if ( Global_DebugSaveBuffer )
  {
    v7 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    if ( v7 )
    {
      v8 = TESForm_LookupByFormID(*v7);
      v9 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v8->vtbl->GetEditorName)(
                           v8,
                           *(UInt32 *)((char *)v7 + 5),
                           0x1591,
                           "..\\TES Shared\\TES.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v6,
        *v7,
        v9,
        v11,
        v12,
        v13);
      return v6;
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v6, 0x1591, "..\\TES Shared\\TES.cpp");
  }
  return v6;
}
