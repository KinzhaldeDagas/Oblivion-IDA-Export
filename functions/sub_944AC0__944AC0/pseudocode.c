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
  int v89; // esi
  __int32 v90; // edi
  int (__thiscall ***v91)(_DWORD, char *, int, __int32, __int32); // ecx
  int *v92; // eax
  int v93; // edx
  int v94; // eax
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

  v5 = byte_BA94E6 == 0;
  v106 = a1;
  if ( !v5 || (v6 = sub_9246E0(a2, 4), (byte_BA94E6 = v6) != 0) )
  {
    while ( 1 )
    {
      v8 = *a4;
      v104 = 0x3E7;
      switch ( v8 )
      {
        case 0:
          return;
        case 1:
        case 2:
        case 3:
        case 4:
          v80 = a4[2];
          v81 = *a5;
          v100 = a4[1];
          v82 = a4[3];
          v113.m128_f32[0] = (float)v100;
          v113.m128_i32[3] = 0;
          v113.m128_f32[1] = (float)v80;
          v100 = 1 << v8;
          v113.m128_f32[2] = (float)v82;
          v83 = v113;
          v84 = (double)(1 << v8);
          *a5 = _mm_sub_ps(v81, v113);
          v85 = _mm_sub_ps(a5[1], v83);
          *(float *)&v100 = v84;
          a5[1] = v85;
          v86 = (__m128)(unsigned int)v100;
          *a5 = _mm_mul_ps(_mm_shuffle_ps((__m128)(unsigned int)v100, (__m128)(unsigned int)v100, 0), *a5);
          a5[1] = _mm_mul_ps(_mm_shuffle_ps(v86, v86, 0), a5[1]);
          v110 = _mm_mul_ps(_mm_shuffle_ps(v86, v86, 0), _mm_add_ps(*a3, v83));
          LODWORD(v111) = v8 + a3[1].m128_i32[0];
          a4 += 4;
          *((float *)&v111 + 1) = v84 * a3[1].m128_f32[1];
          v112 = a3[1].m128_u64[1];
          a3 = &v110;
          continue;
        case 5:
          a4 += a4[1] + 2;
          continue;
        case 6:
          a4 += 0x100 * a4[1] + a4[2] + 3;
          continue;
        case 7:
          a4 += 0x100 * (a4[2] + (a4[1] << 8)) + a4[3] + 4;
          continue;
        case 9:
          a2 = a4[1];
          if ( a3 != &v110 )
          {
            sub_944A90(&v110, (int)a3);
            a3 = &v110;
          }
          LODWORD(v112) = a2 + v112;
          a4 += 2;
          continue;
        case 0xA:
          a2 = a4[2] + (a4[1] << 8);
          if ( a3 != &v110 )
          {
            sub_944A90(&v110, (int)a3);
            a3 = &v110;
          }
          LODWORD(v112) = a2 + v112;
          a4 += 3;
          continue;
        case 0xB:
          a2 = a4[4] + ((a4[3] + ((a4[2] + (a4[1] << 8)) << 8)) << 8);
          if ( a3 != &v110 )
          {
            sub_944A90(&v110, (int)a3);
            a3 = &v110;
          }
          LODWORD(v112) = a2;
          a4 += 5;
          continue;
        case 0x10:
        case 0x11:
        case 0x12:
          v38 = a4[2];
          v100 = a4[1];
          v104 = v8 - 0x10;
          v39 = (double)v100;
          v100 = v38;
          v103 = v39;
          v102 = (float)v38;
          v11 = a5[0xFFFFFFFC].m128_f32[v8];
          v12 = a5[0xFFFFFFFD].m128_f32[v8];
          goto LABEL_17;
        case 0x13:
          v9 = a4[2];
          v100 = 2 * a4[1];
          v10 = (double)v100;
          v100 = 2 * v9;
          v103 = v10;
          v102 = (float)(2 * v9);
          v11 = a5->m128_f32[2] + a5->m128_f32[1];
          v12 = a5[1].m128_f32[2] + a5[1].m128_f32[1];
          goto LABEL_17;
        case 0x14:
          v13 = a4[2];
          v100 = 2 * a4[1] - 0xFF;
          v14 = (double)v100;
          v100 = 2 * v13 - 0xFF;
          v103 = v14;
          v102 = (float)v100;
          v11 = a5->m128_f32[1] - a5->m128_f32[2];
          v12 = a5[1].m128_f32[1] - a5[1].m128_f32[2];
          goto LABEL_17;
        case 0x15:
          v15 = a4[2];
          v100 = 2 * a4[1];
          v16 = (double)v100;
          v100 = 2 * v15;
          v103 = v16;
          v102 = (float)(2 * v15);
          v11 = a5->m128_f32[2] + a5->m128_f32[0];
          v12 = a5[1].m128_f32[2] + a5[1].m128_f32[0];
          goto LABEL_17;
        case 0x16:
          v17 = a4[2];
          v100 = 2 * a4[1] - 0xFF;
          v18 = (double)v100;
          v100 = 2 * v17 - 0xFF;
          v103 = v18;
          v102 = (float)v100;
          v11 = a5->m128_f32[0] - a5->m128_f32[2];
          v12 = a5[1].m128_f32[0] - a5[1].m128_f32[2];
          goto LABEL_17;
        case 0x17:
          v19 = a4[2];
          v100 = 2 * a4[1];
          v20 = (double)v100;
          v100 = 2 * v19;
          v103 = v20;
          v102 = (float)(2 * v19);
          v11 = a5->m128_f32[1] + a5->m128_f32[0];
          v12 = a5[1].m128_f32[1] + a5[1].m128_f32[0];
          goto LABEL_17;
        case 0x18:
          v21 = a4[2];
          v100 = 2 * a4[1] - 0xFF;
          v22 = (double)v100;
          v100 = 2 * v21 - 0xFF;
          v103 = v22;
          v102 = (float)v100;
          v11 = a5->m128_f32[0] - a5->m128_f32[1];
          v12 = a5[1].m128_f32[0] - a5[1].m128_f32[1];
          goto LABEL_17;
        case 0x19:
          v23 = a4[2];
          v100 = 3 * a4[1];
          v24 = (double)v100;
          v100 = 3 * v23;
          v103 = v24;
          v102 = (float)(3 * v23);
          v11 = a5->m128_f32[2] + a5->m128_f32[1] + a5->m128_f32[0];
          v12 = a5[1].m128_f32[2] + a5[1].m128_f32[1] + a5[1].m128_f32[0];
          goto LABEL_17;
        case 0x1A:
          v100 = 3 * (a4[1] - 0x55);
          v25 = a4[2] - 0x55;
          v103 = (float)v100;
          v100 = 3 * v25;
          v102 = (float)(3 * v25);
          v11 = a5->m128_f32[1] + a5->m128_f32[0] - a5->m128_f32[2];
          v12 = a5[1].m128_f32[1] + a5[1].m128_f32[0] - a5[1].m128_f32[2];
          goto LABEL_17;
        case 0x1B:
          v26 = a4[2];
          v100 = 3 * (a4[1] - 0x55);
          v27 = (double)v100;
          v100 = 3 * (v26 - 0x55);
          v103 = v27;
          v102 = (float)v100;
          v11 = a5->m128_f32[0] - a5->m128_f32[1] + a5->m128_f32[2];
          v12 = a5[1].m128_f32[0] - a5[1].m128_f32[1] + a5[1].m128_f32[2];
          goto LABEL_17;
        case 0x1C:
          v28 = a4[2];
          v100 = 3 * (a4[1] - 0xAA);
          v29 = (double)v100;
          v100 = 3 * (v28 - 0xAA);
          v103 = v29;
          v102 = (float)v100;
          v11 = a5->m128_f32[0] - a5->m128_f32[1] - a5->m128_f32[2];
          v12 = a5[1].m128_f32[0] - a5[1].m128_f32[1] - a5[1].m128_f32[2];
LABEL_17:
          v31 = a4 + 4;
          goto LABEL_18;
        case 0x20:
        case 0x21:
        case 0x22:
          v100 = a4[1];
          v104 = v8 - 0x20;
          v30 = (double)v100;
          v31 = a4 + 3;
          v102 = v30;
          v103 = v30 + fConstant_1;
          v11 = a5[0xFFFFFFF8].m128_f32[v8];
          v12 = a5[0xFFFFFFF9].m128_f32[v8];
LABEL_18:
          a2 = 0;
          v100 = v31[0xFFFFFFFF];
          goto LABEL_19;
        case 0x23:
        case 0x24:
        case 0x25:
          v32 = a4[3];
          v33 = v8 - 0x23;
          v34 = a4[2];
          v100 = a4[1];
          v35 = a4[4];
          v36 = (double)v100;
          v100 = v34;
          v37 = a4[6];
          v103 = v36;
          v31 = a4 + 7;
          v104 = v33;
          v102 = (float)v100;
          v11 = a5->m128_f32[v33];
          a2 = v35 + (v32 << 8);
          v12 = a5[1].m128_f32[v33];
          v100 = v37 + (v31[0xFFFFFFFE] << 8);
LABEL_19:
          v101 = v12;
          if ( v101 >= (double)v102 || v11 >= v102 )
          {
            v40 = v100;
            a4 = &v31[v100];
            if ( v11 <= v103 || v101 <= (double)v103 )
            {
              v41 = *a5;
              v42 = a5[1];
              v121 = *a5;
              v122 = v42;
              v107 = v11 - v103;
              *(float *)&v105 = v11 - v102;
              *(float *)&v108 = v101 - v103;
              v101 = v101 - v102;
              if ( v107 >= (double)*(float *)&v108 )
              {
                if ( v101 * *(float *)&v105 < *(float *)&SrcStr )
                {
                  *(float *)&v105 = *(float *)&v105 / (*(float *)&v105 - v101);
                  v54 = _mm_shuffle_ps((__m128)v105, (__m128)v105, 0);
                  v122 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v54), v41), _mm_mul_ps(v54, v42));
                }
                sub_944AC0((int)v106, a2, a3, a4, &v121);
                if ( *(float *)&v108 * v107 < *(float *)&SrcStr )
                {
                  v55 = a5[1];
                  v56 = (__m128)xmmword_A6DFE0;
                  *(float *)&v108 = v107 / (v107 - *(float *)&v108);
                  v57 = _mm_shuffle_ps((__m128)v108, (__m128)v108, 0);
                  *a5 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v56, v57), *a5), _mm_mul_ps(v57, v55));
                }
                if ( v106[5].m128_f32[1] < (double)fConstant_1 )
                {
                  v58 = v106[3];
                  v59 = *(__m128 *)(v106[1].m128_i32[0] + 0x10);
                  v60 = (__m128)xmmword_A6DFE0;
                  v116 = v106[5].m128_i32[1];
                  v61 = _mm_shuffle_ps((__m128)(unsigned int)v116, (__m128)(unsigned int)v116, 0);
                  a5[1] = _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(v60, v61), v106[2]), _mm_mul_ps(v61, v58)), v59);
                  v62 = a5[1];
                  v117 = a3[1].m128_i32[1];
                  a5[1] = _mm_mul_ps(_mm_shuffle_ps((__m128)(unsigned int)v117, (__m128)(unsigned int)v117, 0), v62);
                  v63 = v104;
                  v53 = v104 < 3;
                  a5[1] = _mm_sub_ps(a5[1], *a3);
                  if ( v53 && a5[1].m128_f32[v63] > (double)v103 )
                    return;
                }
                a2 -= v100;
                a4 += a2;
              }
              else
              {
                if ( *(float *)&v108 * v107 < *(float *)&SrcStr )
                {
                  *(float *)&v100 = v107 / (v107 - *(float *)&v108);
                  v43 = _mm_shuffle_ps((__m128)(unsigned int)v100, (__m128)(unsigned int)v100, 0);
                  v122 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v43), v41), _mm_mul_ps(v43, v42));
                }
                v98 = &a4[a2 - v40];
                a2 = (int)v106;
                sub_944AC0((int)v106, (int)v106, a3, v98, &v121);
                if ( v101 * *(float *)&v105 < *(float *)&SrcStr )
                {
                  v44 = a5[1];
                  v45 = (__m128)xmmword_A6DFE0;
                  *(float *)&v100 = *(float *)&v105 / (*(float *)&v105 - v101);
                  v46 = _mm_shuffle_ps((__m128)(unsigned int)v100, (__m128)(unsigned int)v100, 0);
                  *a5 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps(v45, v46), *a5), _mm_mul_ps(v46, v44));
                }
                if ( *(float *)(a2 + 0x54) < (double)fConstant_1 )
                {
                  v47 = v106[3];
                  v48 = (__m128)xmmword_A6DFE0;
                  v49 = *(__m128 *)(v106[1].m128_i32[0] + 0x10);
                  v115 = v106[5].m128_i32[1];
                  v50 = _mm_shuffle_ps((__m128)(unsigned int)v115, (__m128)(unsigned int)v115, 0);
                  a5[1] = _mm_sub_ps(_mm_add_ps(_mm_mul_ps(_mm_sub_ps(v48, v50), v106[2]), _mm_mul_ps(v50, v47)), v49);
                  v51 = a5[1];
                  v114 = a3[1].m128_i32[1];
                  a5[1] = _mm_mul_ps(_mm_shuffle_ps((__m128)(unsigned int)v114, (__m128)(unsigned int)v114, 0), v51);
                  v52 = v104;
                  v53 = v104 < 3;
                  a5[1] = _mm_sub_ps(a5[1], *a3);
                  if ( v53 && a5[1].m128_f32[v52] < (double)v102 )
                    return;
                }
              }
            }
          }
          else
          {
            a4 = &v31[a2];
          }
          continue;
        case 0x26:
        case 0x27:
        case 0x28:
          v68 = a4[2];
          v100 = a4[1];
          v65 = v8 - 0x26;
          a4 += 3;
          v69 = (double)v100;
          v100 = v68;
          v102 = v69;
          v67 = (double)v68;
          goto LABEL_43;
        case 0x29:
        case 0x2A:
        case 0x2B:
          v64 = a4[5];
          v100 = a4[3] + (((a4[1] << 8) + a4[2]) << 8);
          v65 = v8 - 0x29;
          v66 = (double)v100 * v106[1].m128_f32[1] * a3[1].m128_f32[1];
          v100 = a4[6] + ((v64 + (a4[4] << 8)) << 8);
          a4 += 7;
          v102 = v66 - a3->m128_f32[v65];
          v67 = (double)v100 * v106[1].m128_f32[1] * a3[1].m128_f32[1] - a3->m128_f32[v65];
