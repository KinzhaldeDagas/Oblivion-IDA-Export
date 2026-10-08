void __userpurge sub_944AC0(__m128 *a1@<ecx>, int a2@<ebx>, __m128 *a3, unsigned __int8 *a4, __m128 *a5)
{
  bool v5; // zf
  char v6; // al
  int v8; // ecx
  int v9; // edx
  double v10; // st7
  double v11; // st7
  double v12; // st6
  int v13; // edx
  double v14; // st7
  int v15; // edx
  double v16; // st7
  int v17; // edx
  double v18; // st7
  int v19; // edx
  double v20; // st7
  int v21; // edx
  double v22; // st7
  int v23; // eax
  double v24; // st7
  int v25; // eax
  int v26; // eax
  double v27; // st7
  int v28; // eax
  double v29; // st7
  double v30; // st7
  unsigned __int8 *v31; // esi
  int v32; // ebx
  int v33; // eax
  int v34; // ecx
  int v35; // edx
  double v36; // st7
  int v37; // ecx
  int v38; // eax
  double v39; // st7
  int v40; // ecx
  __m128 v41; // xmm1
  __m128 v42; // xmm2
  __m128 v43; // xmm0
  __m128 v44; // xmm1
  __m128 v45; // xmm3
  __m128 v46; // xmm0
  __m128 v47; // xmm2
  __m128 v48; // xmm4
  __m128 v49; // xmm1
  __m128 v50; // xmm0
  __m128 v51; // xmm1
  int v52; // eax
  bool v53; // cc
  __m128 v54; // xmm0
  __m128 v55; // xmm1
  __m128 v56; // xmm3
  __m128 v57; // xmm0
  __m128 v58; // xmm2
  __m128 v59; // xmm1
  __m128 v60; // xmm4
  __m128 v61; // xmm0
  __m128 v62; // xmm1
  int v63; // eax
  int v64; // ebx
  int v65; // ecx
  double v66; // st7
  double v67; // st7
  int v68; // edx
  double v69; // st7
  __int32 v70; // edx
  __int32 v71; // ecx
  double v72; // st7
  __int32 v73; // ecx
  __int32 v74; // edx
  bool v75; // c0
  __m128 v76; // xmm0
  double v77; // st7
  double v78; // st6
  __m128 v79; // xmm0
  int v80; // eax
  __m128 v81; // xmm0
  int v82; // edx
  __m128 v83; // xmm1
  double v84; // st7
  __m128 v85; // xmm0
  __m128 v86; // xmm0
  int v87; // eax
  int v88; // edi
  __m128 *v89; // esi
  __int32 v90; // edi
  int (__thiscall ***v91)(_DWORD, char *, __m128 *, __int32, __int32); // ecx
  int *v92; // eax
  int v93; // edx
  __int32 v94; // eax
  int v95[4]; // [esp+0h] [ebp-434h]
  int v96[4]; // [esp+10h] [ebp-424h]
  int v97[68]; // [esp+20h] [ebp-414h]
  unsigned __int8 *v98; // [esp+13Ch] [ebp-2F8h]
  float v99; // [esp+140h] [ebp-2F4h]
  int v100; // [esp+15Ch] [ebp-2D8h]
  float v101; // [esp+160h] [ebp-2D4h]
  float v102; // [esp+164h] [ebp-2D0h]
  float v103; // [esp+168h] [ebp-2CCh]
  int v104; // [esp+16Ch] [ebp-2C8h]
  unsigned int v105; // [esp+170h] [ebp-2C4h]
  __m128 *v106; // [esp+174h] [ebp-2C0h]
  float v107; // [esp+178h] [ebp-2BCh]
  unsigned int v108; // [esp+17Ch] [ebp-2B8h]
  char v109; // [esp+183h] [ebp-2B1h] BYREF
  __m128 v110; // [esp+184h] [ebp-2B0h] BYREF
  unsigned __int64 v111; // [esp+194h] [ebp-2A0h]
  unsigned __int64 v112; // [esp+19Ch] [ebp-298h]
  __m128 v113; // [esp+1A4h] [ebp-290h] BYREF
  __int32 v114; // [esp+1B4h] [ebp-280h]
  __int32 v115; // [esp+1B8h] [ebp-27Ch]
  __int32 v116; // [esp+1BCh] [ebp-278h]
  __int32 v117; // [esp+1C0h] [ebp-274h]
  __m128 v118; // [esp+1C4h] [ebp-270h]
  __m128 v119; // [esp+1D4h] [ebp-260h]
  int *v120[3]; // [esp+1E8h] [ebp-24Ch] BYREF
  __m128 v121; // [esp+1F4h] [ebp-240h] BYREF
  __m128 v122; // [esp+204h] [ebp-230h]
  __m128 v123; // [esp+214h] [ebp-220h] BYREF
  __m128 v124; // [esp+224h] [ebp-210h] BYREF
  char v125[512]; // [esp+234h] [ebp-200h] BYREF

  v5 = unk_BA94E6 == 0; /*0x944ad1*/
  v106 = a1; /*0x944ad6*/
  if ( !v5 || (v6 = sub_9246E0(a2, 4), (unk_BA94E6 = v6) != 0) ) /*0x944aed*/
  {
    while ( 1 ) /*0x944b1b*/
    {
      v8 = *a4; /*0x944b00*/
      v104 = 0x3E7; /*0x944b06*/
      switch ( v8 ) /*0x944b1b*/
      {
        case 0: /*0x944b1b*/
          return;
        case 1: /*0x944b1b*/
        case 2: /*0x944b1b*/
        case 3: /*0x944b1b*/
        case 4: /*0x944b1b*/
          v80 = a4[2]; /*0x94541d*/
          v81 = *a5; /*0x945421*/
          v100 = a4[1]; /*0x945424*/
          v82 = a4[3]; /*0x945428*/
          v113.m128_f32[0] = (float)v100; /*0x945439*/
          v113.m128_i32[3] = 0; /*0x945447*/
          v113.m128_f32[1] = (float)v80; /*0x94544f*/
          v100 = 1 << v8; /*0x945457*/
          v113.m128_f32[2] = (float)v82; /*0x94545e*/
          v83 = v113; /*0x945462*/
          v84 = (double)(1 << v8); /*0x945467*/
          *a5 = _mm_sub_ps(v81, v113); /*0x94546e*/
          v85 = _mm_sub_ps(a5[1], v83); /*0x945475*/
          *(float *)&v100 = v84; /*0x945478*/
          a5[1] = v85; /*0x94547c*/
          v86 = (__m128)(unsigned int)v100; /*0x945480*/
          *a5 = _mm_mul_ps(_mm_shuffle_ps((__m128)(unsigned int)v100, (__m128)(unsigned int)v100, 0), *a5); /*0x945493*/
          a5[1] = _mm_mul_ps(_mm_shuffle_ps(v86, v86, 0), a5[1]); /*0x9454a4*/
          v110 = _mm_mul_ps(_mm_shuffle_ps(v86, v86, 0), _mm_add_ps(*a3, v83)); /*0x9454b8*/
          LODWORD(v111) = v8 + a3[1].m128_i32[0]; /*0x9454c2*/
          a4 += 4; /*0x9454c9*/
          *((float *)&v111 + 1) = v84 * a3[1].m128_f32[1]; /*0x9454cc*/
          v112 = a3[1].m128_u64[1]; /*0x9454de*/
          a3 = &v110; /*0x9454e2*/
          continue; /*0x9454e5*/
        case 5: /*0x944b1b*/
          a4 += a4[1] + 2; /*0x9453db*/
          continue; /*0x9453df*/
        case 6: /*0x944b1b*/
          a4 += 0x100 * a4[1] + a4[2] + 3; /*0x9453f1*/
          continue; /*0x9453f5*/
        case 7: /*0x944b1b*/
          a4 += 0x100 * (a4[2] + (a4[1] << 8)) + a4[3] + 4; /*0x945410*/
          continue; /*0x945414*/
        case 9: /*0x944b1b*/
          a2 = a4[1]; /*0x9454ed*/
          if ( a3 != &v110 ) /*0x9454f7*/
          {
            sub_944A90(&v110, (int)a3); /*0x9454fe*/
            a3 = &v110; /*0x945507*/
          }
          LODWORD(v112) = a2 + v112; /*0x94550a*/
          a4 += 2; /*0x94550e*/
          continue; /*0x945511*/
        case 0xA: /*0x944b1b*/
          a2 = a4[2] + (a4[1] << 8); /*0x945521*/
          if ( a3 != &v110 ) /*0x94552c*/
          {
            sub_944A90(&v110, (int)a3); /*0x945533*/
            a3 = &v110; /*0x94553c*/
          }
          LODWORD(v112) = a2 + v112; /*0x94553f*/
          a4 += 3; /*0x945543*/
          continue; /*0x945546*/
        case 0xB: /*0x944b1b*/
          a2 = a4[4] + ((a4[3] + ((a4[2] + (a4[1] << 8)) << 8)) << 8); /*0x94556f*/
          if ( a3 != &v110 ) /*0x945573*/
          {
            sub_944A90(&v110, (int)a3); /*0x94557a*/
            a3 = &v110; /*0x945583*/
          }
          LODWORD(v112) = a2; /*0x945586*/
          a4 += 5; /*0x94558a*/
          continue; /*0x94558d*/
        case 0x10: /*0x944b1b*/
        case 0x11: /*0x944b1b*/
        case 0x12: /*0x944b1b*/
          v38 = a4[2]; /*0x944e05*/
          v100 = a4[1]; /*0x944e09*/
          v104 = v8 - 0x10; /*0x944e10*/
          v39 = (double)v100; /*0x944e14*/
          v100 = v38; /*0x944e18*/
          v103 = v39; /*0x944e1c*/
          v102 = (float)v38; /*0x944e24*/
          v11 = a5[0xFFFFFFFC].m128_f32[v8]; /*0x944e28*/
          v12 = a5[0xFFFFFFFD].m128_f32[v8]; /*0x944e2b*/
          goto LABEL_17; /*0x944e2b*/
        case 0x13: /*0x944b1b*/
          v9 = a4[2]; /*0x944b26*/
          v100 = 2 * a4[1]; /*0x944b2c*/
          v10 = (double)v100; /*0x944b32*/
          v100 = 2 * v9; /*0x944b36*/
          v103 = v10; /*0x944b3a*/
          v102 = (float)(2 * v9); /*0x944b42*/
          v11 = a5->m128_f32[2] + a5->m128_f32[1]; /*0x944b49*/
          v12 = a5[1].m128_f32[2] + a5[1].m128_f32[1]; /*0x944b4f*/
          goto LABEL_17; /*0x944b52*/
        case 0x14: /*0x944b1b*/
          v13 = a4[2]; /*0x944b5b*/
          v100 = 2 * a4[1] - 0xFF; /*0x944b66*/
          v14 = (double)v100; /*0x944b71*/
          v100 = 2 * v13 - 0xFF; /*0x944b75*/
          v103 = v14; /*0x944b79*/
          v102 = (float)v100; /*0x944b81*/
          v11 = a5->m128_f32[1] - a5->m128_f32[2]; /*0x944b88*/
          v12 = a5[1].m128_f32[1] - a5[1].m128_f32[2]; /*0x944b8e*/
          goto LABEL_17; /*0x944b91*/
        case 0x15: /*0x944b1b*/
          v15 = a4[2]; /*0x944b9a*/
          v100 = 2 * a4[1]; /*0x944ba0*/
          v16 = (double)v100; /*0x944ba6*/
          v100 = 2 * v15; /*0x944baa*/
          v103 = v16; /*0x944bae*/
          v102 = (float)(2 * v15); /*0x944bb6*/
          v11 = a5->m128_f32[2] + a5->m128_f32[0]; /*0x944bbd*/
          v12 = a5[1].m128_f32[2] + a5[1].m128_f32[0]; /*0x944bc2*/
          goto LABEL_17; /*0x944bc5*/
        case 0x16: /*0x944b1b*/
          v17 = a4[2]; /*0x944bce*/
          v100 = 2 * a4[1] - 0xFF; /*0x944bd9*/
          v18 = (double)v100; /*0x944be4*/
          v100 = 2 * v17 - 0xFF; /*0x944be8*/
          v103 = v18; /*0x944bec*/
          v102 = (float)v100; /*0x944bf4*/
          v11 = a5->m128_f32[0] - a5->m128_f32[2]; /*0x944bfa*/
          v12 = a5[1].m128_f32[0] - a5[1].m128_f32[2]; /*0x944c00*/
          goto LABEL_17; /*0x944c03*/
        case 0x17: /*0x944b1b*/
          v19 = a4[2]; /*0x944c0c*/
          v100 = 2 * a4[1]; /*0x944c12*/
          v20 = (double)v100; /*0x944c18*/
          v100 = 2 * v19; /*0x944c1c*/
          v103 = v20; /*0x944c20*/
          v102 = (float)(2 * v19); /*0x944c28*/
          v11 = a5->m128_f32[1] + a5->m128_f32[0]; /*0x944c2f*/
          v12 = a5[1].m128_f32[1] + a5[1].m128_f32[0]; /*0x944c34*/
          goto LABEL_17; /*0x944c37*/
        case 0x18: /*0x944b1b*/
          v21 = a4[2]; /*0x944c40*/
          v100 = 2 * a4[1] - 0xFF; /*0x944c4b*/
          v22 = (double)v100; /*0x944c56*/
          v100 = 2 * v21 - 0xFF; /*0x944c5a*/
          v103 = v22; /*0x944c5e*/
          v102 = (float)v100; /*0x944c66*/
          v11 = a5->m128_f32[0] - a5->m128_f32[1]; /*0x944c6c*/
          v12 = a5[1].m128_f32[0] - a5[1].m128_f32[1]; /*0x944c72*/
          goto LABEL_17; /*0x944c75*/
        case 0x19: /*0x944b1b*/
          v23 = a4[2]; /*0x944c81*/
          v100 = 3 * a4[1]; /*0x944c85*/
          v24 = (double)v100; /*0x944c8c*/
          v100 = 3 * v23; /*0x944c90*/
          v103 = v24; /*0x944c94*/
          v102 = (float)(3 * v23); /*0x944c9c*/
          v11 = a5->m128_f32[2] + a5->m128_f32[1] + a5->m128_f32[0]; /*0x944ca6*/
          v12 = a5[1].m128_f32[2] + a5[1].m128_f32[1] + a5[1].m128_f32[0]; /*0x944cae*/
          goto LABEL_17; /*0x944cb1*/
        case 0x1A: /*0x944b1b*/
          v100 = 3 * (a4[1] - 0x55); /*0x944cc0*/
          v25 = a4[2] - 0x55; /*0x944ccc*/
          v103 = (float)v100; /*0x944cd2*/
          v100 = 3 * v25; /*0x944cd6*/
          v102 = (float)(3 * v25); /*0x944cde*/
          v11 = a5->m128_f32[1] + a5->m128_f32[0] - a5->m128_f32[2]; /*0x944ce7*/
          v12 = a5[1].m128_f32[1] + a5[1].m128_f32[0] - a5[1].m128_f32[2]; /*0x944cf0*/
          goto LABEL_17; /*0x944cf3*/
        case 0x1B: /*0x944b1b*/
          v26 = a4[2]; /*0x944d02*/
          v100 = 3 * (a4[1] - 0x55); /*0x944d06*/
          v27 = (double)v100; /*0x944d10*/
          v100 = 3 * (v26 - 0x55); /*0x944d14*/
          v103 = v27; /*0x944d18*/
          v102 = (float)v100; /*0x944d20*/
          v11 = a5->m128_f32[0] - a5->m128_f32[1] + a5->m128_f32[2]; /*0x944d29*/
          v12 = a5[1].m128_f32[0] - a5[1].m128_f32[1] + a5[1].m128_f32[2]; /*0x944d32*/
          goto LABEL_17; /*0x944d35*/
        case 0x1C: /*0x944b1b*/
          v28 = a4[2]; /*0x944d46*/
          v100 = 3 * (a4[1] - 0xAA); /*0x944d4a*/
          v29 = (double)v100; /*0x944d56*/
          v100 = 3 * (v28 - 0xAA); /*0x944d5a*/
          v103 = v29; /*0x944d5e*/
          v102 = (float)v100; /*0x944d66*/
          v11 = a5->m128_f32[0] - a5->m128_f32[1] - a5->m128_f32[2]; /*0x944d6f*/
          v12 = a5[1].m128_f32[0] - a5[1].m128_f32[1] - a5[1].m128_f32[2]; /*0x944d78*/
LABEL_17:
          v31 = a4 + 4; /*0x944e2f*/
          goto LABEL_18; /*0x944e2f*/
        case 0x20: /*0x944b1b*/
        case 0x21: /*0x944b1b*/
        case 0x22: /*0x944b1b*/
          v100 = a4[1]; /*0x944d84*/
          v104 = v8 - 0x20; /*0x944d8b*/
          v30 = (double)v100; /*0x944d8f*/
          v31 = a4 + 3; /*0x944d93*/
          v102 = v30; /*0x944d96*/
          v103 = v30 + fConstant_1; /*0x944da0*/
          v11 = a5[0xFFFFFFF8].m128_f32[v8]; /*0x944da4*/
          v12 = a5[0xFFFFFFF9].m128_f32[v8]; /*0x944da7*/
LABEL_18:
          a2 = 0; /*0x944e32*/
          v100 = v31[0xFFFFFFFF]; /*0x944e38*/
          goto LABEL_19; /*0x944e38*/
        case 0x23: /*0x944b1b*/
        case 0x24: /*0x944b1b*/
        case 0x25: /*0x944b1b*/
          v32 = a4[3]; /*0x944db4*/
          v33 = v8 - 0x23; /*0x944db8*/
          v34 = a4[2]; /*0x944dbb*/
          v100 = a4[1]; /*0x944dbf*/
          v35 = a4[4]; /*0x944dc3*/
          v36 = (double)v100; /*0x944dc7*/
          v100 = v34; /*0x944dcb*/
          v37 = a4[6]; /*0x944dcf*/
          v103 = v36; /*0x944dd3*/
          v31 = a4 + 7; /*0x944ddb*/
          v104 = v33; /*0x944dde*/
          v102 = (float)v100; /*0x944de2*/
          v11 = a5->m128_f32[v33]; /*0x944de9*/
          a2 = v35 + (v32 << 8); /*0x944dec*/
          v12 = a5[1].m128_f32[v33]; /*0x944dee*/
          v100 = v37 + (v31[0xFFFFFFFE] << 8); /*0x944dfb*/
LABEL_19:
          v101 = v12; /*0x944e3c*/
          if ( v101 >= (double)v102 || v11 >= v102 ) /*0x944e58*/
          {
            v40 = v100; /*0x944e65*/
            a4 = &v31[v100]; /*0x944e69*/
            if ( v11 <= v103 || v101 <= (double)v103 ) /*0x944e7f*/
            {
              v41 = *a5; /*0x944e89*/
              v42 = a5[1]; /*0x944e8e*/
              v121 = *a5; /*0x944e92*/
              v122 = v42; /*0x944e9a*/
              v107 = v11 - v103; /*0x944ea2*/
              *(float *)&v105 = v11 - v102; /*0x944eaa*/
              *(float *)&v108 = v101 - v103; /*0x944eb6*/
              v101 = v101 - v102; /*0x944ec2*/
              if ( v107 >= (double)*(float *)&v108 ) /*0x944ed3*/
              {
                if ( v101 * *(float *)&v105 < *(float *)&SrcStr ) /*0x945052*/
                {
                  *(float *)&v105 = *(float *)&v105 / (*(float *)&v105 - v101); /*0x945060*/
                  v54 = _mm_shuffle_ps((__m128)v105, (__m128)v105, 0); /*0x94506a*/
                  v122 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v54), v41), _mm_mul_ps(v54, v42)); /*0x945084*/
                }
                sub_944AC0(v106, a2, a3, a4, &v121); /*0x94509d*/
                if ( *(float *)&v108 * v107 < *(float *)&SrcStr ) /*0x9450b5*/
                {
                  v55 = a5[1]; /*0x9450bb*/
                  v56 = (__m128)xmmword_A6DFE0; /*0x9450c3*/
                  *(float *)&v108 = v107 / (v107 - *(float *)&v108); /*0x9450ce*/
                  v57 = _mm_shuffle_ps((__m128)v108, (__m128)v108, 0); /*0x9450d8*/
                  *a5 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v56, v57), *a5), _mm_mul_ps(v57, v55)); /*0x9450ee*/
                }
                if ( v106[5].m128_f32[1] < (double)fConstant_1 ) /*0x945103*/
                {
                  v58 = v106[3]; /*0x94510c*/
                  v59 = *(__m128 *)(v106[1].m128_i32[0] + 0x10); /*0x945113*/
                  v60 = (__m128)xmmword_A6DFE0; /*0x945117*/
                  v116 = v106[5].m128_i32[1]; /*0x945121*/
                  v61 = _mm_shuffle_ps((__m128)(unsigned int)v116, (__m128)(unsigned int)v116, 0); /*0x94512b*/
                  a5[1] = _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(v60, v61), v106[2]), _mm_mul_ps(v61, v58)), v59); /*0x945145*/
                  v62 = a5[1]; /*0x94514c*/
                  v117 = a3[1].m128_i32[1]; /*0x945150*/
                  a5[1] = _mm_mul_ps(_mm_shuffle_ps((__m128)(unsigned int)v117, (__m128)(unsigned int)v117, 0), v62); /*0x945164*/
                  v63 = v104; /*0x94516f*/
                  v53 = v104 < 3; /*0x945173*/
                  a5[1] = _mm_sub_ps(a5[1], *a3); /*0x945179*/
                  if ( v53 && a5[1].m128_f32[v63] > (double)v103 ) /*0x94518c*/
                    return; /*0x94518c*/
                }
                a2 -= v100; /*0x945192*/
                a4 += a2; /*0x945196*/
              }
              else
              {
                if ( *(float *)&v108 * v107 < *(float *)&SrcStr ) /*0x944eec*/
                {
                  *(float *)&v100 = v107 / (v107 - *(float *)&v108); /*0x944efa*/
                  v43 = _mm_shuffle_ps((__m128)(unsigned int)v100, (__m128)(unsigned int)v100, 0); /*0x944f04*/
                  v122 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v43), v41), _mm_mul_ps(v43, v42)); /*0x944f1e*/
                }
                v98 = &a4[a2 - v40]; /*0x944f35*/
                a2 = (int)v106; /*0x944f36*/
                sub_944AC0(v106, (int)v106, a3, v98, &v121); /*0x944f3d*/
                if ( v101 * *(float *)&v105 < *(float *)&SrcStr ) /*0x944f55*/
                {
                  v44 = a5[1]; /*0x944f5b*/
                  v45 = (__m128)xmmword_A6DFE0; /*0x944f63*/
                  *(float *)&v100 = *(float *)&v105 / (*(float *)&v105 - v101); /*0x944f6e*/
                  v46 = _mm_shuffle_ps((__m128)(unsigned int)v100, (__m128)(unsigned int)v100, 0); /*0x944f78*/
                  *a5 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v45, v46), *a5), _mm_mul_ps(v46, v44)); /*0x944f8e*/
                }
                if ( *(float *)(a2 + 0x54) < (double)fConstant_1 ) /*0x944f9f*/
                {
                  v47 = v106[3]; /*0x944fac*/
                  v48 = (__m128)xmmword_A6DFE0; /*0x944fb3*/
                  v49 = *(__m128 *)(v106[1].m128_i32[0] + 0x10); /*0x944fba*/
                  v115 = v106[5].m128_i32[1]; /*0x944fbe*/
                  v50 = _mm_shuffle_ps((__m128)(unsigned int)v115, (__m128)(unsigned int)v115, 0); /*0x944fc8*/
                  a5[1] = _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(v48, v50), v106[2]), _mm_mul_ps(v50, v47)), v49); /*0x944fe5*/
                  v51 = a5[1]; /*0x944fec*/
                  v114 = a3[1].m128_i32[1]; /*0x944ff0*/
                  a5[1] = _mm_mul_ps(_mm_shuffle_ps((__m128)(unsigned int)v114, (__m128)(unsigned int)v114, 0), v51); /*0x945004*/
                  v52 = v104; /*0x94500f*/
                  v53 = v104 < 3; /*0x945013*/
                  a5[1] = _mm_sub_ps(a5[1], *a3); /*0x945019*/
                  if ( v53 && a5[1].m128_f32[v52] < (double)v102 ) /*0x945030*/
                    return; /*0x945030*/
                }
              }
            }
          }
          else
          {
            a4 = &v31[a2]; /*0x944e5a*/
          }
          continue; /*0x944e5c*/
        case 0x26: /*0x944b1b*/
        case 0x27: /*0x944b1b*/
        case 0x28: /*0x944b1b*/
          v68 = a4[2]; /*0x945206*/
          v100 = a4[1]; /*0x94520a*/
          v65 = v8 - 0x26; /*0x94520e*/
          a4 += 3; /*0x945211*/
          v69 = (double)v100; /*0x945214*/
          v100 = v68; /*0x945218*/
          v102 = v69; /*0x94521c*/
          v67 = (double)v68; /*0x945220*/
          goto LABEL_43; /*0x945220*/
        case 0x29: /*0x944b1b*/
        case 0x2A: /*0x944b1b*/
        case 0x2B: /*0x944b1b*/
          v64 = a4[5]; /*0x9451a5*/
          v100 = a4[3] + (((a4[1] << 8) + a4[2]) << 8); /*0x9451ba*/
          v65 = v8 - 0x29; /*0x9451c2*/
          v66 = (double)v100 * v106[1].m128_f32[1] * a3[1].m128_f32[1]; /*0x9451dc*/
          v100 = a4[6] + ((v64 + (a4[4] << 8)) << 8); /*0x9451e1*/
          a4 += 7; /*0x9451ec*/
          v102 = v66 - a3->m128_f32[v65]; /*0x9451ef*/
          v67 = (double)v100 * v106[1].m128_f32[1] * a3[1].m128_f32[1] - a3->m128_f32[v65]; /*0x9451fd*/
