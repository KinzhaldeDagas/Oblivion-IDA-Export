char __cdecl sub_4CC850(Data *a1, int a2)
{
  char result; // al
  Data::FormInfo *p_currentRecord; // edi
  UInt32 v5; // ebx
  UInt32 v6; // esi
  char v7; // [esp+8h] [ebp+4h]
  int v8; // [esp+Ch] [ebp+8h]

  if ( !a1 )
    return 0;
  p_currentRecord = &a1->currentRecord;
  if ( a1->currentRecord.chunkInfo.type != dword_B06048
    || !TESFile_NextRecordEx(a1, 1)
    || p_currentRecord->chunkInfo.type != dword_B05E20 )
  {
    return 0;
  }
  v5 = a1->currentRecord.chunkInfo.length - 0x14;
  result = TESFile_NextRecordEx(a1, 1);
  if ( result )
  {
    v8 = a2 & 0xFFFFFF;
    v7 = 0;
    v6 = 0;
    while ( v6 < v5 )
    {
      if ( p_currentRecord->chunkInfo.type == dword_B05E20 )
      {
        v6 += 0x14;
      }
      else
      {
        if ( (a1->currentRecord.formID & 0xFFFFFF) == v8 )
          return 1;
        v6 += p_currentRecord->chunkInfo.length + 0x14;
      }
      result = TESFile_NextRecordEx(a1, 1);
      if ( !result )
        return result;
    }
    return v7;
  }
  return result;
}
