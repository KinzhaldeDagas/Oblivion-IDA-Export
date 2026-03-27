int __fastcall sub_755790(int a1, int a2, float a3, float *a4, int a5, int a6)
{
  float *v8; // edi
  char v9; // bl
  float *v10; // ecx
  double v11; // st7
  double v12; // st6
  int result; // eax
  double v14; // st5
  double v15; // st4
  double v16; // st7
  long double v17; // st5
  long double v18; // st6
  double v19; // st3
  bool v20; // zf
  double v21; // st7
  double v22; // st7
  double v23; // st7
  float v24; // [esp+20h] [ebp-44h]
  float v25; // [esp+20h] [ebp-44h]
  float v26; // [esp+24h] [ebp-40h]
  float v27; // [esp+24h] [ebp-40h]
  float v28; // [esp+28h] [ebp-3Ch]
  float v29; // [esp+28h] [ebp-3Ch]
  float v30; // [esp+28h] [ebp-3Ch]
  float v31; // [esp+2Ch] [ebp-38h]
  float v32; // [esp+2Ch] [ebp-38h]
  float v33; // [esp+2Ch] [ebp-38h]
  float v34; // [esp+30h] [ebp-34h]
  float v35; // [esp+30h] [ebp-34h]
  float v36; // [esp+30h] [ebp-34h]
  float v37; // [esp+34h] [ebp-30h]
  float v38; // [esp+34h] [ebp-30h]
  float v39; // [esp+34h] [ebp-30h]
  float v40; // [esp+34h] [ebp-30h]
  float v41; // [esp+34h] [ebp-30h]
  float v42; // [esp+34h] [ebp-30h]
  float v43; // [esp+34h] [ebp-30h]
  float v44; // [esp+38h] [ebp-2Ch]
  float v45; // [esp+38h] [ebp-2Ch]
  float v46; // [esp+38h] [ebp-2Ch]
  float v47; // [esp+38h] [ebp-2Ch]
  float v48; // [esp+38h] [ebp-2Ch]
  float v49; // [esp+38h] [ebp-2Ch]
  float v50; // [esp+38h] [ebp-2Ch]
  float v51; // [esp+3Ch] [ebp-28h]
  float v52; // [esp+3Ch] [ebp-28h]
  float v53; // [esp+3Ch] [ebp-28h]
  float v54; // [esp+3Ch] [ebp-28h]
  float v55; // [esp+3Ch] [ebp-28h]
  float v56; // [esp+3Ch] [ebp-28h]
  float v57; // [esp+3Ch] [ebp-28h]
  float v58; // [esp+40h] [ebp-24h] BYREF
  float v59; // [esp+44h] [ebp-20h]
  float v60; // [esp+48h] [ebp-1Ch]
  float v61; // [esp+4Ch] [ebp-18h] BYREF
  float v62; // [esp+50h] [ebp-14h]
  float v63; // [esp+54h] [ebp-10h]
  float v64; // [esp+58h] [ebp-Ch] BYREF
  float v65; // [esp+5Ch] [ebp-8h]
  float v66; // [esp+60h] [ebp-4h]
  float v67; // [esp+70h] [ebp+Ch]
  float v68; // [esp+70h] [ebp+Ch]
  float v69; // [esp+70h] [ebp+Ch]
  float v70; // [esp+70h] [ebp+Ch]
  float v71; // [esp+70h] [ebp+Ch]
  float v72; // [esp+70h] [ebp+Ch]
  float v73; // [esp+70h] [ebp+Ch]
  int v74; // [esp+70h] [ebp+Ch]
  float v75; // [esp+70h] [ebp+Ch]
  float v76; // [esp+70h] [ebp+Ch]
  float v77; // [esp+70h] [ebp+Ch]
  int v78; // [esp+70h] [ebp+Ch]
  int v79; // [esp+70h] [ebp+Ch]
  int v80; // [esp+70h] [ebp+Ch]
  float v81; // [esp+70h] [ebp+Ch]
  float v82; // [esp+70h] [ebp+Ch]
  float v83; // [esp+70h] [ebp+Ch]
  float v84; // [esp+70h] [ebp+Ch]
  float v85; // [esp+70h] [ebp+Ch]

  v8 = (float *)(*(_DWORD *)(a5 + 0x1C) + 0xC * (unsigned __int16)a6);
  v9 = 0;
  v10 = (float *)(*(_DWORD *)(a5 + 0x5C) + 0x1C * (unsigned __int16)a6);
  v67 = *(float *)(a1 + 0x5C) * v8[1] + *v8 * *(float *)(a1 + 0x58) + *(float *)(a1 + 0x60) * v8[2];
  v24 = v67 - *(float *)(a1 + 0x64);
  v11 = flt_A86938;
  v12 = v24;
  if ( v24 >= v11 || -v12 >= v11 )
  {
    v72 = *a4 - a3;
    v14 = v72;
    v38 = v72 * *v10;
    v45 = v72 * v10[1];
    v52 = v10[2] * v72;
    v73 = *(float *)(a1 + 0x5C) * v45 + *(float *)(a1 + 0x58) * v38 + *(float *)(a1 + 0x60) * v52;
    v15 = v73;
    *(float *)&v74 = v73 + v12;
    v26 = fabs(*(float *)&v74);
    if ( v26 < v11 )
      *(float *)&v74 = 0.0;
    if ( *(float *)&v74 * v12 < dbl_A2FC68 )
    {
      v16 = v24;
      v27 = v14 * -v12 / v15;
      v39 = v27 * *v10;
      v46 = v27 * v10[1];
      v53 = v27 * v10[2];
      v30 = *v8 + v39;
      v33 = v46 + v8[1];
      v36 = v53 + v8[2];
      if ( (dword_B41020 & 1) == 0 )
      {
        dword_B41020 |= 1u;
        v75 = pow(dbl_A3D0C0, dbl_A86940);
        flt_B4101C = v75;
        v16 = v24;
      }
      v17 = v33;
      v18 = v30;
      v76 = *(float *)(a1 + 0x60) * v36 + *(float *)(a1 + 0x58) * v30 + *(float *)(a1 + 0x5C) * v33;
      v77 = v76 - *(float *)(a1 + 0x64);
      if ( v77 * v16 >= dbl_A2FC68 )
      {
        v23 = v36;
      }
      else
      {
        *(float *)&v78 = fabs(v18);
        v25 = fabs(v17);
        if ( *(float *)&v78 >= (double)v25 )
          v19 = *(float *)&v78;
        else
          v19 = v25;
        *(float *)&v79 = fabs(v36);
        if ( *(float *)&v79 > v19 )
          v19 = *(float *)&v79;
        v20 = v16 < 0.0;
        v21 = v36;
        *(float *)&v80 = v19 * flt_B4101C;
        if ( v20 )
        {
          v40 = *(float *)&v80 * *(float *)(a1 + 0x58);
          v47 = *(float *)(a1 + 0x5C) * *(float *)&v80;
          v54 = *(float *)&v80 * *(float *)(a1 + 0x60);
          v30 = v18 - v40;
          v33 = v33 - v47;
          v22 = v21 - v54;
        }
        else
        {
          v43 = *(float *)(a1 + 0x58) * *(float *)&v80;
          v50 = *(float *)(a1 + 0x5C) * *(float *)&v80;
          v57 = *(float *)&v80 * *(float *)(a1 + 0x60);
          v30 = v18 + v43;
          v33 = v33 + v50;
          v22 = v21 + v57;
        }
        v36 = v22;
        v23 = v36;
        v17 = v33;
        v18 = v30;
      }
      v41 = v18 - *(float *)(a1 + 0x68);
      v48 = v17 - *(float *)(a1 + 0x6C);
      v55 = v23 - *(float *)(a1 + 0x70);
      sub_7101F0((NiTransform *)(a1 + 0x74), (NiTransform *)&v61, (NiPoint3 *)(a1 + 0x38));
      sub_7101F0((NiTransform *)(a1 + 0x74), (NiTransform *)&v64, (NiPoint3 *)(a1 + 0x44));
      v81 = v62 * v48 + v41 * v61 + v63 * v55;
      v58 = v61 * v81;
      v59 = v62 * v81;
      v60 = v81 * v63;
      v82 = v48 * v65 + v41 * v64 + v66 * v55;
      v42 = v64 * v82;
      v49 = v65 * v82;
      v56 = v82 * v66;
      v83 = v59 * v59 + v58 * v58 + v60 * v60;
      if ( *(float *)(a1 + 0x50) > (double)v83 )
      {
        v84 = v49 * v49 + v42 * v42 + v56 * v56;
        if ( *(float *)(a1 + 0x54) > (double)v84 )
        {
          v9 = 1;
          v85 = v27 + a3;
          *a4 = v85;
          *(float *)(a1 + 0x14) = v30;
          *(float *)(a1 + 0x20) = v85;
          *(float *)(a1 + 0x18) = v33;
          *(float *)(a1 + 0x1C) = v36;
        }
      }
    }
  }
  else
  {
    v28 = *v8 - *(float *)(a1 + 0x68);
    v31 = v8[1] - *(float *)(a1 + 0x6C);
    v34 = v8[2] - *(float *)(a1 + 0x70);
    sub_7101F0((NiTransform *)(a1 + 0x74), (NiTransform *)&v58, (NiPoint3 *)(a1 + 0x38));
    sub_7101F0((NiTransform *)(a1 + 0x74), (NiTransform *)&v61, (NiPoint3 *)(a1 + 0x44));
    v68 = v28 * v58 + v59 * v31 + v60 * v34;
    v37 = v58 * v68;
    v44 = v59 * v68;
    v51 = v68 * v60;
    v69 = v28 * v61 + v31 * v62 + v63 * v34;
    v29 = v61 * v69;
    v32 = v62 * v69;
    v35 = v63 * v69;
    v70 = v37 * v37 + v44 * v44 + v51 * v51;
    if ( *(float *)(a1 + 0x50) > (double)v70 )
    {
      v71 = v29 * v29 + v32 * v32 + v35 * v35;
      if ( *(float *)(a1 + 0x54) > (double)v71 )
      {
        *a4 = a3;
        *(float *)(a1 + 0x20) = a3;
        *(float *)(a1 + 0x14) = *v8;
        *(float *)(a1 + 0x18) = v8[1];
        *(float *)(a1 + 0x1C) = v8[2];
        return a1;
      }
    }
  }
  result = sub_75ED20((_DWORD *)a1, a3, (int)a4, a5, a6);
  if ( !result )
    return v9 != 0 ? a1 : 0;
  return result;
}