LABEL_43:
          v104 = a5->m128_i32[v65]; /*0x945224*/
          v101 = a5[1].m128_f32[v65]; /*0x94522f*/
          if ( *(float *)&v104 >= (double)v101 ) /*0x945240*/
          {
            if ( *(float *)&v104 < (double)v102 || v101 > v67 ) /*0x945288*/
              return; /*0x945288*/
            a2 = 1; /*0x94528e*/
          }
          else
          {
            if ( v101 < (double)v102 || *(float *)&v104 > v67 ) /*0x945260*/
              return; /*0x945260*/
            a2 = 0; /*0x945266*/
          }
          v70 = a5->m128_i32[1]; /*0x94529d*/
          v118.m128_i32[0] = a5->m128_i32[0]; /*0x9452a0*/
          v71 = a5->m128_i32[2]; /*0x9452a7*/
          *(float *)&v100 = *(float *)&v104 - v67; /*0x9452aa*/
          *(unsigned __int64 *)((char *)v118.m128_u64 + 4) = __PAIR64__(v71, v70); /*0x9452ae*/
          v72 = v101 - v67; /*0x9452b8*/
          v73 = a5[1].m128_i32[0]; /*0x9452cc*/
          v118.m128_i32[3] = a5->m128_i32[3]; /*0x9452ce*/
          v74 = a5[1].m128_i32[1]; /*0x9452d5*/
          v75 = *(float *)&v100 * v72 < *(float *)&SrcStr; /*0x9452d8*/
          v119.m128_i32[0] = v73; /*0x9452de*/
          *(unsigned __int64 *)((char *)v119.m128_u64 + 4) = __PAIR64__(a5[1].m128_i32[2], v74); /*0x9452e8*/
          v119.m128_i32[3] = a5[1].m128_i32[3]; /*0x9452fe*/
          if ( v75 ) /*0x945305*/
          {
            v99 = *(float *)&v100 / (*(float *)&v100 - v72); /*0x945319*/
            sub_535AA0(&v123, v99); /*0x94531e*/
            v76 = _mm_shuffle_ps(v123, v123, 0); /*0x945334*/
            a5[-a2 + 1] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v76), v118), _mm_mul_ps(v76, v119)); /*0x945358*/
          }
          v77 = *(float *)&v104 - v102; /*0x945364*/
          v78 = v101 - v102; /*0x94536c*/
          if ( v78 * v77 < *(float *)&SrcStr ) /*0x94537f*/
          {
            v99 = v77 / (v77 - v78); /*0x945393*/
            sub_535AA0(&v124, v99); /*0x94539a*/
            v79 = _mm_shuffle_ps(v124, v124, 0); /*0x9453ae*/
            a2 *= 0x10; /*0x9453c8*/
            *(__m128 *)((char *)a5 + a2) = _mm_add_ps( /*0x9453ce*/
                                             _mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v79), v118),
                                             _mm_mul_ps(v79, v119));
          }
          break; /*0x9453d2*/
        case 0x30: /*0x944b1b*/
        case 0x31: /*0x944b1b*/
        case 0x32: /*0x944b1b*/
        case 0x33: /*0x944b1b*/
        case 0x34: /*0x944b1b*/
        case 0x35: /*0x944b1b*/
        case 0x36: /*0x944b1b*/
        case 0x37: /*0x944b1b*/
        case 0x38: /*0x944b1b*/
        case 0x39: /*0x944b1b*/
        case 0x3A: /*0x944b1b*/
        case 0x3B: /*0x944b1b*/
        case 0x3C: /*0x944b1b*/
        case 0x3D: /*0x944b1b*/
        case 0x3E: /*0x944b1b*/
        case 0x3F: /*0x944b1b*/
        case 0x40: /*0x944b1b*/
        case 0x41: /*0x944b1b*/
        case 0x42: /*0x944b1b*/
        case 0x43: /*0x944b1b*/
        case 0x44: /*0x944b1b*/
        case 0x45: /*0x944b1b*/
        case 0x46: /*0x944b1b*/
        case 0x47: /*0x944b1b*/
        case 0x48: /*0x944b1b*/
        case 0x49: /*0x944b1b*/
        case 0x4A: /*0x944b1b*/
        case 0x4B: /*0x944b1b*/
        case 0x4C: /*0x944b1b*/
        case 0x4D: /*0x944b1b*/
        case 0x4E: /*0x944b1b*/
        case 0x4F: /*0x944b1b*/
          v88 = v8 - 0x30; /*0x9456d4*/
          goto LABEL_79; /*0x9456d4*/
        case 0x50: /*0x944b1b*/
          v88 = a4[1]; /*0x945685*/
          goto LABEL_79; /*0x945689*/
        case 0x51: /*0x944b1b*/
          v88 = a4[2] + (a4[1] << 8); /*0x945696*/
          goto LABEL_79; /*0x945698*/
        case 0x52: /*0x944b1b*/
          v88 = a4[3] + ((a4[2] + (a4[1] << 8)) << 8); /*0x9456ae*/
          goto LABEL_79; /*0x9456b0*/
        case 0x53: /*0x944b1b*/
          v88 = ((a4[2] + (a4[1] << 8)) << 0x10) + a4[4] + (a4[3] << 8); /*0x9456cf*/
