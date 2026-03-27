char __cdecl sub_4D1990(Data *a1)
{
  char v2; // bl
  unsigned __int8 RecordType; // al
  unsigned __int8 v4; // al

  if ( !a1 )
    return 0;
  if ( a1->currentRecord.chunkInfo.type != dword_B06048 )
    return 0;
  if ( !TESFile_NextRecordEx(a1, 1) )
    return 0;
  if ( !sub_4CCD00((int *)&a1->currentRecord) )
    return 0;
  if ( !TESFile_NextRecordEx(a1, 1) )
    return 0;
  if ( !sub_4CCD00((int *)&a1->currentRecord) )
    return 0;
  if ( a1->currentRecord.chunkInfo.type != dword_B05E20 )
    return 0;
  if ( a1->currentRecord.formID == 8 )
  {
    TESFile::NextGroup(a1);
    if ( !sub_4CCD00((int *)&a1->currentRecord) )
      return 0;
  }
  if ( a1->currentRecord.formID == 0xA )
  {
    TESFile::NextGroup(a1);
    if ( !sub_4CCD00((int *)&a1->currentRecord) )
      return 0;
  }
  if ( a1->currentRecord.formID != 9 )
    return 0;
  TESFile_NextRecordEx(a1, 1);
  v2 = 0;
  RecordType = TESFile_GetRecordType(a1);
  if ( sub_4CA010(RecordType) )
  {
    while ( TESFile_GetRecordType(a1) != 0x36 )
    {
      TESFile_NextRecordEx(a1, 1);
      v4 = TESFile_GetRecordType(a1);
      if ( !sub_4CA010(v4) )
        return 0;
    }
    return 1;
  }
  return v2;
}
