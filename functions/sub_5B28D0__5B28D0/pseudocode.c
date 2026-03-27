char __userpurge sub_5B28D0@<al>(
        int a1@<ecx>,
        char a2@<bpl>,
        double a3@<st7>,
        double a4@<st6>,
        double a5@<st5>,
        double a6@<st4>,
        double a7@<st3>,
        double a8@<st2>,
        double a9@<st1>,
        int ArgList,
        float a11)
{
  _DWORD *v13; // ecx
  char *m_data; // edi
  BSStringT v16; // [esp+14h] [ebp-14h] BYREF
  int v17; // [esp+24h] [ebp-4h]

  if ( InterfaceManager_MenuModeHasFocus(0x3FE) )
  {
    v16.m_data = 0;
    v16.m_dataLen = 0;
    v16.m_bufLen = 0;
    v17 = 0;
    BSStringT_Static_Format(&v16, "Button: %i   - %0.2f", ArgList, a11);
    v13 = *(_DWORD **)(a1 + 4);
    m_data = v16.m_data;
    Tile_SetString(v13, (_DWORD *)0xFBD, v16.m_data);
    switch ( ArgList )
    {
      case 0xD:
        if ( a11 >= 1.0 )
        {
          sub_5A5EF0(a9, a8, a2, 1.0);
          FormHeapFree((unsigned int)m_data);
          return 1;
        }
        break;
      case 0xE:
        if ( a11 >= 1.0 )
        {
          sub_5A5FD0(a8, a9, a2, 1.0);
          FormHeapFree((unsigned int)m_data);
          return 1;
        }
        break;
      case 0xC:
        sub_5C1F70(a2, a3, a4, a5, a6, a7, a8, a9, a11);
        FormHeapFree((unsigned int)m_data);
        return 1;
    }
    FormHeapFree((unsigned int)m_data);
  }
  return 0;
}
