// Verified modified-form size: 2-byte disabled-point count, plus 2 bytes for each non-null point with linkedPointsDisabled set; adds 6 bytes when save-game block framing is enabled.
unsigned __int16 __thiscall TESPathGrid_GetModifiedSize(TESPathGrid *this)
{
  __int16 v2; // di
  NiTArray_TESPathGridPoint *pointArray; // eax
  unsigned __int16 v4; // di
  unsigned int i; // esi
  TESPathGridPoint *v6; // ecx
  UInt32 *currentlySavingFormHeader; // esi
  TESForm *v8; // eax
  const char *v9; // eax
  int v11; // [esp-Ch] [ebp-18h]
  int v12; // [esp-8h] [ebp-14h]
  const char *v13; // [esp-4h] [ebp-10h]

  v2 = 0; /*0x4e5a4b*/
  if ( TESSaveLoadGame_UseSaveGameBlocks() ) /*0x4e5a4d*/
    v2 = 6; /*0x4e5a56*/
  pointArray = this->pointArray; /*0x4e5a5b*/
  v4 = v2 + 2; /*0x4e5a5e*/
  if ( pointArray ) /*0x4e5a63*/
  {
    for ( i = 0; i < HIWORD(pointArray->capacity); ++i ) /*0x4e5a67*/
    {
      v6 = pointArray->data[i]; /*0x4e5a73*/
      if ( v6 ) /*0x4e5a78*/
      {
        if ( PathGraphNode_IsLinkedPointsDisabled(v6) ) /*0x4e5a7a*/
          v4 += 2; /*0x4e5a83*/
      }
      pointArray = this->pointArray; /*0x4e5a86*/
    }
  }
  if ( Global_DebugSaveBuffer )
  {
    currentlySavingFormHeader = (UInt32 *)g_TESSaveLoadGame->currentlySavingFormHeader; /*0x4e5aa3*/
    if ( currentlySavingFormHeader )
    {
      v8 = TESForm_LookupByFormID(*currentlySavingFormHeader); /*0x4e5ab0*/
      v9 = (const char *)((int (__thiscall *)(TESForm *, _DWORD, int, const char *))v8->vtbl->GetEditorName)( /*0x4e5ad0*/
                           v8,
                           *(UInt32 *)((char *)currentlySavingFormHeader + 5),
                           0xD3E,
                           "..\\TES Shared\\TESPathGrid.cpp");
      sub_40FEC0(
        "GetSaveSize(): %-5i for form %08X %s with flags %08X ending at line %i in file %s",
        v4,
        *currentlySavingFormHeader,
        v9,
        v11,
        v12,
        v13);
      return v4; /*0x4e5aed*/
    }
    sub_40FEC0("GetSaveSize(): %-5i ending at line %i in file %s", v4, 0xD3E, "..\\TES Shared\\TESPathGrid.cpp");
  }
  return v4; /*0x4e5aea*/
}
