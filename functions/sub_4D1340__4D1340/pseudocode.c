char __userpurge sub_4D1340@<al>(TESForm *this@<ecx>, double a2@<st2>, double a3@<st1>, double a4@<st0>, Data *a5)
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
  int v19; // [esp+8h] [ebp-8h]
  char v21; // [esp+14h] [ebp+4h]

  if ( !a5 )
    return 0;
  if ( !TESFile_GetIsMaster(a5) )
    return 1;
  p_currentRecord = &a5->currentRecord;
  v9 = &a5->currentRecord;
  if ( a5->currentRecord.chunkInfo.type == dword_B06048 )
  {
    if ( a5->currentRecord.formID != this->member.refID )
      return 0;
    TESFile_NextRecordEx(a5, 1);
    if ( !sub_4CCD00((int *)&a5->currentRecord) )
      return 1;
    if ( p_currentRecord->chunkInfo.type != dword_B05E20 )
      return 0;
    if ( a5->currentRecord.formID != 6 )
      return 0;
    TESFile_NextRecordEx(a5, 1);
    if ( v9->chunkInfo.type != dword_B05E20 )
      return 0;
    if ( a5->currentRecord.formID == 8 )
    {
      TESFile::NextGroup(a5);
      if ( !sub_4CCD00((int *)&a5->currentRecord) )
        return 1;
    }
  }
  if ( v9->chunkInfo.type != dword_B05E20 )
    return 0;
  formID = a5->currentRecord.formID;
  if ( formID != 9 && formID != 0xA )
    return 0;
  Record = TESFile_NextRecordEx(a5, 1);
  v12 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  dword_B33A9C = this;
  v19 = v12;
  *(_BYTE *)(v12 + 0x184) = 1;
  v13 = Record != 0 ? p_currentRecord : 0;
  if ( v13 )
  {
    if ( v13->chunkInfo.type == dword_B05E20 && v13->formID == 9 )
      v13 = TESFile_NextRecordEx(a5, 1) != 0 ? p_currentRecord : 0;
  }
  *(_BYTE *)(v12 + 0x186) = 1;
  v21 = 1;
  if ( v13 )
  {
    while ( 1 )
    {
      FormTypeFromChunkType = TESForm_GetFormTypeFromChunkType(v13->chunkInfo.type);
      if ( FormTypeFromChunkType < 0x31u || FormTypeFromChunkType > 0x34u && FormTypeFromChunkType != 0x36 )
        break;
      v15 = a5->currentRecord.formID;
      v16 = TESForm_LookupByFormID(v15);
      v17 = (TESObjectREFR *)OblivionDynamicCast(
                               v16,
                               0,
                               (struct _s_RTTICompleteObjectLocator *)&TESForm `RTTI Type Descriptor',
                               (struct TypeDescriptor *)&TESObjectREFR `RTTI Type Descriptor',
                               0);
      v18 = sub_453970(SaveLoad_CurrentSavegame, (TESObjectCELL *)this, v17, v15);
      if ( !v16 && !v18 && !TESDataHandler_LoadFormRecord((TESWorldSpace **)TESDataHandler, a2, a3, a4, a5, 0) )
        v21 = 0;
      if ( !TESFile_NextRecordEx(a5, 1) )
        goto LABEL_40;
      v13 = &a5->currentRecord;
      if ( a5 == (Data *)0xFFFFFDC4 )
        goto LABEL_40;
      if ( p_currentRecord->chunkInfo.type == dword_B05E20
        && p_currentRecord->formID == 9
        && p_currentRecord->flags == this->member.refID )
      {
        if ( !TESFile_NextRecordEx(a5, 1) )
          goto LABEL_40;
        v13 = &a5->currentRecord;
      }
      if ( !v13 )
      {
LABEL_40:
        v12 = v19;
        break;
      }
      v12 = v19;
    }
  }
  *(_BYTE *)(v12 + 0x186) = 0;
  *(_BYTE *)(v12 + 0x184) = 0;
  dword_B33A9C = 0;
  return v21;
}
