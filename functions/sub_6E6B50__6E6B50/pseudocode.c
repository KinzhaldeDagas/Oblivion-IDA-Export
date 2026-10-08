int __thiscall sub_6E6B50(float *this, float a2, _DWORD *a3, int *a4)
{
  int result; // eax
  int v6; // ecx
  double v7; // st6
  int v8; // edi
  int v9; // ecx
  double v10; // st5
  double v11; // st6
  bool v12; // cc
  double v13; // st5
  int v14; // ecx
  int v15; // edx
  double v16; // st6
  double v17; // st7
  double v18; // st5
  double v19; // st6
  double v20; // rt2
  double v21; // st5
  double v22; // st7
  double v23; // st5
  double v24; // st7
  double v25; // rt1
  double v26; // st5
  double v27; // st7
  double v28; // rt2
  double v29; // st5
  double v30; // rtt
  double v31; // rt0
  double v32; // st5
  double v33; // rt1
  double v34; // st7
  double v35; // st6
  double v36; // st5
  double v37; // st3
  double v38; // st6
  double v39; // st7
  double v40; // rt2
  double v41; // st5
  double v42; // st4
  double v43; // st6
  double v44; // st4
  double v45; // st6
  double v46; // st4
  double v47; // st5
  double v48; // st7
  double v49; // st6
  double v50; // rt0
  double v51; // st4
  double v52; // st3
  double v53; // st7
  double v54; // st6
  double v55; // rt2
  double v56; // st5
  double v57; // st4
  double v58; // st6
  double v59; // st4
  double v60; // st6
  double v61; // st5
  double v62; // st5
  double v63; // st4
  double v64; // st7
  double v65; // st6
  double v66; // st5
  int v67; // [esp+4h] [ebp-24h]
  float v68; // [esp+4h] [ebp-24h]
  float v69; // [esp+8h] [ebp-20h]
  float v70; // [esp+Ch] [ebp-1Ch]
  float v71; // [esp+Ch] [ebp-1Ch]
  float v72; // [esp+10h] [ebp-18h]
  float v73; // [esp+14h] [ebp-14h]
  float v74; // [esp+18h] [ebp-10h]
  float v75; // [esp+1Ch] [ebp-Ch]
  float v76; // [esp+20h] [ebp-8h]
  float v77; // [esp+20h] [ebp-8h]
  float v78; // [esp+20h] [ebp-8h]
  float v79; // [esp+24h] [ebp-4h]
  float v80; // [esp+24h] [ebp-4h]
  float v81; // [esp+24h] [ebp-4h]
  float v82; // [esp+24h] [ebp-4h]
  float v83; // [esp+24h] [ebp-4h]
  float v84; // [esp+24h] [ebp-4h]
  float v85; // [esp+24h] [ebp-4h]
  float v86; // [esp+2Ch] [ebp+4h]
  float v87; // [esp+2Ch] [ebp+4h]
  float v88; // [esp+2Ch] [ebp+4h]
  float v89; // [esp+2Ch] [ebp+4h]
  float v90; // [esp+2Ch] [ebp+4h]
  float v91; // [esp+2Ch] [ebp+4h]
  float v92; // [esp+2Ch] [ebp+4h]
  float v93; // [esp+2Ch] [ebp+4h]
  float v94; // [esp+2Ch] [ebp+4h]
  float v95; // [esp+2Ch] [ebp+4h]
  float v96; // [esp+2Ch] [ebp+4h]
  float v97; // [esp+2Ch] [ebp+4h]
  float v98; // [esp+2Ch] [ebp+4h]
  float v99; // [esp+2Ch] [ebp+4h]
  float v100; // [esp+2Ch] [ebp+4h]
  float v101; // [esp+2Ch] [ebp+4h]
  float v102; // [esp+2Ch] [ebp+4h]
  float v103; // [esp+2Ch] [ebp+4h]
  float v104; // [esp+2Ch] [ebp+4h]
  float v105; // [esp+30h] [ebp+8h]
  float v106; // [esp+30h] [ebp+8h]
  float v107; // [esp+30h] [ebp+8h]
  float v108; // [esp+30h] [ebp+8h]
  float v109; // [esp+30h] [ebp+8h]
  float v110; // [esp+30h] [ebp+8h]
  float v111; // [esp+30h] [ebp+8h]
  float v112; // [esp+30h] [ebp+8h]
  float v113; // [esp+30h] [ebp+8h]
  float v114; // [esp+30h] [ebp+8h]
  float v115; // [esp+30h] [ebp+8h]
  float v116; // [esp+30h] [ebp+8h]
  float v117; // [esp+30h] [ebp+8h]
  float v118; // [esp+30h] [ebp+8h]
  float v119; // [esp+30h] [ebp+8h]
  float v120; // [esp+30h] [ebp+8h]
  float v121; // [esp+34h] [ebp+Ch]
  float v122; // [esp+34h] [ebp+Ch]
  float v123; // [esp+34h] [ebp+Ch]
  float v124; // [esp+34h] [ebp+Ch]
  float v125; // [esp+34h] [ebp+Ch]
  float v126; // [esp+34h] [ebp+Ch]
  float v127; // [esp+34h] [ebp+Ch]
  float v128; // [esp+34h] [ebp+Ch]
  float v129; // [esp+34h] [ebp+Ch]
  float v130; // [esp+34h] [ebp+Ch]

  if ( LODWORD(a2) == *((_DWORD *)this + 5) ) /*0x6e6b5d*/
  {
    *a3 = *((_DWORD *)this + 6); /*0x6e6b66*/
    *a4 = *((_DWORD *)this + 7); /*0x6e6b6f*/
    return (int)a4; /*0x6e6b6b*/
  }
  else
  {
    v6 = *(_DWORD *)this; /*0x6e6b7a*/
    v7 = a2; /*0x6e6b7c*/
    *(this + 5) = a2; /*0x6e6b80*/
    v8 = v6 - 3; /*0x6e6b86*/
    v67 = v6 - 3; /*0x6e6b89*/
    if ( a2 >= 1.0 ) /*0x6e6b92*/
      result = v6 - 1; /*0x6e6ba4*/
    else
      result = Double_To_SInt32(1.0) + 3; /*0x6e6b9f*/
    *a3 = result - 3; /*0x6e6bb2*/
    v86 = (float)v67; /*0x6e6bb4*/
    *((_DWORD *)this + 6) = result - 3; /*0x6e6bb8*/
    *a4 = result; /*0x6e6bc9*/
    v9 = *(_DWORD *)this; /*0x6e6bcd*/
    v10 = v7 * v86; /*0x6e6bcf*/
    v11 = v86; /*0x6e6bcf*/
    v12 = *(_DWORD *)this < 7; /*0x6e6bd1*/
    v87 = v10; /*0x6e6bd4*/
    *((_DWORD *)this + 7) = result; /*0x6e6bdc*/
    if ( v12 ) /*0x6e6bdf*/
    {
      switch ( v9 ) /*0x6e6dd5*/
      {
        case 6: /*0x6e6dd5*/
          v39 = v87; /*0x6e6dde*/
          if ( result == 3 ) /*0x6e6de2*/
          {
            v89 = 1.0 - v39; /*0x6e6def*/
            v123 = dbl_A3D0C0 - v39; /*0x6e6dfb*/
            v40 = dbl_A2FAA0; /*0x6e6e09*/
            v109 = v39 * v40; /*0x6e6e0b*/
            v41 = v89; /*0x6e6e0f*/
            v90 = v89 * v89; /*0x6e6e17*/
            v42 = v109; /*0x6e6e1b*/
            v43 = v123; /*0x6e6e33*/
            v110 = v40 * (v109 * v123 + v41 * v39); /*0x6e6e35*/
            v124 = v42 * (v39 * dbl_A7C030); /*0x6e6e43*/
            *(this + 1) = v41 * v90; /*0x6e6e51*/
            *(this + 2) = v90 * v39 + v43 * v110; /*0x6e6e64*/
            v91 = dbl_A30E48 - v39; /*0x6e6e6f*/
            *(this + 3) = v110 * v39 + v91 * v124; /*0x6e6e89*/
            *(this + 4) = v39 * v124; /*0x6e6e8e*/
          }
          else
          {
            if ( result == 4 ) /*0x6e6e9b*/
            {
              v111 = v39 - 1.0; /*0x6e6eaa*/
              v125 = dbl_A30E48 - v39; /*0x6e6eb6*/
              v44 = dbl_A2FAA0; /*0x6e6ebc*/
              v92 = v39 * v44; /*0x6e6ec6*/
              v93 = 1.0 - v92; /*0x6e6ed2*/
              v45 = v111; /*0x6e6ede*/
              v112 = v44 * v111; /*0x6e6ee0*/
              v83 = v93 * v93; /*0x6e6eec*/
              v46 = v112; /*0x6e6ef0*/
              v47 = v125; /*0x6e6f06*/
              v113 = (v93 * v39 + v112 * v125) * dbl_A7C030; /*0x6e6f0e*/
              v126 = v46 * v46; /*0x6e6f14*/
              v94 = dbl_A3D0C0 - v39; /*0x6e6f20*/
              *(this + 1) = v94 * v83; /*0x6e6f32*/
              *(this + 2) = v83 * v39 + v113 * v47; /*0x6e6f45*/
              *(this + 3) = v39 * v113 + v47 * v126; /*0x6e6f5a*/
              v48 = v126 * v45; /*0x6e6f5d*/
            }
            else
            {
              v127 = v39 - dbl_A2F928; /*0x6e6f72*/
              v114 = v39 - dbl_A3D0C0; /*0x6e6f7e*/
              v95 = dbl_A30E48 - v39; /*0x6e6f8a*/
              v49 = v95; /*0x6e6f8e*/
              v50 = dbl_A2FAA0; /*0x6e6f9c*/
              v96 = v95 * v50; /*0x6e6f9e*/
              v51 = v114; /*0x6e6fa2*/
              v84 = v114 * v114; /*0x6e6faa*/
              v52 = v96; /*0x6e6fbe*/
              v97 = v49 * dbl_A7C030 * v96; /*0x6e6fc0*/
              v115 = v50 * (v52 * v127 + v49 * v114); /*0x6e6fda*/
              *(this + 1) = v97 * v49; /*0x6e6fe6*/
              *(this + 2) = v39 * v97 + v115 * v49; /*0x6e6ffb*/
              *(this + 3) = v127 * v115 + v49 * v84; /*0x6e700e*/
              v48 = v84 * v51; /*0x6e7011*/
            }
            *(this + 4) = v48; /*0x6e6f5f*/
          }
          break;
        case 5: /*0x6e6dd5*/
          v53 = v87; /*0x6e7029*/
          v54 = v87; /*0x6e702d*/
          if ( result == 3 ) /*0x6e7031*/
          {
            v98 = 1.0 - v54; /*0x6e703a*/
            v128 = dbl_A3D0C0 - v53; /*0x6e7046*/
            v55 = dbl_A2FAA0; /*0x6e7054*/
            v116 = v53 * v55; /*0x6e7056*/
            v56 = v98; /*0x6e705a*/
            v99 = v98 * v98; /*0x6e7062*/
            v57 = v116; /*0x6e7066*/
            v58 = v128; /*0x6e707e*/
            v117 = v55 * (v116 * v128 + v56 * v53); /*0x6e7080*/
            v129 = v57 * v57; /*0x6e7086*/
            *(this + 1) = v56 * v99; /*0x6e7094*/
            *(this + 2) = v99 * v53 + v117 * v58; /*0x6e70a7*/
            v59 = v58 * v129; /*0x6e70b6*/
            v60 = v129; /*0x6e70b6*/
            v61 = v117 * v53 + v59; /*0x6e70b8*/
          }
          else
          {
            v100 = v54 - 1.0; /*0x6e70ce*/
            v130 = dbl_A3D0C0 - v53; /*0x6e70da*/
            v118 = v53 * dbl_A2FAA0; /*0x6e70e6*/
            v62 = v100; /*0x6e70ea*/
            v85 = v100 * v100; /*0x6e70f2*/
            v101 = 1.0 - v118; /*0x6e7100*/
            v63 = v101; /*0x6e7104*/
            v102 = v101 * v101; /*0x6e710c*/
            v60 = v62; /*0x6e7116*/
            v119 = (v118 + v62) * v63; /*0x6e7118*/
            *(this + 1) = v102 * v130; /*0x6e712c*/
            *(this + 2) = v102 * v53 + v119 * v130; /*0x6e713f*/
            v61 = v53 * v119 + v130 * v85; /*0x6e7150*/
            v53 = v85; /*0x6e7150*/
          }
          *(this + 3) = v61; /*0x6e70ba*/
          *(this + 4) = v53 * v60; /*0x6e70bf*/
          break;
        case 4: /*0x6e6dd5*/
          v64 = v87; /*0x6e7166*/
          v103 = 1.0 - v87; /*0x6e7170*/
          v120 = v64 * v64; /*0x6e7178*/
          v65 = v103; /*0x6e717c*/
          v104 = v103 * v103; /*0x6e7184*/
          *(this + 1) = v104 * v65; /*0x6e7190*/
          v66 = dbl_A30E48; /*0x6e71a1*/
          *(this + 2) = v104 * (v64 * v66); /*0x6e71a3*/
          *(this + 3) = v65 * (v66 * v120); /*0x6e71b4*/
          *(this + 4) = v64 * v120; /*0x6e71b9*/
          break;
      }
    }
    else
    {
      v13 = 0.0; /*0x6e6be8*/
      v14 = v8 + 1; /*0x6e6bea*/
      v15 = v8 + 2; /*0x6e6bee*/
      if ( result <= 5 ) /*0x6e6bf1*/
        v74 = 0.0; /*0x6e6c04*/
      else
        v74 = (float)(result - 5); /*0x6e6bfe*/
      if ( result > 4 ) /*0x6e6c0b*/
        v13 = (double)(result - 4); /*0x6e6c16*/
      v68 = v13; /*0x6e6c1c*/
      if ( result >= v14 ) /*0x6e6c37*/
        v70 = v11; /*0x6e6c4a*/
      else
        v70 = (float)(result - 1); /*0x6e6c44*/
      if ( result < v8 ) /*0x6e6c51*/
        v11 = (double)result; /*0x6e6c55*/
      v75 = v11; /*0x6e6c5c*/
      if ( result == 3 ) /*0x6e6c66*/
      {
        v16 = 1.0; /*0x6e6c68*/
        v17 = kHeadBodyNormalMatchRadius; /*0x6e6c68*/
        v69 = 1.0; /*0x6e6c6a*/
      }
      else
      {
        v69 = kHeadBodyNormalMatchRadius; /*0x6e6c70*/
        v16 = 1.0; /*0x6e6c74*/
        v17 = v69; /*0x6e6c74*/
      }
      if ( result == v15 ) /*0x6e6c78*/
        v72 = v16; /*0x6e6c7a*/
      else
        v72 = v17; /*0x6e6c82*/
      if ( result == 3 ) /*0x6e6c91*/
      {
        v18 = v16; /*0x6e6c93*/
        v19 = flt_A7C038; /*0x6e6c93*/
        v105 = v18; /*0x6e6c95*/
        v20 = v18; /*0x6e6c99*/
        v21 = v17; /*0x6e6c99*/
        v22 = v20; /*0x6e6c99*/
        v73 = v21; /*0x6e6c9b*/
      }
      else
      {
        if ( result == 4 ) /*0x6e6ca4*/
        {
          v23 = v17; /*0x6e6ca6*/
          v24 = flt_A7C038; /*0x6e6ca6*/
          v105 = v23; /*0x6e6ca8*/
        }
        else
        {
          v105 = flt_A7C038; /*0x6e6cae*/
          v23 = v17; /*0x6e6cb2*/
          v24 = v105; /*0x6e6cb2*/
        }
        v25 = v23; /*0x6e6cb6*/
        v26 = v24; /*0x6e6cb6*/
        v27 = v25; /*0x6e6cb6*/
        if ( result == v15 ) /*0x6e6cb8*/
        {
          v31 = v26; /*0x6e6ccc*/
          v32 = v16; /*0x6e6ccc*/
          v19 = v31; /*0x6e6ccc*/
          v33 = v32; /*0x6e6cce*/
          v21 = v27; /*0x6e6cce*/
          v22 = v33; /*0x6e6cce*/
          v73 = v21; /*0x6e6cd0*/
        }
        else
        {
          v73 = v26; /*0x6e6cba*/
          v28 = v26; /*0x6e6cbe*/
          v29 = v16; /*0x6e6cbe*/
          v19 = v28; /*0x6e6cbe*/
          v30 = v29; /*0x6e6cc0*/
          v21 = v27; /*0x6e6cc0*/
          v22 = v30; /*0x6e6cc0*/
        }
      }
      if ( result != v15 ) /*0x6e6cc4*/
      {
        v22 = v21; /*0x6e6cd8*/
        if ( result != v14 ) /*0x6e6cda*/
          v22 = v19; /*0x6e6cdc*/
      }
      v121 = v22; /*0x6e6cde*/
      v34 = v87; /*0x6e6ce3*/
      v88 = v87 - v68; /*0x6e6ced*/
      v76 = (float)(result - 3); /*0x6e6c2b*/
      v77 = v34 - v76; /*0x6e6cf7*/
      v79 = (float)(result - 2); /*0x6e6c33*/
      v80 = v79 - v34; /*0x6e6d01*/
      v71 = v70 - v34; /*0x6e6d0b*/
      v35 = v80; /*0x6e6d0f*/
      v81 = v80 * v69; /*0x6e6d19*/
      v36 = v77; /*0x6e6d1d*/
      v78 = v77 * v72; /*0x6e6d27*/
      v106 = v35 * v105 * v81; /*0x6e6d3b*/
      v82 = (v81 * v88 + v78 * v71) * v73; /*0x6e6d5f*/
      v122 = v78 * (v36 * v121); /*0x6e6d6b*/
      v37 = v35 * v106; /*0x6e6d77*/
      v38 = v106; /*0x6e6d77*/
      *(this + 1) = v37; /*0x6e6d79*/
      v107 = v34 - v74; /*0x6e6d82*/
      *(this + 2) = v71 * v82 + v38 * v107; /*0x6e6d98*/
      v108 = v75 - v34; /*0x6e6da3*/
      *(this + 3) = v82 * v88 + v108 * v122; /*0x6e6dbf*/
      *(this + 4) = v36 * v122; /*0x6e6dc4*/
    }
  }
  return result; /*0x6e6b71*/
}
