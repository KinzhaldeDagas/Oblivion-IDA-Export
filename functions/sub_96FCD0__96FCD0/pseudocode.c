double __cdecl sub_96FCD0(float *a1, float *a2, float *a3, float *a4)
{
  double v6; // st7
  double v7; // st5
  double v8; // st6
  double v9; // st4
  double v10; // st3
  double v11; // st2
  double v12; // st1
  double v14; // st2
  double v15; // st2
  double v16; // st2
  double v17; // st2
  double v18; // st7
  double v19; // st3
  double v20; // st4
  double v21; // st2
  float v22; // [esp+0h] [ebp-1Ch]
  float v23; // [esp+0h] [ebp-1Ch]
  float v24; // [esp+0h] [ebp-1Ch]
  float v25; // [esp+0h] [ebp-1Ch]
  float v26; // [esp+0h] [ebp-1Ch]
  float v27; // [esp+0h] [ebp-1Ch]
  float v28; // [esp+0h] [ebp-1Ch]
  float v29; // [esp+0h] [ebp-1Ch]
  float v30; // [esp+4h] [ebp-18h]
  float v31; // [esp+4h] [ebp-18h]
  float v32; // [esp+8h] [ebp-14h]
  float v33; // [esp+Ch] [ebp-10h]
  float v34; // [esp+Ch] [ebp-10h]
  float v35; // [esp+10h] [ebp-Ch]
  float v36; // [esp+10h] [ebp-Ch]
  float v37; // [esp+14h] [ebp-8h]
  float v38; // [esp+14h] [ebp-8h]
  float v39; // [esp+18h] [ebp-4h]
  float v40; // [esp+18h] [ebp-4h]
  float v41; // [esp+20h] [ebp+4h]
  float v42; // [esp+20h] [ebp+4h]
  float v43; // [esp+20h] [ebp+4h]
  float v44; // [esp+20h] [ebp+4h]
  float v46; // [esp+20h] [ebp+4h]
  float v49; // [esp+20h] [ebp+4h]
  float v51; // [esp+20h] [ebp+4h]
  float v54; // [esp+20h] [ebp+4h]
  float v57; // [esp+20h] [ebp+4h]
  float v59; // [esp+20h] [ebp+4h]
  float v61; // [esp+20h] [ebp+4h]
  float v64; // [esp+24h] [ebp+8h]
  float v65; // [esp+24h] [ebp+8h]
  float v66; // [esp+24h] [ebp+8h]
  float v67; // [esp+24h] [ebp+8h]
  float v68; // [esp+24h] [ebp+8h]
  float v69; // [esp+24h] [ebp+8h]
  float v70; // [esp+24h] [ebp+8h]
  float v71; // [esp+24h] [ebp+8h]
  float v72; // [esp+24h] [ebp+8h]
  float v73; // [esp+24h] [ebp+8h]
  float v74; // [esp+24h] [ebp+8h]
  float v75; // [esp+24h] [ebp+8h]
  float v76; // [esp+24h] [ebp+8h]
  float v77; // [esp+24h] [ebp+8h]
  float v78; // [esp+24h] [ebp+8h]
  float v79; // [esp+24h] [ebp+8h]
  float v80; // [esp+24h] [ebp+8h]
  float v81; // [esp+24h] [ebp+8h]
  float v82; // [esp+24h] [ebp+8h]
  float v83; // [esp+24h] [ebp+8h]
  float v84; // [esp+24h] [ebp+8h]
  float v85; // [esp+24h] [ebp+8h]
  float v86; // [esp+24h] [ebp+8h]
  float v87; // [esp+24h] [ebp+8h]
  float v88; // [esp+24h] [ebp+8h]
  float v89; // [esp+24h] [ebp+8h]
  float v90; // [esp+24h] [ebp+8h]
  float v91; // [esp+24h] [ebp+8h]
  float v92; // [esp+24h] [ebp+8h]
  float v93; // [esp+24h] [ebp+8h]
  float v94; // [esp+24h] [ebp+8h]
  float v95; // [esp+24h] [ebp+8h]
  float v96; // [esp+24h] [ebp+8h]
  float v97; // [esp+24h] [ebp+8h]

  v35 = *a1 - *a2;
  v37 = a1[1] - a2[1];
  v39 = a1[2] - a2[2];
  v33 = a1[4] * a1[4] + a1[3] * a1[3] + a1[5] * a1[5];
  v41 = a2[4] * a1[4] + a2[3] * a1[3] + a2[5] * a1[5];
  v64 = -v41;
  v32 = a2[4] * a2[4] + a2[3] * a2[3] + a2[5] * a2[5];
  v22 = a1[5] * v39 + a1[3] * v35 + a1[4] * v37;
  v42 = a2[4] * v37 + a2[3] * v35 + a2[5] * v39;
  v30 = -v42;
  v43 = v39 * v39 + v37 * v37 + v35 * v35;
  v6 = v64;
  v7 = v32;
  v8 = v33;
  v65 = v32 * v33 - v64 * v64;
  v66 = fabs(v65);
  v36 = a1[4] * a2[5] - a1[5] * a2[4];
  v38 = a2[3] * a1[5] - a1[3] * a2[5];
  v40 = a1[3] * a2[4] - a2[3] * a1[4];
  v34 = v38 * v38 + v36 * v36 + v40 * v40;
  if ( v34 <= (double)flt_A372CC )
  {
    v19 = v22;
    if ( v6 <= 0.0 )
    {
      v96 = -v19;
      if ( v96 >= v8 )
      {
        *a3 = 1.0;
        *a4 = 0.0;
        v59 = v8 + v19 + v19 + v43;
        return (float)fabs(v59);
      }
      v21 = v22;
      if ( v22 <= 0.0 )
      {
        *a3 = v96 / v8;
        *a4 = 0.0;
        v61 = v21 * *a3 + v43;
        return (float)fabs(v61);
      }
      *a3 = 0.0;
      if ( -v6 > v21 )
      {
        v97 = v96 / v6;
        *a4 = v97;
        v43 = (v7 * v97 + v30 + v30) * v97 + v43;
      }
      else
      {
        *a4 = 1.0;
        v43 = v7 + v30 + v30 + v43;
      }
    }
    else
    {
      if ( v19 >= 0.0 )
      {
        *a3 = 0.0;
        *a4 = 0.0;
        return (float)fabs(v43);
      }
      v93 = -v19;
      if ( v93 <= v8 )
      {
        *a3 = v93 / v8;
        *a4 = 0.0;
        v57 = v19 * *a3 + v43;
        return (float)fabs(v57);
      }
      v20 = v22;
      *a3 = 1.0;
      v29 = v22 + v8;
      v94 = -v29;
      if ( v94 < v6 )
      {
        v95 = v94 / v6;
        *a4 = v95;
        v43 = (v7 * v95 + (v6 + v30) * dbl_A3D0C0) * v95 + v8 + dbl_A3D0C0 * v20 + v43;
      }
      else
      {
        *a4 = 1.0;
        v43 = v6 + v20 + v30 + v6 + v20 + v30 + v8 + v7 + v43;
      }
    }
  }
  else
  {
    v9 = v30;
    v10 = v22;
    *a3 = v30 * v6 - v22 * v7;
    v31 = v22 * v6 - v30 * v8;
    v11 = v31;
    *a4 = v31;
    if ( *a3 < 0.0 )
    {
      if ( v11 < 0.0 )
      {
        if ( v10 < 0.0 )
        {
          *a4 = 0.0;
          v89 = -v10;
          if ( v89 < v8 )
          {
            v90 = v89 / v8;
            *a3 = v90;
            v43 = v10 * v90 + v43;
          }
          else
          {
            *a3 = 1.0;
            v43 = v8 + v10 + v10 + v43;
          }
          return (float)fabs(v43);
        }
        *a3 = 0.0;
        if ( v9 < 0.0 )
        {
          v91 = -v9;
          if ( v91 < v7 )
          {
            v92 = v91 / v7;
            *a4 = v92;
            v43 = v9 * v92 + v43;
          }
          else
          {
            *a4 = 1.0;
            v43 = v7 + v9 + v9 + v43;
          }
          return (float)fabs(v43);
        }
      }
      else
      {
        if ( v66 < v11 )
        {
          v28 = v6 + v10;
          if ( v28 >= 0.0 )
          {
            *a3 = 0.0;
            v87 = v9 + v7;
            if ( v87 <= 0.0 )
            {
              *a4 = 1.0;
              v54 = v7 + v9 + v9 + v43;
              return (float)fabs(v54);
            }
            if ( v9 < 0.0 )
            {
              v88 = -v9 / v7;
              *a4 = v88;
              v43 = v9 * v88 + v43;
            }
            else
            {
              *a4 = 0.0;
            }
          }
          else
          {
            v18 = v28;
            *a4 = 1.0;
            v85 = -v28;
            if ( v85 < v8 )
            {
              v86 = v85 / v8;
              *a3 = v86;
              v43 = v18 * v86 + v7 + v9 + v9 + v43;
            }
            else
            {
              *a3 = 1.0;
              v43 = v8 + v7 + v43 + v18 + v9 + v18 + v9;
            }
          }
          return (float)fabs(v43);
        }
        *a3 = 0.0;
        if ( v9 < 0.0 )
        {
          v83 = -v9;
          if ( v83 < v7 )
          {
            v84 = v83 / v7;
            *a4 = v84;
            v43 = v9 * v84 + v43;
          }
          else
          {
            *a4 = 1.0;
            v43 = v7 + v9 + v9 + v43;
          }
          return (float)fabs(v43);
        }
      }
      *a4 = 0.0;
      return (float)fabs(v43);
    }
    v12 = v31;
    if ( v66 >= (double)*a3 )
    {
      if ( v31 < 0.0 )
      {
        *a4 = 0.0;
        if ( v10 >= 0.0 )
        {
          *a3 = 0.0;
          return (float)fabs(v43);
        }
        v71 = -v10;
        if ( v71 < v8 )
        {
          v72 = v71 / v8;
          *a3 = v72;
          v43 = v10 * v72 + v43;
        }
        else
        {
          *a3 = 1.0;
          v43 = v8 + v10 + v10 + v43;
        }
      }
      else
      {
        if ( v66 >= v12 )
        {
          v67 = 1.0 / v66;
          *a3 = *a3 * v67;
          v68 = v67 * *a4;
          *a4 = v68;
          v44 = (v6 * *a4 + v8 * *a3 + dbl_A3D0C0 * v10) * *a3 + (v9 * dbl_A3D0C0 + v7 * v68 + *a3 * v6) * v68 + v43;
          return (float)fabs(v44);
        }
        *a4 = 1.0;
        v23 = v6 + v10;
        if ( v23 >= 0.0 )
        {
          *a3 = 0.0;
          v46 = v7 + v9 + v9 + v43;
          return (float)fabs(v46);
        }
        v14 = v23;
        v69 = -v23;
        if ( v69 < v8 )
        {
          v70 = v69 / v8;
          *a3 = v70;
          v43 = v14 * v70 + v7 + v9 + v9 + v43;
        }
        else
        {
          *a3 = 1.0;
          v43 = v8 + v7 + v43 + v14 + v9 + v14 + v9;
        }
      }
      return (float)fabs(v43);
    }
    if ( v31 < 0.0 )
    {
      v79 = -v10;
      if ( v79 >= v8 )
      {
        *a3 = 1.0;
        v27 = v6 + v9;
        if ( v27 >= 0.0 )
          goto LABEL_20;
        v17 = v27;
        v81 = -v27;
        if ( v81 < v7 )
        {
          v82 = v81 / v7;
          *a4 = v82;
          v43 = v8 + v17 * v82 + v10 + v10 + v43;
        }
        else
        {
          *a4 = 1.0;
          v43 = v8 + v7 + v43 + v17 + v10 + v17 + v10;
        }
      }
      else
      {
        *a4 = 0.0;
        if ( v10 < 0.0 )
        {
          v80 = v79 / v8;
          *a3 = v80;
          v43 = v10 * v80 + v43;
        }
        else
        {
          *a3 = 0.0;
        }
      }
    }
    else
    {
      if ( v66 < v12 )
      {
        v25 = v10 + v6;
        v75 = -v25;
        if ( v75 > v8 )
        {
          *a3 = 1.0;
          v26 = v6 + v9;
          v16 = v26;
          v77 = -v26;
          if ( v77 >= v7 )
          {
            *a4 = 1.0;
            v51 = v8 + v7 + v43 + v16 + v10 + v16 + v10;
            return (float)fabs(v51);
          }
          if ( v16 <= 0.0 )
          {
            v78 = v77 / v7;
            *a4 = v78;
            v43 = v8 + v16 * v78 + v10 + v10 + v43;
          }
          else
          {
            *a4 = 0.0;
            v43 = v8 + v10 + v10 + v43;
          }
        }
        else
        {
          *a4 = 1.0;
          if ( v25 < 0.0 )
          {
            v76 = v75 / v8;
            *a3 = v76;
            v43 = v25 * v76 + v7 + v9 + v9 + v43;
          }
          else
          {
            *a3 = 0.0;
            v43 = v7 + v9 + v9 + v43;
          }
        }
        return (float)fabs(v43);
      }
      *a3 = 1.0;
      v24 = v6 + v9;
      if ( v24 >= 0.0 )
      {
LABEL_20:
        *a4 = 0.0;
        v49 = v8 + v10 + v10 + v43;
        return (float)fabs(v49);
      }
      v15 = v24;
      v73 = -v24;
      if ( v73 < v7 )
      {
        v74 = v73 / v7;
        *a4 = v74;
        v43 = v8 + v15 * v74 + v10 + v10 + v43;
      }
      else
      {
        *a4 = 1.0;
        v43 = v8 + v7 + v43 + v15 + v10 + v15 + v10;
      }
    }
  }
  return (float)fabs(v43);
}
