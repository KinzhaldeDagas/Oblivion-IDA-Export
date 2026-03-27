unsigned int *__userpurge sub_5C4480@<eax>(
        _DWORD *this@<ecx>,
        double st5_0@<st2>,
        double st6_0@<st1>,
        double st7_0@<st0>,
        TileWindow *a5,
        const char *ArgList,
        int ArgList_4,
        char *a8,
        int a9,
        char a10,
        char a11)
{
  int v12; // eax
  unsigned int *TileFromTemplate; // esi
  BSStringT v15; // [esp-4h] [ebp-34h] BYREF
  int a3; // [esp+18h] [ebp-18h]
  BSStringT a2; // [esp+1Ch] [ebp-14h] BYREF
  int v18; // [esp+2Ch] [ebp-4h]
  float v19; // [esp+34h] [ebp+4h]

  v12 = dword_B3B5D4;
  *(_DWORD *)&v15.m_dataLen = 0;
  ++v12;
  v15.m_data = "race_template_button";
  v18 = 1;
  dword_B3B5D4 = v12;
  a3 = v12;
  TileFromTemplate = Menu_CreateTileFromTemplate(this, st5_0, st6_0, st7_0, a5, v15.m_data, *(int *)&v15.m_dataLen);
  a2.m_data = 0;
  a2.m_dataLen = 0;
  a2.m_bufLen = 0;
  LOBYTE(v18) = 2;
  BSStringT_Static_Format(&a2, "%s", ArgList);
  v15.m_data = 0;
  *(_DWORD *)&v15.m_dataLen = 0;
  BSStringT_Set(&v15, a2.m_data, 0);
  sub_58A020((BSStringT *)TileFromTemplate, v15.m_data, *(int *)&v15.m_dataLen);
  *(float *)&v15.m_dataLen = (float)a3;
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFA8, *(float *)&v15.m_dataLen);
  v19 = Tile_GetFloat(a5, 0xFD0) - dbl_A2F928;
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAA, v19);
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAF, 0.0);
  if ( a10 )
    *(_DWORD *)&v15.m_dataLen = ArgList;
  else
    *(_DWORD *)&v15.m_dataLen = "   ";
  Tile_SetString(TileFromTemplate, (_DWORD *)0xFB0, *(char **)&v15.m_dataLen);
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB1, flt_A6D2D8);
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB1, 0.0);
  Tile_SetString(TileFromTemplate, (_DWORD *)0xFB4, a8);
  if ( a11 )
    Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFF0, fConstant_2);
  *(_DWORD *)&v15.m_dataLen = a2.m_data;
  *(this + a3 + 0x25) = TileFromTemplate;
  FormHeapFree(*(unsigned int *)&v15.m_dataLen);
  FormHeapFree((unsigned int)ArgList);
  FormHeapFree((unsigned int)a8);
  return TileFromTemplate;
}
