// Verified: computes serialized size for base state, model path, particle transform/position/scale, and optional controller state.
UInt32 __thiscall BSTempEffectParticle_GetSaveSize(BSTempEffectParticle *self)
{
  int v2; // edi
  UInt32 v3; // edi
  NiInterpController *m_controller; // esi
  NiRTTI *v5; // eax
  char v6; // al
  int v7; // eax
  UInt32 *currentlySavingFormHeader; // esi
  TESForm *v9; // eax
  const char *v10; // eax
  int v12; // [esp-Ch] [ebp-14h]
  int v13; // [esp-8h] [ebp-10h]
  const char *v14; // [esp-4h] [ebp-Ch]

  v2 = 0; /*0x570caa*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x570cac*/
    v2 = 6; /*0x570cb5*/
  v3 = v2 + sub_73D5D0() + 1 + strlen(self->modelPath) + 0x22; /*0x570cdb*/
  m_controller = self->particleNode->members.super.m_controller; /*0x570ce2*/
  if ( m_controller )
  {
    v5 = m_controller->vtbl->super.super.GetType((NiObject *)m_controller); /*0x570cf0*/
    if ( v5 ) /*0x570cf4*/
    {
      while ( v5 != &stru_B3CAC0 ) /*0x570cfb*/
      {
        v5 = v5->parent; /*0x570cfd*/
        if ( !v5 ) /*0x570d02*/
          goto LABEL_7; /*0x570d02*/
      }
      v6 = 1; /*0x570d71*/
    }
    else
    {
LABEL_7:
      v6 = 0; /*0x570d04*/
    }
    v7 = v6 != 0 ? (unsigned int)m_controller : 0;
    if ( v7 ) /*0x570d0c*/
      v3 += (unsigned __int16)sub_4DA760(v7); /*0x570d1a*/
  }
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x570d2b*/
    if ( currentlySavingFormHeader )
    {
      v9 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x570d38*/
      v10 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v9->vtbl->GetEditorName)( /*0x570d58*/
                            v9,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x104,
                            "..\\TES Shared\\TempEffects\\BSTempEffectParticle.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v3,
        *currentlySavingFormHeader,
        v10,
        v12,
        v13,
        v14);
      return v3; /*0x570d70*/
    }
    sub_40FEC0(
      "GetSaveSize(): %-5i ending at line %i in file %s",
      v3,
      0x104,
      "..\\TES Shared\\TempEffects\\BSTempEffectParticle.cpp");
  }
  return v3; /*0x570d6e*/
}
