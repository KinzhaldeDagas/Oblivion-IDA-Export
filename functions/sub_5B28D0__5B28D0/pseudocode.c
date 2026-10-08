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
  _DWORD *v12; // ecx
  char *m_data; // edi
  BSStringT v15; // [esp+14h] [ebp-14h] BYREF
  int v16; // [esp+24h] [ebp-4h]

  if ( InterfaceManager_MenuModeHasFocus(0x3FE) )
  {
    v15.m_data = 0; /*0x5b290e*/
    v15.m_dataLen = 0; /*0x5b2912*/
    v15.m_bufLen = 0; /*0x5b2917*/
    v16 = 0; /*0x5b292b*/
    BSStringT_Static_Format(&v15, "Button: %i   - %0.2f", ArgList, a11);
    v12 = *(_DWORD **)(a1 + 4); /*0x5b293e*/
    m_data = v15.m_data; /*0x5b2941*/
    Tile_SetString(v12, (_DWORD *)0xFBD, v15.m_data); /*0x5b294e*/
    switch ( ArgList ) /*0x5b2956*/
    {
      case 0xD: /*0x5b2956*/
        if ( a11 >= 1.0 ) /*0x5b2963*/
        {
          sub_5A5EF0(a9, a8, a2, 1.0); /*0x5b2969*/
          FormHeapFree((unsigned int)m_data); /*0x5b296f*/
          return 1; /*0x5b298a*/
        }
        break;
      case 0xE: /*0x5b2956*/
        if ( a11 >= 1.0 ) /*0x5b299d*/
        {
          sub_5A5FD0(a8, a9, a2, 1.0); /*0x5b299f*/
          FormHeapFree((unsigned int)m_data); /*0x5b29a5*/
          return 1; /*0x5b29c0*/
        }
        break;
      case 0xC: /*0x5b2956*/
        Input_ProcessQuickSlotHotkeys(a2, a3, a4, a5, a6, a7, a8, a9, a11); /*0x5b29c8*/
        FormHeapFree((unsigned int)m_data); /*0x5b29ce*/
        return 1; /*0x5b29e9*/
    }
    FormHeapFree((unsigned int)m_data); /*0x5b29ed*/
  }
  return 0; /*0x5b2979*/
}
