unsigned int *__userpurge sub_5C4340@<eax>(
        _DWORD *this@<ecx>,
        double st5_0@<st2>,
        double a3@<st1>,
        double st7_0@<st0>,
        TileWindow *a5,
        const char *ArgList,
        int a7,
        int a8,
        int a9)
{
  unsigned int *TileFromTemplate; // esi
  int v11; // eax
  char *m_data; // edi
  BSStringT v14; // [esp-4h] [ebp-38h] BYREF
  int v15; // [esp+18h] [ebp-1Ch]
  BSStringT *v16; // [esp+1Ch] [ebp-18h]
  BSStringT a2; // [esp+20h] [ebp-14h] BYREF
  int v18; // [esp+30h] [ebp-4h]
  float v19; // [esp+38h] [ebp+4h]
  int v20; // [esp+44h] [ebp+10h]

  v18 = 0;
  TileFromTemplate = Menu_CreateTileFromTemplate(this, st5_0, a3, st7_0, a5, "race_template_pane", 0);
  v11 = a8;
  if ( a8 == 0xFFFFFFFF )
  {
    v11 = dword_B3B5D4 + 1;
    dword_B3B5D4 = v11;
  }
  v20 = v11;
  v15 = v11;
  a2.m_data = 0;
  a2.m_dataLen = 0;
  a2.m_bufLen = 0;
  LOBYTE(v18) = 1;
  BSStringT_Static_Format(&a2, "%s", ArgList);
  v16 = &v14;
  v14.m_data = 0;
  *(_DWORD *)&v14.m_dataLen = 0;
  m_data = a2.m_data;
  BSStringT_Set(&v14, a2.m_data, 0);
  sub_58A020((BSStringT *)TileFromTemplate, v14.m_data, *(int *)&v14.m_dataLen);
  *(float *)&v14.m_dataLen = (float)v20;
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFA8, *(float *)&v14.m_dataLen);
  v19 = Tile_GetFloat(a5, 0xFD0) - dbl_A2F928;
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAA, v19);
  *(float *)&v14.m_dataLen = (float)v15;
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAE, *(float *)&v14.m_dataLen);
  *(_DWORD *)&v14.m_dataLen = m_data;
  *(this + v20 + 0x25) = TileFromTemplate;
  FormHeapFree(*(unsigned int *)&v14.m_dataLen);
  FormHeapFree((unsigned int)ArgList);
  return TileFromTemplate;
}
