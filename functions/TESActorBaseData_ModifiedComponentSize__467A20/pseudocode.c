// Verified: component save size adds 16 bytes when mask 0x10 is set, plus UInt16 count and 5 bytes per nonnull faction entry when mask 0x40 is set; optional 6-byte BLOK envelope when UseSaveGameBlocks returns true.
unsigned __int16 __thiscall TESActorBaseData_ModifiedComponentSize(
        TESActorBaseData *self,
        ActorBaseSaveChangeMask changeMask)
{
  unsigned __int16 v3; // si
  FactionListEntry *p_factionList; // eax
  __int16 v5; // si
  __int16 v6; // cx
  UInt32 *currentlySavingFormHeader; // edi
  TESForm *v8; // eax
  const char *v9; // eax
  int v11; // [esp-Ch] [ebp-14h]
  int v12; // [esp-8h] [ebp-10h]
  const char *v13; // [esp-4h] [ebp-Ch]

  v3 = 0; /*0x467a2a*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x467a2c*/
    v3 = 6; /*0x467a35*/
  if ( (changeMask & 0x10) != 0 ) /*0x467a40*/
    v3 += 0x10; /*0x467a42*/
  if ( (changeMask & 0x40) != 0 ) /*0x467a47*/
  {
    p_factionList = &self->factionList; /*0x467a49*/
    v5 = v3 + 2; /*0x467a4c*/
    v6 = 0; /*0x467a4f*/
    if ( self != (TESActorBaseData *)0xFFFFFFE8 ) /*0x467a53*/
    {
      do /*0x467a62*/
      {
        if ( p_factionList->data ) /*0x467a55*/
          ++v6; /*0x467a5a*/
        p_factionList = p_factionList->next; /*0x467a5d*/
      }
      while ( p_factionList ); /*0x467a62*/
    }
    v3 = v6 + v5 + 4 * v6; /*0x467a67*/
  }
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x467a79*/
    if ( currentlySavingFormHeader )
    {
      v8 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x467a86*/
      v9 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v8->vtbl->GetEditorName)( /*0x467aa6*/
                           v8,
                           *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                           0x646,
                           "..\\TES Shared\\TESActorBaseData.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v3,
        *currentlySavingFormHeader,
        v9,
        v11,
        v12,
        v13);
      return v3; /*0x467ac2*/
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v3, 0x646, "..\\TES Shared\\TESActorBaseData.cpp");
  }
  return v3; /*0x467abd*/
}
