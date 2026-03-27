unsigned __int16 __thiscall sub_567D20(_DWORD *this)
{
  __int16 v3; // di
  char *v4; // ecx
  unsigned __int8 *v5; // ecx
  UInt32 *v6; // esi
  TESForm *v7; // eax
  const char *v8; // eax
  int v10; // [esp-Ch] [ebp-18h]
  int v11; // [esp-8h] [ebp-14h]
  const char *v12; // [esp-4h] [ebp-10h]
  __int16 v13; // [esp+8h] [ebp-4h]
  unsigned __int16 v14; // [esp+8h] [ebp-4h]

  v3 = 0;
  if ( sub_45A170() )
    v3 = 6;
  v4 = (char *)*(this + 9);
  v13 = v3 + 9;
  if ( v4 )
    v13 += sub_569A20(v4);
  v5 = (unsigned __int8 *)*(this + 0xA);
  if ( v5 )
    v13 += sub_56A000(v5);
  v14 = v13 + 4;
  if ( !Global_DebugSaveBuffer )
    return v14;
  v6 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
  if ( v6 )
  {
    v7 = TESForm_LookupByFormID(*v6);
    v8 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v7->vtbl->GetEditorName)(
                         v7,
                         *(UInt32 *)((char *)v6 + 5),
                         0xE9D,
                         "..\\TES Shared\\Package.cpp");
    sub_40FEC0(
      "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
      v14,
      *v6,
      v8,
      v10,
      v11,
      v12);
  }
  else
  {
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v14, 0xE9D, "..\\TES Shared\\Package.cpp");
  }
  return v14;
}
