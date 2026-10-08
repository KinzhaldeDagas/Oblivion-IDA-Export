BSStringT *__userpurge sub_5C4630@<eax>(
        _DWORD *this@<ecx>,
        double st7_0@<st0>,
        TileWindow *arg0,
        char *ArgList,
        int a5,
        char a6)
{
  int v9; // eax
  BSStringT *TileFromTemplate; // esi
  BSStringT v12[3]; // [esp-4h] [ebp-38h] BYREF
  int a3; // [esp+18h] [ebp-1Ch]
  _DWORD *v14; // [esp+1Ch] [ebp-18h]
  BSStringT a2; // [esp+20h] [ebp-14h] BYREF
  int v16; // [esp+30h] [ebp-4h]
  float v17; // [esp+38h] [ebp+4h]

  v9 = unk_B3B5D4 + 1; /*0x5c465e*/
  *(_DWORD *)&v12[0].m_dataLen = 0; /*0x5c4663*/
  unk_B3B5D4 = v9; /*0x5c4664*/
  a3 = v9; /*0x5c4669*/
  v16 = 1; /*0x5c4677*/
  TileFromTemplate = Menu::RenderTemplate(this, st7_0, arg0, "race_template_toggle", *(int *)&v12[0].m_dataLen); /*0x5c4680*/
  a2.m_data = 0; /*0x5c4682*/
  *(_DWORD *)&a2.m_dataLen = 0; /*0x5c4686*/
  BSStringT_Static_Format(&a2, "%s", ArgList); /*0x5c46a4*/
  v14 = (_DWORD *)v12; /*0x5c46b2*/
  v12[0].m_data = 0; /*0x5c46b8*/
  *(_DWORD *)&v12[0].m_dataLen = 0; /*0x5c46ba*/
  BSStringT_Set(v12, a2.m_data, 0); /*0x5c46c2*/
  sub_58A020(TileFromTemplate, v12[0].m_data, *(int *)&v12[0].m_dataLen); /*0x5c46c9*/
  *(float *)&v12[0].m_dataLen = (float)a3; /*0x5c46d5*/
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFA8, *(float *)&v12[0].m_dataLen); /*0x5c46dd*/
  v17 = Tile_GetFloat(arg0, 0xFD0) - dbl_A2F928; /*0x5c46f9*/
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAA, v17); /*0x5c4709*/
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAF, 0.0); /*0x5c471b*/
  Tile_SetString(TileFromTemplate, (_DWORD *)0xFB0, ArgList); /*0x5c4728*/
  *(float *)&v12[0].m_dataLen = -Tile_GetFloat(TileFromTemplate, 0xFAE); /*0x5c473c*/
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB1, *(float *)&v12[0].m_dataLen); /*0x5c4746*/
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB1, 0.0); /*0x5c4758*/
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB1, 0.0); /*0x5c476a*/
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB2, 0.0); /*0x5c477c*/
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFB3, 0.0); /*0x5c478e*/
  Tile_SetString(TileFromTemplate, (_DWORD *)0xFB4, "          "); /*0x5c479f*/
  if ( a6 ) /*0x5c47a8*/
    Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFF0, fConstant_2); /*0x5c47bb*/
  *(_DWORD *)&v12[0].m_dataLen = a2.m_data; /*0x5c47c8*/
  *(this + a3 + 0x25) = TileFromTemplate; /*0x5c47c9*/
  FormHeapFree(*(unsigned int *)&v12[0].m_dataLen); /*0x5c47d0*/
  FormHeapFree((unsigned int)ArgList); /*0x5c47d6*/
  return TileFromTemplate; /*0x5c47e0*/
}