LABEL_43:
          v104 = a5->m128_i32[v65];
          v101 = a5[1].m128_f32[v65];
          if ( *(float *)&v104 >= (double)v101 )
          {
            if ( *(float *)&v104 < (double)v102 || v101 > v67 )
              return;
            a2 = 1;
          }
          else
          {
            if ( v101 < (double)v102 || *(float *)&v104 > v67 )
              return;
            a2 = 0;
          }
          v70 = a5->m128_i32[1];
          v118.m128_i32[0] = a5->m128_i32[0];
          v71 = a5->m128_i32[2];
          *(float *)&v100 = *(float *)&v104 - v67;
          *(unsigned __int64 *)((char *)v118.m128_u64 + 4) = __PAIR64__(v71, v70);
          v72 = v101 - v67;
          v73 = a5[1].m128_i32[0];
          v118.m128_i32[3] = a5->m128_i32[3];
          v74 = a5[1].m128_i32[1];
          v75 = *(float *)&v100 * v72 < *(float *)&SrcStr;
          v119.m128_i32[0] = v73;
          *(unsigned __int64 *)((char *)v119.m128_u64 + 4) = __PAIR64__(a5[1].m128_i32[2], v74);
          v119.m128_i32[3] = a5[1].m128_i32[3];
          if ( v75 )
          {
            v99 = *(float *)&v100 / (*(float *)&v100 - v72);
            sub_535AA0(&v123, v99);
            v76 = _mm_shuffle_ps(v123, v123, 0);
            a5[-a2 + 1] = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v76), v118), _mm_mul_ps(v76, v119));
          }
          v77 = *(float *)&v104 - v102;
          v78 = v101 - v102;
          if ( v78 * v77 < *(float *)&SrcStr )
          {
            v99 = v77 / (v77 - v78);
            sub_535AA0(&v124, v99);
            v79 = _mm_shuffle_ps(v124, v124, 0);
            a2 *= 0x10;
            *(__m128 *)((char *)a5 + a2) = _mm_add_ps(
                                             _mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v79), v118),
                                             _mm_mul_ps(v79, v119));
          }
          break;
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3A:
        case 0x3B:
        case 0x3C:
        case 0x3D:
        case 0x3E:
        case 0x3F:
        case 0x40:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
        case 0x45:
        case 0x46:
        case 0x47:
        case 0x48:
        case 0x49:
        case 0x4A:
        case 0x4B:
        case 0x4C:
        case 0x4D:
        case 0x4E:
        case 0x4F:
          v88 = v8 - 0x30;
          goto LABEL_79;
        case 0x50:
          v88 = a4[1];
          goto LABEL_79;
        case 0x51:
          v88 = a4[2] + (a4[1] << 8);
          goto LABEL_79;
        case 0x52:
          v88 = a4[3] + ((a4[2] + (a4[1] << 8)) << 8);
          goto LABEL_79;
        case 0x53:
          v88 = ((a4[2] + (a4[1] << 8)) << 0x10) + a4[4] + (a4[3] << 8);
