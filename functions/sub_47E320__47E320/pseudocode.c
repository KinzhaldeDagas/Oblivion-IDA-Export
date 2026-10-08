char __cdecl sub_47E320(signed int *a1, float *a2, float *a3, float *a4)
{
  int v5; // edx
  double v7; // st7
  bool v8; // c0
  bool v9; // c3
  double v10; // st7
  double v11; // st6
  bool v12; // c0
  bool v13; // c3
  double v14; // st6
  double v15; // st5
  double v16; // st4
  int v17; // edx
  double v18; // st3
  double v19; // st2
  double v20; // st7
  double v21; // st6
  float v22; // edi
  float v23; // ebp
  double v24; // rtt
  double v25; // st3
  double v26; // st6
  float v27; // ebx
  double v28; // rt0
  double v29; // st2
  double v30; // st7
  double v31; // rt2
  double v32; // st3
  double v33; // st6
  double v34; // st7
  double v35; // st5
  double v36; // st6
  double v37; // rt2
  double v38; // st5
  double v39; // rtt
  double v40; // st6
  double v41; // st7
  float *v42; // eax
  float v43; // edx
  float v44; // ecx
  double v45; // st7
  float v46; // ecx
  float v47; // edx
  bool v48; // c0
  double v49; // st7
  float *v50; // eax
  double v51; // st7
  float v52; // edx
  float v53; // ecx
  float v54; // ecx
  float v55; // edx
  int v56; // [esp+4h] [ebp-3Ch]
  float v57; // [esp+4h] [ebp-3Ch]
  float v58; // [esp+8h] [ebp-38h]
  int v59; // [esp+Ch] [ebp-34h]
  float v60; // [esp+Ch] [ebp-34h]
  float v61; // [esp+Ch] [ebp-34h]
  float v62; // [esp+Ch] [ebp-34h]
  float v63; // [esp+Ch] [ebp-34h]
  float v64; // [esp+Ch] [ebp-34h]
  float v65; // [esp+Ch] [ebp-34h]
  float v66; // [esp+Ch] [ebp-34h]
  float v67; // [esp+10h] [ebp-30h] BYREF
  float v68; // [esp+14h] [ebp-2Ch]
  float v69; // [esp+18h] [ebp-28h]
  float v70; // [esp+1Ch] [ebp-24h]
  float v71; // [esp+20h] [ebp-20h]
  float v72; // [esp+24h] [ebp-1Ch]
  float v73; // [esp+28h] [ebp-18h] BYREF
  float v74; // [esp+2Ch] [ebp-14h]
  float v75; // [esp+30h] [ebp-10h]
  float v76; // [esp+34h] [ebp-Ch] BYREF
  float v77; // [esp+38h] [ebp-8h]
  float v78; // [esp+3Ch] [ebp-4h]
  int v79; // [esp+44h] [ebp+4h]
  float v80; // [esp+44h] [ebp+4h]
  float v81; // [esp+44h] [ebp+4h]

  v5 = a1[2]; /*0x47e329*/
  v79 = *a1; /*0x47e333*/
  if ( v79 >= v5 ) /*0x47e33b*/
    return 0; /*0x47e33b*/
  v56 = a1[3]; /*0x47e34b*/
  v59 = a1[1]; /*0x47e34f*/
  if ( v56 >= v59 ) /*0x47e353*/
    return 0; /*0x47e342*/
  v80 = (float)v79; /*0x47e362*/
  v7 = *a2; /*0x47e366*/
  v8 = v80 < v7; /*0x47e36c*/
  v9 = v80 == v7; /*0x47e36c*/
  v10 = v80; /*0x47e370*/
  if ( !v8 && !v9 && *a3 < v10 ) /*0x47e380*/
    return 0; /*0x47e380*/
  v57 = (float)v56; /*0x47e38a*/
  v11 = a2[1]; /*0x47e38e*/
  v12 = v57 < v11; /*0x47e395*/
  v13 = v57 == v11; /*0x47e395*/
  v14 = v57; /*0x47e399*/
  if ( !v12 && !v13 && a3[1] < v14 ) /*0x47e3aa*/
    return 0; /*0x47e3aa*/
  v58 = (float)v5; /*0x47e3b4*/
  v15 = v58; /*0x47e3c2*/
  if ( v58 < (double)*a2 && *a3 > v15 ) /*0x47e3d2*/
    return 0; /*0x47e3d2*/
  v60 = (float)v59; /*0x47e3dc*/
  v16 = v60; /*0x47e3eb*/
  if ( v60 < (double)a2[1] && a3[1] > v16 ) /*0x47e3fc*/
    return 0; /*0x47e3fc*/
  if ( *a2 > v10 && *a2 < v15 && a2[1] > v14 && a2[1] < v16 && *a3 > v10 && *a3 < v15 && a3[1] > v14 && a3[1] < v16 ) /*0x47e458*/
    return 0; /*0x47e468*/
  if ( *a2 == *a3 || a2[1] == a3[1] ) /*0x47e48a*/
  {
    if ( *a2 == *a3 && a2[1] == a3[1] ) /*0x47e8b8*/
    {
      if ( *a2 <= v15 && *a2 >= v10 && a2[1] <= (double)v60 && a2[1] >= (double)v57 ) /*0x47e8f8*/
      {
        *a4 = *a2; /*0x47e904*/
        a4[1] = a2[1]; /*0x47e90a*/
        a4[2] = a2[2]; /*0x47e917*/
        return 1; /*0x47e922*/
      }
      return 0; /*0x47e8f8*/
    }
    if ( *a2 == *a3 ) /*0x47e92e*/
    {
      if ( *a2 <= v15 ) /*0x47e93b*/
      {
        v48 = *a2 < v10; /*0x47e943*/
        v49 = v60; /*0x47e947*/
        if ( !v48 ) /*0x47e94c*/
        {
          v50 = a4; /*0x47e964*/
          if ( a3[1] < (double)a2[1] ) /*0x47e968*/
          {
            v76 = *a2; /*0x47e96e*/
LABEL_80:
            v77 = v49; /*0x47e9f2*/
            v54 = v77; /*0x47e9fc*/
            v78 = 0.0; /*0x47ea01*/
            *v50 = v76; /*0x47ea05*/
            v55 = v78; /*0x47ea07*/
            v50[1] = v54; /*0x47ea0c*/
            v50[2] = v55; /*0x47ea10*/
            return 1; /*0x47ea1b*/
          }
          v51 = v57; /*0x47e974*/
          v76 = *a2; /*0x47e978*/
          goto LABEL_74; /*0x47e978*/
        }
      }
    }
    else if ( a2[1] == a3[1] && a2[1] <= v16 && a2[1] >= v14 ) /*0x47e9d1*/
    {
      v50 = a4; /*0x47e9e3*/
      if ( *a3 < (double)*a2 ) /*0x47e9e7*/
      {
        v76 = (float)v5; /*0x47e9eb*/
        v49 = a2[1]; /*0x47e9ef*/
        goto LABEL_80; /*0x47e9ef*/
      }
      v76 = v80; /*0x47ea1e*/
      v51 = a2[1]; /*0x47ea22*/
LABEL_74:
      v77 = v51; /*0x47e97c*/
      v52 = v77; /*0x47e986*/
      v78 = 0.0; /*0x47e98b*/
      *v50 = v76; /*0x47e98f*/
      v53 = v78; /*0x47e991*/
      v50[1] = v52; /*0x47e996*/
      v50[2] = v53; /*0x47e99a*/
      return 1; /*0x47e9a5*/
    }
    return 0; /*0x47ea44*/
  }
  v17 = 0; /*0x47e496*/
  v67 = flt_A32048; /*0x47e498*/
  v68 = v67; /*0x47e49c*/
  v69 = v67; /*0x47e4a0*/
  v70 = v67; /*0x47e4a4*/
  v71 = v67; /*0x47e4a8*/
  v72 = v67; /*0x47e4ac*/
  v61 = (a3[1] - a2[1]) / (*a3 - *a2); /*0x47e4bc*/
  v18 = v61; /*0x47e4ca*/
  v62 = a3[1] - *a3 * v61; /*0x47e4cf*/
  v19 = v10 * v18 + v62; /*0x47e4df*/
  v20 = v62; /*0x47e4df*/
  v63 = v19; /*0x47e4e1*/
  if ( v63 > v16 ) /*0x47e4f2*/
  {
    v21 = 0.0; /*0x47e532*/
  }
  else
  {
    v21 = 0.0; /*0x47e4f4*/
    if ( v57 <= (double)v63 ) /*0x47e4fd*/
    {
      v17 = 1; /*0x47e503*/
      v73 = v80; /*0x47e508*/
      v22 = v80; /*0x47e50c*/
      v67 = v80; /*0x47e510*/
      v74 = v19; /*0x47e514*/
      v23 = v19; /*0x47e518*/
      v24 = v18; /*0x47e51c*/
      v25 = 0.0; /*0x47e51c*/
      v26 = v24; /*0x47e51c*/
      v68 = v19; /*0x47e51e*/
      v75 = 0.0; /*0x47e522*/
      v27 = 0.0; /*0x47e526*/
      v69 = 0.0; /*0x47e52a*/
      goto LABEL_28; /*0x47e52e*/
    }
  }
  v27 = v69; /*0x47e538*/
  v28 = v18; /*0x47e53c*/
  v25 = v21; /*0x47e53c*/
  v26 = v28; /*0x47e53c*/
  v23 = v68; /*0x47e53e*/
  v22 = v67; /*0x47e542*/
LABEL_28:
  v64 = (v16 - v20) / v26; /*0x47e546*/
  if ( v64 <= v15 && v80 <= (double)v64 ) /*0x47e568*/
  {
    v73 = (v16 - v20) / v26; /*0x47e56c*/
    v74 = v16; /*0x47e572*/
    v75 = v25; /*0x47e578*/
    if ( v17 ) /*0x47e57c*/
    {
      v70 = v73; /*0x47e5a1*/
      v71 = v74; /*0x47e5a9*/
      v72 = v75; /*0x47e5b1*/
      ++v17; /*0x47e5b5*/
    }
    else
    {
      v22 = v73; /*0x47e57e*/
      v23 = v74; /*0x47e582*/
      v27 = v75; /*0x47e586*/
      v67 = v73; /*0x47e58a*/
      v68 = v74; /*0x47e58e*/
      v69 = v75; /*0x47e592*/
      v17 = 1; /*0x47e596*/
    }
  }
  if ( v17 >= 2 ) /*0x47e5bf*/
    goto LABEL_56; /*0x47e5bf*/
  v65 = v15 * v26 + v20; /*0x47e5cb*/
  if ( v65 <= v16 && v57 <= (double)v65 ) /*0x47e5e7*/
  {
    v73 = v58; /*0x47e5ed*/
    v74 = v15 * v26 + v20; /*0x47e5f3*/
    v75 = v25; /*0x47e5f7*/
    if ( v17 ) /*0x47e5fb*/
    {
      v70 = v73; /*0x47e620*/
      v71 = v74; /*0x47e628*/
      v72 = v75; /*0x47e630*/
      ++v17; /*0x47e634*/
    }
    else
    {
      v22 = v73; /*0x47e5fd*/
      v23 = v74; /*0x47e601*/
      v27 = v75; /*0x47e605*/
      v67 = v73; /*0x47e609*/
      v68 = v74; /*0x47e60d*/
      v69 = v75; /*0x47e611*/
      v17 = 1; /*0x47e615*/
    }
  }
  if ( v17 >= 2 ) /*0x47e63e*/
  {
LABEL_56:
    v34 = v16; /*0x47e7ce*/
    v36 = v58; /*0x47e7d0*/
    v35 = v57; /*0x47e7d2*/
LABEL_46:
    v37 = v35; /*0x47e6c3*/
    v38 = v34; /*0x47e6c3*/
    v30 = v37; /*0x47e6c3*/
    v39 = v38; /*0x47e6c5*/
    v15 = v36; /*0x47e6c5*/
    v40 = v39; /*0x47e6c5*/
    goto LABEL_47; /*0x47e6c5*/
  }
  v29 = v57 - v20; /*0x47e64c*/
  v30 = v57; /*0x47e64c*/
  v31 = v25; /*0x47e650*/
  v32 = v29 / v26; /*0x47e650*/
  v33 = v31; /*0x47e650*/
  v66 = v32; /*0x47e652*/
  if ( v66 <= v15 && v80 <= (double)v66 ) /*0x47e672*/
  {
    v73 = v32; /*0x47e67a*/
    v34 = v16; /*0x47e67e*/
    v74 = v57; /*0x47e680*/
    v75 = v33; /*0x47e686*/
    if ( v17 ) /*0x47e68a*/
    {
      v70 = v73; /*0x47e6aa*/
      v71 = v74; /*0x47e6b2*/
      v72 = v75; /*0x47e6ba*/
    }
    else
    {
      v22 = v73; /*0x47e68c*/
      v23 = v74; /*0x47e690*/
      v27 = v75; /*0x47e694*/
      v67 = v73; /*0x47e698*/
      v68 = v74; /*0x47e69c*/
      v69 = v75; /*0x47e6a0*/
    }
    ++v17; /*0x47e6be*/
    v35 = v57; /*0x47e6c1*/
    v36 = v58; /*0x47e6c1*/
    goto LABEL_46; /*0x47e6c1*/
  }
  v40 = v16; /*0x47e7c5*/
LABEL_47:
  if ( !v17 ) /*0x47e6c9*/
    return 0; /*0x47ea2a*/
  if ( v17 == 2 ) /*0x47e6d7*/
  {
    if ( v80 < (double)*a2 && *a2 < v15 && a2[1] > v30 && a2[1] < v40 ) /*0x47e71b*/
    {
      sub_4121A0(a3, &v76, a2); /*0x47e727*/
      v73 = v67 - *a2; /*0x47e736*/
      v74 = v68 - a2[1]; /*0x47e741*/
      v78 = 0.0; /*0x47e747*/
      v75 = 0.0; /*0x47e74b*/
      Vector3_NormalizeInPlace(&v76); /*0x47e74f*/
      Vector3_NormalizeInPlace(&v73); /*0x47e75a*/
      v67 = v73 + v76; /*0x47e76d*/
      v68 = v77 + v74; /*0x47e779*/
      v69 = v75 + v78; /*0x47e785*/
      v41 = NiPoint3_Length(&v67); /*0x47e789*/
      v42 = a4; /*0x47e799*/
      if ( v41 <= fConstant_1 ) /*0x47e79d*/
      {
        v43 = v71; /*0x47e7a7*/
        *a4 = v70; /*0x47e7ac*/
        v44 = v72; /*0x47e7ae*/
        a4[1] = v43; /*0x47e7b3*/
        a4[2] = v44; /*0x47e7b7*/
        return 1; /*0x47e7c2*/
      }
      goto LABEL_58; /*0x47e79d*/
    }
    v76 = v67 - *a2; /*0x47e7ef*/
    v77 = v68 - a2[1]; /*0x47e7fa*/
    v78 = v69 - a2[2]; /*0x47e805*/
    v73 = v70 - *a2; /*0x47e80f*/
    v74 = v71 - a2[1]; /*0x47e81a*/
    v75 = v72 - a2[2]; /*0x47e825*/
    v81 = NiPoint3_Length(&v76); /*0x47e832*/
    v45 = NiPoint3_Length(&v73); /*0x47e836*/
    v42 = a4; /*0x47e846*/
    if ( v81 < v45 ) /*0x47e84a*/
    {
LABEL_58:
      *v42 = v22; /*0x47e84c*/
      v42[1] = v23; /*0x47e84f*/
      v42[2] = v27; /*0x47e853*/
      return 1; /*0x47e85f*/
    }
    v46 = v71; /*0x47e864*/
    *a4 = v70; /*0x47e869*/
    v47 = v72; /*0x47e86b*/
    a4[1] = v46; /*0x47e870*/
    a4[2] = v47; /*0x47e874*/
    return 1; /*0x47e877*/
  }
  else
  {
    *a4 = v22; /*0x47e886*/
    a4[1] = v23; /*0x47e88d*/
    a4[2] = v27; /*0x47e891*/
    return 1; /*0x47e894*/
  }
}
