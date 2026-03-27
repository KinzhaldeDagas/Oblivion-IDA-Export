unsigned int *__userpurge sub_5C4800@<eax>(
        _DWORD *this@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double st7_0@<st0>,
        TileWindow *a5,
        const char *ArgList,
        int a7)
{
  int v8; // eax
  int v9; // ebp
  unsigned int *TileFromTemplate; // esi
  char *m_data; // ebx
  BSStringT v13[3]; // [esp-4h] [ebp-38h] BYREF
  int v14; // [esp+18h] [ebp-1Ch]
  BSStringT *v15; // [esp+1Ch] [ebp-18h]
  BSStringT a2; // [esp+20h] [ebp-14h] BYREF
  int v17; // [esp+30h] [ebp-4h]
  float v18; // [esp+38h] [ebp+4h]

  v8 = dword_B3B5D4 + 1;
  *(_DWORD *)&v13[0].m_dataLen = 0;
  v9 = v8;
  dword_B3B5D4 = v8;
  v17 = 1;
  v14 = v8;
  TileFromTemplate = Menu_CreateTileFromTemplate(
                       this,
                       st5_0,
                       a3,
                       st7_0,
                       a5,
                       "race_template_text",
                       *(int *)&v13[0].m_dataLen);
  a2.m_data = 0;
  a2.m_dataLen = 0;
  a2.m_bufLen = 0;
  BSStringT_Static_Format(&a2, "%s", ArgList);
  v15 = v13;
  v13[0].m_data = 0;
  *(_DWORD *)&v13[0].m_dataLen = 0;
  m_data = a2.m_data;
  BSStringT_Set(v13, a2.m_data, 0);
  sub_58A020((BSStringT *)TileFromTemplate, v13[0].m_data, *(int *)&v13[0].m_dataLen);
  *(float *)&v13[0].m_dataLen = (float)v14;
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFA8, *(float *)&v13[0].m_dataLen);
  v18 = Tile_GetFloat(a5, 0xFD0) - dbl_A2F928;
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAA, v18);
  *(_DWORD *)&v13[0].m_dataLen = m_data;
  *(this + v9 + 0x25) = TileFromTemplate;
  FormHeapFree(*(unsigned int *)&v13[0].m_dataLen);
  FormHeapFree((unsigned int)ArgList);
  return TileFromTemplate;
}
