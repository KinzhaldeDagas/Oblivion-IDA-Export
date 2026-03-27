char __thiscall sub_6CE840(float *this, int a2, int a3, float *a4)
{
  float v4; // eax
  float v5; // edx
  float *v7; // edi
  double v8; // st7
  bool v9; // c3
  double v10; // st7
  unsigned __int8 v11; // dl
  double v12; // st7
  int v13; // ebp
  int v14; // ecx
  const void *v15; // esi
  double v16; // st5
  double v17; // st6
  float *v18; // eax
  int v19; // eax
  float v20; // edx
  float v21; // edx
  float v22; // ecx
  float v23; // edx
  float v24; // ecx
  float v25; // edx
  float v26; // ecx
  double v27; // st7
  char v29; // [esp+1Eh] [ebp-A2h]
  char v30; // [esp+1Fh] [ebp-A1h]
  char v31; // [esp+20h] [ebp-A0h]
  char v32; // [esp+21h] [ebp-9Fh]
  char v33; // [esp+22h] [ebp-9Eh]
  char v34; // [esp+23h] [ebp-9Dh]
  float v35; // [esp+24h] [ebp-9Ch]
  float v36; // [esp+24h] [ebp-9Ch]
  float v37; // [esp+24h] [ebp-9Ch]
  float v38; // [esp+24h] [ebp-9Ch]
  float v39; // [esp+24h] [ebp-9Ch]
  float v40; // [esp+28h] [ebp-98h]
  float v41; // [esp+28h] [ebp-98h]
  float v42; // [esp+2Ch] [ebp-94h]
  float v43; // [esp+2Ch] [ebp-94h]
  float v44; // [esp+30h] [ebp-90h]
  float v45; // [esp+30h] [ebp-90h]
  float v46; // [esp+34h] [ebp-8Ch] BYREF
  float v47; // [esp+38h] [ebp-88h]
  float v48; // [esp+3Ch] [ebp-84h]
  float v49; // [esp+40h] [ebp-80h] BYREF
  float v50; // [esp+44h] [ebp-7Ch]
  float v51; // [esp+48h] [ebp-78h]
  float v52; // [esp+4Ch] [ebp-74h]
  float *v53; // [esp+50h] [ebp-70h]
  float v54; // [esp+54h] [ebp-6Ch] BYREF
  float v55; // [esp+58h] [ebp-68h]
  float v56; // [esp+5Ch] [ebp-64h]
  float v57; // [esp+60h] [ebp-60h]
  float v58[8]; // [esp+64h] [ebp-5Ch] BYREF
  float v59; // [esp+84h] [ebp-3Ch]
  float v60; // [esp+88h] [ebp-38h]
  float v61; // [esp+8Ch] [ebp-34h]
  float v62[4]; // [esp+90h] [ebp-30h] BYREF
  int v63[8]; // [esp+A0h] [ebp-20h] BYREF

  v4 = Vector3_InitValue_;
  v5 = dword_B3F9B0;
  v42 = 1.0;
  v44 = 1.0;
  v47 = *(&Vector3_InitValue_ + 1);
  v46 = v4;
  v48 = v5;
  sub_714C40(&v54, 0.0, 0.0, 0.0, 0.0);
  v40 = 0.0;
  v7 = this + 0xC;
  v32 = 0;
  v29 = 0;
  v35 = -flt_A7DEB4;
  v30 = 0;
  v8 = *(this + 0x13);
  v53 = this + 0xC;
  v9 = v35 == v8;
  v10 = v35;
  if ( v9 && v10 == *(this + 0x10) && *v7 == v10 )
  {
    v33 = 1;
    sub_471390((_DWORD *)this + 0xC, &Vector3_InitValue_);
    sub_471430((_DWORD *)this + 0xC, (float *)&dword_B27110);
    if ( !_isnan(1.0) )
    {
      if ( _finite(1.0) )
        *(this + 0x13) = 1.0;
    }
  }
  else
  {
    v33 = 0;
  }
  v11 = 0;
  v31 = 1;
  v34 = 0;
  if ( !*((_BYTE *)this + 0xD) )
    return 0;
  v12 = flt_A7DEB4;
  do
  {
    v13 = *((_DWORD *)this + 5) + 0x18 * v11;
    v14 = *((_DWORD *)this + 0x14) + 0x68 * v11;
    if ( *(_DWORD *)v13 )
    {
      if ( *(float *)(v13 + 8) > 0.0 )
      {
        v15 = (const void *)(v14 + 4);
        if ( !v33 )
          v15 = (const void *)(v14 + 0x24);
        qmemcpy(v58, v15, sizeof(v58));
        v36 = -v12;
        v16 = v36;
        if ( v36 == v58[0] )
        {
          v17 = v36;
          v42 = v42 - *(float *)(v13 + 8);
        }
        else
        {
          v32 = 1;
          v37 = *(float *)(v13 + 8);
          v59 = v58[0] * v37;
          v60 = v58[1] * v37;
          v17 = v16;
          v61 = v37 * v58[2];
          v46 = v59 + v46;
          v47 = v47 + v60;
          v48 = v48 + v61;
        }
        if ( v58[4] != v17 )
        {
          v49 = v58[3];
          v50 = v58[4];
          v51 = v58[5];
          v52 = v58[6];
          if ( v31 )
          {
            v31 = 0;
          }
          else
          {
            v38 = v58[4] * v55 + v58[3] * v54 + v58[5] * v56 + v58[6] * v57;
            if ( v38 < 0.0 )
            {
              v18 = sub_714CC0(&v49, v62);
              v49 = *v18;
              v50 = v18[1];
              v51 = v18[2];
              v52 = v18[3];
            }
          }
          v19 = sub_72F930(&v49, (int)v63, *(float *)(v13 + 8));
          v49 = *(float *)v19;
          v50 = *(float *)(v19 + 4);
          v51 = *(float *)(v19 + 8);
          v20 = *(float *)(v19 + 0xC);
          v54 = v49 + v54;
          v52 = v20;
          v11 = v34;
          v29 = 1;
          v55 = v55 + v50;
          v56 = v56 + v51;
          v57 = v57 + v52;
        }
        v7 = v53;
        if ( -flt_A7DEB4 == v58[7] )
        {
          v12 = flt_A7DEB4;
          v44 = v44 - *(float *)(v13 + 8);
        }
        else
        {
          v30 = 1;
          v12 = flt_A7DEB4;
          v40 = v58[7] * *(float *)(v13 + 8) + v40;
        }
      }
    }
    v34 = ++v11;
  }
  while ( v11 < *((_BYTE *)this + 0xD) );
  if ( !v32 && !v29 && !v30 )
    return 0;
  v21 = *(float *)&dword_B24264;
  LODWORD(v58[0]) = dword_B24260;
  v22 = *(float *)&dword_B24268;
  v58[1] = v21;
  v23 = *(float *)&dword_B3CBA4;
  v58[2] = v22;
  v24 = *(float *)&dword_B3CBA8;
  v58[3] = v23;
  v25 = *(float *)&dword_B3CBAC;
  v58[4] = v24;
  v26 = *(float *)&dword_B3CBB0;
  v58[5] = v25;
  v58[6] = v26;
  v43 = 1.0 / v42;
  v45 = 1.0 / v44;
  v58[7] = flt_A79E10;
  if ( v32 )
  {
    v46 = v46 * v43;
    v47 = v47 * v43;
    v48 = v43 * v48;
    sub_471390(v58, &v46);
  }
  if ( v29 )
  {
    sub_715340(&v54);
    sub_471430(v58, &v54);
  }
  if ( v30 )
  {
    v41 = v45 * v40;
    if ( !_isnan(v41) )
    {
      if ( _finite(v41) )
        v58[7] = v41;
    }
  }
  qmemcpy(v7, sub_6CB820(v7, (int)v63, v58), 0x20u);
  v39 = -flt_A7DEB4;
  v27 = v39;
  if ( v39 == v53[7] && v27 == v53[4] && *v53 == v27 )
    return 0;
  qmemcpy(a4, v53, 0x20u);
  return 1;
}
