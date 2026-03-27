void __thiscall sub_5C5B00(_DWORD *this)
{
  const char *v2; // eax
  const char *v3; // eax
  _DWORD *v4; // eax
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

  if ( sub_5C50A0(this, 1) )
  {
    v2 = (const char *)dword_B38FB8;
    v11 = 0xFAE;
    v12 = &v10;
    v10.m_data = 0;
    v10.m_dataLen = 0;
    v10.m_bufLen = 0;
    BSStringT_Set(&v10, v2, 0);
    v3 = (const char *)dword_B38F88;
    LODWORD(v13) = &v9;
    v14 = 0;
    v9.m_data = 0;
    v9.m_dataLen = 0;
    v9.m_bufLen = 0;
    BSStringT_Set(&v9, v3, 0);
    v14 = 0xFFFFFFFF;
    v4 = (_DWORD *)sub_5C3440(
                     this,
                     v9.m_data,
                     *(int *)&v9.m_dataLen,
                     (unsigned __int8 *)v10.m_data,
                     *(int *)&v10.m_dataLen);
    v13 = (double)(int)*(this + 0x21C);
    Float = Tile_GetFloat(v4, v11);
    if ( Float != v13 )
    {
      v6 = (const char *)dword_B38FB8;
      *(float *)&v11 = (float)(int)*(this + 0x21C);
      LODWORD(v13) = &v10;
      v10.m_data = 0;
      v10.m_dataLen = 0;
      v10.m_bufLen = 0;
      BSStringT_Set(&v10, v6, 0);
      v7 = (const char *)dword_B38F88;
      v12 = &v9;
      v14 = 1;
      v9.m_data = 0;
      v9.m_dataLen = 0;
      v9.m_bufLen = 0;
      BSStringT_Set(&v9, v7, 0);
      v14 = 0xFFFFFFFF;
      v8 = (Tile *)sub_5C3440(
                     this,
                     v9.m_data,
                     *(int *)&v9.m_dataLen,
                     (unsigned __int8 *)v10.m_data,
                     *(int *)&v10.m_dataLen);
      sub_5C2B50(v8, *(float *)&v11);
    }
  }
}
