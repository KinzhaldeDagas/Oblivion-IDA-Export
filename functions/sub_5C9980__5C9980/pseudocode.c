void __userpurge sub_5C9980(_DWORD *a1@<ecx>, double a2@<st2>, double a3@<st1>, char a4)
{
  const char *v5; // eax
  const char *v6; // eax
  _DWORD *v7; // eax
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

  if ( sub_5C3E10(a1) )
  {
    v5 = (const char *)dword_B38F90;
    v14 = 0xFAE;
    v15 = &v13;
    v13.m_data = 0;
    v13.m_dataLen = 0;
    v13.m_bufLen = 0;
    BSStringT_Set(&v13, v5, 0);
    v6 = (const char *)dword_B38F70;
    LODWORD(v16) = &v12;
    v17 = 0;
    v12.m_data = 0;
    v12.m_dataLen = 0;
    v12.m_bufLen = 0;
    BSStringT_Set(&v12, v6, 0);
    v17 = 0xFFFFFFFF;
    v7 = (_DWORD *)sub_5C3440(
                     a1,
                     v12.m_data,
                     *(int *)&v12.m_dataLen,
                     (unsigned __int8 *)v13.m_data,
                     *(int *)&v13.m_dataLen);
    v16 = (double)(int)a1[0x21F];
    Float = Tile_GetFloat(v7, v14);
    if ( Float != v16 )
    {
      Float = (double)(int)a1[0x21F];
      v9 = (const char *)dword_B38F90;
      *(float *)&v14 = Float;
      LODWORD(v16) = &v13;
      v13.m_data = 0;
      v13.m_dataLen = 0;
      v13.m_bufLen = 0;
      BSStringT_Set(&v13, v9, 0);
      v10 = (const char *)dword_B38F70;
      v15 = &v12;
      v17 = 1;
      v12.m_data = 0;
      v12.m_dataLen = 0;
      v12.m_bufLen = 0;
      BSStringT_Set(&v12, v10, 0);
      v17 = 0xFFFFFFFF;
      v11 = (Tile *)sub_5C3440(
                      a1,
                      v12.m_data,
                      *(int *)&v12.m_dataLen,
                      (unsigned __int8 *)v13.m_data,
                      *(int *)&v13.m_dataLen);
      sub_5C2B50(v11, *(float *)&v14);
    }
    if ( a4 )
      sub_5C91E0(a2, a3, Float);
  }
}
