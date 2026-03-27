unsigned int *__userpurge sub_5C4630@<eax>(
        _DWORD *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        TileWindow *a5,
        char *ArgList,
        int a7,
        char a8)
{
  int v9; // eax
  unsigned int *TileFromTemplate; // esi
  BSStringT v12[3]; // [esp-4h] [ebp-38h] BYREF
  int a3; // [esp+18h] [ebp-1Ch]
  _DWORD *v14; // [esp+1Ch] [ebp-18h]
  BSStringT a2; // [esp+20h] [ebp-14h] BYREF
  int v16; // [esp+30h] [ebp-4h]
  float v17; // [esp+38h] [ebp+4h]

  v9 = dword_B3B5D4 + 1;
  *(_DWORD *)&v12[0].m_dataLen = 0;
  dword_B3B5D4 = v9;
  a3 = v9;
  v16 = 1;
  TileFromTemplate = Menu_CreateTileFromTemplate(
                       this,
                       st5_0,
                       st6_0,
                       st7_0,
                       a5,
                       "race_template_toggle",
                       *(int *)&v12[0].m_dataLen);
  a2.m_data = 0;
  *(_DWORD *)&a2.m_dataLen = 0;
  BSStringT_Static_Format(&a2, "%s", ArgList);
  v14 = (_DWORD *)v12;
  v12[0].m_data = 0;
  *(_DWORD *)&v12[0].m_dataLen = 0;
  BSStringT_Set(v12, a2.m_data, 0);
  sub_58A020((BSStringT *)TileFromTemplate, v12[0].m_data, *(int *)&v12[0].m_dataLen);
  *(float *)&v12[0].m_dataLen = (float)a3;
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFA8, *(float *)&v12[0].m_dataLen);
  v17 = Tile_GetFloat(a5, 0xFD0) - dbl_A2F928;
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAA, v17);
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAF, 0.0);
  Tile_SetString(TileFromTemplate, (_DWORD *)0xFB0, ArgList);
  *(float *)&v12[0].m_dataLen = -Tile_GetFloat(TileFromTemplate, 0xFAE);
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB1, *(float *)&v12[0].m_dataLen);
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB1, 0.0);
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB1, 0.0);
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB2, 0.0);
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB3, 0.0);
  Tile_SetString(TileFromTemplate, (_DWORD *)0xFB4, "          ");
  if ( a8 )
    Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFF0, fConstant_2);
  *(_DWORD *)&v12[0].m_dataLen = a2.m_data;
  *(this + a3 + 0x25) = TileFromTemplate;
  FormHeapFree(*(unsigned int *)&v12[0].m_dataLen);
  FormHeapFree((unsigned int)ArgList);
  return TileFromTemplate;
}
