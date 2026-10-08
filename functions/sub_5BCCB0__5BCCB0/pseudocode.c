void __thiscall sub_5BCCB0(_DWORD **this)
{
  CHAR *v2; // eax
  char *m_data; // edi
  char v4; // bl
  unsigned int i; // esi
  unsigned int m_dataLen; // eax
  char v7; // al
  unsigned int unk07C_high; // [esp+20h] [ebp-18h]
  BSStringT v9; // [esp+24h] [ebp-14h] BYREF

  unk07C_high = HIWORD(InterfaceManager_GetSingleton(0, 1)->unk07C); /*0x5bccf3*/
  v2 = sub_588C10(*(this + 0xB), 0xFDE); /*0x5bccf7*/
  v9.m_data = 0; /*0x5bcd03*/
  v9.m_dataLen = 0; /*0x5bcd0b*/
  v9.m_bufLen = 0; /*0x5bcd12*/
  BSStringT_Set(&v9, v2, 0); /*0x5bcd19*/
  m_data = v9.m_data; /*0x5bcd1e*/
  v4 = 0; /*0x5bcd22*/
  for ( i = 0; i <= unk07C_high; ++i )
  {
    if ( v9.m_dataLen == (__int16)0xFFFF ) /*0x5bcd39*/
      m_dataLen = strlen(m_data); /*0x5bcd3d*/
    else
      m_dataLen = (unsigned __int16)v9.m_dataLen; /*0x5bcd4d*/
    if ( i >= m_dataLen ) /*0x5bcd52*/
      break; /*0x5bcd52*/
    v7 = m_data[m_data != 0 ? i : 0];
    if ( v7 == 2 ) /*0x5bcd61*/
    {
      v4 = 1; /*0x5bcd65*/
      FormHeapFree(0); /*0x5bcd67*/
    }
    else if ( v7 == 3 ) /*0x5bcd73*/
    {
      v4 = 0; /*0x5bcd77*/
      FormHeapFree(0); /*0x5bcd79*/
    }
    else if ( v4 ) /*0x5bcd85*/
    {
      *(_BYTE *)0 = v7; /*0x5bcd87*/
      *(_BYTE *)0 = 0; /*0x5bcd8c*/
    }
  }
  FormHeapFree(0); /*0x5bcd9e*/
  FormHeapFree(0); /*0x5bcda5*/
  FormHeapFree((unsigned int)m_data); /*0x5bcdab*/
}
