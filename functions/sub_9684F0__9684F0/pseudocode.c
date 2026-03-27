char __cdecl sub_9684F0(float a1, float *a2, float *a3, float *a4, float *a5, float *a6, int *a7)
{
  int v8; // ecx
  int v9; // edx
  bool v10; // al
  double v11; // st7
  double v12; // st4
  double v13; // st5
  double v14; // st5
  double v15; // st4
  double v16; // st7
  double v17; // st4
  double v18; // rtt
  char result; // al
  double v20; // st5
  double v21; // st6
  double v22; // st5
  double v23; // rtt
  double v24; // st4
  double v25; // st6
  double v26; // st4
  double v27; // rt2
  float v28; // [esp+24h] [ebp-50h]
  float v29; // [esp+24h] [ebp-50h]
  float v30; // [esp+24h] [ebp-50h]
  float v31; // [esp+24h] [ebp-50h]
  float v32; // [esp+24h] [ebp-50h]
  float v33; // [esp+24h] [ebp-50h]
  float v34; // [esp+28h] [ebp-4Ch]
  float v35; // [esp+28h] [ebp-4Ch]
  float v36; // [esp+28h] [ebp-4Ch]
  float v37; // [esp+28h] [ebp-4Ch]
  float v38; // [esp+28h] [ebp-4Ch]
  float v39; // [esp+28h] [ebp-4Ch]
  float v40; // [esp+2Ch] [ebp-48h]
  float v41; // [esp+2Ch] [ebp-48h]
  float v42; // [esp+2Ch] [ebp-48h]
  float v43; // [esp+2Ch] [ebp-48h]
  float v44; // [esp+2Ch] [ebp-48h]
  float v45; // [esp+2Ch] [ebp-48h]
  float v46; // [esp+30h] [ebp-44h]
  float v47; // [esp+30h] [ebp-44h]
  float v48; // [esp+30h] [ebp-44h]
  float v49; // [esp+34h] [ebp-40h]
  float v50; // [esp+34h] [ebp-40h]
  float v51; // [esp+34h] [ebp-40h]
  float v52; // [esp+38h] [ebp-3Ch]
  float v53; // [esp+38h] [ebp-3Ch]
  float v54; // [esp+38h] [ebp-3Ch]
  float v55; // [esp+3Ch] [ebp-38h]
  float v56; // [esp+3Ch] [ebp-38h]
  float v57; // [esp+40h] [ebp-34h]
  float v58; // [esp+40h] [ebp-34h]
  float v59; // [esp+44h] [ebp-30h]
  float v60; // [esp+44h] [ebp-30h]
  float v61; // [esp+48h] [ebp-2Ch]
  float v62; // [esp+48h] [ebp-2Ch]
  float v63; // [esp+48h] [ebp-2Ch]
  float v64; // [esp+48h] [ebp-2Ch]
  float v65; // [esp+4Ch] [ebp-28h]
  float v66; // [esp+4Ch] [ebp-28h]
  float v67; // [esp+4Ch] [ebp-28h]
  float v68; // [esp+4Ch] [ebp-28h]
  float v69; // [esp+50h] [ebp-24h]
  float v70; // [esp+50h] [ebp-24h]
  float v71; // [esp+50h] [ebp-24h]
  float v72; // [esp+50h] [ebp-24h]
  float v73; // [esp+54h] [ebp-20h]
  float v74; // [esp+54h] [ebp-20h]
  float v75; // [esp+54h] [ebp-20h]
  float v76; // [esp+54h] [ebp-20h]
  float v77; // [esp+54h] [ebp-20h]
  float v78; // [esp+58h] [ebp-1Ch]
  float v79; // [esp+58h] [ebp-1Ch]
  float v80; // [esp+58h] [ebp-1Ch]
  float v81; // [esp+58h] [ebp-1Ch]
  float v82; // [esp+58h] [ebp-1Ch]
  float v83; // [esp+5Ch] [ebp-18h]
  float v84; // [esp+5Ch] [ebp-18h]
  float v85; // [esp+5Ch] [ebp-18h]
  float v86; // [esp+5Ch] [ebp-18h]
  float v87; // [esp+5Ch] [ebp-18h]
  int v88[5]; // [esp+60h] [ebp-14h] BYREF
  float v89; // [esp+90h] [ebp+1Ch]
  float v90; // [esp+90h] [ebp+1Ch]
  float v91; // [esp+90h] [ebp+1Ch]
  float v92; // [esp+90h] [ebp+1Ch]
  int v93; // [esp+90h] [ebp+1Ch]
  int v94; // [esp+90h] [ebp+1Ch]
  int v95; // [esp+90h] [ebp+1Ch]
  float v96; // [esp+90h] [ebp+1Ch]
  float v97; // [esp+90h] [ebp+1Ch]
  float v98; // [esp+90h] [ebp+1Ch]
  float v99; // [esp+90h] [ebp+1Ch]
  int v100; // [esp+90h] [ebp+1Ch]
  int v101; // [esp+90h] [ebp+1Ch]
  int v102; // [esp+90h] [ebp+1Ch]

  sub_96C420((float *)v88, 1.0, (int)&Vector3_InitValue_);
  *(float *)&v88[4] = flt_A34BA0;
  v8 = a7[1];
  v9 = a7[2];
  v88[1] = *a7;
  v88[2] = v8;
  v88[3] = v9;
  v10 = sub_9682F0(a1, a2, a3, (float *)v88, &Vector3_InitValue_);
  v11 = dbl_A88D40;
  if ( !v10 )
  {
    v89 = *a6;
    v28 = *a3 * v89;
    v34 = a3[1] * v89;
    v40 = v89 * a3[2];
    v46 = v28 + a2[1];
    v49 = a2[2] + v34;
    v52 = a2[3] + v40;
    v29 = *(float *)a7 - v46;
    v35 = *((float *)a7 + 1) - v49;
    v41 = *((float *)a7 + 2) - v52;
    v12 = v35;
    v13 = v29;
    v90 = a2[6] * v41 + a2[4] * v29 + a2[5] * v35;
    v30 = v90;
    v91 = a2[8] * v35 + v13 * a2[7] + a2[9] * v41;
    v36 = v91;
    v92 = v13 * a2[0xA] + v12 * a2[0xB] + v41 * a2[0xC];
    v42 = v92;
    v14 = v30;
    if ( a2[0xD] * v11 >= v30 )
    {
      *(float *)&v93 = -a2[0xD];
      if ( *(float *)&v93 * v11 > v14 )
        v14 = *(float *)&v93;
    }
    else
    {
      v14 = a2[0xD];
    }
    v15 = v36;
    if ( a2[0xE] * v11 >= v36 )
    {
      *(float *)&v94 = -a2[0xE];
      if ( *(float *)&v94 * v11 > v15 )
        v15 = *(float *)&v94;
    }
    else
    {
      v15 = a2[0xE];
    }
    if ( a2[0xF] * v11 >= v42 )
    {
      *(float *)&v95 = -a2[0xF];
      if ( v11 * *(float *)&v95 <= v42 )
      {
        v18 = v15;
        v17 = v42;
        v16 = v18;
      }
      else
      {
        v16 = v15;
        v17 = *(float *)&v95;
      }
    }
    else
    {
      v16 = v15;
      v17 = a2[0xF];
    }
    v73 = a2[0xA] * v17;
    v78 = a2[0xB] * v17;
    v83 = v17 * a2[0xC];
    v61 = a2[7] * v16;
    v65 = a2[8] * v16;
    v69 = v16 * a2[9];
    v31 = a2[4] * v14;
    v37 = a2[5] * v14;
    v43 = v14 * a2[6];
    v55 = v46 + v31;
    v57 = v37 + v49;
    v59 = v43 + v52;
    v47 = v55 + v61;
    v50 = v57 + v65;
    v53 = v59 + v69;
    v62 = v47 + v73;
    *(float *)a7 = v62;
    v66 = v50 + v78;
    *((float *)a7 + 1) = v66;
    v70 = v53 + v83;
    *((float *)a7 + 2) = v70;
  }
  result = sub_9682F0(a1, a4, a5, (float *)v88, &Vector3_InitValue_);
  if ( !result )
  {
    v96 = *a6;
    v74 = *a5 * v96;
    v79 = a5[1] * v96;
    v84 = v96 * a5[2];
    v48 = v74 + a4[1];
    v51 = a4[2] + v79;
    v54 = a4[3] + v84;
    v75 = *(float *)a7 - v48;
    v80 = *((float *)a7 + 1) - v51;
    v85 = *((float *)a7 + 2) - v54;
    v97 = a4[6] * v85 + a4[5] * v80 + v75 * a4[4];
    v32 = v97;
    v98 = a4[8] * v80 + a4[7] * v75 + a4[9] * v85;
    v38 = v98;
    v99 = v85 * a4[0xC] + v80 * a4[0xB] + v75 * a4[0xA];
    v44 = v99;
    v20 = dbl_A88D40;
    if ( a4[0xD] * v20 >= v32 )
    {
      *(float *)&v100 = -a4[0xD];
      if ( *(float *)&v100 * v20 <= v32 )
      {
        v23 = v20;
        v22 = v32;
        v21 = v23;
      }
      else
      {
        v21 = v20;
        v22 = *(float *)&v100;
      }
    }
    else
    {
      v21 = v20;
      v22 = a4[0xD];
    }
    v24 = v38;
    if ( a4[0xE] * v21 >= v38 )
    {
      *(float *)&v101 = -a4[0xE];
      if ( *(float *)&v101 * v21 > v24 )
        v24 = *(float *)&v101;
    }
    else
    {
      v24 = a4[0xE];
    }
    if ( a4[0xF] * v21 >= v44 )
    {
      *(float *)&v102 = -a4[0xF];
      if ( v21 * *(float *)&v102 <= v44 )
      {
        v27 = v24;
        v26 = v44;
        v25 = v27;
      }
      else
      {
        v25 = v24;
        v26 = *(float *)&v102;
      }
    }
    else
    {
      v25 = v24;
      v26 = a4[0xF];
    }
    v33 = v26 * a4[0xA];
    v39 = a4[0xB] * v26;
    v45 = v26 * a4[0xC];
    v56 = a4[7] * v25;
    v58 = a4[8] * v25;
    v60 = v25 * a4[9];
    v76 = a4[4] * v22;
    v81 = a4[5] * v22;
    v86 = v22 * a4[6];
    v63 = v48 + v76;
    v67 = v81 + v51;
    v71 = v86 + v54;
    v77 = v63 + v56;
    v82 = v67 + v58;
    v87 = v71 + v60;
    v64 = v77 + v33;
    *(float *)a7 = v64;
    v68 = v82 + v39;
    *((float *)a7 + 1) = v68;
    v72 = v87 + v45;
    *((float *)a7 + 2) = v72;
    return LOBYTE(v68);
  }
  return result;
}
