unsigned __int16 __thiscall TESSpellList_ModifiedComponentSize(char *this, int a2)
{
  __int16 v3; // si
  char *v5; // eax
  __int16 v6; // si
  __int16 v7; // cx
  __int16 v8; // dx
  char *v9; // eax
  __int16 v10; // cx
  unsigned __int16 v11; // di
  UInt32 *v12; // esi
  TESForm *v13; // eax
  const char *v14; // eax
  int v16; // [esp-Ch] [ebp-14h]
  int v17; // [esp-8h] [ebp-10h]
  const char *v18; // [esp-4h] [ebp-Ch]

  v3 = 0;
  if ( (a2 & 0x20) == 0 )
    return TESSpellList_ModifiedComponentSize_::Done(a2);
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
  v8 = v6 + 4 * v7;
  v9 = this + 0xC;
  v10 = 0;
  if ( this != (char *)0xFFFFFFF4 )
  {
    do
    {
      if ( *(_DWORD *)v9 )
        ++v10;
      v9 = *((char **)v9 + 1);
    }
    while ( v9 );
  }
  v11 = v8 + 4 * v10;
  if ( !Global_DebugSaveBuffer )
    return v11;
  v12 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
  if ( v12 )
  {
    v13 = TESForm_LookupByFormID(*v12);
    v14 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v13->vtbl->GetEditorName)(
                          v13,
                          *(UInt32 *)((char *)v12 + 5),
                          0x4EF,
                          "..\\TES Shared\\TESSpellList.cpp");
    sub_40FEC0(
      "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
      v11,
      *v12,
      v14,
      v16,
      v17,
      v18);
    return v11;
  }
  sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v11, 0x4EF, "..\\TES Shared\\TESSpellList.cpp");
  return v11;
}
