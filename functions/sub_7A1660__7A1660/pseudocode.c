void __thiscall sub_7A1660(_DWORD *this)
{
  float *v1; // ebp
  unsigned int v2; // edi
  unsigned int *v3; // esi
  int i; // ebx
  unsigned int v5; // eax
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int v8; // ecx
  double v9; // st7
  unsigned int v10; // ebx
  float v11; // edi
  unsigned int v12; // eax
  unsigned int v13; // eax
  unsigned int v14; // eax
  double v15; // st7
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // edi
  bool v19; // cc
  unsigned int v20; // ebx
  unsigned int v21; // ebx
  int v22; // edi
  unsigned int v23; // edi
  unsigned int *v24; // ebp
  int v25; // ebp
  unsigned int v26; // edi
  int v27; // eax
  double v28; // st7
  double v29; // st6
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // eax
  unsigned int *v33; // esi
  char v34; // [esp+1Fh] [ebp-59h] BYREF
  _DWORD *v35; // [esp+20h] [ebp-58h]
  float v36; // [esp+24h] [ebp-54h]
  int v37; // [esp+28h] [ebp-50h]
  float v38; // [esp+2Ch] [ebp-4Ch]
  float v39; // [esp+30h] [ebp-48h]
  float v40; // [esp+34h] [ebp-44h]
  unsigned int *v41; // [esp+3Ch] [ebp-3Ch]
  float v42; // [esp+40h] [ebp-38h]
  float v43; // [esp+44h] [ebp-34h] BYREF
  unsigned int v44; // [esp+4Ch] [ebp-2Ch] BYREF
  unsigned int v45; // [esp+50h] [ebp-28h]
  unsigned int v46; // [esp+54h] [ebp-24h]
  int v47; // [esp+58h] [ebp-20h]
  unsigned int v48[4]; // [esp+5Ch] [ebp-1Ch] BYREF
  int v49; // [esp+74h] [ebp-4h]

  v1 = (float *)this;
  v35 = this;
  v2 = 0;
  v39 = 0.0;
  v3 = this + 2;
  *(float *)&v37 = 0.0;
  for ( i = 0; ; i += 0x30 )
  {
    v5 = v3[1];
    if ( !v5 || v2 >= (int)(v3[2] - v5) / 0x30 )
      break;
    v6 = v3[1];
    if ( !v6 || v2 >= (int)(v3[2] - v6) / 0x30 )
      _invalid_parameter_noinfo();
    v7 = v3[1];
    v39 = *(float *)(v7 + i + 0x20) + v39;
    if ( !v7 || v2 >= (int)(v3[2] - v7) / 0x30 )
      _invalid_parameter_noinfo();
    v8 = v3[1];
    if ( *(float *)&v37 < (double)*(float *)(i + v8 + 0x20) )
    {
      if ( !v8 || v2 >= (int)(v3[2] - v8) / 0x30 )
        _invalid_parameter_noinfo();
      v37 = *(int *)(v3[1] + i + 0x20);
    }
    ++v2;
  }
  v43 = *(float *)&v37 * *(float *)&v37;
  sub_78EAF0(&v34);
  v9 = 1.0 - v1[0x18];
  v49 = 1;
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v40 = v9;
  v10 = 0;
  v11 = 0.0;
  v36 = 0.0;
  while ( 1 )
  {
    v12 = v3[1];
    if ( !v12 || v10 >= (int)(v3[2] - v12) / 0x30 )
      break;
    v13 = v3[1];
    if ( !v13 || v10 >= (int)(v3[2] - v13) / 0x30 )
      _invalid_parameter_noinfo();
    v38 = *(float *)(LODWORD(v11) + v3[1] + 0x20);
    if ( v40 * *(float *)&v37 < v38 )
    {
      v14 = v3[1];
      if ( !v14 || v10 >= (int)(v3[2] - v14) / 0x30 )
        _invalid_parameter_noinfo();
      sub_7A0B50(&v44, LODWORD(v11) + v3[1]);
    }
    v42 = sub_78EA00(0.0, v1[0x17]);
    v15 = v42;
    v16 = v3[1];
    v42 = 1.0 - v42;
    v38 = v15 * v43 + v42 * v38;
    if ( !v16 || v10 >= (int)(v3[2] - v16) / 0x30 )
      _invalid_parameter_noinfo();
    v17 = v3[1];
    LODWORD(v36) += 0x30;
    *(float *)(LODWORD(v11) + v17 + 0x24) = v38;
    v11 = v36;
    v1 = (float *)v35;
    ++v10;
  }
  v18 = v3[2];
  v19 = v3[1] <= v18;
  LOBYTE(v43) = 0;
  if ( !v19 )
    _invalid_parameter_noinfo();
  v20 = v3[1];
  if ( v20 > v3[2] )
    _invalid_parameter_noinfo();
  sub_79FA30(v20, v18, (int)(v18 - v20) / 0x30, (char *)LODWORD(v43));
  v21 = v45;
  LOBYTE(v43) = 0;
  v22 = v46;
  if ( v45 > v46 )
  {
    _invalid_parameter_noinfo();
    v21 = v45;
    if ( v45 > v46 )
      _invalid_parameter_noinfo();
  }
  sub_79FA30(v21, v22, (int)(v22 - v21) / 0x30, (char *)LODWORD(v43));
  v38 = 0.0;
  v23 = v45;
  v24 = (unsigned int *)v46;
  if ( v45 )
  {
    if ( (int)(v46 - v45) / 0x30 )
    {
      v25 = LODWORD(v38) + v45;
      v26 = v3[1];
      if ( v26 > v3[2] )
        _invalid_parameter_noinfo();
      sub_7A0A50(v3, (int)&v43, v3, v26, v25);
    }
  }
  v27 = v35[0x14];
  *(float *)&v37 = 0.0;
  if ( v27 )
  {
    v41 = v35 + 6;
    if ( v27 == 1 )
    {
      v28 = *((float *)v35 + 0x15);
    }
    else
    {
      v42 = *((float *)v35 + 0x15);
      LODWORD(v43) = v27 - 1;
      v29 = (double)(v27 - 1);
      if ( v27 - 1 < 0 )
        v29 = v29 + flt_A2FC78;
      v43 = (double)v37 / v29;
      v28 = v42 + (*((float *)v35 + 0x16) - v42) * v43;
    }
    v38 = v28;
    memset(&v48[1], 0, 0xC);
    v36 = v38 * v39;
    v38 = 0.0;
    LOBYTE(v49) = 2;
    if ( v36 > 0.0 )
    {
      v30 = v3[1];
      if ( v30 )
      {
        if ( (int)(v3[2] - v30) / 0x30 )
        {
          if ( v36 >= (double)v38 )
          {
            v31 = v3[1];
            if ( !v31 || !((int)(v3[2] - v31) / 0x30) )
              _invalid_parameter_noinfo();
            v32 = v3[1];
            v38 = *(float *)(v32 + 0x20) + v38;
            if ( !v32 || !((int)(v3[2] - v32) / 0x30) )
              _invalid_parameter_noinfo();
            sub_7A0B50(v48, v3[1]);
          }
        }
      }
    }
    sub_7A15D0(v41, (int)v48);
  }
  if ( v45 )
  {
    if ( v45 != v46 )
    {
      v33 = (unsigned int *)(v45 + 4);
      do
      {
        if ( *v33 )
          FormHeapFree(*v33);
        *v33 = 0;
        v33[1] = 0;
        v33[2] = 0;
        v33 += 0xC;
      }
      while ( v33 + 0xFFFFFFFF != v24 );
      v23 = v45;
    }
    FormHeapFree(v23);
  }
  v45 = 0;
  v46 = 0;
  v47 = 0;
  v49 = 0xFFFFFFFF;
  TESTexture::ClearComponentReferences(&v34);
}
