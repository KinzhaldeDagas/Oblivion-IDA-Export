char __thiscall sub_5C5C30(_DWORD *this, char a2)
{
  const char *v3; // eax
  const char *v4; // eax
  _DWORD *v5; // eax
  const char *v6; // eax
  const char *v7; // eax
  _DWORD *v8; // eax
  const char *v9; // eax
  const char *v10; // eax
  _DWORD *v11; // eax
  double v12; // rt0
  unsigned __int16 v13; // cx
  TESForm *v14; // eax
  TESForm *v15; // ebp
  const char *v16; // eax
  const char *v17; // eax
  const char *v18; // eax
  _DWORD *v19; // eax
  BSStringT v21; // [esp-18h] [ebp-48h] BYREF
  BSStringT v22; // [esp-10h] [ebp-40h] BYREF
  int v23; // [esp-8h] [ebp-38h]
  int v24; // [esp-4h] [ebp-34h]
  float v25; // [esp+14h] [ebp-1Ch]
  __int16 *p_m_dataLen; // [esp+18h] [ebp-18h]
  float v27; // [esp+1Ch] [ebp-14h]
  float Float; // [esp+20h] [ebp-10h]
  int v29; // [esp+2Ch] [ebp-4h]

  v3 = (const char *)dword_B38FC0;
  v24 = 0xFAE;
  Float = COERCE_FLOAT((BSStringT *)&v22.m_dataLen);
  *(_DWORD *)&v22.m_dataLen = 0;
  v23 = 0;
  BSStringT_Set((BSStringT *)&v22.m_dataLen, v3, 0);
  v4 = (const char *)dword_B38F88;
  v27 = COERCE_FLOAT((BSStringT *)&v21.m_dataLen);
  v29 = 0;
  *(_DWORD *)&v21.m_dataLen = 0;
  v22.m_data = 0;
  BSStringT_Set((BSStringT *)&v21.m_dataLen, v4, 0);
  v29 = 0xFFFFFFFF;
  v5 = (_DWORD *)sub_5C3440(this, *(char **)&v21.m_dataLen, (int)v22.m_data, *(unsigned __int8 **)&v22.m_dataLen, v23);
  Float = Tile_GetFloat(v5, v24);
  v6 = (const char *)dword_B38FC8;
  v24 = 0xFAE;
  v27 = COERCE_FLOAT((BSStringT *)&v22.m_dataLen);
  *(_DWORD *)&v22.m_dataLen = 0;
  v23 = 0;
  BSStringT_Set((BSStringT *)&v22.m_dataLen, v6, 0);
  v7 = (const char *)dword_B38F88;
  p_m_dataLen = &v21.m_dataLen;
  v29 = 1;
  *(_DWORD *)&v21.m_dataLen = 0;
  v22.m_data = 0;
  BSStringT_Set((BSStringT *)&v21.m_dataLen, v7, 0);
  v29 = 0xFFFFFFFF;
  v8 = (_DWORD *)sub_5C3440(this, *(char **)&v21.m_dataLen, (int)v22.m_data, *(unsigned __int8 **)&v22.m_dataLen, v23);
  v27 = Tile_GetFloat(v8, v24);
  v9 = (const char *)dword_B38FD0;
  v24 = 0xFAE;
  p_m_dataLen = &v22.m_dataLen;
  *(_DWORD *)&v22.m_dataLen = 0;
  v23 = 0;
  BSStringT_Set((BSStringT *)&v22.m_dataLen, v9, 0);
  v10 = (const char *)dword_B38F88;
  v25 = COERCE_FLOAT((BSStringT *)&v21.m_dataLen);
  v29 = 2;
  *(_DWORD *)&v21.m_dataLen = 0;
  v22.m_data = 0;
  BSStringT_Set((BSStringT *)&v21.m_dataLen, v10, 0);
  v29 = 0xFFFFFFFF;
  v11 = (_DWORD *)sub_5C3440(this, *(char **)&v21.m_dataLen, (int)v22.m_data, *(unsigned __int8 **)&v22.m_dataLen, v23);
  v25 = Tile_GetFloat(v11, v24);
  v12 = dbl_A3DDD8;
  p_m_dataLen = (__int16 *)(int)(v25 * v12);
  HIBYTE(v13) = (_BYTE)p_m_dataLen;
  LODWORD(v27) = (int)(v27 * v12);
  LOBYTE(v13) = LOBYTE(v27);
  LODWORD(Float) = (unsigned __int8)(int)(v12 * Float) | (v13 << 8);
  v14 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef);
  v15 = v14;
  if ( a2 )
  {
    if ( sub_51FE90(v14[0x13].vtbl) )
    {
      v17 = (const char *)dword_B39330;
      v24 = (int)EmptyString;
      v23 = 0xFB4;
      v22.m_data = 0;
      v22.m_dataLen = 0;
      v22.m_bufLen = 0;
      BSStringT_Set(&v22, v17, 0);
      v29 = 4;
    }
    else
    {
      v24 = dword_B394D8;
      v16 = (const char *)dword_B39330;
      v23 = 0xFB4;
      v22.m_data = 0;
      v22.m_dataLen = 0;
      v22.m_bufLen = 0;
      BSStringT_Set(&v22, v16, 0);
      v29 = 3;
    }
    v18 = (const char *)dword_B38F88;
    v27 = COERCE_FLOAT(&v21);
    v21.m_data = 0;
    v21.m_dataLen = 0;
    v21.m_bufLen = 0;
    BSStringT_Set(&v21, v18, 0);
    v29 = 0xFFFFFFFF;
    v19 = (_DWORD *)sub_5C3440(
                      this,
                      v21.m_data,
                      *(int *)&v21.m_dataLen,
                      (unsigned __int8 *)v22.m_data,
                      *(int *)&v22.m_dataLen);
    Tile_SetString(v19, (_DWORD *)v23, (char *)v24);
  }
  *(float *)&v15[0x14].member.flags = Float;
  return sub_5C50A0(this, 0);
}
