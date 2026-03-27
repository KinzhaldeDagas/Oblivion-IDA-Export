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

  v5 = a1[2];
  v79 = *a1;
  if ( v79 >= v5 )
    return 0;
  v56 = a1[3];
  v59 = a1[1];
  if ( v56 >= v59 )
    return 0;
  v80 = (float)v79;
  v7 = *a2;
  v8 = v80 < v7;
  v9 = v80 == v7;
  v10 = v80;
  if ( !v8 && !v9 && *a3 < v10 )
    return 0;
  v57 = (float)v56;
  v11 = a2[1];
  v12 = v57 < v11;
  v13 = v57 == v11;
  v14 = v57;
  if ( !v12 && !v13 && a3[1] < v14 )
    return 0;
  v58 = (float)v5;
  v15 = v58;
  if ( v58 < (double)*a2 && *a3 > v15 )
    return 0;
  v60 = (float)v59;
  v16 = v60;
  if ( v60 < (double)a2[1] && a3[1] > v16 )
    return 0;
  if ( *a2 > v10 && *a2 < v15 && a2[1] > v14 && a2[1] < v16 && *a3 > v10 && *a3 < v15 && a3[1] > v14 && a3[1] < v16 )
    return 0;
  if ( *a2 == *a3 || a2[1] == a3[1] )
  {
    if ( *a2 == *a3 && a2[1] == a3[1] )
    {
      if ( *a2 <= v15 && *a2 >= v10 && a2[1] <= (double)v60 && a2[1] >= (double)v57 )
      {
        *a4 = *a2;
        a4[1] = a2[1];
        a4[2] = a2[2];
        return 1;
      }
      return 0;
    }
    if ( *a2 == *a3 )
    {
      if ( *a2 <= v15 )
      {
        v48 = *a2 < v10;
        v49 = v60;
        if ( !v48 )
        {
          v50 = a4;
          if ( a3[1] < (double)a2[1] )
          {
            v76 = *a2;
LABEL_80:
            v77 = v49;
            v54 = v77;
            v78 = 0.0;
            *v50 = v76;
            v55 = v78;
            v50[1] = v54;
            v50[2] = v55;
            return 1;
          }
          v51 = v57;
          v76 = *a2;
          goto LABEL_74;
        }
      }
    }
    else if ( a2[1] == a3[1] && a2[1] <= v16 && a2[1] >= v14 )
    {
      v50 = a4;
      if ( *a3 < (double)*a2 )
      {
        v76 = (float)v5;
        v49 = a2[1];
        goto LABEL_80;
      }
      v76 = v80;
      v51 = a2[1];
LABEL_74:
      v77 = v51;
      v52 = v77;
      v78 = 0.0;
      *v50 = v76;
      v53 = v78;
      v50[1] = v52;
      v50[2] = v53;
      return 1;
    }
    return 0;
  }
  v17 = 0;
  v67 = flt_A32048;
  v68 = v67;
  v69 = v67;
  v70 = v67;
  v71 = v67;
  v72 = v67;
  v61 = (a3[1] - a2[1]) / (*a3 - *a2);
  v18 = v61;
  v62 = a3[1] - *a3 * v61;
  v19 = v10 * v18 + v62;
  v20 = v62;
  v63 = v19;
  if ( v63 > v16 )
  {
    v21 = 0.0;
  }
  else
  {
    v21 = 0.0;
    if ( v57 <= (double)v63 )
    {
      v17 = 1;
      v73 = v80;
      v22 = v80;
      v67 = v80;
      v74 = v19;
      v23 = v19;
      v24 = v18;
      v25 = 0.0;
      v26 = v24;
      v68 = v19;
      v75 = 0.0;
      v27 = 0.0;
      v69 = 0.0;
      goto LABEL_28;
    }
  }
  v27 = v69;
  v28 = v18;
  v25 = v21;
  v26 = v28;
  v23 = v68;
  v22 = v67;
LABEL_28:
  v64 = (v16 - v20) / v26;
  if ( v64 <= v15 && v80 <= (double)v64 )
  {
    v73 = (v16 - v20) / v26;
    v74 = v16;
    v75 = v25;
    if ( v17 )
    {
      v70 = v73;
      v71 = v74;
      v72 = v75;
      ++v17;
    }
    else
    {
      v22 = v73;
      v23 = v74;
      v27 = v75;
      v67 = v73;
      v68 = v74;
      v69 = v75;
      v17 = 1;
    }
  }
  if ( v17 >= 2 )
    goto LABEL_56;
  v65 = v15 * v26 + v20;
  if ( v65 <= v16 && v57 <= (double)v65 )
  {
    v73 = v58;
    v74 = v15 * v26 + v20;
    v75 = v25;
    if ( v17 )
    {
      v70 = v73;
      v71 = v74;
      v72 = v75;
      ++v17;
    }
    else
    {
      v22 = v73;
      v23 = v74;
      v27 = v75;
      v67 = v73;
      v68 = v74;
      v69 = v75;
      v17 = 1;
    }
  }
  if ( v17 >= 2 )
  {
LABEL_56:
    v34 = v16;
    v36 = v58;
    v35 = v57;
LABEL_46:
    v37 = v35;
    v38 = v34;
    v30 = v37;
    v39 = v38;
    v15 = v36;
    v40 = v39;
    goto LABEL_47;
  }
  v29 = v57 - v20;
  v30 = v57;
  v31 = v25;
  v32 = v29 / v26;
  v33 = v31;
  v66 = v32;
  if ( v66 <= v15 && v80 <= (double)v66 )
  {
    v73 = v32;
    v34 = v16;
    v74 = v57;
    v75 = v33;
    if ( v17 )
    {
      v70 = v73;
      v71 = v74;
      v72 = v75;
    }
    else
    {
      v22 = v73;
      v23 = v74;
      v27 = v75;
      v67 = v73;
      v68 = v74;
      v69 = v75;
    }
    ++v17;
    v35 = v57;
    v36 = v58;
    goto LABEL_46;
  }
  v40 = v16;
LABEL_47:
  if ( !v17 )
    return 0;
  if ( v17 == 2 )
  {
    if ( v80 < (double)*a2 && *a2 < v15 && a2[1] > v30 && a2[1] < v40 )
    {
      sub_4121A0(a3, &v76, a2);
      v73 = v67 - *a2;
      v74 = v68 - a2[1];
      v78 = 0.0;
      v75 = 0.0;
      sub_43F350(&v76);
      sub_43F350(&v73);
      v67 = v73 + v76;
      v68 = v77 + v74;
      v69 = v75 + v78;
      v41 = sub_404C90(&v67);
      v42 = a4;
      if ( v41 <= fConstant_1 )
      {
        v43 = v71;
        *a4 = v70;
        v44 = v72;
        a4[1] = v43;
        a4[2] = v44;
        return 1;
      }
      goto LABEL_58;
    }
    v76 = v67 - *a2;
    v77 = v68 - a2[1];
    v78 = v69 - a2[2];
    v73 = v70 - *a2;
    v74 = v71 - a2[1];
    v75 = v72 - a2[2];
    v81 = sub_404C90(&v76);
    v45 = sub_404C90(&v73);
    v42 = a4;
    if ( v81 < v45 )
    {
LABEL_58:
      *v42 = v22;
      v42[1] = v23;
      v42[2] = v27;
      return 1;
    }
    v46 = v71;
    *a4 = v70;
    v47 = v72;
    a4[1] = v46;
    a4[2] = v47;
    return 1;
  }
  else
  {
    *a4 = v22;
    a4[1] = v23;
    a4[2] = v27;
    return 1;
  }
}
