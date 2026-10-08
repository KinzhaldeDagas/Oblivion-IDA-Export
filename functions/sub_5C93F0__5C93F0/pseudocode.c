BSStringT *__userpurge sub_5C93F0@<eax>(
        _DWORD *this@<ecx>,
        double st7_0@<st0>,
        TileWindow *arg0,
        char *ArgList,
        int a5,
        int a6,
        int a7,
        char a8)
{
  _DWORD *v11; // ebp
  BSStringT *TileFromTemplate; // esi
  BSStringT v14; // [esp-4h] [ebp-3Ch] BYREF
  int a3; // [esp+18h] [ebp-20h]
  _DWORD *v16; // [esp+1Ch] [ebp-1Ch]
  _DWORD *v17; // [esp+20h] [ebp-18h]
  BSStringT a2; // [esp+24h] [ebp-14h] BYREF
  _DWORD *v19; // [esp+34h] [ebp-4h]
  float v20; // [esp+3Ch] [ebp+4h]
  float v21; // [esp+3Ch] [ebp+4h]

  a3 = unk_B3B5D4 + 1; /*0x5c9421*/
  *(_DWORD *)&v14.m_dataLen = 0; /*0x5c942a*/
  v11 = (_DWORD *)(a3 + 1); /*0x5c942b*/
  unk_B3B5D4 = a3 + 1; /*0x5c942d*/
  v19 = (_DWORD *)1; /*0x5c943c*/
  v16 = v11; /*0x5c9440*/
  TileFromTemplate = Menu::RenderTemplate(this, st7_0, arg0, "race_template_slider", *(int *)&v14.m_dataLen); /*0x5c9449*/
  a2.m_data = 0; /*0x5c944b*/
  *(_DWORD *)&a2.m_dataLen = 0; /*0x5c944f*/
  BSStringT_Static_Format(&a2, "%s", ArgList); /*0x5c946d*/
  v17 = &v14; /*0x5c947b*/
  v14.m_data = 0; /*0x5c9481*/
  *(_DWORD *)&v14.m_dataLen = 0; /*0x5c9483*/
  BSStringT_Set(&v14, a2.m_data, 0); /*0x5c948b*/
  sub_58A020(TileFromTemplate, v14.m_data, *(int *)&v14.m_dataLen); /*0x5c9492*/
  *(float *)&v14.m_dataLen = (float)a3; /*0x5c949e*/
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFA8, *(float *)&v14.m_dataLen); /*0x5c94a6*/
  v20 = Tile_GetFloat(arg0, 0xFD0) - dbl_A2F928; /*0x5c94c2*/
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAA, v20); /*0x5c94d2*/
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAF, 0.0); /*0x5c94e4*/
  Tile_SetString(TileFromTemplate, (_DWORD *)0xFB0, ArgList); /*0x5c94f5*/
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB1, flt_A6D2D8); /*0x5c950b*/
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB1, 0.0); /*0x5c951d*/
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB1, 0.0); /*0x5c952f*/
  *(float *)&v14.m_dataLen = (float)(int)v16; /*0x5c953b*/
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB4, *(float *)&v14.m_dataLen); /*0x5c9543*/
  *(float *)&v14.m_dataLen = (float)(a6 + 1); /*0x5c955a*/
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB5, *(float *)&v14.m_dataLen); /*0x5c9562*/
  *(float *)&v14.m_dataLen = (float)a7; /*0x5c956e*/
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB6, *(float *)&v14.m_dataLen); /*0x5c9576*/
  *(this + a3 + 0x25) = TileFromTemplate; /*0x5c9584*/
  *(this + (_DWORD)v11 + 0x25) = TileFromTemplate; /*0x5c958b*/
  if ( a6 != 0xFFFFFFFF ) /*0x5c9592*/
  {
    v21 = sub_5C6860(this, (int)v11); /*0x5c959c*/
    Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB1, flt_A6D2D8); /*0x5c95b1*/
    Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB1, v21); /*0x5c95c5*/
    Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB1, 0.0); /*0x5c95d7*/
    Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB8, v21); /*0x5c95eb*/
    Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFC2, 1.0); /*0x5c95fd*/
  }
  if ( a8 ) /*0x5c9606*/
    Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFF0, fConstant_2); /*0x5c9619*/
  FormHeapFree((unsigned int)a2.m_data); /*0x5c9623*/
  FormHeapFree((unsigned int)ArgList); /*0x5c962d*/
  return TileFromTemplate; /*0x5c9637*/
}
