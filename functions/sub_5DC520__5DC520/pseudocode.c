char __userpurge sub_5DC520@<al>(int a1@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>, int ArgList, float a6)
{
  _DWORD *v8; // ecx
  char *m_data; // edi
  BSStringT v11; // [esp+14h] [ebp-14h] BYREF
  int v12; // [esp+24h] [ebp-4h]

  if ( InterfaceManager_MenuModeHasFocus(0x3EB) )
  {
    v11.m_data = 0;
    v11.m_dataLen = 0;
    v11.m_bufLen = 0;
    v12 = 0;
    BSStringT_Static_Format(&v11, "Button: %i   - %0.2f", ArgList, a6);
    v8 = *(_DWORD **)(a1 + 4);
    m_data = v11.m_data;
    Tile_SetString(v8, (_DWORD *)0xFBD, v11.m_data);
    if ( ArgList == 0xD )
    {
      if ( a6 >= 1.0 )
      {
        sub_5A5FD0(a3, a4, a2, 1.0);
        FormHeapFree((unsigned int)m_data);
        return 1;
      }
    }
    else if ( ArgList == 0xE && a6 >= 1.0 )
    {
      sub_5A5EF0(a4, a3, a2, 1.0);
      FormHeapFree((unsigned int)m_data);
      return 1;
    }
    FormHeapFree((unsigned int)m_data);
  }
  return 0;
}
