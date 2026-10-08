// Verified save path for linked-point state: writes a u16 count followed by u16 PathGrid point indices for each non-null point whose linkedPointsDisabled bit is set; optional save-block framing surrounds this payload.
void __thiscall TESPathGrid_SaveModifiedForm(TESPathGrid *this)
{
  bool v1; // zf
  TESSaveLoadGame_SerializationView *v3; // ecx
  unsigned __int8 *bufferCursor; // eax
  TESSaveLoadGame_SerializationView *v5; // ecx
  TESSaveLoadGame_SerializationView *v6; // ecx
  TESSaveLoadGame_SerializationView *v7; // ecx
  unsigned __int8 *v8; // ebp
  NiTArray_TESPathGridPoint *pointArray; // eax
  unsigned int i; // esi
  TESPathGridPoint *v11; // ecx
  UInt32 *currentlySavingFormHeader; // edi
  unsigned __int8 *v13; // esi
  TESForm *v14; // eax
  const char *v15; // eax
  unsigned __int8 *v16; // edi
  unsigned __int8 *v17; // esi
  int v18; // [esp-Ch] [ebp-2Ch]
  int v19; // [esp-8h] [ebp-28h]
  const char *v20; // [esp-4h] [ebp-24h]
  int v21; // [esp+Ch] [ebp-14h] BYREF
  unsigned __int8 *v22; // [esp+10h] [ebp-10h]
  unsigned __int8 *v23; // [esp+14h] [ebp-Ch]
  int Src; // [esp+18h] [ebp-8h] BYREF
  int source; // [esp+1Ch] [ebp-4h] BYREF

  v1 = Global_DebugSaveBuffer == 0; /*0x4e5b13*/
  v3 = g_TESSaveLoadGame; /*0x4e5b1f*/
  source = 0; /*0x4e5b25*/
  bufferCursor = v3->bufferCursor; /*0x4e5b2d*/
  v23 = 0; /*0x4e5b30*/
  v22 = bufferCursor; /*0x4e5b38*/
  if ( !v1 ) /*0x4e5b3c*/
    v22 = bufferCursor; /*0x4e5b3e*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x4e5b42*/
  {
    v5 = g_TESSaveLoadGame; /*0x4e5b4b*/
    Src = 0x4B4F4C42; /*0x4e5b58*/
    SaveLoad_SaveData(v5, &Src, 4u); /*0x4e5b60*/
    v6 = g_TESSaveLoadGame; /*0x4e5b65*/
    v23 = g_TESSaveLoadGame->bufferCursor; /*0x4e5b75*/
    SaveLoad_SaveData(v6, &source, 2u); /*0x4e5b79*/
  }
  v7 = g_TESSaveLoadGame; /*0x4e5b7e*/
  v21 = 0; /*0x4e5b8a*/
  v8 = v7->bufferCursor; /*0x4e5b92*/
  SaveLoad_SaveData(v7, &v21, 2u); /*0x4e5b96*/
  pointArray = this->pointArray; /*0x4e5b9b*/
  if ( pointArray ) /*0x4e5ba0*/
  {
    for ( i = 0; i < HIWORD(pointArray->capacity); ++i ) /*0x4e5ba4*/
    {
      v11 = pointArray->data[i]; /*0x4e5bb3*/
      if ( v11 ) /*0x4e5bb8*/
      {
        if ( PathGraphNode_IsLinkedPointsDisabled(v11) ) /*0x4e5bba*/
        {
          Src = (unsigned __int16)i; /*0x4e5bcc*/
          SaveLoad_SaveData(g_TESSaveLoadGame, &Src, 2u); /*0x4e5bd7*/
          ++v21; /*0x4e5bdc*/
        }
      }
      pointArray = this->pointArray; /*0x4e5be1*/
    }
  }
  *(_WORD *)v8 = v21; /*0x4e5bf4*/
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x4e5c06*/
    v13 = g_TESSaveLoadGame->bufferCursor; /*0x4e5c0e*/
    if ( currentlySavingFormHeader )
    {
      v14 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x4e5c16*/
      v15 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v14->vtbl->GetEditorName)( /*0x4e5c36*/
                            v14,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0xD5D,
                            "..\\TES Shared\\TESPathGrid.cpp");
      sub_40FEC0(
        "SaveGame(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v13 - v22,
        *currentlySavingFormHeader,
        v15,
        v18,
        v19,
        v20);
    }
    else
    {
      sub_40FEC0("SaveGame(): %-5i ending at line %i in file %s", v13 - v22, 0xD5D, "..\\TES Shared\\TESPathGrid.cpp");
    }
  }
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x4e5c72*/
  {
    v16 = v23; /*0x4e5c81*/
    v17 = g_TESSaveLoadGame->bufferCursor; /*0x4e5c85*/
    if ( v17 > v23 + 0xFFFF ) /*0x4e5c90*/
      PrintError( /*0x4e5ca1*/
        "Save Game Block in file %s on line %i is greater than maximum short size",
        "..\\TES Shared\\TESPathGrid.cpp",
        0xD5D);
    *(_WORD *)v16 = (_WORD)v17 - (_WORD)v16; /*0x4e5cab*/
  }
}
