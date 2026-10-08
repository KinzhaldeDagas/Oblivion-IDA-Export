char __cdecl sub_9684F0(float a1, float *a2, float *a3, float *a4, float *a5, float *a6, float *a7)
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

  sub_96C420((float *)v88, 1.0, (int)&g_zeroNiPoint3); /*0x968506*/
  *(float *)&v88[4] = flt_A34BA0; /*0x968515*/
  v8 = *((_DWORD *)a7 + 1); /*0x968523*/
  v9 = *((_DWORD *)a7 + 2); /*0x96852a*/
  v88[1] = *(int *)a7; /*0x968532*/
  v88[2] = v8; /*0x968541*/
  v88[3] = v9; /*0x968545*/
  v10 = sub_9682F0(a1, (int)a2, a3, (float *)v88, &g_zeroNiPoint3.x); /*0x968549*/
  v11 = dbl_A88D40; /*0x96854e*/
  if ( !v10 ) /*0x968560*/
  {
    v89 = *a6; /*0x968569*/
    v28 = *a3 * v89; /*0x968579*/
    v34 = a3[1] * v89; /*0x968582*/
    v40 = v89 * a3[2]; /*0x968589*/
    v46 = v28 + a2[1]; /*0x968594*/
    v49 = a2[2] + v34; /*0x96859f*/
    v52 = a2[3] + v40; /*0x9685aa*/
    v29 = *a7 - v46; /*0x9685ba*/
    v35 = a7[1] - v49; /*0x9685c5*/
    v41 = a7[2] - v52; /*0x9685d0*/
    v12 = v35; /*0x9685d7*/
    v13 = v29; /*0x9685ea*/
    v90 = a2[6] * v41 + a2[4] * v29 + a2[5] * v35; /*0x9685fd*/
    v30 = v90; /*0x968605*/
    v91 = a2[8] * v35 + v13 * a2[7] + a2[9] * v41; /*0x96861c*/
    v36 = v91; /*0x968624*/
    v92 = v13 * a2[0xA] + v12 * a2[0xB] + v41 * a2[0xC]; /*0x96863b*/
    v42 = v92; /*0x968643*/
    v14 = v30; /*0x968647*/
    if ( a2[0xD] * v11 >= v30 ) /*0x968657*/
    {
      *(float *)&v93 = -a2[0xD]; /*0x96866d*/
      if ( *(float *)&v93 * v11 > v14 ) /*0x968680*/
        v14 = *(float *)&v93; /*0x968688*/
    }
    else
    {
      v14 = a2[0xD]; /*0x968662*/
    }
    v15 = v36; /*0x968690*/
    if ( a2[0xE] * v11 >= v36 ) /*0x9686a0*/
    {
      *(float *)&v94 = -a2[0xE]; /*0x9686b6*/
      if ( *(float *)&v94 * v11 > v15 ) /*0x9686c9*/
        v15 = *(float *)&v94; /*0x9686d1*/
    }
    else
    {
      v15 = a2[0xE]; /*0x9686ab*/
    }
    if ( a2[0xF] * v11 >= v42 ) /*0x9686e9*/
    {
      *(float *)&v95 = -a2[0xF]; /*0x968701*/
      if ( v11 * *(float *)&v95 <= v42 ) /*0x968716*/
      {
        v18 = v15; /*0x968728*/
        v17 = v42; /*0x968728*/
        v16 = v18; /*0x968728*/
      }
      else
      {
        v16 = v15; /*0x96871a*/
        v17 = *(float *)&v95; /*0x968720*/
      }
    }
    else
    {
      v16 = v15; /*0x9686ed*/
      v17 = a2[0xF]; /*0x9686f6*/
    }
    v73 = a2[0xA] * v17; /*0x96872f*/
    v78 = a2[0xB] * v17; /*0x968738*/
    v83 = v17 * a2[0xC]; /*0x96873f*/
    v61 = a2[7] * v16; /*0x968748*/
    v65 = a2[8] * v16; /*0x968751*/
    v69 = v16 * a2[9]; /*0x96875c*/
    v31 = a2[4] * v14; /*0x968765*/
    v37 = a2[5] * v14; /*0x96876e*/
    v43 = v14 * a2[6]; /*0x968779*/
    v55 = v46 + v31; /*0x968781*/
    v57 = v37 + v49; /*0x96878d*/
    v59 = v43 + v52; /*0x968799*/
    v47 = v55 + v61; /*0x9687a5*/
    v50 = v57 + v65; /*0x9687b1*/
    v53 = v59 + v69; /*0x9687bd*/
    v62 = v47 + v73; /*0x9687c9*/
    *a7 = v62; /*0x9687d5*/
    v66 = v50 + v78; /*0x9687db*/
    a7[1] = v66; /*0x9687e7*/
    v70 = v53 + v83; /*0x9687ee*/
    a7[2] = v70; /*0x9687f6*/
  }
  result = sub_9682F0(a1, (int)a4, a5, (float *)v88, &g_zeroNiPoint3.x); /*0x968819*/
  if ( !result ) /*0x968823*/
  {
    v96 = *a6; /*0x96882c*/
    v74 = *a5 * v96; /*0x96883c*/
    v79 = a5[1] * v96; /*0x968845*/
    v84 = v96 * a5[2]; /*0x96884c*/
    v48 = v74 + a4[1]; /*0x968857*/
    v51 = a4[2] + v79; /*0x968862*/
    v54 = a4[3] + v84; /*0x96886d*/
    v75 = *a7 - v48; /*0x96887d*/
    v80 = a7[1] - v51; /*0x968888*/
    v85 = a7[2] - v54; /*0x968893*/
    v97 = a4[6] * v85 + a4[5] * v80 + v75 * a4[4]; /*0x9688bc*/
    v32 = v97; /*0x9688c4*/
    v98 = a4[8] * v80 + a4[7] * v75 + a4[9] * v85; /*0x9688db*/
    v38 = v98; /*0x9688e3*/
    v99 = v85 * a4[0xC] + v80 * a4[0xB] + v75 * a4[0xA]; /*0x9688f8*/
    v44 = v99; /*0x968900*/
    v20 = dbl_A88D40; /*0x968913*/
    if ( a4[0xD] * v20 >= v32 ) /*0x96891c*/
    {
      *(float *)&v100 = -a4[0xD]; /*0x968932*/
      if ( *(float *)&v100 * v20 <= v32 ) /*0x968945*/
      {
        v23 = v20; /*0x968957*/
        v22 = v32; /*0x968957*/
        v21 = v23; /*0x968957*/
      }
      else
      {
        v21 = v20; /*0x968949*/
        v22 = *(float *)&v100; /*0x96894f*/
      }
    }
    else
    {
      v21 = v20; /*0x96891e*/
      v22 = a4[0xD]; /*0x968927*/
    }
    v24 = v38; /*0x968959*/
    if ( a4[0xE] * v21 >= v38 ) /*0x968969*/
    {
      *(float *)&v101 = -a4[0xE]; /*0x96897f*/
      if ( *(float *)&v101 * v21 > v24 ) /*0x968992*/
        v24 = *(float *)&v101; /*0x96899a*/
    }
    else
    {
      v24 = a4[0xE]; /*0x968974*/
    }
    if ( a4[0xF] * v21 >= v44 ) /*0x9689b2*/
    {
      *(float *)&v102 = -a4[0xF]; /*0x9689ca*/
      if ( v21 * *(float *)&v102 <= v44 ) /*0x9689df*/
      {
        v27 = v24; /*0x9689f1*/
        v26 = v44; /*0x9689f1*/
        v25 = v27; /*0x9689f1*/
      }
      else
      {
        v25 = v24; /*0x9689e3*/
        v26 = *(float *)&v102; /*0x9689e9*/
      }
    }
    else
    {
      v25 = v24; /*0x9689b6*/
      v26 = a4[0xF]; /*0x9689bf*/
    }
    v33 = v26 * a4[0xA]; /*0x9689f8*/
    v39 = a4[0xB] * v26; /*0x968a01*/
    v45 = v26 * a4[0xC]; /*0x968a08*/
    v56 = a4[7] * v25; /*0x968a11*/
    v58 = a4[8] * v25; /*0x968a1a*/
    v60 = v25 * a4[9]; /*0x968a25*/
    v76 = a4[4] * v22; /*0x968a2e*/
    v81 = a4[5] * v22; /*0x968a37*/
    v86 = v22 * a4[6]; /*0x968a3e*/
    v63 = v48 + v76; /*0x968a46*/
    v67 = v81 + v51; /*0x968a52*/
    v71 = v86 + v54; /*0x968a5e*/
    v77 = v63 + v56; /*0x968a6a*/
    v82 = v67 + v58; /*0x968a76*/
    v87 = v71 + v60; /*0x968a82*/
    v64 = v77 + v33; /*0x968a8e*/
    *a7 = v64; /*0x968a9a*/
    v68 = v82 + v39; /*0x968aa0*/
    a7[1] = v68; /*0x968aac*/
    v72 = v87 + v45; /*0x968ab3*/
    a7[2] = v72; /*0x968abb*/
    return LOBYTE(v68); /*0x968aa4*/
  }
  return result; /*0x968abe*/
}
