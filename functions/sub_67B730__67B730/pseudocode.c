unsigned __int16 __thiscall sub_67B730(_DWORD **this)
{
  __int16 v3; // di
  __int16 v4; // di
  _DWORD *v5; // eax
  __int16 j; // cx
  _DWORD *v7; // eax
  __int16 i; // cx
  unsigned __int16 v9; // di
  UInt32 *v10; // esi
  TESForm *v11; // eax
  const char *v12; // eax
  int v14; // [esp-Ch] [ebp-18h]
  int v15; // [esp-8h] [ebp-14h]
  const char *v16; // [esp-4h] [ebp-10h]
  __int16 v17; // [esp+8h] [ebp-4h]

  v3 = 0;
  if ( sub_45A170() )
    v3 = 6;
  v4 = v3 + 2;
  if ( LOBYTE(SaveLoad_CurrentSavegame[1].createdObjectList.next) < 0x39u )
  {
    v7 = *this;
    for ( i = 0; v7; v7 = (_DWORD *)v7[1] )
    {
      if ( *v7 )
        ++i;
    }
    v17 = i + v4 + 4 * i;
  }
  else
  {
    v5 = *this;
    for ( j = 0; v5; v5 = (_DWORD *)v5[1] )
    {
      if ( *v5 )
        ++j;
    }
    v17 = j + v4 + 8 * j;
  }
  v9 = (*(int (__thiscall **)(_DWORD))(**(this + 2) + 0xDC))(*(this + 2)) + 0x20 + v17;
  if ( Global_DebugSaveBuffer )
  {
    v10 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    if ( v10 )
    {
      v11 = TESForm_LookupByFormID(*v10);
      v12 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v11->vtbl->GetEditorName)(
                            v11,
                            *(UInt32 *)((char *)v10 + 5),
                            0x117,
                            ".\\AI\\SpectatorPackage.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v9,
        *v10,
        v12,
        v14,
        v15,
        v16);
      return v9;
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v9, 0x117, ".\\AI\\SpectatorPackage.cpp");
  }
  return v9;
}
