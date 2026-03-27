void __thiscall sub_5C34D0(_DWORD *this)
{
  TESForm *v2; // eax
  const char *v3; // eax
  const char *v4; // eax
  Tile *v5; // eax
  const char *v6; // eax
  const char *v7; // eax
  _DWORD *v8; // eax
  const char *v9; // eax
  const char *v10; // eax
  Tile *v11; // eax
  const char *v12; // eax
  const char *v13; // eax
  Tile *v14; // eax
  const char *v15; // eax
  const char *v16; // eax
  Tile *v17; // eax
  double v18; // st7
  const char *v19; // eax
  const char *v20; // eax
  _DWORD *v21; // eax
  const char *v22; // eax
  const char *v23; // eax
  _DWORD *v24; // eax
  const char *v25; // eax
  const char *v26; // eax
  _DWORD *v27; // eax
  double v28; // rt0
  unsigned __int16 v29; // cx
  const char *v30; // eax
  int v31; // ebp
  const char *v32; // eax
  Tile *v33; // eax
  const char *v34; // eax
  const char *v35; // eax
  _DWORD *v36; // eax
  double v37; // st7
  const char *v38; // eax
  const char *v39; // eax
  _DWORD *v40; // eax
  double v41; // st7
  const char *v42; // eax
  const char *v43; // eax
  const char *v44; // eax
  _DWORD *v45; // eax
  const char *v46; // eax
  const char *v47; // eax
  Tile *v48; // eax
  const char *v49; // eax
  const char *v50; // eax
  Tile *v51; // eax
  const char *v52; // eax
  const char *v53; // eax
  BSStringT v54; // [esp-14h] [ebp-48h] BYREF
  BSStringT v55; // [esp-Ch] [ebp-40h] BYREF
  BSStringT a2; // [esp-4h] [ebp-38h] BYREF
  float v57; // [esp+18h] [ebp-1Ch]
  __int16 *p_m_dataLen; // [esp+1Ch] [ebp-18h]
  float v59; // [esp+20h] [ebp-14h]
  float Float; // [esp+24h] [ebp-10h]
  int v61; // [esp+30h] [ebp-4h]

  v2 = TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm(TESDataHandler_g_PlayerRef);
  if ( sub_51FE90(v2[0x13].vtbl) )
  {
    v3 = (const char *)dword_B39330;
    Float = COERCE_FLOAT(&a2);
    a2.m_data = 0;
    *(_DWORD *)&a2.m_dataLen = 0;
    BSStringT_Set(&a2, v3, 0);
    v4 = (const char *)dword_B38F88;
    v59 = COERCE_FLOAT(&v55);
    v61 = 0;
    v55.m_data = 0;
    v55.m_dataLen = 0;
    v55.m_bufLen = 0;
    BSStringT_Set(&v55, v4, 0);
    v61 = 0xFFFFFFFF;
    v5 = (Tile *)sub_5C3440(
                   this,
                   v55.m_data,
                   *(int *)&v55.m_dataLen,
                   (unsigned __int8 *)a2.m_data,
                   *(int *)&a2.m_dataLen);
    Tile_SetFloat(v5, (_DWORD *)0xFBB, 1.0);
    v6 = (const char *)dword_B39330;
    *(_DWORD *)&a2.m_dataLen = word_A36430;
    a2.m_data = (char *)0xFB4;
    Float = COERCE_FLOAT(&v55);
    v55.m_data = 0;
    v55.m_dataLen = 0;
    v55.m_bufLen = 0;
    BSStringT_Set(&v55, v6, 0);
    v7 = (const char *)dword_B38F88;
    v59 = COERCE_FLOAT(&v54);
    v61 = 1;
    v54.m_data = 0;
    v54.m_dataLen = 0;
    v54.m_bufLen = 0;
    BSStringT_Set(&v54, v7, 0);
    v61 = 0xFFFFFFFF;
    v8 = (_DWORD *)sub_5C3440(
                     this,
                     v54.m_data,
                     *(int *)&v54.m_dataLen,
                     (unsigned __int8 *)v55.m_data,
                     *(int *)&v55.m_dataLen);
    Tile_SetString(v8, a2.m_data, *(char **)&a2.m_dataLen);
    v9 = (const char *)dword_B38FC0;
    Float = COERCE_FLOAT(&a2);
    a2.m_data = 0;
    *(_DWORD *)&a2.m_dataLen = 0;
    BSStringT_Set(&a2, v9, 0);
    v10 = (const char *)dword_B38F88;
    v59 = COERCE_FLOAT(&v55);
    v61 = 2;
    v55.m_data = 0;
    v55.m_dataLen = 0;
    v55.m_bufLen = 0;
    BSStringT_Set(&v55, v10, 0);
    v61 = 0xFFFFFFFF;
    v11 = (Tile *)sub_5C3440(
                    this,
                    v55.m_data,
                    *(int *)&v55.m_dataLen,
                    (unsigned __int8 *)a2.m_data,
                    *(int *)&a2.m_dataLen);
    Tile_SetFloat(v11, (_DWORD *)0xFBB, 1.0);
    v12 = (const char *)dword_B38FC8;
    Float = COERCE_FLOAT(&a2);
    a2.m_data = 0;
    *(_DWORD *)&a2.m_dataLen = 0;
    BSStringT_Set(&a2, v12, 0);
    v13 = (const char *)dword_B38F88;
    v59 = COERCE_FLOAT(&v55);
    v61 = 3;
    v55.m_data = 0;
    v55.m_dataLen = 0;
    v55.m_bufLen = 0;
    BSStringT_Set(&v55, v13, 0);
    v61 = 0xFFFFFFFF;
    v14 = (Tile *)sub_5C3440(
                    this,
                    v55.m_data,
                    *(int *)&v55.m_dataLen,
                    (unsigned __int8 *)a2.m_data,
                    *(int *)&a2.m_dataLen);
    Tile_SetFloat(v14, (_DWORD *)0xFBB, 1.0);
    v15 = (const char *)dword_B38FD0;
    Float = COERCE_FLOAT(&a2);
    a2.m_data = 0;
    *(_DWORD *)&a2.m_dataLen = 0;
    BSStringT_Set(&a2, v15, 0);
    v16 = (const char *)dword_B38F88;
    v59 = COERCE_FLOAT(&v55);
    v61 = 4;
    v55.m_data = 0;
    v55.m_dataLen = 0;
    v55.m_bufLen = 0;
    BSStringT_Set(&v55, v16, 0);
    v61 = 0xFFFFFFFF;
    v17 = (Tile *)sub_5C3440(
                    this,
                    v55.m_data,
                    *(int *)&v55.m_dataLen,
                    (unsigned __int8 *)a2.m_data,
                    *(int *)&a2.m_dataLen);
    v18 = 1.0;
  }
  else
  {
    v19 = (const char *)dword_B38FC0;
    *(_DWORD *)&a2.m_dataLen = 0xFAE;
    Float = COERCE_FLOAT((BSStringT *)&v55.m_dataLen);
    *(_DWORD *)&v55.m_dataLen = 0;
    a2.m_data = 0;
    BSStringT_Set((BSStringT *)&v55.m_dataLen, v19, 0);
    v20 = (const char *)dword_B38F88;
    v59 = COERCE_FLOAT((BSStringT *)&v54.m_dataLen);
    v61 = 5;
    *(_DWORD *)&v54.m_dataLen = 0;
    v55.m_data = 0;
    BSStringT_Set((BSStringT *)&v54.m_dataLen, v20, 0);
    v61 = 0xFFFFFFFF;
    v21 = (_DWORD *)sub_5C3440(
                      this,
                      *(char **)&v54.m_dataLen,
                      (int)v55.m_data,
                      *(unsigned __int8 **)&v55.m_dataLen,
                      (int)a2.m_data);
    Float = Tile_GetFloat(v21, *(int *)&a2.m_dataLen);
    v22 = (const char *)dword_B38FC8;
    *(_DWORD *)&a2.m_dataLen = 0xFAE;
    v59 = COERCE_FLOAT((BSStringT *)&v55.m_dataLen);
    *(_DWORD *)&v55.m_dataLen = 0;
    a2.m_data = 0;
    BSStringT_Set((BSStringT *)&v55.m_dataLen, v22, 0);
    v23 = (const char *)dword_B38F88;
    p_m_dataLen = &v54.m_dataLen;
    v61 = 6;
    *(_DWORD *)&v54.m_dataLen = 0;
    v55.m_data = 0;
    BSStringT_Set((BSStringT *)&v54.m_dataLen, v23, 0);
    v61 = 0xFFFFFFFF;
    v24 = (_DWORD *)sub_5C3440(
                      this,
                      *(char **)&v54.m_dataLen,
                      (int)v55.m_data,
                      *(unsigned __int8 **)&v55.m_dataLen,
                      (int)a2.m_data);
    v59 = Tile_GetFloat(v24, *(int *)&a2.m_dataLen);
    v25 = (const char *)dword_B38FD0;
    *(_DWORD *)&a2.m_dataLen = 0xFAE;
    p_m_dataLen = &v55.m_dataLen;
    *(_DWORD *)&v55.m_dataLen = 0;
    a2.m_data = 0;
    BSStringT_Set((BSStringT *)&v55.m_dataLen, v25, 0);
    v26 = (const char *)dword_B38F88;
    v57 = COERCE_FLOAT((BSStringT *)&v54.m_dataLen);
    v61 = 7;
    *(_DWORD *)&v54.m_dataLen = 0;
    v55.m_data = 0;
    BSStringT_Set((BSStringT *)&v54.m_dataLen, v26, 0);
    v61 = 0xFFFFFFFF;
    v27 = (_DWORD *)sub_5C3440(
                      this,
                      *(char **)&v54.m_dataLen,
                      (int)v55.m_data,
                      *(unsigned __int8 **)&v55.m_dataLen,
                      (int)a2.m_data);
    v57 = Tile_GetFloat(v27, *(int *)&a2.m_dataLen);
    v28 = dbl_A3DDD8;
    p_m_dataLen = (__int16 *)(int)(v57 * v28);
    HIBYTE(v29) = (_BYTE)p_m_dataLen;
    LODWORD(v59) = (int)(v59 * v28);
    LOBYTE(v29) = LOBYTE(v59);
    LODWORD(Float) = (int)(v28 * Float);
    v30 = (const char *)dword_B39330;
    v31 = LOBYTE(Float) | (v29 << 8);
    Float = COERCE_FLOAT(&a2);
    a2.m_data = 0;
    *(_DWORD *)&a2.m_dataLen = 0;
    BSStringT_Set(&a2, v30, 0);
    v32 = (const char *)dword_B38F88;
    v59 = COERCE_FLOAT(&v55);
    v61 = 8;
    v55.m_data = 0;
    v55.m_dataLen = 0;
    v55.m_bufLen = 0;
    BSStringT_Set(&v55, v32, 0);
    v61 = 0xFFFFFFFF;
    v33 = (Tile *)sub_5C3440(
                    this,
                    v55.m_data,
                    *(int *)&v55.m_dataLen,
                    (unsigned __int8 *)a2.m_data,
                    *(int *)&a2.m_dataLen);
    Tile_SetFloat(v33, (_DWORD *)0xFBB, fConstant_2);
    v34 = (const char *)dword_B39330;
    *(_DWORD *)&a2.m_dataLen = 0xFAE;
    Float = COERCE_FLOAT((BSStringT *)&v55.m_dataLen);
    *(_DWORD *)&v55.m_dataLen = 0;
    a2.m_data = 0;
    BSStringT_Set((BSStringT *)&v55.m_dataLen, v34, 0);
    v35 = (const char *)dword_B38F88;
    v59 = COERCE_FLOAT((BSStringT *)&v54.m_dataLen);
    v61 = 9;
    *(_DWORD *)&v54.m_dataLen = 0;
    v55.m_data = 0;
    BSStringT_Set((BSStringT *)&v54.m_dataLen, v35, 0);
    v61 = 0xFFFFFFFF;
    v36 = (_DWORD *)sub_5C3440(
                      this,
                      *(char **)&v54.m_dataLen,
                      (int)v55.m_data,
                      *(unsigned __int8 **)&v55.m_dataLen,
                      (int)a2.m_data);
    v37 = Tile_GetFloat(v36, *(int *)&a2.m_dataLen);
    if ( v31 == *(this + Double_To_SInt32(v37) + 0x23C) )
    {
      v38 = (const char *)dword_B39330;
      *(_DWORD *)&a2.m_dataLen = 0xFAE;
      Float = COERCE_FLOAT((BSStringT *)&v55.m_dataLen);
      *(_DWORD *)&v55.m_dataLen = 0;
      a2.m_data = 0;
      BSStringT_Set((BSStringT *)&v55.m_dataLen, v38, 0);
      v39 = (const char *)dword_B38F88;
      v59 = COERCE_FLOAT((BSStringT *)&v54.m_dataLen);
      v61 = 0xA;
      *(_DWORD *)&v54.m_dataLen = 0;
      v55.m_data = 0;
      BSStringT_Set((BSStringT *)&v54.m_dataLen, v39, 0);
      v61 = 0xFFFFFFFF;
      v40 = (_DWORD *)sub_5C3440(
                        this,
                        *(char **)&v54.m_dataLen,
                        (int)v55.m_data,
                        *(unsigned __int8 **)&v55.m_dataLen,
                        (int)a2.m_data);
      v41 = Tile_GetFloat(v40, *(int *)&a2.m_dataLen);
      *(_DWORD *)&a2.m_dataLen = *(this + 2 * Double_To_SInt32(v41) + 0x24C);
      v42 = (const char *)dword_B39330;
      a2.m_data = (char *)0xFB4;
      Float = COERCE_FLOAT(&v55);
      v55.m_data = 0;
      v55.m_dataLen = 0;
      v55.m_bufLen = 0;
      BSStringT_Set(&v55, v42, 0);
      v61 = 0xB;
    }
    else
    {
      *(_DWORD *)&a2.m_dataLen = dword_B394D8;
      v43 = (const char *)dword_B39330;
      a2.m_data = (char *)0xFB4;
      Float = COERCE_FLOAT(&v55);
      v55.m_data = 0;
      v55.m_dataLen = 0;
      v55.m_bufLen = 0;
      BSStringT_Set(&v55, v43, 0);
      v61 = 0xC;
    }
    v44 = (const char *)dword_B38F88;
    v59 = COERCE_FLOAT(&v54);
    v54.m_data = 0;
    v54.m_dataLen = 0;
    v54.m_bufLen = 0;
    BSStringT_Set(&v54, v44, 0);
    v61 = 0xFFFFFFFF;
    v45 = (_DWORD *)sub_5C3440(
                      this,
                      v54.m_data,
                      *(int *)&v54.m_dataLen,
                      (unsigned __int8 *)v55.m_data,
                      *(int *)&v55.m_dataLen);
    Tile_SetString(v45, a2.m_data, *(char **)&a2.m_dataLen);
    v46 = (const char *)dword_B38FC0;
    Float = COERCE_FLOAT(&a2);
    a2.m_data = 0;
    *(_DWORD *)&a2.m_dataLen = 0;
    BSStringT_Set(&a2, v46, 0);
    v47 = (const char *)dword_B38F88;
    v59 = COERCE_FLOAT(&v55);
    v61 = 0xD;
    v55.m_data = 0;
    v55.m_dataLen = 0;
    v55.m_bufLen = 0;
    BSStringT_Set(&v55, v47, 0);
    v61 = 0xFFFFFFFF;
    v48 = (Tile *)sub_5C3440(
                    this,
                    v55.m_data,
                    *(int *)&v55.m_dataLen,
                    (unsigned __int8 *)a2.m_data,
                    *(int *)&a2.m_dataLen);
    Tile_SetFloat(v48, (_DWORD *)0xFBB, fConstant_2);
    v49 = (const char *)dword_B38FC8;
    Float = COERCE_FLOAT(&a2);
    a2.m_data = 0;
    *(_DWORD *)&a2.m_dataLen = 0;
    BSStringT_Set(&a2, v49, 0);
    v50 = (const char *)dword_B38F88;
    v59 = COERCE_FLOAT(&v55);
    v61 = 0xE;
    v55.m_data = 0;
    v55.m_dataLen = 0;
    v55.m_bufLen = 0;
    BSStringT_Set(&v55, v50, 0);
    v61 = 0xFFFFFFFF;
    v51 = (Tile *)sub_5C3440(
                    this,
                    v55.m_data,
                    *(int *)&v55.m_dataLen,
                    (unsigned __int8 *)a2.m_data,
                    *(int *)&a2.m_dataLen);
    Tile_SetFloat(v51, (_DWORD *)0xFBB, fConstant_2);
    v52 = (const char *)dword_B38FD0;
    Float = COERCE_FLOAT(&a2);
    a2.m_data = 0;
    *(_DWORD *)&a2.m_dataLen = 0;
    BSStringT_Set(&a2, v52, 0);
    v53 = (const char *)dword_B38F88;
    v59 = COERCE_FLOAT(&v55);
    v61 = 0xF;
    v55.m_data = 0;
    v55.m_dataLen = 0;
    v55.m_bufLen = 0;
    BSStringT_Set(&v55, v53, 0);
    v61 = 0xFFFFFFFF;
    v17 = (Tile *)sub_5C3440(
                    this,
                    v55.m_data,
                    *(int *)&v55.m_dataLen,
                    (unsigned __int8 *)a2.m_data,
                    *(int *)&a2.m_dataLen);
    v18 = fConstant_2;
  }
  *(float *)&a2.m_dataLen = v18;
  Tile_SetFloat(v17, (_DWORD *)0xFBB, *(float *)&a2.m_dataLen);
}
