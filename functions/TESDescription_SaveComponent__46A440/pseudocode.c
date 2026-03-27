void __cdecl TESDescription_SaveComponent(int a1, int a2)
{
  char *m_data; // eax
  unsigned __int16 m_dataLen; // di
  unsigned int v4; // edx
  unsigned int v5; // eax
  int v6; // eax
  unsigned int v7; // [esp-Ch] [ebp-Ch]

  if ( a1 )
  {
    m_data = TESDescription_CachedDesc.m_data;
    m_dataLen = TESDescription_CachedDesc.m_dataLen;
    if ( TESDescription_CachedDesc.m_dataLen == (__int16)0xFFFF )
      v4 = strlen(m_data);
    else
      v4 = m_dataLen;
    if ( v4 )
    {
      if ( m_dataLen == 0xFFFF )
        v5 = strlen(m_data);
      else
        v5 = m_dataLen;
      v7 = v5 + 1;
      v6 = (*(int (__stdcall **)(_DWORD, int))(*(_DWORD *)a1 + 0x10))(0, 0x43534544);
      j_TESForm_PutCurrentChunkData(a2, v6, v7);
    }
    else
    {
      LOBYTE(a1) = 0;
      j_TESForm_PutCurrentChunkData(a2, &a1, 1);
    }
  }
}
