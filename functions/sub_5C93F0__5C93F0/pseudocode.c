unsigned int *__userpurge sub_5C93F0@<eax>(
        _DWORD *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        TileWindow *a5,
        char *ArgList,
        int a7,
        int a8,
        int a9,
        char a10)
{
  _DWORD *v11; // ebp
  unsigned int *TileFromTemplate; // esi
  BSStringT v14; // [esp-4h] [ebp-3Ch] BYREF
  int a3; // [esp+18h] [ebp-20h]
  _DWORD *v16; // [esp+1Ch] [ebp-1Ch]
  _DWORD *v17; // [esp+20h] [ebp-18h]
  BSStringT a2; // [esp+24h] [ebp-14h] BYREF
  _DWORD *v19; // [esp+34h] [ebp-4h]
  float v20; // [esp+3Ch] [ebp+4h]
  float v21; // [esp+3Ch] [ebp+4h]

  a3 = dword_B3B5D4 + 1;
  *(_DWORD *)&v14.m_dataLen = 0;
  v11 = (_DWORD *)(a3 + 1);
  dword_B3B5D4 = a3 + 1;
  v19 = (_DWORD *)1;
  v16 = v11;
  TileFromTemplate = Menu_CreateTileFromTemplate(
                       this,
                       st5_0,
                       st6_0,
                       st7_0,
                       a5,
                       "race_template_slider",
                       *(int *)&v14.m_dataLen);
  a2.m_data = 0;
  *(_DWORD *)&a2.m_dataLen = 0;
  BSStringT_Static_Format(&a2, "%s", ArgList);
  v17 = &v14;
  v14.m_data = 0;
  *(_DWORD *)&v14.m_dataLen = 0;
  BSStringT_Set(&v14, a2.m_data, 0);
  sub_58A020((BSStringT *)TileFromTemplate, v14.m_data, *(int *)&v14.m_dataLen);
  *(float *)&v14.m_dataLen = (float)a3;
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFA8, *(float *)&v14.m_dataLen);
  v20 = Tile_GetFloat(a5, 0xFD0) - dbl_A2F928;
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAA, v20);
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAF, 0.0);
  Tile_SetString(TileFromTemplate, (_DWORD *)0xFB0, ArgList);
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB1, flt_A6D2D8);
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB1, 0.0);
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB1, 0.0);
  *(float *)&v14.m_dataLen = (float)(int)v16;
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB4, *(float *)&v14.m_dataLen);
  *(float *)&v14.m_dataLen = (float)(a8 + 1);
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB5, *(float *)&v14.m_dataLen);
  *(float *)&v14.m_dataLen = (float)a9;
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB6, *(float *)&v14.m_dataLen);
  *(this + a3 + 0x25) = TileFromTemplate;
  *(this + (_DWORD)v11 + 0x25) = TileFromTemplate;
  if ( a8 != 0xFFFFFFFF )
  {
    v21 = sub_5C6860(this, (int)v11);
    Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB1, flt_A6D2D8);
    Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB1, v21);
    Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB1, 0.0);
    Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB8, v21);
    Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFC2, 1.0);
  }
  if ( a10 )
    Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFF0, fConstant_2);
  FormHeapFree((unsigned int)a2.m_data);
  FormHeapFree((unsigned int)ArgList);
  return TileFromTemplate;
}
