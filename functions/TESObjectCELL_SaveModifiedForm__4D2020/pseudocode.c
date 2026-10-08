void __userpurge TESObjectCELL_SaveModifiedForm(ExtraDataList *this@<ecx>, TESForm Src)
{
  TESFormVtbl *vtbl; // ebx
  TESSaveLoadGame_SerializationView *v5; // ecx
  unsigned __int8 *bufferCursor; // ebp
  TESSaveLoadGame_SerializationView *v7; // ecx
  BSExtraDataVtbl *SeenData; // eax
  const char *v9; // edi
  BSExtraDataVtbl *Owner; // eax
  UInt32 *currentlySavingFormHeader; // edi
  unsigned __int8 *v12; // esi
  TESForm *v13; // eax
  const char *v14; // eax
  unsigned __int8 *v15; // esi
  int v16; // [esp-Ch] [ebp-24h]
  int v17; // [esp-8h] [ebp-20h]
  const char *v18; // [esp-4h] [ebp-1Ch]
  unsigned __int8 *v19; // [esp+10h] [ebp-8h]
  int source; // [esp+14h] [ebp-4h] BYREF

  vtbl = Src.vtbl; /*0x4d2024*/
  if ( ((int)Src.vtbl & 0x8000000) != 0 ) /*0x4d2033*/
  {
    Src.vtbl = (TESFormVtbl *)ExtraDataList_GetDetachTime(this + 2); /*0x4d203d*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)this, &Src, 4u); /*0x4d204a*/
  }
  TESForm_SaveModifiedForm((TESForm *)this, (char)vtbl); /*0x4d2052*/
  v5 = g_TESSaveLoadGame; /*0x4d2057*/
  source = 0; /*0x4d205f*/
  bufferCursor = v5->bufferCursor; /*0x4d2063*/
  v19 = 0; /*0x4d2066*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x4d206a*/
  {
    v7 = g_TESSaveLoadGame; /*0x4d207a*/
    Src.vtbl = (TESFormVtbl *)0x4B4F4C42; /*0x4d2080*/
    SaveLoad_SaveData(v7, &Src, 4u); /*0x4d2088*/
    v19 = g_TESSaveLoadGame->bufferCursor; /*0x4d209d*/
    SaveLoad_SaveData(g_TESSaveLoadGame, &source, 2u); /*0x4d20a1*/
  }
  if ( ((unsigned __int8)vtbl & 8) != 0 ) /*0x4d20a9*/
  {
    LOBYTE(Src.vtbl) = *((_BYTE *)this + 0x25) | *((_BYTE *)this + 0x24) & 0x60;// Verified modified-cell save behavior: when the cell's modified-form bit is set, writes one byte combining flags1 with flags0 masked by 0x60. This explicitly carries cell flags0 bits 0x20 and 0x40 in savegame delta state; the plugin CELL DATA writer separately emits the full flags0 byte. /*0x4d20ba*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)this, &Src, 1u); /*0x4d20c1*/
  }
  if ( ((unsigned int)vtbl & 0x10000000) != 0 ) /*0x4d20cc*/
  {
    SeenData = ExtraDataList_GetSeenData(this + 2); /*0x4d20d1*/
    (*((void (__thiscall **)(BSExtraDataVtbl *, _DWORD))SeenData->Destructor + 3))(SeenData, 0); /*0x4d20de*/
  }
  if ( ((unsigned __int8)vtbl & 0x10) != 0 ) /*0x4d20e3*/
  {
    v9 = *((const char **)this + 7); /*0x4d20ea*/
    if ( !v9 ) /*0x4d20ec*/
      v9 = EmptyString; /*0x4d20ee*/
    LOBYTE(Src.vtbl) = strlen(v9); /*0x4d210c*/
    TESForm_SaveDataToCurrentSaveGame((TESForm *)this, &Src, 1u); /*0x4d2110*/
    if ( LOBYTE(Src.vtbl) ) /*0x4d211b*/
      TESForm_SaveDataToCurrentSaveGame((TESForm *)this, v9, LOBYTE(Src.vtbl)); /*0x4d2124*/
  }
  if ( ((unsigned __int8)vtbl & 0x20) != 0 ) /*0x4d212c*/
  {
    Owner = ExtraDataList_GetOwner(this + 2); /*0x4d2131*/
    Src.vtbl = 0; /*0x4d2138*/
    if ( Owner ) /*0x4d2140*/
      Src.vtbl = (TESFormVtbl *)Owner[1].CompareTo; /*0x4d2145*/
    TESForm_SaveFormIDToCurrentSaveGame((TESForm *)this, (const unsigned int *)&Src, 4u); /*0x4d2152*/
  }
  if ( ((unsigned int)vtbl & 0x1000000) != 0 ) /*0x4d215d*/
    TESPathGrid_SaveModifiedForm(*((TESPathGrid **)this + 0x11)); /*0x4d2162*/
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x4d2175*/
    v12 = g_TESSaveLoadGame->bufferCursor; /*0x4d217d*/
    if ( currentlySavingFormHeader )
    {
      v13 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x4d2185*/
      v14 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v13->vtbl->GetEditorName)( /*0x4d21a5*/
                            v13,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x3174,
                            "..\\TES Shared\\TESObjectCELL.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v12 - bufferCursor,
        *currentlySavingFormHeader,
        v14,
        v16,
        v17,
        v18);
    }
    else
    {
      sub_40FEC0(
        "SaveGame(): %-5i ending at line %i in file %s",
        v12 - bufferCursor,
        0x3174,
        "..\\TES Shared\\TESObjectCELL.cpp");
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x4d21dd*/
  {
    v15 = g_TESSaveLoadGame->bufferCursor; /*0x4d21f0*/
    if ( v15 > v19 + 0xFFFF ) /*0x4d21fb*/
      PrintError( /*0x4d220c*/
        "Save Game Block in file %s on line %i is greater than maximum short size",
        "..\\TES Shared\\TESObjectCELL.cpp",
        0x3174);
    *(_WORD *)v19 = (_WORD)v15 - (_WORD)v19; /*0x4d2216*/
  }
}
