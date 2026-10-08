// FULL loader used by XMRK: empty payload frees/clears the string. Nonempty payload is copied with max=0 into the exact temporary and passed to BSStringT_Set/strlen; a missing terminal NUL can scan past the chunk allocation.
void __cdecl TESFullname_Load(TESFullName *a1, Data *a2)
{
  int v2[3]; // [esp+0h] [ebp-10h] BYREF

  if ( a2 ) /*0x46c7b8*/
  {
    if ( a1 ) /*0x46c7bf*/
    {
      if ( TESFile_GetChunkType(a2) == 0x4C4C5546 ) /*0x46c7cd*/
      {
        if ( a2->currentChunk.length ) /*0x46c7cf*/
        {
          _alloca_(v2[0]); /*0x46c7d9*/
          TESFile_GetChunkData(a2, (char *)v2, 0); /*0x46c7e5*/
          BSStringT_Set(&a1->name, (const char *)v2, 0); /*0x46c7f0*/
        }
        else
        {
          FormHeapFree((unsigned int)a1->name.m_data); /*0x46c80d*/
          a1->name.m_data = 0; /*0x46c815*/
          a1->name.m_bufLen = 0; /*0x46c818*/
          a1->name.m_dataLen = 0; /*0x46c81c*/
        }
      }
    }
  }
}
