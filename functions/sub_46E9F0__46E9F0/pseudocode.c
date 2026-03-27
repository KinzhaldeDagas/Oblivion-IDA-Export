unsigned __int16 __thiscall sub_46E9F0(char *this, char a2)
{
  __int16 v3; // si
  char *v5; // eax
  __int16 v6; // si
  __int16 v7; // cx
  unsigned __int16 v8; // di
  UInt32 *v9; // esi
  TESForm *v10; // eax
  const char *v11; // eax
  int v13; // [esp-Ch] [ebp-14h]
  int v14; // [esp-8h] [ebp-10h]
  const char *v15; // [esp-4h] [ebp-Ch]

  v3 = 0;
  if ( (a2 & 8) == 0 )
    return 0;
  if ( sub_45A170() )
    v3 = 6;
  v5 = this + 4;
  v6 = v3 + 2;
  v7 = 0;
  if ( this != (char *)0xFFFFFFFC )
  {
    do
    {
      if ( *(_DWORD *)v5 )
        ++v7;
      v5 = *((char **)v5 + 1);
    }
    while ( v5 );
  }
  v8 = v6 + 8 * v7;
  if ( !Global_DebugSaveBuffer )
    return v8;
  v9 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
  if ( v9 )
  {
    v10 = TESForm_LookupByFormID(*v9);
    v11 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v10->vtbl->GetEditorName)(
                          v10,
                          *(UInt32 *)((char *)v9 + 5),
                          0x4E9,
                          "..\\TES Shared\\TESReactionForm.cpp");
    sub_40FEC0(
      "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
      v8,
      *v9,
      v11,
      v13,
      v14,
      v15);
    return v8;
  }
  sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v8, 0x4E9, "..\\TES Shared\\TESReactionForm.cpp");
  return v8;
}
