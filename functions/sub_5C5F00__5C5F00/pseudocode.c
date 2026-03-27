char __thiscall sub_5C5F00(_DWORD *this)
{
  const char *v2; // eax
  const char *v3; // eax
  _DWORD *v4; // eax
  double Float; // st7
  int v6; // eax
  double v7; // st7
  const char *v8; // eax
  double v9; // st7
  const char *v10; // eax
  Tile *v11; // ebx
  const char *v12; // eax
  double v13; // st7
  const char *v14; // eax
  Tile *v15; // ebx
  const char *v16; // eax
  double v17; // st7
  const char *v18; // eax
  Tile *v19; // ebx
  TESForm *v20; // eax
  bool v21; // zf
  const char *v22; // eax
  const char *v23; // eax
  _DWORD *v24; // eax
  double v25; // st7
  const char *v26; // eax
  const char *v27; // eax
  _DWORD *v28; // eax
  BSStringT v30; // [esp-14h] [ebp-44h] BYREF
  BSStringT v31; // [esp-Ch] [ebp-3Ch] BYREF
  BSStringT a2; // [esp-4h] [ebp-34h] BYREF
  float a3; // [esp+18h] [ebp-18h]
  _DWORD *p_m_dataLen; // [esp+1Ch] [ebp-14h]
  _DWORD *p_a2; // [esp+20h] [ebp-10h]
  int v36; // [esp+2Ch] [ebp-4h]

  v2 = (const char *)dword_B39330;
  *(_DWORD *)&a2.m_dataLen = 0xFAE;
  a3 = COERCE_FLOAT((BSStringT *)&v31.m_dataLen);
  *(_DWORD *)&v31.m_dataLen = 0;
  a2.m_data = 0;
  BSStringT_Set((BSStringT *)&v31.m_dataLen, v2, 0);
  v3 = (const char *)dword_B38F88;
  p_m_dataLen = &v30.m_dataLen;
  v36 = 0;
  *(_DWORD *)&v30.m_dataLen = 0;
  v31.m_data = 0;
  BSStringT_Set((BSStringT *)&v30.m_dataLen, v3, 0);
  v36 = 0xFFFFFFFF;
  v4 = (_DWORD *)sub_5C3440(
                   this,
                   *(char **)&v30.m_dataLen,
                   (int)v31.m_data,
                   *(unsigned __int8 **)&v31.m_dataLen,
                   (int)a2.m_data);
  Float = Tile_GetFloat(v4, *(int *)&a2.m_dataLen);
  v6 = *(this + Double_To_SInt32(Float) + 0x23C);
  LODWORD(a3) = (unsigned __int8)v6;
  v7 = (double)(unsigned __int8)v6;
  *(this + 0x21E) = v6;
  v8 = (const char *)dword_B38FC0;
  v9 = v7 / dbl_A3DDD8;
  p_m_dataLen = &a2;
  a2.m_data = 0;
  *(_DWORD *)&a2.m_dataLen = 0;
  a3 = v9;
  BSStringT_Set(&a2, v8, 0);
  v10 = (const char *)dword_B38F88;
  p_a2 = &v31;
  v36 = 1;
  v31.m_data = 0;
  v31.m_dataLen = 0;
  v31.m_bufLen = 0;
  BSStringT_Set(&v31, v10, 0);
  v36 = 0xFFFFFFFF;
  v11 = (Tile *)sub_5C3440(
                  this,
                  v31.m_data,
                  *(int *)&v31.m_dataLen,
                  (unsigned __int8 *)a2.m_data,
                  *(int *)&a2.m_dataLen);
  Tile_SetFloat(v11, (_DWORD *)0xFB1, flt_A6D2D8);
  Tile_SetFloat(v11, (_DWORD *)0xFB1, a3);
  Tile_SetFloat(v11, (_DWORD *)0xFB1, 0.0);
  LODWORD(a3) = *((unsigned __int8 *)this + 0x879);
  v12 = (const char *)dword_B38FC8;
  p_a2 = &a2;
  v13 = (double)SLODWORD(a3) / dbl_A3DDD8;
  a2.m_data = 0;
  *(_DWORD *)&a2.m_dataLen = 0;
  a3 = v13;
  BSStringT_Set(&a2, v12, 0);
  v14 = (const char *)dword_B38F88;
  p_m_dataLen = &v31;
  v36 = 2;
  v31.m_data = 0;
  v31.m_dataLen = 0;
  v31.m_bufLen = 0;
  BSStringT_Set(&v31, v14, 0);
  v36 = 0xFFFFFFFF;
  v15 = (Tile *)sub_5C3440(
                  this,
                  v31.m_data,
                  *(int *)&v31.m_dataLen,
                  (unsigned __int8 *)a2.m_data,
                  *(int *)&a2.m_dataLen);
  Tile_SetFloat(v15, (_DWORD *)0xFB1, flt_A6D2D8);
  Tile_SetFloat(v15, (_DWORD *)0xFB1, a3);
  Tile_SetFloat(v15, (_DWORD *)0xFB1, 0.0);
  LODWORD(a3) = *((unsigned __int8 *)this + 0x87A);
  v16 = (const char *)dword_B38FD0;
  p_a2 = &a2;
  v17 = (double)SLODWORD(a3) / dbl_A3DDD8;
  a2.m_data = 0;
  *(_DWORD *)&a2.m_dataLen = 0;
  a3 = v17;
  BSStringT_Set(&a2, v16, 0);
  v18 = (const char *)dword_B38F88;
  p_m_dataLen = &v31;
  v36 = 3;
  v31.m_data = 0;
  v31.m_dataLen = 0;
  v31.m_bufLen = 0;
  BSStringT_Set(&v31, v18, 0);
  v36 = 0xFFFFFFFF;
  v19 = (Tile *)sub_5C3440(
                  this,
                  v31.m_data,
                  *(int *)&v31.m_dataLen,
                  (unsigned __int8 *)a2.m_data,
                  *(int *)&a2.m_dataLen);
  Tile_SetFloat(v19, (_DWORD *)0xFB1, flt_A6D2D8);
  Tile_SetFloat(v19, (_DWORD *)0xFB1, a3);
  Tile_SetFloat(v19, (_DWORD *)0xFB1, 0.0);
  v20 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef);
  v21 = !sub_51FE90(v20[0x13].vtbl);
  v22 = (const char *)dword_B39330;
  if ( v21 )
  {
    *(_DWORD *)&a2.m_dataLen = 0xFAE;
    p_a2 = &v31.m_dataLen;
    *(_DWORD *)&v31.m_dataLen = 0;
    a2.m_data = 0;
    BSStringT_Set((BSStringT *)&v31.m_dataLen, v22, 0);
    v23 = (const char *)dword_B38F88;
    p_m_dataLen = &v30.m_dataLen;
    v36 = 4;
    *(_DWORD *)&v30.m_dataLen = 0;
    v31.m_data = 0;
    BSStringT_Set((BSStringT *)&v30.m_dataLen, v23, 0);
    v36 = 0xFFFFFFFF;
    v24 = (_DWORD *)sub_5C3440(
                      this,
                      *(char **)&v30.m_dataLen,
                      (int)v31.m_data,
                      *(unsigned __int8 **)&v31.m_dataLen,
                      (int)a2.m_data);
    v25 = Tile_GetFloat(v24, *(int *)&a2.m_dataLen);
    *(_DWORD *)&a2.m_dataLen = *(this + 2 * Double_To_SInt32(v25) + 0x24C);
    v26 = (const char *)dword_B39330;
    a2.m_data = (char *)0xFB4;
    p_a2 = &v31;
    v31.m_data = 0;
    v31.m_dataLen = 0;
    v31.m_bufLen = 0;
    BSStringT_Set(&v31, v26, 0);
    v36 = 5;
  }
  else
  {
    *(_DWORD *)&a2.m_dataLen = EmptyString;
    a2.m_data = (char *)0xFB4;
    p_a2 = &v31;
    v31.m_data = 0;
    v31.m_dataLen = 0;
    v31.m_bufLen = 0;
    BSStringT_Set(&v31, v22, 0);
    v36 = 6;
  }
  v27 = (const char *)dword_B38F88;
  p_m_dataLen = &v30;
  v30.m_data = 0;
  v30.m_dataLen = 0;
  v30.m_bufLen = 0;
  BSStringT_Set(&v30, v27, 0);
  v36 = 0xFFFFFFFF;
  v28 = (_DWORD *)sub_5C3440(
                    this,
                    v30.m_data,
                    *(int *)&v30.m_dataLen,
                    (unsigned __int8 *)v31.m_data,
                    *(int *)&v31.m_dataLen);
  Tile_SetString(v28, a2.m_data, *(char **)&a2.m_dataLen);
  return sub_5C5C30(this, 0);
}
