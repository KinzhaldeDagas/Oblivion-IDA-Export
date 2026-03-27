double __cdecl sub_976B10(float *a1, float *a2, float *a3, float *a4)
{
  double v6; // st7
  double v7; // st7
  double v8; // st5
  double v9; // st6
  double v10; // st4
  double v11; // st3
  double v12; // st2
  double v13; // st3
  double v14; // st2
  double v16; // st1
  double v17; // st2
  int v18; // eax
  int v19; // ecx
  int v20; // eax
  int v21; // ecx
  float v22; // [esp+0h] [ebp-24h]
  float v23; // [esp+0h] [ebp-24h]
  float v24; // [esp+0h] [ebp-24h]
  float v25; // [esp+0h] [ebp-24h]
  float v26; // [esp+0h] [ebp-24h]
  float v27; // [esp+0h] [ebp-24h]
  float v28; // [esp+0h] [ebp-24h]
  float v29; // [esp+0h] [ebp-24h]
  float v30; // [esp+4h] [ebp-20h]
  float v31; // [esp+8h] [ebp-1Ch]
  double v32; // [esp+Ch] [ebp-18h] BYREF
  float v33; // [esp+14h] [ebp-10h]
  int v34; // [esp+18h] [ebp-Ch]
  int v35; // [esp+1Ch] [ebp-8h]
  int v36; // [esp+20h] [ebp-4h]
  float v37; // [esp+28h] [ebp+4h]
  float v38; // [esp+28h] [ebp+4h]
  float v39; // [esp+28h] [ebp+4h]
  float v40; // [esp+28h] [ebp+4h]
  float v41; // [esp+28h] [ebp+4h]
  float v42; // [esp+28h] [ebp+4h]
  float v43; // [esp+28h] [ebp+4h]
  float v44; // [esp+28h] [ebp+4h]
  float v45; // [esp+28h] [ebp+4h]
  float v46; // [esp+28h] [ebp+4h]
  float v47; // [esp+28h] [ebp+4h]
  float v48; // [esp+28h] [ebp+4h]
  float v49; // [esp+28h] [ebp+4h]
  float v50; // [esp+28h] [ebp+4h]
  float v51; // [esp+28h] [ebp+4h]
  float v52; // [esp+28h] [ebp+4h]
  float v53; // [esp+28h] [ebp+4h]
  float v54; // [esp+28h] [ebp+4h]
  float v55; // [esp+28h] [ebp+4h]
  float v56; // [esp+28h] [ebp+4h]
  float v57; // [esp+28h] [ebp+4h]
  float v58; // [esp+28h] [ebp+4h]
  float v59; // [esp+28h] [ebp+4h]
  float v60; // [esp+28h] [ebp+4h]
  float v61; // [esp+28h] [ebp+4h]
  float v62; // [esp+28h] [ebp+4h]
  float v63; // [esp+28h] [ebp+4h]
  float v64; // [esp+28h] [ebp+4h]
  float v65; // [esp+28h] [ebp+4h]
  float v66; // [esp+2Ch] [ebp+8h]
  float v69; // [esp+2Ch] [ebp+8h]
  float v71; // [esp+2Ch] [ebp+8h]
  float v73; // [esp+2Ch] [ebp+8h]

  *(float *)&v32 = *a2 - *a1;
  *((float *)&v32 + 1) = a2[1] - a1[1];
  v33 = a2[2] - a1[2];
  v30 = a2[4] * a2[4] + a2[3] * a2[3] + a2[5] * a2[5];
  v37 = a2[7] * a2[4] + a2[6] * a2[3] + a2[8] * a2[5];
  v22 = a2[7] * a2[7] + a2[6] * a2[6] + a2[8] * a2[8];
  v6 = *(float *)&v32;
  *(float *)&v32 = a2[5] * v33 + a2[3] * *(float *)&v32 + a2[4] * *((float *)&v32 + 1);
  v31 = a2[7] * *((float *)&v32 + 1) + a2[6] * v6 + a2[8] * v33;
  v66 = v33 * v33 + *((float *)&v32 + 1) * *((float *)&v32 + 1) + v6 * v6;
  v7 = v37;
  v8 = v22;
  v9 = v30;
  v38 = v22 * v30 - v37 * v37;
  v39 = fabs(v38);
  if ( flt_A3C778 <= (double)v39 )
  {
    v10 = v31;
    v11 = *(float *)&v32;
    *a3 = v31 * v7 - *(float *)&v32 * v8;
    v23 = v11 * v7 - v31 * v9;
    v12 = v23;
    *a4 = v23;
    if ( *a3 >= 0.0 )
    {
      v16 = v23;
      if ( v39 >= (double)*a3 )
      {
        if ( v23 >= 0.0 )
        {
          if ( v39 >= v16 )
          {
            v52 = 1.0 / v39;
            *a3 = *a3 * v52;
            v53 = v52 * *a4;
            *a4 = v53;
            v69 = (v7 * *a4 + v9 * *a3 + dbl_A3D0C0 * v11) * *a3 + (v10 * dbl_A3D0C0 + v8 * v53 + *a3 * v7) * v53 + v66;
            return (float)fabs(v69);
          }
          *a4 = 1.0;
          v17 = v7 + v11;
          v25 = v17;
          if ( v25 >= 0.0 )
          {
            *a3 = 0.0;
            v71 = v8 + v10 + v10 + v66;
            return (float)fabs(v71);
          }
          v54 = -v25;
          if ( v54 < v9 )
          {
            v55 = v54 / v9;
            *a3 = v55;
            v66 = v25 * v55 + v8 + v10 + v10 + v66;
          }
          else
          {
            *a3 = 1.0;
            v66 = v9 + v8 + v66 + v17 + v10 + v17 + v10;
          }
        }
        else
        {
          *a4 = 0.0;
          if ( v11 >= 0.0 )
          {
            *a3 = 0.0;
            return (float)fabs(v66);
          }
          v50 = -v11;
          if ( v50 < v9 )
          {
            v51 = v50 / v9;
            *a3 = v51;
            v66 = v11 * v51 + v66;
          }
          else
          {
            *a3 = 1.0;
            v66 = v9 + v11 + v11 + v66;
          }
        }
        return (float)fabs(v66);
      }
      if ( v23 >= 0.0 )
      {
        if ( v39 < v16 )
        {
          v32 = v11 + v7;
          v28 = v32;
          v62 = -v28;
          if ( v62 < v9 )
          {
            *a4 = 1.0;
            if ( v28 < 0.0 )
            {
              v63 = v62 / v9;
              *a3 = v63;
              v66 = v28 * v63 + v8 + v10 + v10 + v66;
            }
            else
            {
              *a3 = 0.0;
              v66 = v8 + v10 + v10 + v66;
            }
            return (float)fabs(v66);
          }
          *a3 = 1.0;
          v29 = v7 + v10;
          if ( v29 < 0.0 )
          {
            v64 = -v29;
            if ( v64 < v8 )
            {
              v65 = v64 / v8;
              *a4 = v65;
              v66 = v9 + v29 * v65 + v11 + v11 + v66;
            }
            else
            {
              *a4 = 1.0;
              v66 = v9 + v8 + v66 + v10 + v32 + v10 + v32;
            }
            return (float)fabs(v66);
          }
        }
        else
        {
          *a3 = 1.0;
          v27 = v10 + v7;
          if ( v27 < 0.0 )
          {
            v60 = -v27;
            if ( v60 < v8 )
            {
              v61 = v60 / v8;
              *a4 = v61;
              v66 = v9 + v27 * v61 + v11 + v11 + v66;
            }
            else
            {
              *a4 = 1.0;
              v66 = v7 + v11 + v10 + v7 + v11 + v10 + v9 + v8 + v66;
            }
            return (float)fabs(v66);
          }
        }
      }
      else
      {
        v56 = -v11;
        if ( v56 < v9 )
        {
          *a4 = 0.0;
          if ( v11 < 0.0 )
          {
            v57 = v56 / v9;
            *a3 = v57;
            v66 = v11 * v57 + v66;
          }
          else
          {
            *a3 = 0.0;
          }
          return (float)fabs(v66);
        }
        *a3 = 1.0;
        v26 = v10 + v7;
        if ( v26 < 0.0 )
        {
          v58 = -v26;
          if ( v58 < v8 )
          {
            v59 = v58 / v8;
            *a4 = v59;
            v66 = v9 + v26 * v59 + v11 + v11 + v66;
          }
          else
          {
            *a4 = 1.0;
            v66 = v7 + v11 + v10 + v7 + v11 + v10 + v9 + v8 + v66;
          }
          return (float)fabs(v66);
        }
      }
      *a4 = 0.0;
      v73 = v9 + v11 + v11 + v66;
      return (float)fabs(v73);
    }
    if ( v12 >= 0.0 )
    {
      if ( v39 < v12 )
      {
        v13 = v7 + v11;
        v24 = v13;
        v14 = v24;
        if ( v24 < 0.0 )
        {
          *a4 = 1.0;
          v46 = -v14;
          if ( v46 < v9 )
          {
            v47 = v46 / v9;
            *a3 = v47;
            v66 = v14 * v47 + v8 + v10 + v10 + v66;
          }
          else
          {
            *a3 = 1.0;
            v66 = v9 + v8 + v66 + v13 + v10 + v13 + v10;
          }
          return (float)fabs(v66);
        }
        *a3 = 0.0;
        if ( v10 < 0.0 )
        {
          v48 = -v10;
          if ( v48 < v8 )
          {
            v49 = v48 / v8;
            *a4 = v49;
            v66 = v10 * v49 + v66;
          }
          else
          {
            *a4 = 1.0;
            v66 = v8 + v10 + v10 + v66;
          }
          return (float)fabs(v66);
        }
      }
      else
      {
        *a3 = 0.0;
        if ( v10 < 0.0 )
        {
          v44 = -v10;
          if ( v44 < v8 )
          {
            v45 = v44 / v8;
            *a4 = v45;
            v66 = v10 * v45 + v66;
          }
          else
          {
            *a4 = 1.0;
            v66 = v8 + v10 + v10 + v66;
          }
          return (float)fabs(v66);
        }
      }
    }
    else
    {
      if ( v11 < 0.0 )
      {
        *a4 = 0.0;
        v40 = -v11;
        if ( v40 < v9 )
        {
          v41 = v40 / v9;
          *a3 = v41;
          v66 = v11 * v41 + v66;
        }
        else
        {
          *a3 = 1.0;
          v66 = v9 + v11 + v11 + v66;
        }
        return (float)fabs(v66);
      }
      *a3 = 0.0;
      if ( v10 < 0.0 )
      {
        v42 = -v10;
        if ( v42 < v8 )
        {
          v43 = v42 / v8;
          *a4 = v43;
          v66 = v10 * v43 + v66;
        }
        else
        {
          *a4 = 1.0;
          v66 = v8 + v10 + v10 + v66;
        }
        return (float)fabs(v66);
      }
    }
    *a4 = 0.0;
    return (float)fabs(v66);
  }
  v32 = *(double *)a2;
  v33 = a2[2];
  if ( v9 < v8 )
  {
    v34 = *((_DWORD *)a2 + 6);
    v20 = *((_DWORD *)a2 + 7);
    v21 = *((_DWORD *)a2 + 8);
    v35 = v20;
    v36 = v21;
    *a3 = 0.0;
    return sub_96FBB0(a1, (float *)&v32, a4);
  }
  else
  {
    v34 = *((_DWORD *)a2 + 3);
    v18 = *((_DWORD *)a2 + 4);
    v19 = *((_DWORD *)a2 + 5);
    v35 = v18;
    v36 = v19;
    *a4 = 0.0;
    return sub_96FBB0(a1, (float *)&v32, a3);
  }
}
