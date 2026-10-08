char __cdecl sub_4D1990(Data *a1)
{
  char v2; // bl
  unsigned __int8 RecordType; // al
  unsigned __int8 v4; // al

  if ( !a1 ) /*0x4d1997*/
    return 0; /*0x4d1999*/
  if ( a1->currentRecord.chunkInfo.type != dword_B06048 ) /*0x4d19b0*/
    return 0; /*0x4d19b0*/
  if ( !TESFile_NextRecordEx(a1, 1) ) /*0x4d19b6*/
    return 0; /*0x4d19b6*/
  if ( !sub_4CCD00((int *)&a1->currentRecord) ) /*0x4d19c0*/
    return 0; /*0x4d19c0*/
  if ( !TESFile_NextRecordEx(a1, 1) ) /*0x4d19d0*/
    return 0; /*0x4d19d0*/
  if ( !sub_4CCD00((int *)&a1->currentRecord) ) /*0x4d19da*/
    return 0; /*0x4d19da*/
  if ( a1->currentRecord.chunkInfo.type != dword_B05E20 ) /*0x4d19ee*/
    return 0; /*0x4d19ee*/
  if ( a1->currentRecord.formID == 8 ) /*0x4d19f4*/
  {
    TESFile::NextGroup(a1); /*0x4d19f8*/
    if ( !sub_4CCD00((int *)&a1->currentRecord) ) /*0x4d19fe*/
      return 0; /*0x4d19fe*/
  }
  if ( a1->currentRecord.formID == 0xA ) /*0x4d1a0e*/
  {
    TESFile::NextGroup(a1); /*0x4d1a12*/
    if ( !sub_4CCD00((int *)&a1->currentRecord) ) /*0x4d1a18*/
      return 0; /*0x4d1a18*/
  }
  if ( a1->currentRecord.formID != 9 ) /*0x4d1a28*/
    return 0; /*0x4d1a2b*/
  TESFile_NextRecordEx(a1, 1); /*0x4d1a34*/
  v2 = 0; /*0x4d1a3b*/
  RecordType = TESFile_GetRecordType(a1); /*0x4d1a3d*/
  if ( sub_4CA010(RecordType) ) /*0x4d1a43*/
  {
    while ( TESFile_GetRecordType(a1) != 0x36 ) /*0x4d1a5a*/
    {
      TESFile_NextRecordEx(a1, 1); /*0x4d1a60*/
      v4 = TESFile_GetRecordType(a1); /*0x4d1a67*/
      if ( !sub_4CA010(v4) ) /*0x4d1a6d*/
        return 0; /*0x4d1a7e*/
    }
    return 1; /*0x4d1a7f*/
  }
  return v2; /*0x4d199b*/
}
