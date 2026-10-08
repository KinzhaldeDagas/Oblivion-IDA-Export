// Verified: mask 0x10 saves exactly 16 bytes at component +4 (flags and six UInt16 fields through maxLevel). Includes both blood-disable flag bits; does not save blood path strings. Mask 0x40 saves UInt16 count then FormID (4 bytes through IRef-aware helper) and rank byte for each nonnull faction entry.
void __thiscall TESActorBaseData_SaveModifiedComponent(TESActorBaseData *self, ActorBaseSaveChangeMask changeMask)
{
  TESSaveLoadGame_SerializationView *v3; // ecx
  unsigned __int8 *bufferCursor; // ebp
  TESSaveLoadGame_SerializationView *v5; // ecx
  TESSaveLoadGame_SerializationView *v6; // ecx
  char v7; // bl
  TESSaveLoadGame_SerializationView *v8; // ecx
  unsigned __int8 *v9; // edi
  FactionListEntry *i; // esi
  FactionListData *data; // eax
  unsigned int v12; // edx
  UInt8 rank; // al
  TESSaveLoadGame_SerializationView *v14; // ecx
  UInt32 *currentlySavingFormHeader; // edi
  unsigned __int8 *v16; // esi
  TESForm *v17; // eax
  const char *v18; // eax
  unsigned __int8 *v19; // edi
  unsigned __int8 *v20; // esi
  int v21; // [esp-Ch] [ebp-28h]
  int v22; // [esp-8h] [ebp-24h]
  const char *v23; // [esp-4h] [ebp-20h]
  int Src; // [esp+Ch] [ebp-10h] BYREF
  unsigned __int8 *v25; // [esp+10h] [ebp-Ch]
  int source; // [esp+14h] [ebp-8h] BYREF
  unsigned int v27; // [esp+18h] [ebp-4h] BYREF

  v3 = g_TESSaveLoadGame; /*0x467af8*/
  source = 0; /*0x467b00*/
  bufferCursor = v3->bufferCursor; /*0x467b04*/
  v25 = 0; /*0x467b07*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x467b0b*/
  {
    v5 = g_TESSaveLoadGame; /*0x467b14*/
    Src = 0x4B4F4C42; /*0x467b21*/
    SaveLoad_SaveData(v5, &Src, 4u); /*0x467b29*/
    v6 = g_TESSaveLoadGame; /*0x467b2e*/
    v25 = g_TESSaveLoadGame->bufferCursor; /*0x467b3e*/
    SaveLoad_SaveData(v6, &source, 2u); /*0x467b42*/
  }
  v7 = changeMask; /*0x467b48*/
  if ( (changeMask & 0x10) != 0 ) /*0x467b4f*/
    SaveLoad_SaveData(g_TESSaveLoadGame, &self->flags, 0x10u); /*0x467b5d*/
  if ( (v7 & 0x40) != 0 ) /*0x467b65*/
  {
    v8 = g_TESSaveLoadGame; /*0x467b67*/
    Src = 0; /*0x467b73*/
    v9 = v8->bufferCursor; /*0x467b77*/
    SaveLoad_SaveData(v8, &Src, 2u); /*0x467b7b*/
    for ( i = &self->factionList; i; i = i->next ) /*0x467b83*/
    {
      data = i->data; /*0x467b90*/
      if ( i->data ) /*0x467b90*/
      {
        v12 = *((_DWORD *)data->faction + 3); /*0x467b98*/
        rank = data->rank; /*0x467b9b*/
        v14 = g_TESSaveLoadGame; /*0x467ba5*/
        v27 = v12; /*0x467bab*/
        LOBYTE(changeMask) = rank; /*0x467baf*/
        SaveLoad_SaveFormID(v14, &v27, 4u); /*0x467bb3*/
        SaveLoad_SaveData(g_TESSaveLoadGame, &changeMask, 1u); /*0x467bc4*/
        ++Src; /*0x467bc9*/
      }
    }
    *(_WORD *)v9 = Src; /*0x467bd9*/
  }
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x467beb*/
    v16 = g_TESSaveLoadGame->bufferCursor; /*0x467bf3*/
    if ( currentlySavingFormHeader )
    {
      v17 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x467bfb*/
      v18 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v17->vtbl->GetEditorName)( /*0x467c1b*/
                            v17,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x66F,
                            "..\\TES Shared\\TESActorBaseData.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v16 - bufferCursor,
        *currentlySavingFormHeader,
        v18,
        v21,
        v22,
        v23);
    }
    else
    {
      sub_40FEC0(
        "SaveGame(): %-5i ending at line %i in file %s",
        v16 - bufferCursor,
        0x66F,
        "..\\TES Shared\\TESActorBaseData.cpp");
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x467c53*/
  {
    v19 = v25; /*0x467c62*/
    v20 = g_TESSaveLoadGame->bufferCursor; /*0x467c66*/
    if ( v20 > v25 + 0xFFFF ) /*0x467c71*/
      PrintError( /*0x467c82*/
        "Save Game Block in file %s on line %i is greater than maximum short size",
        "..\\TES Shared\\TESActorBaseData.cpp",
        0x66F);
    *(_WORD *)v19 = (_WORD)v20 - (_WORD)v19; /*0x467c8c*/
  }
}
