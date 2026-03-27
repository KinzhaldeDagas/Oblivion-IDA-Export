void __thiscall sub_786350(_DWORD *this, signed int a2)
{
  int v2; // edi
  double v4; // st7
  double v5; // st7
  int v6; // eax
  char *v7; // ebx
  _DWORD *v8; // esi
  char *v9; // eax
  char *v10; // esi
  char **v11; // ebx
  char *v12; // edi
  int v13; // eax
  unsigned int v14; // edi
  int v15; // eax
  _DWORD *v16; // esi
  _DWORD *v17; // eax
  unsigned int v18; // eax
  double v19; // st7
  double v20; // st7
  unsigned int v21; // esi
  int v22; // ebx
  _BYTE *v23; // edi
  int v24; // ebx
  char *v25; // ecx
  _BYTE *v26; // esi
  int v27; // ebp
  float *v28; // eax
  unsigned int v29; // edi
  float *v30; // ebx
  float *v31; // edi
  int v32; // eax
  int v33; // eax
  int v34; // eax
  bool v35; // cf
  int v36; // eax
  unsigned int v37; // esi
  int v38; // eax
  _DWORD *v39; // esi
  char *v40; // eax
  char *v41; // eax
  char *v42; // esi
  char *v43; // edi
  float v44; // [esp+28h] [ebp-58h]
  float v45; // [esp+28h] [ebp-58h]
  unsigned int v46; // [esp+2Ch] [ebp-54h]
  int v47; // [esp+30h] [ebp-50h]
  float v49; // [esp+38h] [ebp-48h]
  float v50; // [esp+38h] [ebp-48h]
  int v51; // [esp+3Ch] [ebp-44h]
  float v52; // [esp+40h] [ebp-40h]
  float *v53; // [esp+44h] [ebp-3Ch] BYREF
  char *v54; // [esp+4Ch] [ebp-34h] BYREF
  void *v55; // [esp+50h] [ebp-30h]
  _BYTE *v56; // [esp+54h] [ebp-2Ch]
  int v57; // [esp+58h] [ebp-28h]
  int v58; // [esp+5Ch] [ebp-24h] BYREF
  float v59; // [esp+60h] [ebp-20h]
  int v60; // [esp+64h] [ebp-1Ch]
  int v61; // [esp+68h] [ebp-18h]
  int v62; // [esp+6Ch] [ebp-14h]
  int v63; // [esp+70h] [ebp-10h]
  unsigned int v64; // [esp+7Ch] [ebp-4h]
  int v65; // [esp+84h] [ebp+4h]
  unsigned int v66; // [esp+84h] [ebp+4h]

  v2 = 0;
  v55 = 0;
  v56 = 0;
  v57 = 0;
  v64 = 0;
  sub_785E00(&v54, a2);
  if ( a2 )
  {
    v4 = (double)a2;
    if ( a2 < 0 )
      v4 = v4 + flt_A2FC78;
    v49 = v4;
    v65 = 0;
    do
    {
      v53 = (float *)v2;
      v5 = (double)v2;
      if ( v2 < 0 )
        v5 = v5 + flt_A2FC78;
      v52 = v5 / v49;
      v6 = sub_7844A0(this, (int)&v58, v52);
      v7 = (char *)v55;
      v8 = (_DWORD *)v6;
      if ( !v55 || v2 >= (unsigned int)((v56 - (_BYTE *)v55) / 0x18) )
      {
        _invalid_parameter_noinfo();
        v7 = (char *)v55;
      }
      *(_DWORD *)&v7[v65] = *v8;
      v9 = &v7[v65];
      *((_DWORD *)v9 + 1) = v8[1];
      *((_DWORD *)v9 + 2) = v8[2];
      *((_DWORD *)v9 + 3) = v8[3];
      *((_DWORD *)v9 + 4) = v8[4];
      *((_DWORD *)v9 + 5) = v8[5];
      TESTexture::ClearComponentReferences(&v58);
      v65 += 0x18;
      ++v2;
    }
    while ( v2 < (unsigned int)a2 );
  }
  v10 = (char *)*(this + 0x11);
  v11 = (char **)(this + 0xF);
  if ( *(this + 0x10) > (unsigned int)v10 )
    _invalid_parameter_noinfo();
  v12 = (char *)*(this + 0x10);
  if ( (unsigned int)v12 > *(this + 0x11) )
    _invalid_parameter_noinfo();
  sub_784AC0(v11, (int *)&v53, (int)v11, v12, (int)v11, v10);
  sub_785E00(v11, a2);
  v13 = *(this + 4);
  v14 = 0;
  v66 = 0;
  if ( !v13 || !((*(this + 5) - v13) / 0x18) )
    _invalid_parameter_noinfo();
  v15 = *(this + 0x10);
  v16 = (_DWORD *)*(this + 4);
  if ( !v15 || !((*(this + 0x11) - v15) / 0x18) )
    _invalid_parameter_noinfo();
  v17 = (_DWORD *)*(this + 0x10);
  *v17 = *v16;
  v17[1] = v16[1];
  v17[2] = v16[2];
  v17[3] = v16[3];
  v17[4] = v16[4];
  v17[5] = v16[5];
  v18 = a2 - 1;
  v47 = 1;
  v46 = a2 - 1;
  if ( (unsigned int)(a2 - 1) > 1 )
  {
    v53 = (float *)a2;
    v19 = (double)a2;
    if ( a2 < 0 )
      v19 = v19 + flt_A2FC78;
    v50 = v19;
    v51 = 0x18;
    while ( 1 )
    {
      v20 = (double)v47;
      if ( v47 < 0 )
        v20 = v20 + flt_A2FC78;
      v21 = v14;
      v44 = v20 / v50;
      if ( v14 < v18 )
      {
        v22 = 3 * v14;
        v23 = v55;
        v24 = 8 * v22;
        while ( 1 )
        {
          if ( !v23 || v21 >= (v56 - v23) / 0x18 )
          {
            _invalid_parameter_noinfo();
            v23 = v55;
          }
          if ( *(float *)&v23[v24] <= (double)v44 )
          {
            if ( !v23 || v21 + 1 >= (v56 - v23) / 0x18 )
            {
              _invalid_parameter_noinfo();
              v23 = v55;
            }
            if ( *(float *)&v23[v24 + 0x18] > (double)v44 )
              break;
          }
          ++v21;
          v24 += 0x18;
          if ( v21 >= v46 )
            goto LABEL_41;
        }
        v66 = v21;
LABEL_41:
        v14 = v66;
      }
      sub_78E5D0(&v58, v44, 0.0, 0.0, 0.0, 0.0);
      v25 = (char *)v55;
      if ( !v55 || (v26 = v56, v14 >= (v56 - (_BYTE *)v55) / 0x18) )
      {
        _invalid_parameter_noinfo();
        v26 = v56;
        v25 = (char *)v55;
      }
      v27 = 0x18 * v14;
      v28 = (float *)&v25[0x18 * v14];
      v29 = v14 + 1;
      v53 = v28;
      if ( !v25 || v29 >= (v26 - v25) / 0x18 )
      {
        _invalid_parameter_noinfo();
        v26 = v56;
        v25 = (char *)v55;
      }
      v30 = (float *)&v25[0x18 * v29];
      if ( !v25 || v66 >= (v26 - v25) / 0x18 )
      {
        _invalid_parameter_noinfo();
        v26 = v56;
        v25 = (char *)v55;
      }
      v45 = (v44 - *v53) / (*v30 - *(float *)&v25[v27]);
      if ( !v25 || v29 >= (v26 - v25) / 0x18 )
      {
        _invalid_parameter_noinfo();
        v26 = v56;
        v25 = (char *)v55;
      }
      v31 = (float *)&v25[0x18 * v29];
      if ( !v25 || v66 >= (v26 - v25) / 0x18 )
      {
        _invalid_parameter_noinfo();
        v25 = (char *)v55;
      }
      v32 = *(this + 0x10);
      v53 = *(float **)&v25[v27 + 4];
      v59 = (v31[1] - *(float *)&v53) * v45 + *(float *)&v53;
      if ( !v32 || v47 >= (unsigned int)((*(this + 0x11) - v32) / 0x18) )
        _invalid_parameter_noinfo();
      v33 = *(this + 0x10);
      *(_DWORD *)(v33 + v51) = v58;
      v34 = v51 + v33;
      *(float *)(v34 + 4) = v59;
      *(_DWORD *)(v34 + 8) = v60;
      *(_DWORD *)(v34 + 0xC) = v61;
      *(_DWORD *)(v34 + 0x10) = v62;
      *(_DWORD *)(v34 + 0x14) = v63;
      TESTexture::ClearComponentReferences(&v58);
      v35 = ++v47 < v46;
      v51 += 0x18;
      if ( !v35 )
        break;
      v14 = v66;
      v18 = v46;
    }
    v11 = (char **)(this + 0xF);
  }
  v36 = *(this + 4);
  if ( v36 )
    v36 = (*(this + 5) - v36) / 0x18;
  v37 = v36 - 1;
  v38 = *(this + 4);
  if ( !v38 || v37 >= (*(this + 5) - v38) / 0x18 )
    _invalid_parameter_noinfo();
  v39 = (_DWORD *)(*(this + 4) + 0x18 * v37);
  v40 = v11[1];
  if ( !v40 || v46 >= (v11[2] - v40) / 0x18 )
    _invalid_parameter_noinfo();
  v41 = &v11[1][0x18 * v46];
  *(_DWORD *)v41 = *v39;
  *((_DWORD *)v41 + 1) = v39[1];
  *((_DWORD *)v41 + 2) = v39[2];
  *((_DWORD *)v41 + 3) = v39[3];
  *((_DWORD *)v41 + 4) = v39[4];
  *((_DWORD *)v41 + 5) = v39[5];
  v42 = (char *)v55;
  v64 = 0xFFFFFFFF;
  if ( v55 )
  {
    v43 = v56;
    if ( v55 != v56 )
    {
      do
      {
        TESTexture::ClearComponentReferences(v42);
        v42 += 0x18;
      }
      while ( v42 != v43 );
      v42 = (char *)v55;
    }
    FormHeapFree((unsigned int)v42);
  }
}
