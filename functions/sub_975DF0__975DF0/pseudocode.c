double __cdecl sub_975DF0(float *a1, float *a2, float *a3, float *a4)
{
  double v4; // st7
  double v5; // st5
  double v7; // st6
  double v8; // st4
  double v9; // st3
  double v10; // st2
  double v11; // st1
  char v12; // fps^1
  bool v13; // c0
  char v14; // c2
  bool v15; // c3
  char v16; // ah
  bool v17; // c0
  bool v18; // c3
  double v20; // st2
  double v21; // st1
  double v22; // st2
  double v23; // st1
  double v24; // rt1
  double v25; // st1
  double v26; // st7
  float v27; // [esp+0h] [ebp-1Ch]
  float v28; // [esp+4h] [ebp-18h]
  float v29; // [esp+8h] [ebp-14h]
  float v30; // [esp+Ch] [ebp-10h]
  float v31; // [esp+10h] [ebp-Ch]
  float v32; // [esp+14h] [ebp-8h]
  float v33; // [esp+18h] [ebp-4h]
  float v34; // [esp+20h] [ebp+4h]
  float v35; // [esp+20h] [ebp+4h]
  float v36; // [esp+20h] [ebp+4h]
  float v37; // [esp+20h] [ebp+4h]
  float v38; // [esp+20h] [ebp+4h]
  float v39; // [esp+20h] [ebp+4h]
  float v40; // [esp+20h] [ebp+4h]
  float v41; // [esp+20h] [ebp+4h]
  float v42; // [esp+20h] [ebp+4h]
  float v43; // [esp+20h] [ebp+4h]
  float v44; // [esp+20h] [ebp+4h]
  float v45; // [esp+20h] [ebp+4h]
  float v46; // [esp+20h] [ebp+4h]
  float v47; // [esp+20h] [ebp+4h]
  float v48; // [esp+20h] [ebp+4h]
  float v49; // [esp+20h] [ebp+4h]
  float v50; // [esp+20h] [ebp+4h]
  float v51; // [esp+20h] [ebp+4h]
  float v52; // [esp+20h] [ebp+4h]
  float v53; // [esp+20h] [ebp+4h]
  float v54; // [esp+20h] [ebp+4h]
  float v55; // [esp+20h] [ebp+4h]
  float v56; // [esp+20h] [ebp+4h]
  float v57; // [esp+24h] [ebp+8h]
  float v60; // [esp+24h] [ebp+8h]
  float v62; // [esp+24h] [ebp+8h]
  float v64; // [esp+24h] [ebp+8h]
  float v66; // [esp+24h] [ebp+8h]
  float v69; // [esp+28h] [ebp+Ch]
  float v70; // [esp+28h] [ebp+Ch]
  float v71; // [esp+28h] [ebp+Ch]
  float v72; // [esp+28h] [ebp+Ch]
  float v73; // [esp+28h] [ebp+Ch]
  float v74; // [esp+28h] [ebp+Ch]

  v31 = *a2 - *a1; /*0x975dff*/
  v32 = a2[1] - a1[1]; /*0x975e09*/
  v33 = a2[2] - a1[2]; /*0x975e13*/
  v28 = a2[4] * a2[4] + a2[3] * a2[3] + a2[5] * a2[5]; /*0x975e2d*/
  v34 = a2[7] * a2[4] + a2[6] * a2[3] + a2[8] * a2[5]; /*0x975e47*/
  v27 = a2[7] * a2[7] + a2[6] * a2[6] + a2[8] * a2[8]; /*0x975e61*/
  v30 = a2[5] * v33 + a2[3] * v31 + a2[4] * v32; /*0x975e8d*/
  v29 = a2[7] * v32 + a2[6] * v31 + a2[8] * v33; /*0x975ea4*/
  v57 = v33 * v33 + v32 * v32 + v31 * v31; /*0x975eba*/
  v4 = v34; /*0x975ebe*/
  v5 = v27; /*0x975ec4*/
  v7 = v28; /*0x975ee1*/
  v35 = v27 * v28 - v34 * v34; /*0x975ee3*/
  v36 = fabs(v35); /*0x975eed*/
  v8 = v29; /*0x975ef9*/
  v9 = v30; /*0x975f0b*/
  *a3 = v29 * v4 - v30 * v27; /*0x975f0d*/
  v69 = v30 * v4 - v29 * v28; /*0x975f19*/
  v10 = v69; /*0x975f1d*/
  *a4 = v69; /*0x975f21*/
  v11 = v69 + *a3; /*0x975f25*/
  v13 = v36 < v11; /*0x975f2b*/
  v14 = 0; /*0x975f2b*/
  v15 = v36 == v11; /*0x975f2b*/
  v16 = v12; /*0x975f2d*/
  v17 = *a3 > 0.0; /*0x975f31*/
  v18 = 0.0 == *a3; /*0x975f31*/
  if ( (v16 & 1) == 0 ) /*0x975f38*/
  {
    if ( v17 || v18 ) /*0x975f3e*/
    {
      if ( v10 >= 0.0 ) /*0x9760ef*/
      {
        v45 = 1.0 / v36; /*0x97618f*/
        *a3 = *a3 * v45; /*0x97619f*/
        v46 = v45 * *a4; /*0x9761a3*/
        *a4 = v46; /*0x9761ab*/
        v60 = (v4 * *a4 + v7 * *a3 + dbl_A3D0C0 * v9) * *a3 + (v8 * dbl_A3D0C0 + v5 * v46 + *a3 * v4) * v46 + v57; /*0x9761e1*/
        return (float)fabs(v60); /*0x9761f6*/
      }
      *a4 = 0.0; /*0x9760fd*/
      if ( v9 >= 0.0 ) /*0x976106*/
      {
        *a3 = 0.0; /*0x97610c*/
        return (float)fabs(v57); /*0x97611f*/
      }
      v43 = -v9; /*0x976126*/
      if ( v43 < v7 ) /*0x976135*/
      {
        v44 = v43 / v7; /*0x97615f*/
        *a3 = v44; /*0x976167*/
        v57 = v9 * v44 + v57; /*0x97616f*/
      }
      else
      {
        *a3 = 1.0; /*0x97613b*/
        v57 = v7 + v9 + v9 + v57; /*0x976147*/
      }
      return (float)fabs(v57); /*0x976151*/
    }
    if ( v10 >= 0.0 ) /*0x975f50*/
    {
      *a3 = 0.0; /*0x97605e*/
      if ( v8 < 0.0 ) /*0x976067*/
      {
        v41 = -v8; /*0x976087*/
        if ( v41 < v5 ) /*0x976096*/
        {
          v42 = v41 / v5; /*0x9760c0*/
          *a4 = v42; /*0x9760c8*/
          v57 = v8 * v42 + v57; /*0x9760d0*/
        }
        else
        {
          *a4 = 1.0; /*0x97609c*/
          v57 = v5 + v8 + v8 + v57; /*0x9760a6*/
        }
        return (float)fabs(v57); /*0x9760b0*/
      }
    }
    else
    {
      if ( v9 < 0.0 ) /*0x975f5d*/
      {
        *a4 = 0.0; /*0x975f65*/
        v37 = -v9; /*0x975f6b*/
        if ( v37 < v7 ) /*0x975f7a*/
        {
          v38 = v37 / v7; /*0x975fa4*/
          *a3 = v38; /*0x975fac*/
          v57 = v9 * v38 + v57; /*0x975fb4*/
        }
        else
        {
          *a3 = 1.0; /*0x975f80*/
          v57 = v7 + v9 + v9 + v57; /*0x975f8c*/
        }
        return (float)fabs(v57); /*0x975f96*/
      }
      *a3 = 0.0; /*0x975fd0*/
      if ( v8 < 0.0 ) /*0x975fd9*/
      {
        v39 = -v8; /*0x975ff9*/
        if ( v39 < v5 ) /*0x976008*/
        {
          v40 = v39 / v5; /*0x976032*/
          *a4 = v40; /*0x97603a*/
          v57 = v8 * v40 + v57; /*0x976042*/
        }
        else
        {
          *a4 = 1.0; /*0x97600e*/
          v57 = v5 + v8 + v8 + v57; /*0x976018*/
        }
        return (float)fabs(v57); /*0x976022*/
      }
    }
    *a4 = 0.0; /*0x975fdf*/
    return (float)fabs(v57); /*0x975ff2*/
  }
  if ( v17 || v18 ) /*0x9761f7*/
  {
    if ( v10 >= 0.0 ) /*0x976357*/
    {
      v74 = v8 + v5 - (v9 + v4); /*0x9764b3*/
      if ( v74 <= 0.0 ) /*0x9764c4*/
      {
        *a3 = 0.0; /*0x9764d0*/
        *a4 = 1.0; /*0x9764d4*/
        v66 = v5 + v8 + v8 + v57; /*0x9764e0*/
        return (float)fabs(v66); /*0x9764f5*/
      }
      v24 = dbl_A3D0C0; /*0x976502*/
      v25 = v7 - v4 * v24 + v5; /*0x97650a*/
      v26 = v24; /*0x97650a*/
      v55 = v25; /*0x97650c*/
      if ( v55 > (double)v74 ) /*0x97651b*/
      {
        v56 = v74 / v55; /*0x976553*/
        *a3 = v56; /*0x97655b*/
        *a4 = 1.0 - v56; /*0x976561*/
        v57 = v26 * v8 + v5 + v57 - v74 * *a3; /*0x976571*/
      }
      else
      {
        *a3 = 1.0; /*0x976525*/
        *a4 = 0.0; /*0x976529*/
        v57 = v26 * v9 + v7 + v57; /*0x976533*/
      }
    }
    else
    {
      v51 = v8 + v4; /*0x97635f*/
      v72 = v9 + v7; /*0x976367*/
      v22 = v72; /*0x97636b*/
      if ( v51 >= (double)v72 ) /*0x97637a*/
      {
        *a4 = 0.0; /*0x976429*/
        if ( v22 <= 0.0 ) /*0x976434*/
        {
          *a3 = 1.0; /*0x97643a*/
          v64 = v7 + v9 + v9 + v57; /*0x976446*/
          return (float)fabs(v64); /*0x97645b*/
        }
        if ( v9 < 0.0 ) /*0x976463*/
        {
          v54 = -v9 / v7; /*0x976485*/
          *a3 = v54; /*0x97648d*/
          v57 = v9 * v54 + v57; /*0x976495*/
        }
        else
        {
          *a3 = 0.0; /*0x976469*/
        }
      }
      else
      {
        v73 = v22 - v51; /*0x976384*/
        v23 = dbl_A3D0C0; /*0x97638a*/
        v52 = v7 - v4 * v23 + v5; /*0x97639c*/
        if ( v52 > (double)v73 ) /*0x9763af*/
        {
          v53 = v73 / v52; /*0x9763e9*/
          *a4 = v53; /*0x9763f1*/
          *a3 = 1.0 - v53; /*0x9763f7*/
          v57 = v7 + v23 * v9 + v57 - v73 * *a4; /*0x97640b*/
        }
        else
        {
          *a4 = 1.0; /*0x9763b9*/
          *a3 = 0.0; /*0x9763bd*/
          v57 = v23 * v8 + v5 + v57; /*0x9763c9*/
        }
      }
    }
  }
  else
  {
    v47 = v9 + v4; /*0x976208*/
    v70 = v8 + v5; /*0x976210*/
    v20 = v70; /*0x976214*/
    if ( v47 >= (double)v70 ) /*0x976223*/
    {
      *a3 = 0.0; /*0x9762cc*/
      if ( v20 <= 0.0 ) /*0x9762d7*/
      {
        *a4 = 1.0; /*0x9762dd*/
        v62 = v5 + v8 + v8 + v57; /*0x9762e7*/
        return (float)fabs(v62); /*0x9762fc*/
      }
      if ( v8 < 0.0 ) /*0x976306*/
      {
        v50 = -v8 / v27; /*0x976328*/
        *a4 = v50; /*0x976330*/
        v57 = v8 * v50 + v57; /*0x976338*/
      }
      else
      {
        *a4 = 0.0; /*0x97630c*/
      }
    }
    else
    {
      v71 = v20 - v47; /*0x97622d*/
      v21 = dbl_A3D0C0; /*0x976233*/
      v48 = v7 - v4 * v21 + v5; /*0x976245*/
      if ( v48 > (double)v71 ) /*0x976258*/
      {
        v49 = v71 / v48; /*0x976290*/
        *a3 = v49; /*0x976298*/
        *a4 = 1.0 - v49; /*0x97629e*/
        v57 = v21 * v8 + v5 + v57 - v71 * *a3; /*0x9762ae*/
      }
      else
      {
        *a3 = 1.0; /*0x976262*/
        *a4 = 0.0; /*0x976266*/
        v57 = v21 * v9 + v7 + v57; /*0x976270*/
      }
    }
  }
  return (float)fabs(v57); /*0x975f9e*/
}
