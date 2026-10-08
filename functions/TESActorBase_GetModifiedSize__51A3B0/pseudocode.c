// Verified 2026-10-03: actor-base size dispatcher aggregates TESForm (version>=0x6D), attributes, base-data, spell-list, AI, optional health (0x4), actorValueModifiers at complete +0xD0 (0x10000000), and fullName (0x80). Matched to save/load partners 0x51A520/0x51A6F0; virtual component tail dispatch is distinct from direct component serializers.
unsigned __int16 __thiscall TESActorBase_GetModifiedSize(TESActorBase *self, ActorBaseSaveChangeMask changeMask)
{
  __int16 v3; // si
  __int16 v4; // si
  __int16 v5; // si
  __int16 v6; // si
  unsigned __int16 v7; // si
  char *m_data; // eax
  UInt32 *currentlySavingFormHeader; // edi
  TESForm *v10; // eax
  const char *v11; // eax
  int v13; // [esp-Ch] [ebp-1Ch]
  int v14; // [esp-8h] [ebp-18h]
  const char *v15; // [esp-4h] [ebp-14h]
  __int16 v16; // [esp+Ch] [ebp-4h]
  unsigned __int16 v17; // [esp+Ch] [ebp-4h]
  __int16 v18; // [esp+Ch] [ebp-4h]

  v16 = 0; /*0x51a3bc*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x51a3c4*/
    v16 = 6; /*0x51a3cd*/
  if ( g_TESSaveLoadGame->currentVersion < 0x6Du ) /*0x51a3e2*/
    v3 = v16; /*0x51a3f6*/
  else
    v3 = TESForm_ModifiedFormSize(changeMask) + v16; /*0x51a3f1*/
  v4 = TESAttributes_ModifiedSize(changeMask) + v3; /*0x51a40b*/
  v5 = TESActorBaseData_ModifiedComponentSize(&self->super.actorBaseData, changeMask) + v4; /*0x51a417*/
  v6 = TESSpellList_ModifiedComponentSize((char *)&self->super.spellList, changeMask) + v5; /*0x51a423*/
  v7 = TESAIForm_GetModifiedSize(changeMask) + v6; /*0x51a42b*/
  v17 = v7; /*0x51a431*/
  if ( (changeMask & 4) != 0 ) /*0x51a436*/
  {
    v17 = v7 + 4; /*0x51a438*/
    v7 += 4; /*0x51a43d*/
  }
  if ( (changeMask & 0x10000000) != 0 ) /*0x51a448*/
  {
    v7 += AVCollection_GetSaveSize(&self->super.actorValueModifiers); /*0x51a455*/
    v17 = v7; /*0x51a458*/
  }
  if ( (char)changeMask < 0 ) /*0x51a45f*/
  {
    v18 = v17 + 1; /*0x51a467*/
    m_data = self->super.fullName.name.m_data; /*0x51a46e*/
    if ( !m_data ) /*0x51a470*/
      m_data = EmptyString; /*0x51a472*/
    v7 = strlen(m_data) + v18; /*0x51a48f*/
  }
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x51a4a3*/
    if ( currentlySavingFormHeader )
    {
      v10 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x51a4b0*/
      v11 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v10->vtbl->GetEditorName)( /*0x51a4d0*/
                            v10,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x207,
                            "..\\TES Shared\\TESActorBase.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v7,
        *currentlySavingFormHeader,
        v11,
        v13,
        v14,
        v15);
      return v7; /*0x51a4ee*/
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v7, 0x207, "..\\TES Shared\\TESActorBase.cpp");
  }
  return v7; /*0x51a4e7*/
}
