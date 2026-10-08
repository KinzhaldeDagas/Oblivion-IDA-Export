char __thiscall sub_4D1340(TESForm *this, Data *file)
{
  Data::FormInfo *p_currentRecord; // ebx
  Data::FormInfo *v9; // esi
  UInt32 formID; // esi
  char Record; // al
  int v12; // esi
  Data::FormInfo *v13; // eax
  unsigned __int8 FormTypeFromChunkType; // al
  UInt32 v15; // esi
  TESForm *v16; // edi
  TESObjectREFR *v17; // eax
  bool v18; // al
  int v19; // eax
  int v20; // [esp+8h] [ebp-8h]
  char filea; // [esp+14h] [ebp+4h]

  if ( !file ) /*0x4d1351*/
    return 0; /*0x4d135a*/
  if ( !TESFile_GetIsMaster(file) ) /*0x4d135f*/
    return 1; /*0x4d136f*/
  p_currentRecord = &file->currentRecord; /*0x4d1373*/
  v9 = &file->currentRecord; /*0x4d137a*/
  if ( file->currentRecord.chunkInfo.type == dword_B06048 ) /*0x4d1384*/
  {
    if ( file->currentRecord.formID != this->member.refID ) /*0x4d138f*/
      return 0; /*0x4d138f*/
    TESFile_NextRecordEx(file, 1); /*0x4d1395*/
    if ( !sub_4CCD00((int *)&file->currentRecord) ) /*0x4d13a5*/
      return 1; /*0x4d13ed*/
    if ( p_currentRecord->chunkInfo.type != dword_B05E20 ) /*0x4d13af*/
      return 0; /*0x4d13af*/
    if ( file->currentRecord.formID != 6 ) /*0x4d13b5*/
      return 0; /*0x4d13b5*/
    TESFile_NextRecordEx(file, 1); /*0x4d13bb*/
    if ( v9->chunkInfo.type != dword_B05E20 ) /*0x4d13c8*/
      return 0; /*0x4d13c8*/
    if ( file->currentRecord.formID == 8 ) /*0x4d13ce*/
    {
      TESFile::NextGroup(file); /*0x4d13d2*/
      if ( !sub_4CCD00((int *)&file->currentRecord) ) /*0x4d13d8*/
        return 1; /*0x4d13e2*/
    }
  }
  if ( v9->chunkInfo.type != dword_B05E20 ) /*0x4d13f8*/
    return 0; /*0x4d13f8*/
  formID = file->currentRecord.formID; /*0x4d13fa*/
  if ( formID != 9 && formID != 0xA ) /*0x4d1405*/
    return 0; /*0x4d1410*/
  Record = TESFile_NextRecordEx(file, 1); /*0x4d1417*/
  v12 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x4d1429*/
  unk_B33A9C = this; /*0x4d142e*/
  v20 = v12; /*0x4d1434*/
  *(_BYTE *)(v12 + 0x184) = 1; /*0x4d1438*/
  v13 = Record != 0 ? p_currentRecord : 0;
  if ( v13 )
  {
    if ( v13->chunkInfo.type == dword_B05E20 && v13->formID == 9 )
      v13 = TESFile_NextRecordEx(file, 1) != 0 ? p_currentRecord : 0;
  }
  *(_BYTE *)(v12 + 0x186) = 1; /*0x4d1468*/
  filea = 1; /*0x4d146f*/
  if ( v13 ) /*0x4d1474*/
  {
    while ( 1 ) /*0x4d1487*/
    {
      FormTypeFromChunkType = TESForm_GetFormTypeFromChunkType(v13->chunkInfo.type); /*0x4d1487*/
      if ( FormTypeFromChunkType < 0x31u || FormTypeFromChunkType > 0x34u && FormTypeFromChunkType != 0x36 ) /*0x4d149d*/
        break; /*0x4d149d*/
      v15 = file->currentRecord.formID; /*0x4d14a3*/
      v16 = TESForm_LookupByFormID(v15); /*0x4d14bf*/
      v17 = (TESObjectREFR *)OblivionDynamicCast( /*0x4d14c4*/
                               v16,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                               0);
      v18 = sub_453970(g_TESSaveLoadGame, (TESObjectCELL *)this, v17, v15); /*0x4d14d8*/
      if ( !v16 && !v18 ) /*0x4d14e3*/
      {
        LOBYTE(v19) = TESDataHandler_LoadFormRecord(g_TESDataHandler, file, 0); /*0x4d14ee*/
        if ( !v19 ) /*0x4d14f5*/
          filea = 0; /*0x4d14f7*/
      }
      if ( !TESFile_NextRecordEx(file, 1) ) /*0x4d14ff*/
        goto LABEL_40; /*0x4d14ff*/
      v13 = &file->currentRecord; /*0x4d1508*/
      if ( file == (Data *)0xFFFFFDC4 ) /*0x4d150c*/
        goto LABEL_40; /*0x4d150c*/
      if ( p_currentRecord->chunkInfo.type == dword_B05E20 /*0x4d1524*/
        && p_currentRecord->formID == 9
        && p_currentRecord->flags == this->member.refID )
      {
        if ( !TESFile_NextRecordEx(file, 1) ) /*0x4d1531*/
          goto LABEL_40; /*0x4d1531*/
        v13 = &file->currentRecord; /*0x4d1533*/
      }
      if ( !v13 ) /*0x4d1537*/
      {
LABEL_40:
        v12 = v20; /*0x4d153d*/
        break; /*0x4d153d*/
      }
      v12 = v20; /*0x4d1480*/
    }
  }
  *(_BYTE *)(v12 + 0x186) = 0; /*0x4d1541*/
  *(_BYTE *)(v12 + 0x184) = 0; /*0x4d154c*/
  unk_B33A9C = 0; /*0x4d1556*/
  return filea; /*0x4d1353*/
}
