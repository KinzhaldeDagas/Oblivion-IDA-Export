char __stdcall TESDescription_CompareTo(void *a1)
{
  void *v1; // eax
  char result; // al
  char *m_data; // edx
  unsigned __int16 m_dataLen; // bp
  unsigned int v5; // esi
  unsigned int v6; // esi
  unsigned int v7; // esi
  unsigned int v8; // edx
  const char *v9; // ecx
  int v10; // eax

  v1 = OblivionDynamicCast(
         a1,
         0,
         (struct _s_RTTICompleteObjectLocator *)&BaseFormComponent `RTTI Type Descriptor',
         &TESDescription `RTTI Type Descriptor',
         0);
  if ( !v1 )
    return 1;
  m_data = TESDescription_CachedDesc.m_data;
  m_dataLen = TESDescription_CachedDesc.m_dataLen;
  if ( TESDescription_CachedDesc.m_dataLen == (__int16)0xFFFF )
    v5 = strlen(m_data);
  else
    v5 = m_dataLen;
  result = 0;
  if ( v5 || (m_dataLen != 0xFFFF ? (v6 = m_dataLen) : (v6 = strlen(m_data)), v6) )
  {
    if ( m_dataLen == 0xFFFF )
    {
      v7 = strlen(m_data);
      v8 = strlen(m_data);
    }
    else
    {
      v7 = m_dataLen;
      v8 = m_dataLen;
    }
    if ( v7 != v8 )
      return 1;
    v9 = (const char *)(*(int (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)v1 + 0x10))(v1, 0, 0x43534544);
    if ( v9 && TESDescription_CachedDesc.m_data )
      v10 = strcmp(TESDescription_CachedDesc.m_data, v9);
    else
      v10 = 2 * (v9 == 0) - 1;
    if ( v10 )
      return 1;
  }
  return result;
}
