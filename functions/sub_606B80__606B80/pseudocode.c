unsigned __int16 __thiscall sub_606B80(_DWORD *this)
{
  unsigned __int16 v3; // di
  unsigned __int16 v4; // bx
  _DWORD *v5; // eax
  __int16 i; // cx
  unsigned __int16 v7; // di
  UInt32 *v8; // esi
  TESForm *v9; // eax
  const char *v10; // eax
  int v12; // [esp-Ch] [ebp-18h]
  int v13; // [esp-8h] [ebp-14h]
  const char *v14; // [esp-4h] [ebp-10h]

  v3 = sub_567D20(this);
  v4 = v3;
  if ( sub_45A170() )
    v3 += 6;
  v5 = (_DWORD *)*(this + 0xF);
  for ( i = 0; v5; v5 = (_DWORD *)v5[1] )
  {
    if ( *v5 )
      ++i;
  }
  v7 = i + v3 + 2 * i + 2;
  if ( Global_DebugSaveBuffer )
  {
    v8 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    if ( v8 )
    {
      v9 = TESForm_LookupByFormID(*v8);
      v10 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v9->vtbl->GetEditorName)(
                            v9,
                            *(UInt32 *)((char *)v8 + 5),
                            0x1F3,
                            ".\\AI\\AlarmPackage.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v7 - v4,
        *v8,
        v10,
        v12,
        v13,
        v14);
      return v7;
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v7 - v4, 0x1F3, ".\\AI\\AlarmPackage.cpp");
  }
  return v7;
}
