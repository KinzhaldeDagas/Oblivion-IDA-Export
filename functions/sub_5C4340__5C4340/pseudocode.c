BSStringT *__userpurge sub_5C4340@<eax>(
        _DWORD *this@<ecx>,
        double st7_0@<st0>,
        TileWindow *a3,
        const char *ArgList,
        int a5,
        int a6,
        int a7)
{
  BSStringT *TileFromTemplate; // esi
  int v11; // eax
  char *m_data; // edi
  BSStringT v14; // [esp-4h] [ebp-38h] BYREF
  int v15; // [esp+18h] [ebp-1Ch]
  BSStringT *v16; // [esp+1Ch] [ebp-18h]
  BSStringT a2; // [esp+20h] [ebp-14h] BYREF
  int v18; // [esp+30h] [ebp-4h]
  float v19; // [esp+38h] [ebp+4h]
  int v20; // [esp+44h] [ebp+10h]

  v18 = 0; /*0x5c4376*/
  TileFromTemplate = Menu::RenderTemplate(this, st7_0, a3, "race_template_pane", 0); /*0x5c437f*/
  v11 = a6; /*0x5c4381*/
  if ( a6 == 0xFFFFFFFF ) /*0x5c4388*/
  {
    v11 = unk_B3B5D4 + 1; /*0x5c438f*/
    unk_B3B5D4 = v11; /*0x5c4392*/
  }
  v20 = v11; /*0x5c4397*/
  v15 = v11; /*0x5c439b*/
  a2.m_data = 0; /*0x5c439f*/
  a2.m_dataLen = 0; /*0x5c43a3*/
  a2.m_bufLen = 0; /*0x5c43a8*/
  LOBYTE(v18) = 1; /*0x5c43bc*/
  BSStringT_Static_Format(&a2, "%s", ArgList); /*0x5c43c1*/
  v16 = &v14; /*0x5c43cb*/
  v14.m_data = 0; /*0x5c43d0*/
  *(_DWORD *)&v14.m_dataLen = 0; /*0x5c43d2*/
  m_data = a2.m_data; /*0x5c43da*/
  BSStringT_Set(&v14, a2.m_data, 0); /*0x5c43df*/
  sub_58A020(TileFromTemplate, v14.m_data, *(int *)&v14.m_dataLen); /*0x5c43e6*/
  *(float *)&v14.m_dataLen = (float)v20; /*0x5c43f2*/
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFA8, *(float *)&v14.m_dataLen); /*0x5c43fa*/
  v19 = Tile_GetFloat(a3, 0xFD0) - dbl_A2F928; /*0x5c4416*/
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAA, v19); /*0x5c4426*/
  *(float *)&v14.m_dataLen = (float)v15; /*0x5c4432*/
  Tile_SetFloat((Tile *)TileFromTemplate, (_DWORD *)0xFAE, *(float *)&v14.m_dataLen); /*0x5c443a*/
  *(_DWORD *)&v14.m_dataLen = m_data; /*0x5c4443*/
  *(this + v20 + 0x25) = TileFromTemplate; /*0x5c4444*/
  FormHeapFree(*(unsigned int *)&v14.m_dataLen); /*0x5c444b*/
  FormHeapFree((unsigned int)ArgList); /*0x5c4451*/
  return TileFromTemplate; /*0x5c445b*/
}
