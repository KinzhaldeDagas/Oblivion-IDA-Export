int __thiscall sub_56D4E0(_DWORD **this)
{
  int v3; // edi
  int v4; // edi
  int v5; // eax
  const char *v6; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // edx
  int v10; // ecx
  int v11; // eax
  int v12; // ebx
  unsigned __int16 v13; // di
  int v14; // eax
  int v15; // esi
  unsigned __int16 *v16; // ecx
  int v17; // edx
  UInt32 *v18; // edi
  TESForm *v19; // eax
  const char *v20; // eax
  int v22; // [esp-Ch] [ebp-14h]
  int v23; // [esp-8h] [ebp-10h]
  const char *v24; // [esp-4h] [ebp-Ch]

  v3 = 0;
  if ( sub_45A170() )
    v3 = 6;
  v4 = sub_73D5D0() + v3;
  v5 = **(this + 6);
  if ( v5 )
    v6 = *(const char **)(v5 + 0x34);
  else
    v6 = 0;
  v7 = (unsigned __int16)sub_452400(v6);
  v8 = (int)*(this + 7);
  v9 = v4 + v7 + 0x35;
  v10 = *(_DWORD *)(v8 + 0xB4);
  v11 = *(_DWORD *)(*(_DWORD *)(v8 + 0xB8) + 8);
  v12 = *(_DWORD *)(v11 + 0x44);
  v13 = *(_WORD *)(v11 + 0x40);
  v14 = v13;
  v15 = v9 + 2 * (*(unsigned __int16 *)(v10 + 0x44) + 0xC * *(unsigned __int16 *)(v10 + 8)) + 6;
  if ( v13 )
  {
    v16 = (unsigned __int16 *)(v12 + 0x48);
    do
    {
      v17 = *v16;
      v16 += 0x26;
      --v14;
      v15 += 8 * v17 + 2;
    }
    while ( v14 );
  }
  if ( Global_DebugSaveBuffer )
  {
    v18 = (UInt32 *)SaveLoad_CurrentSavegame[1].unk030[1];
    if ( v18 )
    {
      v19 = TESForm_LookupByFormID(*v18);
      v20 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v19->vtbl->GetEditorName)(
                            v19,
                            *(UInt32 *)((char *)v18 + 5),
                            0x51D,
                            "..\\TES Shared\\TempEffects\\BSTempEffectGeometryDecal.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v15,
        *v18,
        v20,
        v22,
        v23,
        v24);
      return v15;
    }
    sub_40FEC0(
      "GetSaveSize(): %-5i ending at line %i in file %s",
      v15,
      0x51D,
      "..\\TES Shared\\TempEffects\\BSTempEffectGeometryDecal.cpp");
  }
  return v15;
}
