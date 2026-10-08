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

  *(float *)&v32 = *a2 - *a1; /*0x976b1f*/
  *((float *)&v32 + 1) = a2[1] - a1[1]; /*0x976b29*/
  v33 = a2[2] - a1[2]; /*0x976b33*/
  v30 = a2[4] * a2[4] + a2[3] * a2[3] + a2[5] * a2[5]; /*0x976b4d*/
  v37 = a2[7] * a2[4] + a2[6] * a2[3] + a2[8] * a2[5]; /*0x976b67*/
  v22 = a2[7] * a2[7] + a2[6] * a2[6] + a2[8] * a2[8]; /*0x976b81*/
  v6 = *(float *)&v32; /*0x976b9a*/
  *(float *)&v32 = a2[5] * v33 + a2[3] * *(float *)&v32 + a2[4] * *((float *)&v32 + 1); /*0x976bad*/
  v31 = a2[7] * *((float *)&v32 + 1) + a2[6] * v6 + a2[8] * v33; /*0x976bc4*/
  v66 = v33 * v33 + *((float *)&v32 + 1) * *((float *)&v32 + 1) + v6 * v6; /*0x976bda*/
  v7 = v37; /*0x976bde*/
  v8 = v22; /*0x976be4*/
  v9 = v30; /*0x976bf9*/
  v38 = v22 * v30 - v37 * v37; /*0x976bfb*/
  v39 = fabs(v38); /*0x976c05*/
  if ( flt_A3C778 <= (double)v39 ) /*0x976c20*/
  {
    v10 = v31; /*0x976c26*/
    v11 = *(float *)&v32; /*0x976c40*/
    *a3 = v31 * v7 - *(float *)&v32 * v8; /*0x976c42*/
    v23 = v11 * v7 - v31 * v9; /*0x976c4e*/
    v12 = v23; /*0x976c51*/
    *a4 = v23; /*0x976c54*/
    if ( *a3 >= 0.0 ) /*0x976c5f*/
    {
      v16 = v23; /*0x976f49*/
      if ( v39 >= (double)*a3 ) /*0x976f53*/
      {
        if ( v23 >= 0.0 ) /*0x976f5c*/
        {
          if ( v39 >= v16 ) /*0x976ffd*/
          {
            v52 = 1.0 / v39; /*0x977009*/
            *a3 = *a3 * v52; /*0x977019*/
            v53 = v52 * *a4; /*0x97701d*/
            *a4 = v53; /*0x977025*/
            v69 = (v7 * *a4 + v9 * *a3 + dbl_A3D0C0 * v11) * *a3 + (v10 * dbl_A3D0C0 + v8 * v53 + *a3 * v7) * v53 + v66; /*0x97705b*/
            return (float)fabs(v69); /*0x977070*/
          }
          *a4 = 1.0; /*0x977073*/
          v17 = v7 + v11; /*0x977079*/
          v25 = v17; /*0x97707b*/
          if ( v25 >= 0.0 ) /*0x977088*/
          {
            *a3 = 0.0; /*0x977094*/
            v71 = v8 + v10 + v10 + v66; /*0x97709e*/
            return (float)fabs(v71); /*0x9770b3*/
          }
          v54 = -v25; /*0x9770ba*/
          if ( v54 < v9 ) /*0x9770c9*/
          {
            v55 = v54 / v9; /*0x977103*/
            *a3 = v55; /*0x97710b*/
            v66 = v25 * v55 + v8 + v10 + v10 + v66; /*0x977119*/
          }
          else
          {
            *a3 = 1.0; /*0x9770cd*/
            v66 = v9 + v8 + v66 + v17 + v10 + v17 + v10; /*0x9770e1*/
          }
        }
        else
        {
          *a4 = 0.0; /*0x976f6a*/
          if ( v11 >= 0.0 ) /*0x976f73*/
          {
            *a3 = 0.0; /*0x976f79*/
            return (float)fabs(v66); /*0x976f8c*/
          }
          v50 = -v11; /*0x976f93*/
          if ( v50 < v9 ) /*0x976fa2*/
          {
            v51 = v50 / v9; /*0x976fcc*/
            *a3 = v51; /*0x976fd4*/
            v66 = v11 * v51 + v66; /*0x976fdc*/
          }
          else
          {
            *a3 = 1.0; /*0x976fa8*/
            v66 = v9 + v11 + v11 + v66; /*0x976fb4*/
          }
        }
        return (float)fabs(v66); /*0x976fbe*/
      }
      if ( v23 >= 0.0 ) /*0x977132*/
      {
        if ( v39 < v16 ) /*0x977271*/
        {
          v32 = v11 + v7; /*0x97733b*/
          v28 = v32; /*0x97733f*/
          v62 = -v28; /*0x977347*/
          if ( v62 < v9 ) /*0x977356*/
          {
            *a4 = 1.0; /*0x97735e*/
            if ( v28 < 0.0 ) /*0x97736a*/
            {
              v63 = v62 / v9; /*0x97739c*/
              *a3 = v63; /*0x9773a4*/
              v66 = v28 * v63 + v8 + v10 + v10 + v66; /*0x9773b2*/
            }
            else
            {
              *a3 = 0.0; /*0x977372*/
              v66 = v8 + v10 + v10 + v66; /*0x97737c*/
            }
            return (float)fabs(v66); /*0x977386*/
          }
          *a3 = 1.0; /*0x9773ca*/
          v29 = v7 + v10; /*0x9773d2*/
          if ( v29 < 0.0 ) /*0x9773df*/
          {
            v64 = -v29; /*0x977411*/
            if ( v64 < v8 ) /*0x977420*/
            {
              v65 = v64 / v8; /*0x97745a*/
              *a4 = v65; /*0x977462*/
              v66 = v9 + v29 * v65 + v11 + v11 + v66; /*0x977474*/
            }
            else
            {
              *a4 = 1.0; /*0x97742a*/
              v66 = v9 + v8 + v66 + v10 + v32 + v10 + v32; /*0x97743c*/
            }
            return (float)fabs(v66); /*0x97743c*/
          }
        }
        else
        {
          *a3 = 1.0; /*0x977279*/
          v27 = v10 + v7; /*0x97727f*/
          if ( v27 < 0.0 ) /*0x97728c*/
          {
            v60 = -v27; /*0x9772be*/
            if ( v60 < v8 ) /*0x9772cd*/
            {
              v61 = v60 / v8; /*0x977309*/
              *a4 = v61; /*0x977311*/
              v66 = v9 + v27 * v61 + v11 + v11 + v66; /*0x977321*/
            }
            else
            {
              *a4 = 1.0; /*0x9772d3*/
              v66 = v7 + v11 + v10 + v7 + v11 + v10 + v9 + v8 + v66; /*0x9772e7*/
            }
            return (float)fabs(v66); /*0x9772f1*/
          }
        }
      }
      else
      {
        v56 = -v11; /*0x97713e*/
        if ( v56 < v9 ) /*0x97714d*/
        {
          *a4 = 0.0; /*0x977157*/
          if ( v11 < 0.0 ) /*0x977160*/
          {
            v57 = v56 / v9; /*0x977180*/
            *a3 = v57; /*0x977188*/
            v66 = v11 * v57 + v66; /*0x977190*/
          }
          else
          {
            *a3 = 0.0; /*0x977166*/
          }
          return (float)fabs(v66); /*0x97716e*/
        }
        *a3 = 1.0; /*0x9771a8*/
        v26 = v10 + v7; /*0x9771ae*/
        if ( v26 < 0.0 ) /*0x9771bb*/
        {
          v58 = -v26; /*0x9771ed*/
          if ( v58 < v8 ) /*0x9771fc*/
          {
            v59 = v58 / v8; /*0x977238*/
            *a4 = v59; /*0x977240*/
            v66 = v9 + v26 * v59 + v11 + v11 + v66; /*0x977250*/
          }
          else
          {
            *a4 = 1.0; /*0x977202*/
            v66 = v7 + v11 + v10 + v7 + v11 + v10 + v9 + v8 + v66; /*0x977216*/
          }
          return (float)fabs(v66); /*0x977220*/
        }
      }
      *a4 = 0.0; /*0x9773e9*/
      v73 = v9 + v11 + v11 + v66; /*0x9773f5*/
      return (float)fabs(v73); /*0x97740a*/
    }
    if ( v12 >= 0.0 ) /*0x976c6c*/
    {
      if ( v39 < v12 ) /*0x976d85*/
      {
        v13 = v7 + v11; /*0x976e1f*/
        v24 = v13; /*0x976e21*/
        v14 = v24; /*0x976e24*/
        if ( v24 < 0.0 ) /*0x976e2e*/
        {
          *a4 = 1.0; /*0x976e34*/
          v46 = -v14; /*0x976e3a*/
          if ( v46 < v9 ) /*0x976e49*/
          {
            v47 = v46 / v9; /*0x976e81*/
            *a3 = v47; /*0x976e89*/
            v66 = v14 * v47 + v8 + v10 + v10 + v66; /*0x976e97*/
          }
          else
          {
            *a3 = 1.0; /*0x976e51*/
            v66 = v9 + v8 + v66 + v13 + v10 + v13 + v10; /*0x976e65*/
          }
          return (float)fabs(v66); /*0x976e6f*/
        }
        *a3 = 0.0; /*0x976eb5*/
        if ( v10 < 0.0 ) /*0x976ebe*/
        {
          v48 = -v10; /*0x976ede*/
          if ( v48 < v8 ) /*0x976eed*/
          {
            v49 = v48 / v8; /*0x976f17*/
            *a4 = v49; /*0x976f1f*/
            v66 = v10 * v49 + v66; /*0x976f27*/
          }
          else
          {
            *a4 = 1.0; /*0x976ef3*/
            v66 = v8 + v10 + v10 + v66; /*0x976efd*/
          }
          return (float)fabs(v66); /*0x976f07*/
        }
      }
      else
      {
        *a3 = 0.0; /*0x976d93*/
        if ( v10 < 0.0 ) /*0x976d9c*/
        {
          v44 = -v10; /*0x976dbc*/
          if ( v44 < v8 ) /*0x976dcb*/
          {
            v45 = v44 / v8; /*0x976df5*/
            *a4 = v45; /*0x976dfd*/
            v66 = v10 * v45 + v66; /*0x976e05*/
          }
          else
          {
            *a4 = 1.0; /*0x976dd1*/
            v66 = v8 + v10 + v10 + v66; /*0x976ddd*/
          }
          return (float)fabs(v66); /*0x976de7*/
        }
      }
    }
    else
    {
      if ( v11 < 0.0 ) /*0x976c7d*/
      {
        *a4 = 0.0; /*0x976c85*/
        v40 = -v11; /*0x976c8b*/
        if ( v40 < v9 ) /*0x976c9a*/
        {
          v41 = v40 / v9; /*0x976cc4*/
          *a3 = v41; /*0x976ccc*/
          v66 = v11 * v41 + v66; /*0x976cd4*/
        }
        else
        {
          *a3 = 1.0; /*0x976ca0*/
          v66 = v9 + v11 + v11 + v66; /*0x976cac*/
        }
        return (float)fabs(v66); /*0x977451*/
      }
      *a3 = 0.0; /*0x976cf0*/
      if ( v10 < 0.0 ) /*0x976cf9*/
      {
        v42 = -v10; /*0x976d19*/
        if ( v42 < v8 ) /*0x976d28*/
        {
          v43 = v42 / v8; /*0x976d52*/
          *a4 = v43; /*0x976d5a*/
          v66 = v10 * v43 + v66; /*0x976d62*/
        }
        else
        {
          *a4 = 1.0; /*0x976d2e*/
          v66 = v8 + v10 + v10 + v66; /*0x976d38*/
        }
        return (float)fabs(v66); /*0x976d42*/
      }
    }
    *a4 = 0.0; /*0x976ec4*/
    return (float)fabs(v66); /*0x976ed7*/
  }
  v32 = *(double *)a2; /*0x97748e*/
  v33 = a2[2]; /*0x97749e*/
  if ( v9 < v8 ) /*0x9774a9*/
  {
    v34 = *((_DWORD *)a2 + 6); /*0x9774e0*/
    v20 = *((_DWORD *)a2 + 7); /*0x9774e4*/
    v21 = *((_DWORD *)a2 + 8); /*0x9774e7*/
    v35 = v20; /*0x9774ea*/
    v36 = v21; /*0x9774f2*/
    *a3 = 0.0; /*0x9774f6*/
    return sub_96FBB0(a1, (float *)&v32, a4); /*0x977503*/
  }
  else
  {
    v34 = *((_DWORD *)a2 + 3); /*0x9774ae*/
    v18 = *((_DWORD *)a2 + 4); /*0x9774b2*/
    v19 = *((_DWORD *)a2 + 5); /*0x9774b5*/
    v35 = v18; /*0x9774b8*/
    v36 = v19; /*0x9774c0*/
    *a4 = 0.0; /*0x9774c4*/
    return sub_96FBB0(a1, (float *)&v32, a3); /*0x9774d1*/
  }
}
