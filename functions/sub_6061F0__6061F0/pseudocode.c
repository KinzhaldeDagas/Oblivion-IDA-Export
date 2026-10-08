// Verified 2026-10-04 crime-record family: manager6770F0 allocates30 bytes, calls605E50 then606520; manager677010 calls6061F0;677240 calls6071A0. Embedded witness list at1C, not AlarmPackage crimes pointer at3C. Probable Fallout Crime family; Oblivion allocation, field reads/writes, calls and RTTI fixups establish local identity.
// Verified size-estimate discrepancy: getter adds0x23 + UInt16 count +4*N (0x25+4*N), plus optional6-byte BLOK. Writer6062B0 emits3 flags +3 dwords +4 FormIDs +UInt16 count +4*N (0x21+4*N). Estimate exceeds fixed emitted payload by4. Unknown rationale; do not patch or force schema to match estimate.
unsigned __int16 __thiscall Crime_GetSaveSize(Crime *self)
{
  __int16 v2; // di
  CrimeWitnessNode *p_witnesses; // eax
  __int16 v4; // di
  __int16 v5; // cx
  unsigned __int16 v6; // di
  UInt32 *currentlySavingFormHeader; // esi
  TESForm *v8; // eax
  const char *v9; // eax
  int v11; // [esp-Ch] [ebp-14h]
  int v12; // [esp-8h] [ebp-10h]
  const char *v13; // [esp-4h] [ebp-Ch]

  v2 = 0; /*0x6061fa*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x6061fc*/
    v2 = 6; /*0x606205*/
  p_witnesses = &self->witnesses; /*0x60620a*/
  v4 = v2 + 0x23; /*0x60620d*/
  v5 = 0; /*0x606210*/
  if ( self != (Crime *)0xFFFFFFE4 ) /*0x606214*/
  {
    do /*0x606223*/
    {
      if ( p_witnesses->actor ) /*0x606216*/
        ++v5; /*0x60621b*/
      p_witnesses = p_witnesses->next; /*0x60621e*/
    }
    while ( p_witnesses ); /*0x606223*/
  }
  v6 = v4 + 4 * v5 + 2; /*0x60622c*/
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x606237*/
    if ( currentlySavingFormHeader )
    {
      v8 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x606244*/
      v9 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v8->vtbl->GetEditorName)( /*0x606264*/
                           v8,
                           *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                           0xFA,
                           ".\\AI\\AlarmPackage.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v6,
        *currentlySavingFormHeader,
        v9,
        v11,
        v12,
        v13);
      return v6; /*0x606280*/
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v6, 0xFA, ".\\AI\\AlarmPackage.cpp");
  }
  return v6; /*0x60627e*/
}
