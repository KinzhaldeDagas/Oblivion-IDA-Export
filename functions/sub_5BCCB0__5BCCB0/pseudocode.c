void __thiscall sub_5BCCB0(int this)
{
  CHAR *v6; // eax
  char *m_data; // edi
  char v8; // bl
  unsigned int i; // esi
  unsigned int m_dataLen; // eax
  char v11; // al
  unsigned int unk07C_high; // [esp+20h] [ebp-18h]
  BSStringT v13; // [esp+24h] [ebp-14h] BYREF

  unk07C_high = HIWORD(InterfaceManager_GetSingleton(0, 1)->unk07C);
  v6 = sub_588C10(*(_DWORD **)(this + 0x2C), 0xFDE);
  v13.m_data = 0;
  v13.m_dataLen = 0;
  v13.m_bufLen = 0;
  BSStringT_Set(&v13, v6, 0);
  m_data = v13.m_data;
  v8 = 0;
  for ( i = 0; i <= unk07C_high; ++i )
  {
    if ( v13.m_dataLen == (__int16)0xFFFF )
      m_dataLen = strlen(m_data);
    else
      m_dataLen = (unsigned __int16)v13.m_dataLen;
    if ( i >= m_dataLen )
      break;
    v11 = m_data[m_data != 0 ? i : 0];
    if ( v11 == 2 )
    {
      v8 = 1;
      FormHeapFree(0);
    }
    else if ( v11 == 3 )
    {
      v8 = 0;
      FormHeapFree(0);
    }
    else if ( v8 )
    {
      *(_BYTE *)0 = v11;
      *(_BYTE *)0 = 0;
    }
  }
  FormHeapFree(0);
  FormHeapFree(0);
  FormHeapFree((unsigned int)m_data);
}
