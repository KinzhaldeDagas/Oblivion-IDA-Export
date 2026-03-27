bool __thiscall sub_6CBEE0(_DWORD *this, float a2, int a3, int a4)
{
  float v4; // eax
  float v5; // edx
  double v7; // st7
  unsigned __int8 v8; // bl
  int v9; // esi
  int v10; // ecx
  double v11; // st7
  int v12; // edx
  int v13; // eax
  int v14; // edx
  int v15; // eax
  double v16; // st4
  double v17; // st7
  float *v18; // eax
  float *v19; // eax
  float v20; // edx
  double v21; // st7
  char v23; // [esp+21h] [ebp-8Fh]
  char v24; // [esp+22h] [ebp-8Eh]
  char v25; // [esp+23h] [ebp-8Dh]
  float v26; // [esp+24h] [ebp-8Ch]
  float v27; // [esp+24h] [ebp-8Ch]
  float v28; // [esp+24h] [ebp-8Ch]
  float v29; // [esp+24h] [ebp-8Ch]
  float v30; // [esp+24h] [ebp-8Ch]
  char v31; // [esp+2Bh] [ebp-85h]
  float v32; // [esp+2Ch] [ebp-84h]
  float v33; // [esp+30h] [ebp-80h]
  float v34; // [esp+34h] [ebp-7Ch]
  float v35; // [esp+34h] [ebp-7Ch]
  float v36; // [esp+38h] [ebp-78h] BYREF
  float v37; // [esp+3Ch] [ebp-74h]
  float v38; // [esp+40h] [ebp-70h]
  float v39; // [esp+44h] [ebp-6Ch] BYREF
  float v40; // [esp+48h] [ebp-68h]
  float v41; // [esp+4Ch] [ebp-64h]
  float v42; // [esp+50h] [ebp-60h]
  float v43; // [esp+54h] [ebp-5Ch] BYREF
  float v44; // [esp+58h] [ebp-58h]
  float v45; // [esp+5Ch] [ebp-54h]
  float v46; // [esp+60h] [ebp-50h]
  float v47; // [esp+64h] [ebp-4Ch] BYREF
  float v48; // [esp+68h] [ebp-48h]
  float v49; // [esp+6Ch] [ebp-44h]
  float v50; // [esp+70h] [ebp-40h]
  float v51; // [esp+74h] [ebp-3Ch]
  float v52; // [esp+78h] [ebp-38h]
  float v53; // [esp+7Ch] [ebp-34h]
  float v54; // [esp+80h] [ebp-30h]
  float v55; // [esp+84h] [ebp-2Ch]
  float v56; // [esp+88h] [ebp-28h]
  float v57; // [esp+8Ch] [ebp-24h]
  int v58[4]; // [esp+90h] [ebp-20h] BYREF
  float v59[4]; // [esp+A0h] [ebp-10h] BYREF

  v4 = Vector3_InitValue_;
  v5 = dword_B3F9B0;
  v33 = 1.0;
  v32 = 1.0;
  v37 = *(&Vector3_InitValue_ + 1);
  v36 = v4;
  v38 = v5;
  sub_714C40(&v43, 0.0, 0.0, 0.0, 0.0);
  v7 = 0.0;
  v8 = 0;
  v34 = 0.0;
  v24 = 0;
  v25 = 0;
  v23 = 0;
  v31 = 1;
  while ( v8 < *((_BYTE *)this + 0xD) )
  {
    v9 = *(this + 5) + 0x18 * v8;
    v10 = *(_DWORD *)v9;
    if ( !*(_DWORD *)v9 || v7 >= *(float *)(v9 + 8) )
      goto LABEL_27;
    v26 = a2;
    if ( byte_B3CBD0 && *((_BYTE *)this + 0xE) == 1 )
    {
      if ( (*(_BYTE *)(this + 3) & 1) != 0 )
      {
        v11 = *((float *)this + 8);
LABEL_11:
        v26 = v11;
      }
    }
    else
    {
      if ( v7 == *(float *)(v9 + 8) )
        goto LABEL_13;
      if ( (*(_BYTE *)(this + 3) & 1) != 0 )
      {
        v11 = *(float *)(v9 + 0x14);
        goto LABEL_11;
      }
    }
    if ( flt_A79F00 != v26 )
    {
      v12 = dword_B24260;
      v13 = dword_B24264;
      v54 = flt_A79E10;
      v47 = *(float *)&v12;
      v49 = *(float *)&dword_B24268;
      v51 = *(float *)&dword_B3CBA8;
      v14 = dword_B3CBB0;
      v48 = *(float *)&v13;
      v15 = dword_B3CBA4;
      v53 = *(float *)&v14;
      v50 = *(float *)&v15;
      v52 = *(float *)&dword_B3CBAC;
      if ( (*(unsigned __int8 (__stdcall **)(float, int, float *))(*(_DWORD *)v10 + 0x4C))(
             COERCE_FLOAT(LODWORD(v26)),
             a3,
             &v47) )
      {
        v27 = -flt_A7DEB4;
        if ( v27 == v47 )
        {
          v17 = v27;
          v33 = v33 - *(float *)(v9 + 8);
        }
        else
        {
          v24 = 1;
          v16 = *(float *)(v9 + 8);
          v55 = v47 * v16;
          v56 = v48 * v16;
          v17 = v27;
          v57 = v16 * v49;
          v36 = v55 + v36;
          v37 = v37 + v56;
          v38 = v38 + v57;
        }
        if ( v51 != v17 )
        {
          v39 = v50;
          v40 = v51;
          v41 = v52;
          v42 = v53;
          if ( v31 )
          {
            v31 = 0;
          }
          else
          {
            v28 = v51 * v44 + v50 * v43 + v52 * v45 + v53 * v46;
            if ( v28 < (double)*(float *)&SrcStr )
            {
              v18 = sub_714CC0(&v39, v59);
              v39 = *v18;
              v40 = v18[1];
              v41 = v18[2];
              v42 = v18[3];
            }
          }
          v19 = (float *)sub_72F930(&v39, (int)v58, *(float *)(v9 + 8));
          v39 = *v19;
          v40 = v19[1];
          v41 = v19[2];
          v20 = v19[3];
          v43 = v39 + v43;
          v42 = v20;
          v25 = 1;
          v44 = v44 + v40;
          v45 = v45 + v41;
          v46 = v46 + v20;
        }
        if ( -flt_A7DEB4 == v54 )
        {
          v32 = v32 - *(float *)(v9 + 8);
        }
        else
        {
          v23 = 1;
          v34 = v54 * *(float *)(v9 + 8) + v34;
        }
        goto LABEL_27;
      }
    }
LABEL_13:
    v33 = v33 - *(float *)(v9 + 8);
    v32 = v32 - *(float *)(v9 + 8);
LABEL_27:
    v7 = 0.0;
    ++v8;
  }
  *(float *)a4 = -flt_A7DEB4;
  *(float *)(a4 + 0x10) = -flt_A7DEB4;
  *(float *)(a4 + 0x1C) = -flt_A7DEB4;
  if ( v24 || v25 || v23 )
  {
    if ( v33 == v7 )
      v24 = 0;
    if ( v32 < dbl_A68618 )
      v23 = 0;
    if ( v24 )
    {
      v29 = 1.0 / v33;
      v36 = v29 * v36;
      v37 = v37 * v29;
      v38 = v29 * v38;
      sub_471390((_DWORD *)a4, &v36);
    }
    if ( v25 )
    {
      sub_715340(&v43);
      sub_471430((_DWORD *)a4, &v43);
    }
    if ( v23 )
    {
      v35 = v34 / v32;
      if ( !_isnan(v35) )
      {
        if ( _finite(v35) )
          *(float *)(a4 + 0x1C) = v35;
      }
    }
  }
  v30 = -flt_A7DEB4;
  v21 = v30;
  return v30 != *(float *)(a4 + 0x1C) || v21 != *(float *)(a4 + 0x10) || *(float *)a4 != v21;
}
