char __usercall sub_5CDEF0@<al>(int a1@<ecx>, double a2@<st2>, double a3@<st0>)
{
  int v4; // eax
  int v5; // ebp
  const char *v6; // eax
  const char *v7; // eax
  _DWORD *v8; // eax
  const char *v9; // eax
  const char *v10; // eax
  _DWORD *v11; // eax
  const char *v12; // eax
  const char *v13; // eax
  _DWORD *v14; // eax
  double v15; // rt0
  unsigned __int16 v16; // cx
  const char *v17; // eax
  const char *v18; // eax
  _DWORD *v19; // eax
  double v20; // st7
  const char *v21; // eax
  const char *v22; // eax
  _DWORD *v23; // eax
  double v24; // st7
  double v25; // st6
  const char *v26; // eax
  const char *v27; // eax
  _DWORD *v28; // eax
  double v29; // st7
  const char *v30; // eax
  const char *v31; // eax
  _DWORD *v32; // eax
  double v33; // st7
  int v34; // ebp
  const char *v35; // eax
  const char *v36; // eax
  _DWORD *v37; // eax
  double v38; // st7
  int v39; // ebp
  const char *v40; // eax
  const char *v41; // eax
  _DWORD *v42; // eax
  const char *v43; // eax
  const char *v44; // eax
  _DWORD *v45; // eax
  double v46; // st5
  double v47; // st6
  double v48; // st7
  const char *v49; // eax
  const char *v50; // eax
  _DWORD *v51; // eax
  double v52; // st7
  int v53; // eax
  const char *v54; // eax
  const char *v55; // eax
  _DWORD *v56; // eax
  double v57; // st7
  int v58; // eax
  BSStringT v60; // [esp-14h] [ebp-44h] BYREF
  BSStringT v61; // [esp-Ch] [ebp-3Ch] BYREF
  int v62; // [esp-4h] [ebp-34h]
  float v63; // [esp+14h] [ebp-1Ch]
  BSStringT *v64; // [esp+18h] [ebp-18h]
  float v65; // [esp+1Ch] [ebp-14h]
  float Float; // [esp+20h] [ebp-10h]
  int v67; // [esp+2Ch] [ebp-4h]

  v4 = ((int (__usercall *)@<eax>(PlayerCharacter *@<ecx>, double@<st0>))TESDataHandler_g_PlayerRef->vtbl->super.super.super.GetBaseForm)(
         TESDataHandler_g_PlayerRef,
         a3);
  v62 = 0xFAE;
  Float = COERCE_FLOAT(&v61);
  v5 = v4;
  v6 = (const char *)dword_B38FC0;
  v61.m_data = 0;
  v61.m_dataLen = 0;
  v61.m_bufLen = 0;
  BSStringT_Set(&v61, v6, 0);
  v7 = (const char *)dword_B38F88;
  v65 = COERCE_FLOAT(&v60);
  v67 = 0;
  v60.m_data = 0;
  v60.m_dataLen = 0;
  v60.m_bufLen = 0;
  BSStringT_Set(&v60, v7, 0);
  v67 = 0xFFFFFFFF;
  v8 = (_DWORD *)sub_5C3440(
                   (_DWORD *)a1,
                   v60.m_data,
                   *(int *)&v60.m_dataLen,
                   (unsigned __int8 *)v61.m_data,
                   *(int *)&v61.m_dataLen);
  Float = Tile_GetFloat(v8, v62);
  v9 = (const char *)dword_B38FC8;
  v62 = 0xFAE;
  v65 = COERCE_FLOAT(&v61);
  v61.m_data = 0;
  v61.m_dataLen = 0;
  v61.m_bufLen = 0;
  BSStringT_Set(&v61, v9, 0);
  v10 = (const char *)dword_B38F88;
  v64 = &v60;
  v67 = 1;
  v60.m_data = 0;
  v60.m_dataLen = 0;
  v60.m_bufLen = 0;
  BSStringT_Set(&v60, v10, 0);
  v67 = 0xFFFFFFFF;
  v11 = (_DWORD *)sub_5C3440(
                    (_DWORD *)a1,
                    v60.m_data,
                    *(int *)&v60.m_dataLen,
                    (unsigned __int8 *)v61.m_data,
                    *(int *)&v61.m_dataLen);
  v65 = Tile_GetFloat(v11, v62);
  v12 = (const char *)dword_B38FD0;
  v62 = 0xFAE;
  v64 = &v61;
  v61.m_data = 0;
  v61.m_dataLen = 0;
  v61.m_bufLen = 0;
  BSStringT_Set(&v61, v12, 0);
  v13 = (const char *)dword_B38F88;
  v67 = 2;
  v63 = COERCE_FLOAT(&v60);
  v60.m_data = 0;
  v60.m_dataLen = 0;
  v60.m_bufLen = 0;
  BSStringT_Set(&v60, v13, 0);
  v67 = 0xFFFFFFFF;
  v14 = (_DWORD *)sub_5C3440(
                    (_DWORD *)a1,
                    v60.m_data,
                    *(int *)&v60.m_dataLen,
                    (unsigned __int8 *)v61.m_data,
                    *(int *)&v61.m_dataLen);
  v63 = Tile_GetFloat(v14, v62);
  v15 = dbl_A3DDD8;
  v64 = (BSStringT *)(int)(v63 * v15);
  HIBYTE(v16) = (_BYTE)v64;
  LODWORD(v65) = (int)(v65 * v15);
  LOBYTE(v16) = LOBYTE(v65);
  LODWORD(Float) = (int)(v15 * Float);
  if ( (LOBYTE(Float) | (v16 << 8)) != *(_DWORD *)(v5 + 0x1E8) )
    sub_5C5C30((_DWORD *)a1, 1);
  v17 = (const char *)dword_B38FD8;
  v62 = 0xFAE;
  Float = COERCE_FLOAT(&v61);
  v61.m_data = 0;
  v61.m_dataLen = 0;
  v61.m_bufLen = 0;
  BSStringT_Set(&v61, v17, 0);
  v18 = (const char *)dword_B38F88;
  v65 = COERCE_FLOAT(&v60);
  v67 = 3;
  v60.m_data = 0;
  v60.m_dataLen = 0;
  v60.m_bufLen = 0;
  BSStringT_Set(&v60, v18, 0);
  v67 = 0xFFFFFFFF;
  v19 = (_DWORD *)sub_5C3440(
                    (_DWORD *)a1,
                    v60.m_data,
                    *(int *)&v60.m_dataLen,
                    (unsigned __int8 *)v61.m_data,
                    *(int *)&v61.m_dataLen);
  Float = *(float *)(v5 + 0x1CC);
  v20 = Tile_GetFloat(v19, v62);
  if ( Float != v20 )
    sub_5C62D0((_DWORD *)a1);
  v21 = (const char *)dword_B39330;
  v62 = 0xFAE;
  Float = COERCE_FLOAT(&v61);
  v61.m_data = 0;
  v61.m_dataLen = 0;
  v61.m_bufLen = 0;
  BSStringT_Set(&v61, v21, 0);
  v22 = (const char *)dword_B38F88;
  v65 = COERCE_FLOAT(&v60);
  v67 = 4;
  v60.m_data = 0;
  v60.m_dataLen = 0;
  v60.m_bufLen = 0;
  BSStringT_Set(&v60, v22, 0);
  v67 = 0xFFFFFFFF;
  v23 = (_DWORD *)sub_5C3440(
                    (_DWORD *)a1,
                    v60.m_data,
                    *(int *)&v60.m_dataLen,
                    (unsigned __int8 *)v61.m_data,
                    *(int *)&v61.m_dataLen);
  v24 = Tile_GetFloat(v23, v62);
  v25 = (double)*(int *)(a1 + 0x88C);
  if ( v25 != v24 )
  {
    sub_5C5F00((_DWORD *)a1);
    v26 = (const char *)dword_B39330;
    v62 = 0xFAE;
    Float = COERCE_FLOAT(&v61);
    v61.m_data = 0;
    v61.m_dataLen = 0;
    v61.m_bufLen = 0;
    BSStringT_Set(&v61, v26, 0);
    v27 = (const char *)dword_B38F88;
    v65 = COERCE_FLOAT(&v60);
    v67 = 5;
    v60.m_data = 0;
    v60.m_dataLen = 0;
    v60.m_bufLen = 0;
    BSStringT_Set(&v60, v27, 0);
    v67 = 0xFFFFFFFF;
    v28 = (_DWORD *)sub_5C3440(
                      (_DWORD *)a1,
                      v60.m_data,
                      *(int *)&v60.m_dataLen,
                      (unsigned __int8 *)v61.m_data,
                      *(int *)&v61.m_dataLen);
    v29 = Tile_GetFloat(v28, v62);
    *(_DWORD *)(a1 + 0x88C) = Double_To_SInt32(v29);
  }
  v30 = (const char *)dword_B38F78;
  v62 = 0xFAE;
  Float = COERCE_FLOAT(&v61);
  v61.m_data = 0;
  v61.m_dataLen = 0;
  v61.m_bufLen = 0;
  BSStringT_Set(&v61, v30, 0);
  v31 = (const char *)dword_B38F78;
  v65 = COERCE_FLOAT(&v60);
  v67 = 6;
  v60.m_data = 0;
  v60.m_dataLen = 0;
  v60.m_bufLen = 0;
  BSStringT_Set(&v60, v31, 0);
  v67 = 0xFFFFFFFF;
  v32 = (_DWORD *)sub_5C3440(
                    (_DWORD *)a1,
                    v60.m_data,
                    *(int *)&v60.m_dataLen,
                    (unsigned __int8 *)v61.m_data,
                    *(int *)&v61.m_dataLen);
  v33 = Tile_GetFloat(v32, v62);
  v34 = Double_To_SInt32(v33);
  if ( v34 != *(_DWORD *)(a1 + 0x86C) )
  {
    sub_5CDA30((float *)a1, a2, v25, v33);
    *(_DWORD *)(a1 + 0x86C) = v34;
  }
  v35 = (const char *)dword_B38FA8;
  v62 = 0xFAE;
  Float = COERCE_FLOAT(&v61);
  v61.m_data = 0;
  v61.m_dataLen = 0;
  v61.m_bufLen = 0;
  BSStringT_Set(&v61, v35, 0);
  v36 = (const char *)dword_B38F78;
  v65 = COERCE_FLOAT(&v60);
  v67 = 7;
  v60.m_data = 0;
  v60.m_dataLen = 0;
  v60.m_bufLen = 0;
  BSStringT_Set(&v60, v36, 0);
  v67 = 0xFFFFFFFF;
  v37 = (_DWORD *)sub_5C3440(
                    (_DWORD *)a1,
                    v60.m_data,
                    *(int *)&v60.m_dataLen,
                    (unsigned __int8 *)v61.m_data,
                    *(int *)&v61.m_dataLen);
  v38 = Tile_GetFloat(v37, v62);
  v39 = Double_To_SInt32(v38);
  if ( v39 != *(unsigned __int8 *)(a1 + 0x868) )
  {
    sub_5C9770((float *)a1, a2, v25, v38);
    *(_BYTE *)(a1 + 0x868) = v39 > 0;
  }
  v40 = (const char *)dword_B38F98;
  v62 = 0xFAE;
  Float = COERCE_FLOAT(&v61);
  v61.m_data = 0;
  v61.m_dataLen = 0;
  v61.m_bufLen = 0;
  BSStringT_Set(&v61, v40, 0);
  v41 = (const char *)dword_B38F70;
  v65 = COERCE_FLOAT(&v60);
  v67 = 8;
  v60.m_data = 0;
  v60.m_dataLen = 0;
  v60.m_bufLen = 0;
  BSStringT_Set(&v60, v41, 0);
  v67 = 0xFFFFFFFF;
  v42 = (_DWORD *)sub_5C3440(
                    (_DWORD *)a1,
                    v60.m_data,
                    *(int *)&v60.m_dataLen,
                    (unsigned __int8 *)v61.m_data,
                    *(int *)&v61.m_dataLen);
  Float = Tile_GetFloat(v42, v62);
  v43 = (const char *)dword_B38FA0;
  v62 = 0xFAE;
  v65 = COERCE_FLOAT(&v61);
  v61.m_data = 0;
  v61.m_dataLen = 0;
  v61.m_bufLen = 0;
  BSStringT_Set(&v61, v43, 0);
  v44 = (const char *)dword_B38F70;
  v64 = &v60;
  v67 = 9;
  v60.m_data = 0;
  v60.m_dataLen = 0;
  v60.m_bufLen = 0;
  BSStringT_Set(&v60, v44, 0);
  v67 = 0xFFFFFFFF;
  v45 = (_DWORD *)sub_5C3440(
                    (_DWORD *)a1,
                    v60.m_data,
                    *(int *)&v60.m_dataLen,
                    (unsigned __int8 *)v61.m_data,
                    *(int *)&v61.m_dataLen);
  v65 = Tile_GetFloat(v45, v62);
  v46 = *(float *)(a1 + 0x880);
  v47 = v65;
  if ( v46 != Float || (v46 = v65, *(float *)(a1 + 0x884) != v47) )
  {
    v47 = Float;
    v48 = v65;
    LOBYTE(v62) = 0;
    *(float *)(a1 + 0x880) = Float;
    *(float *)(a1 + 0x884) = v48;
    sub_5C50A0((_DWORD *)a1, v62);
    sub_5C7070(1);
    UpdatePlayerHead(v46, v47, v48);
  }
  v49 = (const char *)dword_B38F90;
  v62 = 0xFAE;
  Float = COERCE_FLOAT(&v61);
  v61.m_data = 0;
  v61.m_dataLen = 0;
  v61.m_bufLen = 0;
  BSStringT_Set(&v61, v49, 0);
  v50 = (const char *)dword_B38F70;
  v65 = COERCE_FLOAT(&v60);
  v67 = 0xA;
  v60.m_data = 0;
  v60.m_dataLen = 0;
  v60.m_bufLen = 0;
  BSStringT_Set(&v60, v50, 0);
  v67 = 0xFFFFFFFF;
  v51 = (_DWORD *)sub_5C3440(
                    (_DWORD *)a1,
                    v60.m_data,
                    *(int *)&v60.m_dataLen,
                    (unsigned __int8 *)v61.m_data,
                    *(int *)&v61.m_dataLen);
  v52 = Tile_GetFloat(v51, v62);
  v53 = Double_To_SInt32(v52);
  if ( v53 != *(_DWORD *)(a1 + 0x87C) )
  {
    LOBYTE(v62) = 1;
    *(_DWORD *)(a1 + 0x87C) = v53;
    sub_5C9980((_DWORD *)a1, v46, v47, v62);
  }
  v54 = (const char *)dword_B38FB8;
  v62 = 0xFAE;
  Float = COERCE_FLOAT(&v61);
  v61.m_data = 0;
  v61.m_dataLen = 0;
  v61.m_bufLen = 0;
  BSStringT_Set(&v61, v54, 0);
  v55 = (const char *)dword_B38F88;
  v65 = COERCE_FLOAT(&v60);
  v67 = 0xB;
  v60.m_data = 0;
  v60.m_dataLen = 0;
  v60.m_bufLen = 0;
  BSStringT_Set(&v60, v55, 0);
  v67 = 0xFFFFFFFF;
  v56 = (_DWORD *)sub_5C3440(
                    (_DWORD *)a1,
                    v60.m_data,
                    *(int *)&v60.m_dataLen,
                    (unsigned __int8 *)v61.m_data,
                    *(int *)&v61.m_dataLen);
  v57 = Tile_GetFloat(v56, v62);
  v58 = Double_To_SInt32(v57);
  if ( v58 != *(_DWORD *)(a1 + 0x870) )
  {
    *(_DWORD *)(a1 + 0x870) = v58;
    sub_5C5B00((_DWORD *)a1);
  }
  return sub_5C9BA0((_DWORD *)a1, v47, v57);
}
