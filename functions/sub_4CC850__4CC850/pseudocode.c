char __cdecl sub_4CC850(Data *a1, int a2)
{
  char result; // al
  Data::FormInfo *p_currentRecord; // edi
  UInt32 v5; // ebx
  UInt32 v6; // esi
  char v7; // [esp+8h] [ebp+4h]
  int v8; // [esp+Ch] [ebp+8h]

  if ( !a1 ) /*0x4cc857*/
    return 0; /*0x4cc859*/
  p_currentRecord = &a1->currentRecord; /*0x4cc86a*/
  if ( a1->currentRecord.chunkInfo.type != dword_B06048 /*0x4cc887*/
    || !TESFile_NextRecordEx(a1, 1)
    || p_currentRecord->chunkInfo.type != dword_B05E20 )
  {
    return 0; /*0x4cc88a*/
  }
  v5 = a1->currentRecord.chunkInfo.length - 0x14; /*0x4cc896*/
  result = TESFile_NextRecordEx(a1, 1); /*0x4cc899*/
  if ( result ) /*0x4cc8a0*/
  {
    v8 = a2 & 0xFFFFFF; /*0x4cc8a6*/
    v7 = 0; /*0x4cc8af*/
    v6 = 0; /*0x4cc8b4*/
    while ( v6 < v5 ) /*0x4cc8ba*/
    {
      if ( p_currentRecord->chunkInfo.type == dword_B05E20 ) /*0x4cc8c4*/
      {
        v6 += 0x14; /*0x4cc8e1*/
      }
      else
      {
        if ( (a1->currentRecord.formID & 0xFFFFFF) == v8 ) /*0x4cc8d6*/
          return 1; /*0x4cc8f6*/
        v6 += p_currentRecord->chunkInfo.length + 0x14; /*0x4cc8db*/
      }
      result = TESFile_NextRecordEx(a1, 1); /*0x4cc8e8*/
      if ( !result ) /*0x4cc8ef*/
        return result; /*0x4cc8ef*/
    }
    return v7; /*0x4cc8fb*/
  }
  return result; /*0x4cc85b*/
}
