void __thiscall sub_5C9980(_DWORD *this, char a2)
{
  const char *v5; // eax
  const char *v6; // eax
  Tile *ControlTile; // eax
  double Float; // st7
  const char *v9; // eax
  const char *v10; // eax
  Tile *v11; // eax
  BSStringT v12; // [esp-10h] [ebp-38h] BYREF
  BSStringT v13; // [esp-8h] [ebp-30h] BYREF
  int v14; // [esp+0h] [ebp-28h]
  BSStringT *v15; // [esp+10h] [ebp-18h]
  double v16; // [esp+14h] [ebp-14h]
  int v17; // [esp+24h] [ebp-4h]

  if ( sub_5C3E10(this) ) /*0x5c99a7*/
  {
    v5 = (const char *)stru_B38F90; /*0x5c99b4*/
    v14 = 0xFAE; /*0x5c99b9*/
    v15 = &v13; /*0x5c99c5*/
    v13.m_data = 0; /*0x5c99cb*/
    v13.m_dataLen = 0; /*0x5c99cd*/
    v13.m_bufLen = 0; /*0x5c99d1*/
    BSStringT_Set(&v13, v5, 0); /*0x5c99d5*/
    v6 = (const char *)g_gameSetting_sMain; /*0x5c99da*/
    LODWORD(v16) = &v12; /*0x5c99e4*/
    v17 = 0; /*0x5c99ea*/
    v12.m_data = 0; /*0x5c99ee*/
    v12.m_dataLen = 0; /*0x5c99f0*/
    v12.m_bufLen = 0; /*0x5c99f4*/
    BSStringT_Set(&v12, v6, 0); /*0x5c99f8*/
    v17 = 0xFFFFFFFF; /*0x5c99ff*/
    ControlTile = RaceSexMenu_FindControlTile(this, v12, v13); /*0x5c9a07*/
    v16 = (double)(int)this[0x21F]; /*0x5c9a14*/
    Float = Tile_GetFloat(ControlTile, v14); /*0x5c9a18*/
    if ( Float != v16 ) /*0x5c9a26*/
    {
      v9 = (const char *)stru_B38F90; /*0x5c9a2e*/
      *(float *)&v14 = (float)(int)this[0x21F]; /*0x5c9a38*/
      LODWORD(v16) = &v13; /*0x5c9a3c*/
      v13.m_data = 0; /*0x5c9a42*/
      v13.m_dataLen = 0; /*0x5c9a44*/
      v13.m_bufLen = 0; /*0x5c9a48*/
      BSStringT_Set(&v13, v9, 0); /*0x5c9a4c*/
      v10 = (const char *)g_gameSetting_sMain; /*0x5c9a51*/
      v15 = &v12; /*0x5c9a5b*/
      v17 = 1; /*0x5c9a61*/
      v12.m_data = 0; /*0x5c9a69*/
      v12.m_dataLen = 0; /*0x5c9a6b*/
      v12.m_bufLen = 0; /*0x5c9a6f*/
      BSStringT_Set(&v12, v10, 0); /*0x5c9a73*/
      v17 = 0xFFFFFFFF; /*0x5c9a7a*/
      v11 = RaceSexMenu_FindControlTile(this, v12, v13); /*0x5c9a82*/
      sub_5C2B50(v11, *(float *)&v14); /*0x5c9a8a*/
    }
    if ( a2 ) /*0x5c9a93*/
      RaceSexMenu_RefreshPlayerFace(this); /*0x5c9a97*/
  }
}
