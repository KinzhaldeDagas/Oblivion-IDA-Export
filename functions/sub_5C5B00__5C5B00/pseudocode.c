void __thiscall sub_5C5B00(_DWORD *this)
{
  const char *value; // eax
  const char *v3; // eax
  Tile *ControlTile; // eax
  double Float; // st7
  const char *v6; // eax
  const char *v7; // eax
  Tile *v8; // eax
  BSStringT v9; // [esp-10h] [ebp-38h] BYREF
  BSStringT v10; // [esp-8h] [ebp-30h] BYREF
  int v11; // [esp+0h] [ebp-28h]
  BSStringT *v12; // [esp+10h] [ebp-18h]
  double v13; // [esp+14h] [ebp-14h]
  int v14; // [esp+24h] [ebp-4h]

  if ( sub_5C50A0(this, 1) ) /*0x5c5b29*/
  {
    value = stru_B38FB8.value; /*0x5c5b36*/
    v11 = 0xFAE; /*0x5c5b3b*/
    v12 = &v10; /*0x5c5b47*/
    v10.m_data = 0; /*0x5c5b4d*/
    v10.m_dataLen = 0; /*0x5c5b4f*/
    v10.m_bufLen = 0; /*0x5c5b53*/
    BSStringT_Set(&v10, value, 0); /*0x5c5b57*/
    v3 = g_gameSetting_sHair.value; /*0x5c5b5c*/
    LODWORD(v13) = &v9; /*0x5c5b66*/
    v14 = 0; /*0x5c5b6c*/
    v9.m_data = 0; /*0x5c5b70*/
    v9.m_dataLen = 0; /*0x5c5b72*/
    v9.m_bufLen = 0; /*0x5c5b76*/
    BSStringT_Set(&v9, v3, 0); /*0x5c5b7a*/
    v14 = 0xFFFFFFFF; /*0x5c5b81*/
    ControlTile = RaceSexMenu_FindControlTile(this, v9, v10); /*0x5c5b89*/
    v13 = (double)(int)*(this + 0x21C); /*0x5c5b96*/
    Float = Tile_GetFloat(ControlTile, v11); /*0x5c5b9a*/
    if ( Float != v13 ) /*0x5c5ba8*/
    {
      v6 = stru_B38FB8.value; /*0x5c5bb0*/
      *(float *)&v11 = (float)(int)*(this + 0x21C); /*0x5c5bba*/
      LODWORD(v13) = &v10; /*0x5c5bbe*/
      v10.m_data = 0; /*0x5c5bc4*/
      v10.m_dataLen = 0; /*0x5c5bc6*/
      v10.m_bufLen = 0; /*0x5c5bca*/
      BSStringT_Set(&v10, v6, 0); /*0x5c5bce*/
      v7 = g_gameSetting_sHair.value; /*0x5c5bd3*/
      v12 = &v9; /*0x5c5bdd*/
      v14 = 1; /*0x5c5be3*/
      v9.m_data = 0; /*0x5c5beb*/
      v9.m_dataLen = 0; /*0x5c5bed*/
      v9.m_bufLen = 0; /*0x5c5bf1*/
      BSStringT_Set(&v9, v7, 0); /*0x5c5bf5*/
      v14 = 0xFFFFFFFF; /*0x5c5bfc*/
      v8 = RaceSexMenu_FindControlTile(this, v9, v10); /*0x5c5c04*/
      sub_5C2B50(v8, *(float *)&v11); /*0x5c5c0c*/
    }
  }
}
