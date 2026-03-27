void __cdecl TESFullname_Load(TESFullName *a1, Data *a2)
{
  char v2[12]; // [esp+0h] [ebp-10h] BYREF

  if ( a2 )
  {
    if ( a1 )
    {
      if ( TESFile_GetChunkType(a2) == 0x4C4C5546 )
      {
        if ( a2->currentChunk.length )
        {
          _alloca_();
          TESFile_GetChunkData(a2, v2, 0);
          BSStringT_Set(&a1->name, v2, 0);
        }
        else
        {
          FormHeapFree((unsigned int)a1->name.m_data);
          a1->name.m_data = 0;
          a1->name.m_bufLen = 0;
          a1->name.m_dataLen = 0;
        }
      }
    }
  }
}
