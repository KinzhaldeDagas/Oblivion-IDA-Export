void __thiscall sub_96E980(float *this, unsigned __int16 a2, float *a3)
{
  int v4; // eax
  double v6; // st7
  double v7; // st6
  double v8; // st5
  double v9; // st5
  float *v10; // ecx
  int v11; // edx
  double v12; // st4
  double v13; // st7
  int v14; // eax
  double v15; // st6
  double v16; // st5
  double v17; // st4
  double v18; // st3
  double v19; // st7
  double v20; // st2
  double v21; // st5
  double v22; // st3
  float *v23; // ebp
  int v24; // ecx
  double v25; // st7
  double v26; // st6
  double v27; // st7
  double v28; // st6
  double v29; // st5
  double v30; // st4
  double v31; // rt1
  double v32; // rt2
  double v33; // st4
  double v34; // st3
  float v35; // [esp+8h] [ebp-60h]
  float v36; // [esp+Ch] [ebp-5Ch]
  float v37; // [esp+Ch] [ebp-5Ch]
  float v38; // [esp+Ch] [ebp-5Ch]
  float v39; // [esp+Ch] [ebp-5Ch]
  float v40; // [esp+10h] [ebp-58h]
  float v41; // [esp+10h] [ebp-58h]
  float v42; // [esp+14h] [ebp-54h]
  float v43; // [esp+18h] [ebp-50h]
  float v44; // [esp+1Ch] [ebp-4Ch]
  float v45; // [esp+20h] [ebp-48h]
  float v46; // [esp+20h] [ebp-48h]
  float v47; // [esp+24h] [ebp-44h]
  float v48; // [esp+24h] [ebp-44h]
  float v49; // [esp+28h] [ebp-40h]
  float v50; // [esp+28h] [ebp-40h]
  float v51; // [esp+2Ch] [ebp-3Ch]
  float v52; // [esp+2Ch] [ebp-3Ch]
  float v53; // [esp+2Ch] [ebp-3Ch]
  float v54; // [esp+2Ch] [ebp-3Ch]
  float v55; // [esp+30h] [ebp-38h]
  float v56; // [esp+30h] [ebp-38h]
  float v57; // [esp+30h] [ebp-38h]
  float v58; // [esp+30h] [ebp-38h]
  float v59; // [esp+34h] [ebp-34h]
  float v60; // [esp+34h] [ebp-34h]
  float v61; // [esp+34h] [ebp-34h]
  float v62; // [esp+34h] [ebp-34h]
  float v63[3]; // [esp+38h] [ebp-30h] BYREF
  float v64[9]; // [esp+44h] [ebp-24h] BYREF
  float v65; // [esp+6Ch] [ebp+4h]
  float v66; // [esp+6Ch] [ebp+4h]
  float v67; // [esp+6Ch] [ebp+4h]
  float v68; // [esp+6Ch] [ebp+4h]
  float v69; // [esp+6Ch] [ebp+4h]
  float v70; // [esp+6Ch] [ebp+4h]
  float v71; // [esp+6Ch] [ebp+4h]
  float v72; // [esp+6Ch] [ebp+4h]
  float v73; // [esp+6Ch] [ebp+4h]
  float v74; // [esp+6Ch] [ebp+4h]
  float v75; // [esp+6Ch] [ebp+4h]
  float v76; // [esp+6Ch] [ebp+4h]
  float v77; // [esp+6Ch] [ebp+4h]
  float v78; // [esp+70h] [ebp+8h]
  float v79; // [esp+70h] [ebp+8h]

  v4 = *(_DWORD *)a3; /*0x96e98c*/
  v36 = *a3; /*0x96e98f*/
  v6 = v36; /*0x96e995*/
  v40 = v36; /*0x96e99e*/
  v37 = a3[1]; /*0x96e9a9*/
  v7 = v37; /*0x96e9ad*/
  v78 = v37; /*0x96e9b1*/
  v8 = a3[2]; /*0x96e9b5*/
  *(_DWORD *)this = v4; /*0x96e9b8*/
  v38 = v8; /*0x96e9bd*/
  v9 = v38; /*0x96e9c1*/
  *(this + 1) = a3[1]; /*0x96e9c5*/
  v35 = v38; /*0x96e9cb*/
  *(this + 2) = a3[2]; /*0x96e9cf*/
  if ( a2 > 1u ) /*0x96e9d2*/
  {
    v10 = a3 + 5; /*0x96e9db*/
    v11 = (unsigned __int16)(a2 - 1); /*0x96e9de*/
    do /*0x96ea95*/
    {
      *this = v10[0xFFFFFFFE] + *this; /*0x96e9e6*/
      *(this + 1) = *(this + 1) + v10[0xFFFFFFFF]; /*0x96e9ee*/
      *(this + 2) = *v10 + *(this + 2); /*0x96e9f6*/
      if ( v40 <= (double)v10[0xFFFFFFFE] ) /*0x96ea07*/
      {
        if ( v10[0xFFFFFFFE] > v6 ) /*0x96ea1c*/
          v6 = v10[0xFFFFFFFE]; /*0x96ea2b*/
      }
      else
      {
        v40 = v10[0xFFFFFFFE]; /*0x96ea0c*/
      }
      if ( v78 <= (double)v10[0xFFFFFFFF] ) /*0x96ea3b*/
      {
        if ( v10[0xFFFFFFFF] > v7 ) /*0x96ea50*/
          v7 = v10[0xFFFFFFFF]; /*0x96ea5f*/
      }
      else
      {
        v78 = v10[0xFFFFFFFF]; /*0x96ea40*/
      }
      if ( v35 <= (double)*v10 ) /*0x96ea6e*/
      {
        if ( *v10 > v9 ) /*0x96ea81*/
          v9 = *v10; /*0x96ea8b*/
      }
      else
      {
        v35 = *v10; /*0x96ea72*/
      }
      v10 += 3; /*0x96ea8f*/
      --v11; /*0x96ea92*/
    }
    while ( v11 ); /*0x96ea95*/
  }
  v39 = 1.0 / (double)a2; /*0x96eaaa*/
  v45 = v39 * *this; /*0x96eab6*/
  v47 = *(this + 1) * v39; /*0x96eac3*/
  v12 = v39 * *(this + 2); /*0x96eacb*/
  *this = v45; /*0x96eace*/
  *(this + 1) = v47; /*0x96ead0*/
  v49 = v12; /*0x96ead3*/
  *(this + 2) = v49; /*0x96eadf*/
  if ( v6 == v40 || v7 == v78 || v9 == v35 ) /*0x96eb13*/
  {
    *(this + 3) = 1.0; /*0x96ee85*/
    *(this + 4) = 0.0; /*0x96eea6*/
    *(this + 5) = 0.0; /*0x96eeab*/
    *(this + 6) = 0.0; /*0x96eec0*/
    *(this + 9) = 0.0; /*0x96eecd*/
    *(this + 7) = 1.0; /*0x96eed2*/
    v34 = dbl_A2FAA0; /*0x96eed5*/
    *(this + 8) = 0.0; /*0x96eedf*/
    *(this + 0xA) = 0.0; /*0x96eee6*/
    *(this + 0xB) = 1.0; /*0x96eeeb*/
    v77 = (v6 - v40) * v34; /*0x96eef0*/
    v79 = (v7 - v78) * v34; /*0x96eefe*/
    v41 = v34 * (v9 - v35); /*0x96ef08*/
    if ( v77 <= 0.0 ) /*0x96ef1b*/
      v77 = kFaceEarNormalMatchRadius; /*0x96ef1d*/
    if ( v79 <= 0.0 ) /*0x96ef2c*/
      v79 = kFaceEarNormalMatchRadius; /*0x96ef30*/
    if ( v41 <= 0.0 ) /*0x96ef3f*/
      v41 = kFaceEarNormalMatchRadius; /*0x96ef41*/
    *(this + 0xC) = v77; /*0x96ef4e*/
    *(this + 0xD) = v79; /*0x96ef56*/
    *(this + 0xE) = v41; /*0x96ef5d*/
  }
  else
  {
    qmemcpy(v64, &unk_B3FADC, sizeof(v64)); /*0x96eb36*/
    if ( a2 ) /*0x96eb39*/
    {
      v13 = *this; /*0x96eb3b*/
      v14 = a2; /*0x96eb3d*/
      v15 = v13 * v13; /*0x96eb41*/
      v16 = *(this + 1); /*0x96eb43*/
      v17 = v16 * v13; /*0x96eb48*/
      v18 = *(this + 2); /*0x96eb4a*/
      v19 = v13 * v18; /*0x96eb4f*/
      v20 = v16 * v16; /*0x96eb53*/
      v21 = v16 * v18; /*0x96eb57*/
      v22 = v18 * v18; /*0x96eb5b*/
      do /*0x96eb9c*/
      {
        --v14; /*0x96eb5d*/
        v64[0] = v64[0] + v15; /*0x96eb66*/
        v64[1] = v64[1] + v17; /*0x96eb70*/
        v64[2] = v64[2] + v19; /*0x96eb7a*/
        v64[4] = v64[4] + v20; /*0x96eb84*/
        v64[5] = v64[5] + v21; /*0x96eb8e*/
        v64[8] = v64[8] + v22; /*0x96eb98*/
      }
      while ( v14 ); /*0x96eb9c*/
    }
    v64[3] = v64[1]; /*0x96ebb1*/
    v64[6] = v64[2]; /*0x96ebbe*/
    v64[7] = v64[5]; /*0x96ebcb*/
    sub_711AE0(v64, v63, this + 3); /*0x96ebcf*/
    v42 = *a3 - *this; /*0x96ebd9*/
    v46 = v42; /*0x96ebe4*/
    v43 = a3[1] - *(this + 1); /*0x96ebf3*/
    v48 = v43; /*0x96ebfe*/
    v44 = a3[2] - *(this + 2); /*0x96ec05*/
    v50 = v44; /*0x96ec0d*/
    if ( a2 > 1u ) /*0x96ec11*/
    {
      v23 = a3 + 5; /*0x96ec17*/
      v24 = (unsigned __int16)(a2 - 1); /*0x96ec1d*/
      do /*0x96ed21*/
      {
        v51 = v23[0xFFFFFFFE] - *this; /*0x96ec25*/
        v55 = v23[0xFFFFFFFF] - *(this + 1); /*0x96ec2f*/
        v59 = *v23 - *(this + 2); /*0x96ec39*/
        v25 = v51; /*0x96ec3d*/
        v26 = v55; /*0x96ec50*/
        v65 = *(this + 5) * v59 + *(this + 4) * v55 + v51 * *(this + 3); /*0x96ec63*/
        if ( v42 <= (double)v65 ) /*0x96ec76*/
        {
          if ( v46 < (double)v65 ) /*0x96ec89*/
            v46 = *(this + 5) * v59 + *(this + 4) * v55 + v51 * *(this + 3); /*0x96ec8b*/
        }
        else
        {
          v42 = *(this + 5) * v59 + *(this + 4) * v55 + v51 * *(this + 3); /*0x96ec78*/
        }
        v66 = *(this + 6) * v25 + v26 * *(this + 7) + *(this + 8) * v59; /*0x96eca6*/
        if ( v43 <= (double)v66 ) /*0x96ecb9*/
        {
          if ( v48 < (double)v66 ) /*0x96eccc*/
            v48 = *(this + 6) * v25 + v26 * *(this + 7) + *(this + 8) * v59; /*0x96ecce*/
        }
        else
        {
          v43 = *(this + 6) * v25 + v26 * *(this + 7) + *(this + 8) * v59; /*0x96ecbb*/
        }
        v67 = v59 * *(this + 0xB) + v26 * *(this + 0xA) + v25 * *(this + 9); /*0x96eceb*/
        if ( v44 <= (double)v67 ) /*0x96ecfe*/
        {
          if ( v50 < (double)v67 ) /*0x96ed11*/
            v50 = v59 * *(this + 0xB) + v26 * *(this + 0xA) + v25 * *(this + 9); /*0x96ed13*/
        }
        else
        {
          v44 = v59 * *(this + 0xB) + v26 * *(this + 0xA) + v25 * *(this + 9); /*0x96ed00*/
        }
        v23 += 3; /*0x96ed1b*/
        --v24; /*0x96ed1e*/
      }
      while ( v24 ); /*0x96ed21*/
    }
    v27 = dbl_A2FAA0; /*0x96ed37*/
    v68 = (v46 + v42) * v27; /*0x96ed39*/
    v52 = *(this + 3) * v68; /*0x96ed49*/
    v56 = *(this + 4) * v68; /*0x96ed52*/
    v60 = v68 * *(this + 5); /*0x96ed59*/
    v69 = v52 + *this; /*0x96ed63*/
    v28 = v69; /*0x96ed67*/
    *this = v69; /*0x96ed6b*/
    v70 = *(this + 1) + v56; /*0x96ed74*/
    v29 = v70; /*0x96ed78*/
    *(this + 1) = v70; /*0x96ed7c*/
    v71 = v60 + *(this + 2); /*0x96ed86*/
    v30 = v71; /*0x96ed8a*/
    *(this + 2) = v71; /*0x96ed8e*/
    v72 = (v48 + v43) * v27; /*0x96ed9b*/
    v53 = *(this + 6) * v72; /*0x96edac*/
    v57 = *(this + 7) * v72; /*0x96edb5*/
    v61 = v72 * *(this + 8); /*0x96edbc*/
    v73 = v28 + v53; /*0x96edc8*/
    *this = v73; /*0x96edd0*/
    v31 = v73; /*0x96edd8*/
    v74 = v29 + v57; /*0x96edda*/
    *(this + 1) = v74; /*0x96ede2*/
    v32 = v74; /*0x96edeb*/
    v75 = v30 + v61; /*0x96eded*/
    v33 = v75; /*0x96edf1*/
    *(this + 2) = v75; /*0x96edf5*/
    v76 = (v50 + v44) * v27; /*0x96ee08*/
    v54 = v76 * *(this + 9); /*0x96ee15*/
    v58 = *(this + 0xA) * v76; /*0x96ee1e*/
    v62 = v76 * *(this + 0xB); /*0x96ee25*/
    *this = v31 + v54; /*0x96ee33*/
    *(this + 1) = v32 + v58; /*0x96ee3d*/
    *(this + 2) = v33 + v62; /*0x96ee48*/
    *(this + 0xC) = (v46 - v42) * v27; /*0x96ee55*/
    *(this + 0xD) = (v48 - v43) * v27; /*0x96ee62*/
    *(this + 0xE) = v27 * (v50 - v44); /*0x96ee6b*/
  }
}
