unsigned int __thiscall BSTempEffectDecal_GetSaveSize(BSTempEffectDecalLayout_t *this)
{
  int v2; // edi
  int v3; // edi
  NiSourceTexture *sourceTexture_00; // eax
  const char *unk034; // eax
  unsigned int v6; // edi
  UInt32 *currentlySavingFormHeader; // esi
  TESForm *v8; // eax
  const char *v9; // eax
  int v11; // [esp-Ch] [ebp-14h]
  int v12; // [esp-8h] [ebp-10h]
  const char *v13; // [esp-4h] [ebp-Ch]

  v2 = 0; /*0x56c03a*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x56c03c*/
    v2 = 6; /*0x56c045*/
  v3 = sub_73D5D0() + v2; /*0x56c051*/
  sourceTexture_00 = this->decalData_18->sourceTexture_00; /*0x56c056*/
  if ( sourceTexture_00 ) /*0x56c05a*/
    unk034 = (const char *)sourceTexture_00->members.unk034; /*0x56c05c*/
  else
    unk034 = 0; /*0x56c061*/
  v6 = v3 + (unsigned __int16)sub_452400(unk034) + 0x35; /*0x56c079*/
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x56c085*/
    if ( currentlySavingFormHeader )
    {
      v8 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x56c092*/
      v9 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v8->vtbl->GetEditorName)( /*0x56c0b2*/
                           v8,
                           *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                           0x90,
                           "..\\TES Shared\\TempEffects\\BSTempEffectDecal.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v6,
        *currentlySavingFormHeader,
        v9,
        v11,
        v12,
        v13);
      return v6; /*0x56c0ca*/
    }
    sub_40FEC0(
      "GetSaveSize(): %-5i ending at line %i in file %s",
      v6,
      0x90,
      "..\\TES Shared\\TempEffects\\BSTempEffectDecal.cpp");
  }
  return v6; /*0x56c0c8*/
}