LABEL_79:
          v89 = v106; /*0x9456d7*/
          v90 = a3[1].m128_i32[2] + v88; /*0x9456e1*/
          v91 = (int (__thiscall ***)(_DWORD, char *, __m128 *, __int32, __int32))v106[4].m128_i32[1]; /*0x9456e3*/
          if ( !v91 || *(_BYTE *)(**v91)(v91, &v109, v106 + 2, v106[6].m128_i32[1], v90) ) /*0x9456fc*/
          {
            v92 = (int *)(*(int (__thiscall **)(__int32, __int32, char *))(*(_DWORD *)v89[6].m128_i32[1] + 0x28))( /*0x945713*/
                           v89[6].m128_i32[1],
                           v90,
                           v125);
            v93 = *v92; /*0x94571b*/
            if ( v89[5].m128_i32[2] ) /*0x945716*/
            {
              if ( *(_BYTE *)(*(int (__thiscall **)(int *, char *, __m128 *, __int32))(v93 + 0x14))( /*0x94572e*/
                               v92,
                               &v109,
                               v89 + 2,
                               v89[5].m128_i32[2]) )
              {
                v89[5].m128_i8[0] = 1; /*0x945733*/
                v94 = v89[5].m128_i32[2]; /*0x945737*/
                v89[5].m128_i32[1] = *(_DWORD *)(v94 + 0x14); /*0x94573d*/
                *(_DWORD *)(v94 + 0x10) = v90; /*0x945740*/
              }
            }
            else
            {
              v113.m128_i32[3] = v89[6].m128_i32[0]; /*0x94574f*/
              v113.m128_i32[2] = *(_DWORD *)(v113.m128_i32[3] + 8); /*0x945756*/
              v99 = v89[5].m128_f32[3]; /*0x94575d*/
              v113.m128_u64[0] = __PAIR64__(v90, (unsigned int)v92); /*0x945769*/
              (*(void (__thiscall **)(int *, __m128 *, __m128 *, float))(v93 + 0x18))( /*0x945771*/
                v92,
                v89 + 2,
                &v113,
                COERCE_FLOAT(LODWORD(v99)));
              v89[5].m128_i32[1] = *(_DWORD *)(v89[5].m128_i32[3] + 4); /*0x94577a*/
            }
          }
          return; /*0x945749*/
        case 0x60: /*0x944b1b*/
        case 0x61: /*0x944b1b*/
        case 0x62: /*0x944b1b*/
        case 0x63: /*0x944b1b*/
          v87 = a4[1]; /*0x945592*/
          a4 += 2; /*0x945596*/
          v97[v8] = v87; /*0x945599*/
          goto LABEL_70; /*0x9455a0*/
        case 0x64: /*0x944b1b*/
        case 0x65: /*0x944b1b*/
        case 0x66: /*0x944b1b*/
        case 0x67: /*0x944b1b*/
          v96[v8] = a4[2] + (a4[1] << 8); /*0x9455af*/
          a4 += 3; /*0x9455b6*/
          goto LABEL_70; /*0x9455b9*/
        case 0x68: /*0x944b1b*/
        case 0x69: /*0x944b1b*/
        case 0x6A: /*0x944b1b*/
        case 0x6B: /*0x944b1b*/
          v95[v8] = a4[4] + ((a4[3] + ((a4[2] + (a4[1] << 8)) << 8)) << 8); /*0x9455da*/
          a4 += 5; /*0x9455e1*/
LABEL_70:
          if ( a3 != &v110 ) /*0x9455f1*/
          {
            v110 = *a3; /*0x9455f6*/
            v111 = a3[1].m128_u64[0]; /*0x9455fe*/
            LODWORD(v112) = a3[1].m128_i32[2]; /*0x945610*/
            a3 = &v110; /*0x945614*/
          }
          continue; /*0x945614*/
        default:
          sub_8BBFB0((int)v120, a2, v125, 0x200u, 1); /*0x94563a*/
          sub_8BBDB0(v120, "Unknown command.\n"); /*0x94564b*/
          (*(void (__thiscall **)(int, int, int, char *, const char *, int))(*(_DWORD *)unk_BA7FB0 + 8))( /*0x945671*/
            unk_BA7FB0,
            3,
            0x1298FEDD,
            v125,
            ".\\collide\\mopp\\machine\\hkMoppLongRayVirtualMachine.cpp",
            0x1C9);
          sub_8BC000(v120); /*0x94567b*/
          continue; /*0x945680*/
      }
    }
  }
}
