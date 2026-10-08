char __userpurge sub_5DC520@<al>(int a1@<ecx>, char a2@<bpl>, double a3@<st2>, double a4@<st1>, int ArgList, float a6)
{
  _DWORD *v7; // ecx
  char *m_data; // edi
  BSStringT v10; // [esp+14h] [ebp-14h] BYREF
  int v11; // [esp+24h] [ebp-4h]

  if ( InterfaceManager_MenuModeHasFocus(0x3EB) )
  {
    v10.m_data = 0; /*0x5dc55e*/
    v10.m_dataLen = 0; /*0x5dc562*/
    v10.m_bufLen = 0; /*0x5dc567*/
    v11 = 0; /*0x5dc57b*/
    BSStringT_Static_Format(&v10, "Button: %i   - %0.2f", ArgList, a6);
    v7 = *(_DWORD **)(a1 + 4); /*0x5dc58e*/
    m_data = v10.m_data; /*0x5dc591*/
    Tile_SetString(v7, (_DWORD *)0xFBD, v10.m_data); /*0x5dc59e*/
    if ( ArgList == 0xD ) /*0x5dc5a6*/
    {
      if ( a6 >= 1.0 ) /*0x5dc5b3*/
      {
        sub_5A5FD0(a3, a4, a2, 1.0); /*0x5dc5b5*/
        FormHeapFree((unsigned int)m_data); /*0x5dc5bb*/
        return 1; /*0x5dc5d6*/
      }
    }
    else if ( ArgList == 0xE && a6 >= 1.0 ) /*0x5dc5e9*/
    {
      sub_5A5EF0(a4, a3, a2, 1.0); /*0x5dc5eb*/
      FormHeapFree((unsigned int)m_data); /*0x5dc5f1*/
      return 1; /*0x5dc60c*/
    }
    FormHeapFree((unsigned int)m_data); /*0x5dc610*/
  }
  return 0; /*0x5dc5c5*/
}
