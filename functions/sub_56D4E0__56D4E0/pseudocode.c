unsigned int __thiscall BSTempEffectGeometryDecal_GetSaveSize(BSTempEffectGeometryDecalLayout_t *this)
{
  int v2; // edi
  int v3; // edi
  NiSourceTexture *sourceTexture_00; // eax
  const char *unk034; // eax
  int v6; // ecx
  NiAVObject *generatedGeometry_1C; // eax
  int v8; // edx
  const char *m_pcName; // ecx
  int v10; // eax
  int v11; // ebx
  unsigned __int16 v12; // di
  int v13; // eax
  unsigned int v14; // esi
  unsigned __int16 *v15; // ecx
  int v16; // edx
  UInt32 *currentlySavingFormHeader; // edi
  TESForm *v18; // eax
  const char *v19; // eax
  int v21; // [esp-Ch] [ebp-14h]
  int v22; // [esp-8h] [ebp-10h]
  const char *v23; // [esp-4h] [ebp-Ch]

  v2 = 0; /*0x56d4ea*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x56d4ec*/
    v2 = 6; /*0x56d4f5*/
  v3 = sub_73D5D0() + v2; /*0x56d501*/
  sourceTexture_00 = this->decalCreationData_18->sourceTexture_00; /*0x56d506*/
  if ( sourceTexture_00 ) /*0x56d50a*/
    unk034 = (const char *)sourceTexture_00->members.unk034; /*0x56d50c*/
  else
    unk034 = 0; /*0x56d511*/
  v6 = (unsigned __int16)sub_452400(unk034); /*0x56d520*/
  generatedGeometry_1C = this->generatedGeometry_1C; /*0x56d523*/
  v8 = v3 + v6 + 0x35; /*0x56d526*/
  m_pcName = generatedGeometry_1C[1].members.super.m_pcName; /*0x56d52a*/
  v10 = *(_DWORD *)&generatedGeometry_1C[1].members.super.m_controller->member.flags; /*0x56d536*/
  v11 = *(_DWORD *)(v10 + 0x44); /*0x56d53d*/
  v12 = *(_WORD *)(v10 + 0x40); /*0x56d540*/
  v13 = v12; /*0x56d551*/
  v14 = v8 + 2 * (*((unsigned __int16 *)m_pcName + 0x22) + 0xC * *((unsigned __int16 *)m_pcName + 4)) + 6; /*0x56d556*/
  if ( v12 ) /*0x56d55a*/
  {
    v15 = (unsigned __int16 *)(v11 + 0x48); /*0x56d55c*/
    do /*0x56d56d*/
    {
      v16 = *v15; /*0x56d560*/
      v15 += 0x26; /*0x56d563*/
      --v13; /*0x56d566*/
      v14 += 8 * v16 + 2; /*0x56d569*/
    }
    while ( v13 ); /*0x56d56d*/
  }
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x56d57e*/
    if ( currentlySavingFormHeader )
    {
      v18 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x56d58b*/
      v19 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v18->vtbl->GetEditorName)( /*0x56d5ab*/
                            v18,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x51D,
                            "..\\TES Shared\\TempEffects\\BSTempEffectGeometryDecal.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v14,
        *currentlySavingFormHeader,
        v19,
        v21,
        v22,
        v23);
      return v14; /*0x56d5c3*/
    }
    sub_40FEC0(
      "GetSaveSize(): %-5i ending at line %i in file %s",
      v14,
      0x51D,
      "..\\TES Shared\\TempEffects\\BSTempEffectGeometryDecal.cpp");
  }
  return v14; /*0x56d5bf*/
}
