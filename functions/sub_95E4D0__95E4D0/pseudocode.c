char __cdecl sub_95E4D0(
        float a1,
        float *a2,
        float *a3,
        float *a4,
        float *a5,
        float *a6,
        float *a7,
        char a8,
        float *a9,
        float *a10)
{
  double v12; // st7
  double v13; // st6
  double v14; // st5
  double v15; // rt0
  double v16; // st6
  double v17; // st7
  double v18; // st6
  double v19; // st5
  double v20; // st4
  double v21; // st3
  double v22; // st2
  double v23; // st7
  float *v24; // eax
  double v25; // st7
  double v27; // rt1
  double v28; // st2
  double v29; // st7
  double v30; // st3
  double v31; // st5
  double v32; // st7
  double v33; // st5
  double v34; // st5
  bool v35; // c0
  double v36; // st6
  double v37; // st7
  double v38; // st5
  double v39; // st4
  double v40; // st5
  double v41; // rtt
  double v42; // st6
  double v43; // st7
  double v44; // st5
  double v45; // st4
  double v46; // st5
  double v47; // rt0
  bool v48; // pf
  double v49; // st7
  double v50; // st6
  double v51; // st7
  double v52; // st7
  float v53; // [esp+4h] [ebp-2Ch]
  float v54; // [esp+8h] [ebp-28h]
  float v55; // [esp+8h] [ebp-28h]
  float v56; // [esp+8h] [ebp-28h]
  float v57; // [esp+Ch] [ebp-24h]
  float v58; // [esp+Ch] [ebp-24h]
  float v59; // [esp+Ch] [ebp-24h]
  float v60; // [esp+Ch] [ebp-24h]
  float v61; // [esp+10h] [ebp-20h]
  float v62; // [esp+10h] [ebp-20h]
  float v63; // [esp+10h] [ebp-20h]
  float v64; // [esp+10h] [ebp-20h]
  float v65; // [esp+14h] [ebp-1Ch]
  float v66; // [esp+14h] [ebp-1Ch]
  float v67; // [esp+14h] [ebp-1Ch]
  float v68; // [esp+14h] [ebp-1Ch]
  float v69; // [esp+18h] [ebp-18h]
  float v70; // [esp+18h] [ebp-18h]
  float v71; // [esp+18h] [ebp-18h]
  float v72; // [esp+18h] [ebp-18h]
  float v73; // [esp+18h] [ebp-18h]
  float v74; // [esp+18h] [ebp-18h]
  float v75; // [esp+1Ch] [ebp-14h]
  float v76; // [esp+1Ch] [ebp-14h]
  float v77; // [esp+1Ch] [ebp-14h]
  float v78; // [esp+1Ch] [ebp-14h]
  float v79; // [esp+1Ch] [ebp-14h]
  float v80; // [esp+1Ch] [ebp-14h]
  float v81; // [esp+20h] [ebp-10h]
  float v82; // [esp+20h] [ebp-10h]
  float v83; // [esp+20h] [ebp-10h]
  float v84; // [esp+20h] [ebp-10h]
  float v85; // [esp+20h] [ebp-10h]
  float v86; // [esp+20h] [ebp-10h]
  float v87; // [esp+24h] [ebp-Ch]
  float v88; // [esp+24h] [ebp-Ch]
  float v89; // [esp+24h] [ebp-Ch]
  float v90; // [esp+24h] [ebp-Ch]
  float v91; // [esp+28h] [ebp-8h]
  float v92; // [esp+28h] [ebp-8h]
  float v93; // [esp+28h] [ebp-8h]
  float v94; // [esp+28h] [ebp-8h]
  float v95; // [esp+2Ch] [ebp-4h]
  float v96; // [esp+2Ch] [ebp-4h]
  float v97; // [esp+2Ch] [ebp-4h]
  float v98; // [esp+2Ch] [ebp-4h]
  float v99; // [esp+38h] [ebp+8h]
  float v100; // [esp+38h] [ebp+8h]
  float v101; // [esp+38h] [ebp+8h]
  float v102; // [esp+38h] [ebp+8h]
  int v103; // [esp+38h] [ebp+8h]
  float v104; // [esp+38h] [ebp+8h]
  int v105; // [esp+40h] [ebp+10h]

  v12 = a2[2];
  v13 = a2[1];
  v14 = a2[3];
  v99 = a4[5] * v12 + a4[4] * v13 + a4[6] * v14;
  v87 = v99 * a4[0xD];
  v100 = a4[8] * v12 + a4[7] * v13 + a4[9] * v14;
  v91 = v100 * a4[0xE];
  v15 = v13;
  v16 = v12 * a4[0xB] + a4[0xA] * v13 + v14 * a4[0xC];
  v17 = v15;
  v101 = v16;
  v95 = v101 * a4[0xF];
  *(float *)&v105 = fabs(v91);
  v102 = fabs(v87);
  v53 = fabs(v95);
  v18 = v102;
  *(float *)&v103 = v102 + *(float *)&v105 + v53;
  v19 = a2[2];
  v20 = a2[3];
  v54 = a4[2] * v19 + a4[1] * v15 + a4[3] * v20;
  v55 = v54 - a2[4];
  v21 = v55;
  v22 = -*(float *)&v103;
  if ( v22 <= v55 )
  {
    *a6 = 0.0;
    v88 = a2[1] * v21;
    v92 = a2[2] * v21;
    v96 = v21 * a2[3];
    v69 = a4[1] - v88;
    v75 = a4[2] - v92;
    v23 = a4[3] - v96;
    *a7 = v69;
    a7[1] = v75;
    v81 = v23;
    a7[2] = v81;
    if ( !a8 )
      return 1;
    *a10 = a2[1];
    a10[1] = a2[2];
    a10[2] = a2[3];
    v89 = -*a10;
    v93 = -a10[1];
    v24 = a9;
    v25 = -a10[2];
LABEL_4:
    v97 = v25;
    *v24 = v89;
    v24[1] = v93;
    v24[2] = v97;
    return 1;
  }
  v70 = *a5 - *a3;
  v76 = a5[1] - a3[1];
  v82 = a5[2] - a3[2];
  v27 = v22;
  v28 = v17 * v70;
  v29 = v27;
  v30 = v19 * v76 + v28;
  v31 = v55;
  v56 = v20 * v82 + v30;
  if ( v56 <= 0.0 )
    return 0;
  if ( a1 * v56 + v31 >= v29 )
  {
    v32 = 0.0;
    v104 = -((v31 + *(float *)&v103) / v56);
    *a6 = v104;
    v71 = *a5 * v104;
    v77 = a5[1] * v104;
    v83 = v104 * a5[2];
    v57 = a4[1] + v71;
    v61 = v77 + a4[2];
    v33 = v83 + a4[3];
    *a7 = v57;
    a7[1] = v61;
    v65 = v33;
    v34 = flt_A37080;
    a7[2] = v65;
    v35 = v34 < v18;
    v36 = v34;
    if ( v35 )
    {
      v37 = v34;
      v38 = a4[0xD];
      v39 = a4[4] * v38;
      if ( v87 <= 0.0 )
      {
        v72 = v39;
        v78 = a4[5] * v38;
        v84 = v38 * a4[6];
        *a7 = *a7 - v72;
        a7[1] = a7[1] - v78;
        v40 = a7[2] - v84;
      }
      else
      {
        v58 = v39;
        v62 = a4[5] * v38;
        v66 = v38 * a4[6];
        *a7 = *a7 + v58;
        a7[1] = a7[1] + v62;
        v40 = v66 + a7[2];
      }
      a7[2] = v40;
      v36 = v37;
      v32 = 0.0;
    }
    if ( v36 < *(float *)&v105 )
    {
      v41 = v36;
      v42 = v32;
      v43 = v41;
      v44 = a4[0xE];
      v45 = a4[7] * v44;
      if ( v42 >= v91 )
      {
        v73 = v45;
        v79 = a4[8] * v44;
        v85 = v44 * a4[9];
        *a7 = *a7 - v73;
        a7[1] = a7[1] - v79;
        v46 = a7[2] - v85;
      }
      else
      {
        v59 = v45;
        v63 = a4[8] * v44;
        v67 = v44 * a4[9];
        *a7 = *a7 + v59;
        a7[1] = a7[1] + v63;
        v46 = v67 + a7[2];
      }
      a7[2] = v46;
      v47 = v42;
      v36 = v43;
      v32 = v47;
    }
    if ( v36 < v53 )
    {
      v48 = v32 >= v95;
      v49 = a4[0xF];
      v50 = a4[0xA] * v49;
      if ( v48 )
      {
        v74 = v50;
        v80 = a4[0xB] * v49;
        v86 = v49 * a4[0xC];
        *a7 = *a7 - v74;
        a7[1] = a7[1] - v80;
        v51 = a7[2] - v86;
      }
      else
      {
        v60 = v50;
        v64 = a4[0xB] * v49;
        v68 = v49 * a4[0xC];
        *a7 = *a7 + v60;
        a7[1] = a7[1] + v64;
        v51 = v68 + a7[2];
      }
      a7[2] = v51;
    }
    if ( !a8 )
      return 1;
    v90 = -a2[1];
    v94 = -a2[2];
    v52 = a2[3];
    *a9 = v90;
    v98 = -v52;
    a9[1] = v94;
    a9[2] = v98;
    v24 = a10;
    v89 = *a7 - a4[1];
    v93 = a7[1] - a4[2];
    v25 = a7[2] - a4[3];
    goto LABEL_4;
  }
  return 0;
}
