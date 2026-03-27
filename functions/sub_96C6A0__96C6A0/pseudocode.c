char __cdecl sub_96C6A0(
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
  double v14; // st7
  double v15; // st6
  double v16; // st5
  double v17; // st3
  bool v18; // c0
  bool v19; // c3
  double v20; // st3
  double v21; // st4
  double v23; // rtt
  double v24; // st3
  double v25; // st5
  double v26; // st4
  double v27; // st6
  double v28; // rt0
  double v29; // st7
  double v30; // st7
  double v31; // st7
  double v32; // st7
  double v33; // st5
  double v34; // st7
  float *v35; // eax
  double v36; // st7
  double v37; // st7
  double v38; // st7
  float v39; // [esp+Ch] [ebp-34h]
  float v40; // [esp+10h] [ebp-30h]
  float v41; // [esp+10h] [ebp-30h]
  float v42; // [esp+14h] [ebp-2Ch]
  float v43; // [esp+14h] [ebp-2Ch]
  float v44; // [esp+18h] [ebp-28h]
  float v45; // [esp+18h] [ebp-28h]
  float v46; // [esp+1Ch] [ebp-24h]
  float v47; // [esp+1Ch] [ebp-24h]
  float v48; // [esp+1Ch] [ebp-24h]
  float v49; // [esp+20h] [ebp-20h]
  float v50; // [esp+20h] [ebp-20h]
  float v51; // [esp+20h] [ebp-20h]
  float v52; // [esp+24h] [ebp-1Ch]
  float v53; // [esp+24h] [ebp-1Ch]
  float v54; // [esp+24h] [ebp-1Ch]
  float v55; // [esp+28h] [ebp-18h]
  float v56; // [esp+28h] [ebp-18h]
  float v57; // [esp+28h] [ebp-18h]
  float v58; // [esp+28h] [ebp-18h]
  float v59; // [esp+28h] [ebp-18h]
  float v60; // [esp+28h] [ebp-18h]
  float v61; // [esp+28h] [ebp-18h]
  float v62; // [esp+2Ch] [ebp-14h]
  float v63; // [esp+2Ch] [ebp-14h]
  float v64; // [esp+2Ch] [ebp-14h]
  float v65; // [esp+2Ch] [ebp-14h]
  float v66; // [esp+2Ch] [ebp-14h]
  float v67; // [esp+2Ch] [ebp-14h]
  float v68; // [esp+2Ch] [ebp-14h]
  float v69; // [esp+30h] [ebp-10h]
  float v70; // [esp+30h] [ebp-10h]
  float v71; // [esp+30h] [ebp-10h]
  float v72; // [esp+30h] [ebp-10h]
  float v73; // [esp+30h] [ebp-10h]
  float v74; // [esp+30h] [ebp-10h]
  float v75; // [esp+30h] [ebp-10h]
  float v76; // [esp+34h] [ebp-Ch]
  float v77; // [esp+34h] [ebp-Ch]
  float v78; // [esp+34h] [ebp-Ch]
  float v79; // [esp+34h] [ebp-Ch]
  float v80; // [esp+34h] [ebp-Ch]
  float v81; // [esp+34h] [ebp-Ch]
  float v82; // [esp+34h] [ebp-Ch]
  float v83; // [esp+38h] [ebp-8h]
  float v84; // [esp+38h] [ebp-8h]
  float v85; // [esp+38h] [ebp-8h]
  float v86; // [esp+38h] [ebp-8h]
  float v87; // [esp+38h] [ebp-8h]
  float v88; // [esp+38h] [ebp-8h]
  float v89; // [esp+38h] [ebp-8h]
  float v90; // [esp+3Ch] [ebp-4h]
  float v91; // [esp+3Ch] [ebp-4h]
  float v92; // [esp+3Ch] [ebp-4h]
  float v93; // [esp+3Ch] [ebp-4h]
  float v94; // [esp+3Ch] [ebp-4h]
  float v95; // [esp+3Ch] [ebp-4h]
  float v96; // [esp+3Ch] [ebp-4h]
  int v97; // [esp+48h] [ebp+8h]
  int v98; // [esp+4Ch] [ebp+Ch]
  int v99; // [esp+50h] [ebp+10h]
  float v100; // [esp+50h] [ebp+10h]
  int v101; // [esp+50h] [ebp+10h]
  float v102; // [esp+50h] [ebp+10h]
  int v103; // [esp+54h] [ebp+14h]
  float v104; // [esp+54h] [ebp+14h]
  float v105; // [esp+54h] [ebp+14h]
  float v106; // [esp+54h] [ebp+14h]
  float v107; // [esp+54h] [ebp+14h]
  float v108; // [esp+54h] [ebp+14h]
  float v109; // [esp+54h] [ebp+14h]
  float v110; // [esp+54h] [ebp+14h]

  v46 = *a5 - *a3;
  v49 = a5[1] - a3[1];
  v52 = a5[2] - a3[2];
  *(float *)&v98 = v52 * v52 + v49 * v49 + v46 * v46;
  v40 = a4[1] - a2[1];
  v42 = a4[2] - a2[2];
  v44 = a4[3] - a2[3];
  *(float *)&v99 = v40 * v40 + v42 * v42 + v44 * v44;
  *(float *)&v97 = a4[4] + a2[4];
  v39 = *(float *)&v97 * *(float *)&v97;
  if ( *(float *)&v98 <= 0.0 )
  {
    v14 = 0.0;
  }
  else
  {
    v14 = 0.0;
    v15 = *(float *)&v98;
    *(float *)&v103 = v52 * v44 + v46 * v40 + v49 * v42;
    v16 = *(float *)&v103;
    if ( *(float *)&v103 <= 0.0 )
    {
      v17 = -a1 * v15;
      v18 = v17 < v16;
      v19 = v17 == v16;
      v20 = *(float *)&v99;
      if ( v18 || v19 )
      {
        v21 = v39;
      }
      else
      {
        v21 = v39;
        if ( dbl_AA3AF8 + v39 < a1 * (v15 * a1 + v16 + v16) + v20 )
          return 0;
      }
      v23 = *(float *)&v99;
      v100 = v20 - v21;
      v24 = v16 * v16;
      v25 = v100;
      v26 = v24 - v15 * v100;
      v27 = v23;
      *(float *)&v101 = v26;
      if ( *(float *)&v101 < 0.0 )
        return 0;
      if ( v25 > 0.0 )
      {
        v102 = sqrt(*(float *)&v101);
        v104 = -((v102 + *(float *)&v103) / *(float *)&v98);
        *a6 = v104;
        if ( v104 >= 0.0 )
        {
          if ( a1 < (double)v104 )
            *a6 = a1;
        }
        else
        {
          *a6 = 0.0;
        }
        v105 = *a6;
        v57 = v105 * v46;
        v64 = v49 * v105;
        v71 = v105 * v52;
        v48 = v57 + v40;
        v51 = v64 + v42;
        v54 = v71 + v44;
        v106 = a2[4] / *(float *)&v97;
        v76 = v48 * v106;
        v83 = v51 * v106;
        v90 = v106 * v54;
        v107 = *a6;
        v58 = v107 * *a3;
        v65 = v107 * a3[1];
        v72 = v107 * a3[2];
        v41 = a2[1] + v58;
        v43 = a2[2] + v65;
        v45 = a2[3] + v72;
        v59 = v41 + v76;
        *a7 = v59;
        v66 = v43 + v83;
        a7[1] = v66;
        v73 = v45 + v90;
        a7[2] = v73;
        if ( a8 )
        {
          *a9 = v48;
          a9[1] = v51;
          a9[2] = v54;
          sub_43F350(a9);
          v77 = -*a9;
          v84 = -a9[1];
          v30 = a9[2];
          *a10 = v77;
          a10[1] = v84;
          v91 = -v30;
          a10[2] = v91;
        }
        return 1;
      }
      else
      {
        *a6 = 0.0;
        v47 = a2[1] + a4[1];
        v50 = a2[2] + a4[2];
        v53 = a2[3] + a4[3];
        v28 = dbl_A2FAA0;
        v55 = v47 * v28;
        *a7 = v55;
        v62 = v50 * v28;
        a7[1] = v62;
        v69 = v28 * v53;
        a7[2] = v69;
        if ( a8 )
        {
          if ( v27 <= flt_AA3B44 )
          {
            *(_DWORD *)a9 = dword_B258D0;
            *((_DWORD *)a9 + 1) = dword_B258D4;
            *((_DWORD *)a9 + 2) = dword_B258D8;
          }
          else
          {
            *a9 = v40;
            a9[1] = v42;
            a9[2] = v44;
            sub_43F350(a9);
          }
          v56 = -*a9;
          v63 = -a9[1];
          v29 = a9[2];
          *a10 = v56;
          a10[1] = v63;
          v70 = -v29;
          a10[2] = v70;
          return 1;
        }
        else
        {
          return 1;
        }
      }
    }
  }
  if ( v39 < (double)*(float *)&v99 )
    return 0;
  *a6 = v14;
  v108 = a5[2] * a5[2] + *a5 * *a5 + a5[1] * a5[1];
  v31 = v108;
  v109 = a3[2] * a3[2] + *a3 * *a3 + a3[1] * a3[1];
  if ( v109 >= v31 )
  {
    v81 = a2[1] - a4[1];
    v88 = a2[2] - a4[2];
    v37 = a2[3] - a4[3];
    *a10 = v81;
    a10[1] = v88;
    v94 = v37;
    a10[2] = v94;
    sub_43F350(a10);
    v110 = a4[4];
    v82 = v110 * *a10;
    v89 = a10[1] * v110;
    v95 = v110 * a10[2];
    v61 = v82 + a4[1];
    v68 = a4[2] + v89;
    v38 = a4[3];
    *a7 = v61;
    a7[1] = v68;
    v75 = v38 + v95;
    a7[2] = v75;
    v35 = a9;
    v80 = -*a10;
    v87 = -a10[1];
    v36 = a10[2];
  }
  else
  {
    v78 = a4[1] - a2[1];
    v85 = a4[2] - a2[2];
    v32 = a4[3] - a2[3];
    *a9 = v78;
    a9[1] = v85;
    v92 = v32;
    a9[2] = v92;
    sub_43F350(a9);
    v33 = a2[4];
    v79 = *a9 * v33;
    v86 = a9[1] * v33;
    v93 = v33 * a9[2];
    v60 = a2[1] + v79;
    v67 = a2[2] + v86;
    v34 = a2[3];
    *a7 = v60;
    a7[1] = v67;
    v74 = v34 + v93;
    a7[2] = v74;
    v35 = a10;
    v80 = -*a9;
    v87 = -a9[1];
    v36 = a9[2];
  }
  v96 = -v36;
  *v35 = v80;
  v35[1] = v87;
  v35[2] = v96;
  return 1;
}
