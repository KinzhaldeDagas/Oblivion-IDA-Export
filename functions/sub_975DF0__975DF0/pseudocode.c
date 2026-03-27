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

  v31 = *a2 - *a1;
  v32 = a2[1] - a1[1];
  v33 = a2[2] - a1[2];
  v28 = a2[4] * a2[4] + a2[3] * a2[3] + a2[5] * a2[5];
  v34 = a2[7] * a2[4] + a2[6] * a2[3] + a2[8] * a2[5];
  v27 = a2[7] * a2[7] + a2[6] * a2[6] + a2[8] * a2[8];
  v30 = a2[5] * v33 + a2[3] * v31 + a2[4] * v32;
  v29 = a2[7] * v32 + a2[6] * v31 + a2[8] * v33;
  v57 = v33 * v33 + v32 * v32 + v31 * v31;
  v4 = v34;
  v5 = v27;
  v7 = v28;
  v35 = v27 * v28 - v34 * v34;
  v36 = fabs(v35);
  v8 = v29;
  v9 = v30;
  *a3 = v29 * v4 - v30 * v27;
  v69 = v30 * v4 - v29 * v28;
  v10 = v69;
  *a4 = v69;
  v11 = v69 + *a3;
  v13 = v36 < v11;
  v14 = 0;
  v15 = v36 == v11;
  v16 = v12;
  v17 = *a3 > 0.0;
  v18 = 0.0 == *a3;
  if ( (v16 & 1) == 0 )
  {
    if ( v17 || v18 )
    {
      if ( v10 >= 0.0 )
      {
        v45 = 1.0 / v36;
        *a3 = *a3 * v45;
        v46 = v45 * *a4;
        *a4 = v46;
        v60 = (v4 * *a4 + v7 * *a3 + dbl_A3D0C0 * v9) * *a3 + (v8 * dbl_A3D0C0 + v5 * v46 + *a3 * v4) * v46 + v57;
        return (float)fabs(v60);
      }
      *a4 = 0.0;
      if ( v9 >= 0.0 )
      {
        *a3 = 0.0;
        return (float)fabs(v57);
      }
      v43 = -v9;
      if ( v43 < v7 )
      {
        v44 = v43 / v7;
        *a3 = v44;
        v57 = v9 * v44 + v57;
      }
      else
      {
        *a3 = 1.0;
        v57 = v7 + v9 + v9 + v57;
      }
      return (float)fabs(v57);
    }
    if ( v10 >= 0.0 )
    {
      *a3 = 0.0;
      if ( v8 < 0.0 )
      {
        v41 = -v8;
        if ( v41 < v5 )
        {
          v42 = v41 / v5;
          *a4 = v42;
          v57 = v8 * v42 + v57;
        }
        else
        {
          *a4 = 1.0;
          v57 = v5 + v8 + v8 + v57;
        }
        return (float)fabs(v57);
      }
    }
    else
    {
      if ( v9 < 0.0 )
      {
        *a4 = 0.0;
        v37 = -v9;
        if ( v37 < v7 )
        {
          v38 = v37 / v7;
          *a3 = v38;
          v57 = v9 * v38 + v57;
        }
        else
        {
          *a3 = 1.0;
          v57 = v7 + v9 + v9 + v57;
        }
        return (float)fabs(v57);
      }
      *a3 = 0.0;
      if ( v8 < 0.0 )
      {
        v39 = -v8;
        if ( v39 < v5 )
        {
          v40 = v39 / v5;
          *a4 = v40;
          v57 = v8 * v40 + v57;
        }
        else
        {
          *a4 = 1.0;
          v57 = v5 + v8 + v8 + v57;
        }
        return (float)fabs(v57);
      }
    }
    *a4 = 0.0;
    return (float)fabs(v57);
  }
  if ( v17 || v18 )
  {
    if ( v10 >= 0.0 )
    {
      v74 = v8 + v5 - (v9 + v4);
      if ( v74 <= 0.0 )
      {
        *a3 = 0.0;
        *a4 = 1.0;
        v66 = v5 + v8 + v8 + v57;
        return (float)fabs(v66);
      }
      v24 = dbl_A3D0C0;
      v25 = v7 - v4 * v24 + v5;
      v26 = v24;
      v55 = v25;
      if ( v55 > (double)v74 )
      {
        v56 = v74 / v55;
        *a3 = v56;
        *a4 = 1.0 - v56;
        v57 = v26 * v8 + v5 + v57 - v74 * *a3;
      }
      else
      {
        *a3 = 1.0;
        *a4 = 0.0;
        v57 = v26 * v9 + v7 + v57;
      }
    }
    else
    {
      v51 = v8 + v4;
      v72 = v9 + v7;
      v22 = v72;
      if ( v51 >= (double)v72 )
      {
        *a4 = 0.0;
        if ( v22 <= 0.0 )
        {
          *a3 = 1.0;
          v64 = v7 + v9 + v9 + v57;
          return (float)fabs(v64);
        }
        if ( v9 < 0.0 )
        {
          v54 = -v9 / v7;
          *a3 = v54;
          v57 = v9 * v54 + v57;
        }
        else
        {
          *a3 = 0.0;
        }
      }
      else
      {
        v73 = v22 - v51;
        v23 = dbl_A3D0C0;
        v52 = v7 - v4 * v23 + v5;
        if ( v52 > (double)v73 )
        {
          v53 = v73 / v52;
          *a4 = v53;
          *a3 = 1.0 - v53;
          v57 = v7 + v23 * v9 + v57 - v73 * *a4;
        }
        else
        {
          *a4 = 1.0;
          *a3 = 0.0;
          v57 = v23 * v8 + v5 + v57;
        }
      }
    }
  }
  else
  {
    v47 = v9 + v4;
    v70 = v8 + v5;
    v20 = v70;
    if ( v47 >= (double)v70 )
    {
      *a3 = 0.0;
      if ( v20 <= 0.0 )
      {
        *a4 = 1.0;
        v62 = v5 + v8 + v8 + v57;
        return (float)fabs(v62);
      }
      if ( v8 < 0.0 )
      {
        v50 = -v8 / v27;
        *a4 = v50;
        v57 = v8 * v50 + v57;
      }
      else
      {
        *a4 = 0.0;
      }
    }
    else
    {
      v71 = v20 - v47;
      v21 = dbl_A3D0C0;
      v48 = v7 - v4 * v21 + v5;
      if ( v48 > (double)v71 )
      {
        v49 = v71 / v48;
        *a3 = v49;
        *a4 = 1.0 - v49;
        v57 = v21 * v8 + v5 + v57 - v71 * *a3;
      }
      else
      {
        *a3 = 1.0;
        *a4 = 0.0;
        v57 = v21 * v9 + v7 + v57;
      }
    }
  }
  return (float)fabs(v57);
}