LABEL_79:
          v89 = (int)v106;
          v90 = a3[1].m128_i32[2] + v88;
          v91 = (int (__thiscall ***)(_DWORD, char *, int, __int32, __int32))v106[4].m128_i32[1];
          if ( !v91 || *(_BYTE *)(**v91)(v91, &v109, (int)&v106[2], v106[6].m128_i32[1], v90) )
          {
            v92 = (int *)(*(int (__thiscall **)(_DWORD, __int32, char *))(**(_DWORD **)(v89 + 0x64) + 0x28))(
                           *(_DWORD *)(v89 + 0x64),
                           v90,
                           v125);
            v93 = *v92;
            if ( *(_DWORD *)(v89 + 0x58) )
            {
              if ( *(_BYTE *)(*(int (__thiscall **)(int *, char *, int, _DWORD))(v93 + 0x14))(
                               v92,
                               &v109,
                               v89 + 0x20,
                               *(_DWORD *)(v89 + 0x58)) )
              {
                *(_BYTE *)(v89 + 0x50) = 1;
                v94 = *(_DWORD *)(v89 + 0x58);
                *(_DWORD *)(v89 + 0x54) = *(_DWORD *)(v94 + 0x14);
                *(_DWORD *)(v94 + 0x10) = v90;
              }
            }
            else
            {
              v113.m128_i32[3] = *(_DWORD *)(v89 + 0x60);
              v113.m128_i32[2] = *(_DWORD *)(v113.m128_i32[3] + 8);
              v99 = *(float *)(v89 + 0x5C);
              v113.m128_u64[0] = __PAIR64__(v90, (unsigned int)v92);
              (*(void (__thiscall **)(int *, int, __m128 *, float))(v93 + 0x18))(
                v92,
                v89 + 0x20,
                &v113,
                COERCE_FLOAT(LODWORD(v99)));
              *(_DWORD *)(v89 + 0x54) = *(_DWORD *)(*(_DWORD *)(v89 + 0x5C) + 4);
            }
          }
          return;
        case 0x60:
        case 0x61:
        case 0x62:
        case 0x63:
          v87 = a4[1];
          a4 += 2;
          v97[v8] = v87;
          goto LABEL_70;
        case 0x64:
        case 0x65:
        case 0x66:
        case 0x67:
          v96[v8] = a4[2] + (a4[1] << 8);
          a4 += 3;
          goto LABEL_70;
        case 0x68:
        case 0x69:
        case 0x6A:
        case 0x6B:
          v95[v8] = a4[4] + ((a4[3] + ((a4[2] + (a4[1] << 8)) << 8)) << 8);
          a4 += 5;
LABEL_70:
          if ( a3 != &v110 )
          {
            v110 = *a3;
            v111 = a3[1].m128_u64[0];
            LODWORD(v112) = a3[1].m128_i32[2];
            a3 = &v110;
          }
          continue;
        default:
          sub_8BBFB0((int)v120, a2, v125, 0x200u, 1);
          sub_8BBDB0(v120, "Unknown command.\n");
          (*(void (__thiscall **)(int, int, int, char *, const char *, int))(*(_DWORD *)dword_BA7FB0 + 8))(
            dword_BA7FB0,
            3,
            0x1298FEDD,
            v125,
            ".\\collide\\mopp\\machine\\hkMoppLongRayVirtualMachine.cpp",
            0x1C9);
          sub_8BC000(v120);
          continue;
      }
    }
  }
}
