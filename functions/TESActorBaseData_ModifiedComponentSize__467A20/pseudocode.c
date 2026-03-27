unsigned __int16 __thiscall TESActorBaseData_ModifiedComponentSize(char *this, char a2)
{
  unsigned __int16 v4; // si
  char *v5; // eax
  __int16 v6; // si
  __int16 v7; // cx
  UInt32 *v8; // edi
  TESForm *v9; // eax
  const char *v10; // eax
  int v12; // [esp-Ch] [ebp-14h]
  int v13; // [esp-8h] [ebp-10h]
  const char *v14; // [esp-4h] [ebp-Ch]

  v4 = 0;
  if ( sub_45A170() )
    v4 = 6;
  if ( (a2 & 0x10) != 0 )
    v4 += 0x10;
  if ( (a2 & 0x40) != 0 )
  {
    v5 = this + 0x18;
    v6 = v4 + 2;
    v7 = 0;
    if ( this != (char *)0xFFFFFFE8 )
    {
      do
      {
        if ( *(_DWORD *)v5 )
          ++v7;
        v5 = *((char **)v5 + 1);
      }
      while ( v5 );
    }
    v4 = v7 + v6 + 4 * v7;
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
                            0x646,
                            "..\\TES Shared\\TESActorBaseData.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v4,
        *v8,
        v10,
        v12,
        v13,
        v14);
      return v4;
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v4, 0x646, "..\\TES Shared\\TESActorBaseData.cpp");
  }
  return v4;
}
