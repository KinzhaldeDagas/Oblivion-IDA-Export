int __fastcall sub_754540(float *a1, int a2, float a3, float *a4, int a5, int a6)
{
  float *v7; // edi
  float *v8; // ebp
  char v9; // bl
  double v10; // st4
  char v11; // cl
  double v12; // st7
  double v13; // st6
  double v14; // st5
  double v15; // st6
  double v16; // st7
  int v17; // ecx
  double v18; // st7
  double v19; // st6
  double v20; // rtt
  double v21; // st6
  double v22; // st6
  int result; // eax
  float v24; // [esp+0h] [ebp-48h]
  float v25; // [esp+20h] [ebp-28h]
  float v26; // [esp+20h] [ebp-28h]
  float v27; // [esp+20h] [ebp-28h]
  float v28; // [esp+20h] [ebp-28h]
  float v29; // [esp+24h] [ebp-24h]
  float v30; // [esp+28h] [ebp-20h]
  float v31; // [esp+2Ch] [ebp-1Ch]
  float v32; // [esp+2Ch] [ebp-1Ch]
  float v33; // [esp+2Ch] [ebp-1Ch]
  float v34; // [esp+2Ch] [ebp-1Ch]
  float v35; // [esp+2Ch] [ebp-1Ch]
  float v36; // [esp+2Ch] [ebp-1Ch]
  float v37; // [esp+2Ch] [ebp-1Ch]
  float v38; // [esp+2Ch] [ebp-1Ch]
  float v39; // [esp+30h] [ebp-18h]
  float v40; // [esp+30h] [ebp-18h]
  float v41; // [esp+30h] [ebp-18h]
  float v42; // [esp+34h] [ebp-14h]
  float v43; // [esp+34h] [ebp-14h]
  float v44; // [esp+34h] [ebp-14h]
  float v45; // [esp+38h] [ebp-10h]
  float v46; // [esp+38h] [ebp-10h]
  float v47; // [esp+38h] [ebp-10h]
  float v48; // [esp+3Ch] [ebp-Ch]
  float v49; // [esp+3Ch] [ebp-Ch]
  float v50; // [esp+40h] [ebp-8h]
  float v51; // [esp+40h] [ebp-8h]
  float v52; // [esp+44h] [ebp-4h]
  float v53; // [esp+44h] [ebp-4h]
  float v54; // [esp+4Ch] [ebp+4h]

  v7 = (float *)(*(_DWORD *)(a5 + 0x1C) + 0xC * (unsigned __int16)a6);
  v8 = (float *)(*(_DWORD *)(a5 + 0x5C) + 0x1C * (unsigned __int16)a6);
  v9 = 0;
  v25 = *v7 - a1[0xF];
  v29 = v7[1] - a1[0x10];
  v30 = v7[2] - a1[0x11];
  v31 = v30 * v30 + v25 * v25 + v29 * v29;
  v32 = v31 - a1[0xE];
  if ( flt_A8677C >= -v32 )
  {
    v10 = a3;
    v11 = 0;
    if ( v32 <= (double)flt_A8677C )
    {
      v12 = a3;
LABEL_16:
      v17 = (int)a4;
      goto LABEL_17;
    }
  }
  else
  {
    v10 = a3;
    v11 = 1;
  }
  v12 = v10;
  v33 = v30 * v8[2] + v25 * *v8 + v29 * v8[1];
  v26 = -v33;
  v13 = v26;
  if ( !v11 && v13 <= 0.0 )
    goto LABEL_16;
  v34 = v8[2] * v8[2] + *v8 * *v8 + v8[1] * v8[1];
  v14 = v13 / v34;
  v15 = v34;
  v27 = v14;
  v39 = v27 * *v8;
  v42 = v8[1] * v27;
  v45 = v8[2] * v27;
  v48 = *v7 + v39;
  v50 = v42 + v7[1];
  v52 = v7[2] + v45;
  v40 = v48 - a1[0xF];
  v43 = v50 - a1[0x10];
  v46 = v52 - a1[0x11];
  v35 = v43 * v43 + v40 * v40 + v46 * v46;
  if ( !v11 && a1[0xE] <= (double)v35 )
    goto LABEL_16;
  v36 = a1[0xE] - v35;
  v37 = v36 / v15;
  v38 = sqrt(v37);
  if ( v11 )
    v16 = v38 + v27;
  else
    v16 = v27 - v38;
  v17 = (int)a4;
  v28 = v16;
  v18 = v28;
  v19 = a3;
  if ( *a4 - a3 <= v28 )
  {
    v12 = a3;
  }
  else
  {
    v9 = 1;
    v54 = v18 + v19;
    *a4 = v54;
    a1[8] = v54;
    v49 = v18 * *v8;
    v51 = v8[1] * v18;
    v20 = v19;
    v21 = v18 * v8[2];
    v12 = v20;
    v53 = v21;
    v41 = *v7 + v49;
    v44 = v51 + v7[1];
    v22 = v7[2];
    a1[5] = v41;
    a1[6] = v44;
    v47 = v22 + v53;
    a1[7] = v47;
  }
LABEL_17:
  v24 = v12;
  result = sub_75ED20(a1, v24, v17, a5, a6);
  if ( !result )
    return v9 != 0 ? (unsigned int)a1 : 0;
  return result;
}
