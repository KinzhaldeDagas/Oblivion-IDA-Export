unsigned __int16 __thiscall sub_4E5A40(_DWORD *this)
{
  __int16 v3; // di
  int v4; // eax
  unsigned __int16 v5; // di
  unsigned int i; // esi
  _BYTE *v7; // ecx
  UInt32 *v8; // esi
  TESForm *v9; // eax
  const char *v10; // eax
  int v12; // [esp-Ch] [ebp-18h]
  int v13; // [esp-8h] [ebp-14h]
  const char *v14; // [esp-4h] [ebp-10h]

  v3 = 0;
  if ( sub_45A170() )
    v3 = 6;
  v4 = *(this + 9);
  v5 = v3 + 2;
  if ( v4 )
  {
    for ( i = 0; i < *(unsigned __int16 *)(v4 + 0xA); ++i )
    {
      v7 = *(_BYTE **)(*(_DWORD *)(v4 + 4) + 4 * i);
      if ( v7 )
      {
        if ( sub_67ED70(v7) )
          v5 += 2;
      }
      v4 = *(this + 9);
    }
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
                            0xD3E,
                            "..\\TES Shared\\TESPathGrid.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v5,
        *v8,
        v10,
        v12,
        v13,
        v14);
      return v5;
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v5, 0xD3E, "..\\TES Shared\\TESPathGrid.cpp");
  }
  return v5;
}
