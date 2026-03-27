unsigned __int16 __usercall sub_488580@<ax>(int *this@<ecx>, double a2@<st0>)
{
  __int16 v3; // si
  int v4; // esi
  bool v5; // zf
  unsigned __int16 v6; // di
  UInt32 *v7; // esi
  TESForm *v8; // eax
  const char *v9; // eax
  int v11; // [esp-Ch] [ebp-18h]
  int v12; // [esp-8h] [ebp-14h]
  const char *v13; // [esp-4h] [ebp-10h]
  unsigned __int16 v14; // [esp+8h] [ebp-4h]

  v3 = 0;
  if ( sub_45A170() )
    v3 = 6;
  v14 = v3 + 2;
  v4 = *this;
  v5 = *this == 0;
  v6 = v14;
  if ( !v5 )
  {
    do
    {
      if ( !*(_DWORD *)(v4 + 4) && !*(_DWORD *)v4 )
        break;
      if ( *(_DWORD *)v4 )
        v6 += sub_485660(*(int **)v4, a2);
      v4 = *(_DWORD *)(v4 + 4);
    }
    while ( v4 );
  }
  if ( Global_DebugSaveBuffer )
  {
    v7 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    if ( v7 )
    {
      v8 = TESForm_LookupByFormID(*v7);
      v9 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v8->vtbl->GetEditorName)(
                           v8,
                           *(UInt32 *)((char *)v7 + 5),
                           0x2131,
                           "..\\TES Shared\\InventoryChanges.cpp");
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
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v6, 0x2131, "..\\TES Shared\\InventoryChanges.cpp");
  }
  return v6;
}
