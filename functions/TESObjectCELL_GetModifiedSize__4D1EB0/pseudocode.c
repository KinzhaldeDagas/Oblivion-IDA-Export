unsigned __int16 __thiscall TESObjectCELL_GetModifiedSize(ExtraDataList *this, int a2)
{
  unsigned __int16 v4; // si
  unsigned __int16 v5; // bp
  BSExtraDataVtbl *SeenData; // eax
  const char *v7; // eax
  UInt32 *currentlySavingFormHeader; // edi
  TESForm *v9; // eax
  const char *v10; // eax
  int v12; // [esp-Ch] [ebp-20h]
  int v13; // [esp-8h] [ebp-1Ch]
  const char *v14; // [esp-4h] [ebp-18h]
  __int16 v15; // [esp+10h] [ebp-4h]
  unsigned __int16 v16; // [esp+10h] [ebp-4h]
  __int16 v17; // [esp+10h] [ebp-4h]

  v15 = 0; /*0x4d1ec1*/
  if ( (a2 & 0x8000000) != 0 ) /*0x4d1ec9*/
    v15 = 4; /*0x4d1ecb*/
  v4 = TESForm_ModifiedFormSize(a2) + v15; /*0x4d1ee4*/
  v16 = v4; /*0x4d1ee7*/
  v5 = v4; /*0x4d1eec*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x4d1eef*/
  {
    v16 = v4 + 6; /*0x4d1ef8*/
    v4 += 6; /*0x4d1efd*/
  }
  if ( (a2 & 8) != 0 ) /*0x4d1f05*/
    v4 = ++v16; /*0x4d1f0c*/
  if ( (a2 & 0x10000000) != 0 ) /*0x4d1f17*/
  {
    SeenData = ExtraDataList_GetSeenData(this + 2); /*0x4d1f1c*/
    v4 += (*((int (__thiscall **)(BSExtraDataVtbl *, _DWORD))SeenData->Destructor + 2))(SeenData, 0); /*0x4d1f2c*/
    v16 = v4; /*0x4d1f2f*/
  }
  if ( (a2 & 0x10) != 0 ) /*0x4d1f37*/
  {
    v7 = *((const char **)this + 7); /*0x4d1f39*/
    v17 = v16 + 1; /*0x4d1f3c*/
    if ( !v7 ) /*0x4d1f43*/
      v7 = EmptyString; /*0x4d1f45*/
    v16 = strlen(v7) + v17; /*0x4d1f5b*/
    v4 = v16; /*0x4d1f5f*/
  }
  if ( (a2 & 0x20) != 0 ) /*0x4d1f67*/
    v4 = v16 + 4; /*0x4d1f6e*/
  if ( (a2 & 0x1000000) != 0 ) /*0x4d1f79*/
    v4 += TESPathGrid_GetModifiedSize(*((TESPathGrid **)this + 0x11)); /*0x4d1f83*/
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x4d1f95*/
    if ( currentlySavingFormHeader )
    {
      v9 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x4d1fa2*/
      v10 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v9->vtbl->GetEditorName)( /*0x4d1fc2*/
                            v9,
                            *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                            0x313A,
                            "..\\TES Shared\\TESObjectCELL.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v4 - v5,
        *currentlySavingFormHeader,
        v10,
        v12,
        v13,
        v14);
      return v4; /*0x4d1fe6*/
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v4 - v5, 0x313A, "..\\TES Shared\\TESObjectCELL.cpp");
  }
  return v4; /*0x4d1fde*/
}
