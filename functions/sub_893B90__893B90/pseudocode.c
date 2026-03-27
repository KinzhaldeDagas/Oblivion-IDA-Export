void __thiscall sub_893B90(int this, _DWORD *a2, int a3)
{
  double v3; // st7
  bool v5; // zf
  __int128 v6; // xmm0
  int v7; // esi
  char *v8; // ecx
  _DWORD *v9; // ecx
  int v10; // eax
  _DWORD *v11; // edi
  __m128 *v12; // esi
  __m128 v13; // xmm0
  __m128 *v14; // esi
  __m128 v15; // xmm0
  LPCRITICAL_SECTION *v16; // ecx
  __m128 *v17; // esi
  int v18; // edi
  __int32 v19; // eax
  __int32 v20; // ecx
  bool v21; // al
  double v22; // st7
  _DWORD *v23; // edi
  int v24; // esi
  int v25; // eax
  int v26; // ecx
  int v27; // esi
  int v28; // edx
  _DWORD *v29; // eax
  __m128 v30; // xmm0
  int v31; // esi
  bool v32; // cc
  __m128 v33; // xmm0
  int v34; // eax
  int v35; // ecx
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  int v41; // eax
  LPCRITICAL_SECTION *v42; // ecx
  int v43; // ecx
  __m128 v44; // xmm2
  __m128 v45; // xmm0
  __m128 v46; // xmm0
  __m128 v47; // xmm1
  __m128 v48; // xmm2
  __m128 v49; // xmm1
  __m128 v50; // xmm0
  float v51; // xmm3_4
  __m128 v52; // xmm0
  float v53; // xmm2_4
  float v54; // xmm3_4
  __m128 v55; // xmm0
  int v56; // esi
  float v57; // xmm3_4
  __m128 v58; // xmm0
  float v59; // xmm2_4
  float v60; // xmm3_4
  __m128 v61; // xmm0
  float v62; // xmm3_4
  float v63; // xmm0_4
  double v64; // st6
  __m128 v65; // xmm0
  float v66; // xmm1_4
  float v67; // xmm3_4
  __m128 v68; // xmm0
  __m128 v69; // xmm0
  float v70; // xmm1_4
  float v71; // xmm3_4
  __m128 v72; // xmm0
  _DWORD *v73; // ecx
  __m128 v74; // xmm0
  int v75; // eax
  __m128 v76; // xmm0
  __m128 v77; // xmm1
  __m128 v78; // xmm0
  float v79; // xmm2_4
  float v80; // xmm3_4
  __m128 v81; // xmm0
  bool v82; // [esp+34h] [ebp-1B0h]
  char v83; // [esp+35h] [ebp-1AFh]
  bool v84; // [esp+36h] [ebp-1AEh]
  char v85; // [esp+37h] [ebp-1ADh]
  float v86; // [esp+38h] [ebp-1ACh]
  float v87; // [esp+38h] [ebp-1ACh]
  __int32 v88; // [esp+3Ch] [ebp-1A8h]
  int v89; // [esp+40h] [ebp-1A4h]
  __m128 *v90; // [esp+40h] [ebp-1A4h]
  int v91; // [esp+40h] [ebp-1A4h]
  float v92; // [esp+40h] [ebp-1A4h]
  float v93; // [esp+44h] [ebp-1A0h]
  float v94; // [esp+44h] [ebp-1A0h]
  int v95; // [esp+44h] [ebp-1A0h]
  bool v96; // [esp+4Bh] [ebp-199h]
  int v97; // [esp+4Ch] [ebp-198h]
  float v98; // [esp+4Ch] [ebp-198h]
  int i; // [esp+50h] [ebp-194h]
  int v100; // [esp+58h] [ebp-18Ch]
  int v101; // [esp+5Ch] [ebp-188h]
  char v102; // [esp+63h] [ebp-181h] BYREF
  _DWORD *v103; // [esp+64h] [ebp-180h]
  int v104; // [esp+68h] [ebp-17Ch]
  int v105; // [esp+6Ch] [ebp-178h]
  _DWORD *v106; // [esp+70h] [ebp-174h]
  __m128 *v107; // [esp+74h] [ebp-170h]
  float v108; // [esp+78h] [ebp-16Ch]
  int v109; // [esp+7Ch] [ebp-168h]
  int v110; // [esp+80h] [ebp-164h]
  __int128 v111; // [esp+84h] [ebp-160h]
  float v112; // [esp+94h] [ebp-150h]
  __m128 v113; // [esp+A4h] [ebp-140h]
  float v114[4]; // [esp+B4h] [ebp-130h] BYREF
  int v115; // [esp+C4h] [ebp-120h]
  float v116; // [esp+C8h] [ebp-11Ch]
  __m128 v117; // [esp+D4h] [ebp-110h] BYREF
  __m128 v118; // [esp+E4h] [ebp-100h] BYREF
  __m128 v119; // [esp+F4h] [ebp-F0h] BYREF
  __m128 v120; // [esp+104h] [ebp-E0h]
  int v121[4]; // [esp+114h] [ebp-D0h] BYREF
  __m128 v122; // [esp+124h] [ebp-C0h]
  __m128 v123; // [esp+134h] [ebp-B0h] BYREF
  __m128 v124; // [esp+144h] [ebp-A0h] BYREF
  __m128 v125; // [esp+154h] [ebp-90h] BYREF
  __m128 v126; // [esp+164h] [ebp-80h] BYREF
  int v127; // [esp+174h] [ebp-70h]
  int v128; // [esp+178h] [ebp-6Ch]
  void **v129; // [esp+184h] [ebp-60h]
  float v130; // [esp+188h] [ebp-5Ch]
  float v131; // [esp+1A8h] [ebp-3Ch]
  int v132; // [esp+1B4h] [ebp-30h]
  unsigned int v133; // [esp+1E0h] [ebp-4h]

  v3 = flt_A96588;
  *(float *)(this + 0x54) = flt_A96588;
  *(_DWORD *)(this + 4) &= ~4u;
  *(float *)(this + 0x50) = v3;
  v106 = a2;
  *(_OWORD *)(this + 0x40) = 0;
  v5 = (*(_BYTE *)(this + 6) & 1) == 0;
  v111 = 0;
  if ( !v5 )
    *(_DWORD *)(this + 0x1C8) = 0;
  v6 = *(_OWORD *)(this + 0xC0);
  v7 = this - 0x1F0;
  *(_DWORD *)(this + 0x1C4) = 0;
  v101 = 0;
  v100 = 0;
  v85 = 0;
  *(_OWORD *)(this + 0x40) = v6;
  if ( this != 0x1F0 )
  {
    v8 = *(char **)(v7 + 8);
    if ( v8 )
      sub_8AC0A0(v8);
  }
  v5 = *(_DWORD *)(this + 0x17C) == 1;
  v108 = 0.0;
  v83 = 0;
  v96 = v5;
  if ( !v5 && (*(_DWORD *)(this + 4) & 2) == 0 && this != 0x1F0 )
  {
    v9 = *(_DWORD **)(v7 + 8);
    if ( v9 )
    {
      v89 = sub_8AC0C0(v9);
      if ( v89 )
      {
        v10 = *(_DWORD *)(this + 0x184);
        if ( v10 )
        {
          v11 = *(_DWORD **)(v10 + 8);
          if ( v11 )
          {
            if ( (*(int (__thiscall **)(_DWORD *))(*v11 + 8))(v11) == 0xC
              && (*(int (__thiscall **)(_DWORD *))(*v11 + 0x1C))(v11) == 3 )
            {
              v12 = *(__m128 **)(v11[4] + 8);
              if ( v12 )
              {
                if ( (*(int (__thiscall **)(__m128 *))(v12->m128_i32[0] + 8))(v12) == 8 )
                {
                  v13 = v12[1];
                  v93 = v12->m128_f32[3];
                  v113.m128_f32[0] = 0.0;
                  v113.m128_f32[1] = 0.0;
                  v113.m128_f32[2] = v93;
                  v90 = (__m128 *)(v89 + 0x70);
                  v113.m128_f32[3] = 0.0;
                  v119 = _mm_add_ps(v13, v113);
                  sub_88FCC0(&v124, v90, &v119);
                  v14 = *(__m128 **)(v11[4] + 0x10);
                  if ( v14 )
                  {
                    if ( (*(int (__thiscall **)(__m128 *))(v14->m128_i32[0] + 8))(v14) == 8 )
                    {
                      v15 = v14[1];
                      v94 = v14->m128_f32[3];
                      v113.m128_f32[0] = 0.0;
                      v113.m128_f32[1] = 0.0;
                      v113.m128_f32[2] = v94;
                      v113.m128_f32[3] = 0.0;
                      v117 = _mm_add_ps(v15, v113);
                      sub_88FCC0(&v123, v90, &v117);
                      v16 = (LPCRITICAL_SECTION *)dword_BA7DA0;
                      v108 = v14->m128_f32[3] * dbl_A74D10;
                      v83 = 1;
                      sub_8A7930(v16, (int)&v124, flt_A46B10, 0xFF0000FF, 0);
                      sub_8A7930((LPCRITICAL_SECTION *)dword_BA7DA0, (int)&v123, flt_A46B10, 0xFF008000, 0);
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  v109 = *(_DWORD *)(a3 + 0x4C);
  for ( i = 0; i < v109; ++i )
  {
    v17 = (__m128 *)(0x30 * i + *v106);
    v18 = *(_DWORD *)(a3 + 0x48) + (i << 6);
    v110 = 0x30 * i;
    v19 = v17[2].m128_i32[2];
    v5 = *(_BYTE *)(v19 + 0x18) == 1;
    v95 = v18;
    v107 = v17;
    if ( v5 )
      v20 = v19 + *(_DWORD *)(v19 + 0x10);
    else
      v20 = 0;
    v91 = *(_DWORD *)(v19 + 0x1C) & 0x3F;
    v21 = (*(_DWORD *)(this + 4) & 0x800) == 0;
    v112 = _mm_shuffle_ps(v17[1], v17[1], 0xAA).m128_f32[0];
    v86 = v112;
    v88 = v20;
    v82 = v21;
    if ( v20 )
    {
      if ( v112 > dbl_A968D0
        && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v20 + 0x50) + 8))(*(_DWORD *)(v20 + 0x50)) == 6
        && !dword_BA7A5C )
      {
        sub_8914C0((__m128 *)(this - 0x1F0), &v117);
        v22 = *(float *)(this + 0x58) + v117.m128_f32[2];
        v112 = _mm_shuffle_ps(*v17, *v17, 0xAA).m128_f32[0];
        v117.m128_f32[2] = v22;
        v114[0] = _mm_shuffle_ps(v117, v117, 0xAA).m128_f32[0];
        if ( v114[0] >= (double)v112 )
        {
          v131 = 1.0;
          v129 = &hkClosestRayHitCollector::`vftable';
          v130 = 1.0;
          v132 = 0;
          v23 = 0;
          v133 = 0;
          v103 = 0;
          v104 = 0;
          v105 = 0x80000000;
          v24 = *(_DWORD *)(*(_DWORD *)(this + 0x174) + 8);
          v25 = *(_DWORD *)(v24 + 0x124);
          LOBYTE(v133) = 1;
          if ( v25 > 0 )
          {
            v26 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
            if ( !v26 )
              v26 = dword_BA7D9C;
            v23 = sub_8A7560(v26, 4 * v25, 0x14);
            v25 = *(_DWORD *)(v24 + 0x124);
            v103 = v23;
            v105 = v25;
          }
          v27 = *(_DWORD *)(v24 + 0x120);
          v28 = v25;
          v104 = v25;
          if ( v25 > 0 )
          {
            v29 = v23;
            do
            {
              *v29 = *(_DWORD *)((char *)v29 + v27 - (_DWORD)v23);
              ++v29;
              --v28;
            }
            while ( v28 );
          }
          v30 = *v107;
          v122.m128_f32[0] = 0.0;
          v122.m128_f32[1] = 0.0;
          v31 = 0;
          v32 = v104 <= 0;
          v122.m128_f32[2] = flt_A968C8;
          v122.m128_f32[3] = 0.0;
          v120.m128_f32[0] = 0.0;
          v120.m128_f32[1] = 0.0;
          v118 = _mm_add_ps(v30, v122);
          v120.m128_f32[2] = flt_A968C4;
          v120.m128_f32[3] = 0.0;
          v33 = _mm_sub_ps(v118, v120);
          flt_BA7A58 = flt_A968C0;
          v119 = v33;
          if ( !v32 )
          {
            do
            {
              v34 = v23[v31];
              if ( !v34 )
                goto LABEL_60;
              if ( *(_BYTE *)(v34 + 0x18) != 1 )
                goto LABEL_60;
              if ( !(v34 + *(_DWORD *)(v34 + 0x10)) )
                goto LABEL_60;
              v35 = *(_BYTE *)(v34 + 0x18) == 1 ? v34 + *(_DWORD *)(v34 + 0x10) : 0;
              if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v35 + 0x50) + 8))(*(_DWORD *)(v35 + 0x50)) != 6 )
                goto LABEL_60;
              v116 = 1.0;
              v127 = 0;
              v128 = 0;
              sub_88FD10(&v125, *(__m128 **)(v23[v31] + 8), &v118);
              sub_88FD10(&v126, *(__m128 **)(v23[v31] + 8), &v119);
              (*(void (__thiscall **)(_DWORD, char *, __m128 *, float *))(**(_DWORD **)v23[v31] + 0x14))(
                *(_DWORD *)v23[v31],
                &v102,
                &v125,
                v114);
              if ( v116 >= 1.0 )
                goto LABEL_60;
              v36 = *(_DWORD *)(v23[v31] + 0x1C) & 0x3F;
              v5 = v115 == 0xFFFFFFFF;
              *(_DWORD *)(this + 0x28) = v36;
              if ( v5 )
              {
                v37 = *(_DWORD *)v23[v31];
                if ( v37 )
                  v38 = *(_DWORD *)(v37 + 8);
                else
                  v38 = 0;
                if ( v38 )
                {
                  v39 = *(_DWORD *)(v38 + 0x10);
                  if ( v39 >= 0x1E )
                    v39 = 0x1E;
LABEL_56:
                  if ( v39 >= 0xF && v39 <= 0x1D )
                    goto LABEL_60;
                }
              }
              else if ( v36 != 0x11 )
              {
                v40 = sub_8AFBE0((int *)v23[v31]);
                v97 = v40;
                if ( v40 )
                {
                  if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)v40 + 0x9C))(v40, v115) < 0x1E )
                  {
                    v39 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v97 + 0x9C))(v97, v115);
                    goto LABEL_56;
                  }
                }
              }
              v98 = (v119.m128_f32[2] - v118.m128_f32[2]) * v116 + v118.m128_f32[2];
              if ( flt_BA7A58 < (double)v98 )
              {
                flt_BA7A58 = v98;
                v41 = sub_47DE00(v23[v31]);
                v121[0] = v118.m128_i32[0];
                v121[1] = v118.m128_i32[1];
                v42 = (LPCRITICAL_SECTION *)dword_BA7DA0;
                *(float *)&v121[2] = v98;
                *(float *)&v121[3] = 0.0;
                dword_BA7A5C = v41;
                sub_8A7930(v42, (int)v121, flt_A46B10, 0xFFFFFF00, 0);
              }
LABEL_60:
              ++v31;
            }
            while ( v31 < v104 );
          }
          LOBYTE(v133) = 0;
          if ( v105 >= 0 )
          {
            v43 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
            if ( !v43 )
              v43 = dword_BA7D9C;
            sub_8A75D0(v43, v23, 4 * v105, 0x14);
          }
          v17 = v107;
          v18 = v95;
          v133 = 0xFFFFFFFF;
        }
      }
    }
    v113 = *(__m128 *)v18;
    if ( v88 )
    {
      switch ( v91 )
      {
        case 2:
          if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v88 + 0x50) + 8))(*(_DWORD *)(v88 + 0x50)) < 6 )
            goto LABEL_70;
          *(float *)(v18 + 0x28) = flt_A968BC;
          break;
        case 4:
        case 5:
        case 6:
          if ( (*(_BYTE *)(this + 6) & 1) == 0 )
          {
            v92 = sub_89DA90((float *)*(_DWORD *)(v88 + 0x50));
            if ( fFromMoveMassLimit > (double)v92 )
              *(__int128 *)(v18 + 0x10) = v111;
            v113.m128_f32[0] = 0.0;
            v113.m128_f32[1] = 0.0;
            v113.m128_f32[2] = 1.0;
            v86 = 1.0;
            v113.m128_f32[3] = 0.0;
          }
          v82 = 0;
          break;
        case 0xA:
LABEL_70:
          if ( (*(_BYTE *)(this + 6) & 1) == 0 )
          {
            v113.m128_f32[0] = 0.0;
            v113.m128_f32[1] = 0.0;
            v113.m128_f32[2] = 1.0;
            v86 = 1.0;
            v113.m128_f32[3] = 0.0;
            *(float *)(v18 + 0x2C) = 0.0;
            if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v88 + 0x50) + 8))(*(_DWORD *)(v88 + 0x50)) < 6 )
              *(__int128 *)(v18 + 0x10) = v111;
          }
          v82 = 0;
          break;
        default:
          if ( v83 )
          {
            if ( (*(_DWORD *)(this + 4) & 2) == 0 )
            {
              v44 = *v17;
              v45 = _mm_sub_ps(*v17, v124);
              v46 = _mm_mul_ps(v45, v45);
              v47 = _mm_add_ps(_mm_shuffle_ps(v46, v46, 0x4E), v46);
              v114[0] = fsqrt(_mm_shuffle_ps(v47, v47, 0xB1).m128_f32[0] + v47.m128_f32[0]);
              if ( v108 <= (double)v114[0] )
              {
                v48 = _mm_sub_ps(v44, v123);
                v49 = _mm_mul_ps(v48, v48);
                v50 = _mm_add_ps(_mm_shuffle_ps(v49, v49, 0x4E), v49);
                v114[0] = fsqrt(_mm_shuffle_ps(v50, v50, 0xB1).m128_f32[0] + v50.m128_f32[0]);
                if ( v114[0] < (double)v108 )
                  *(_DWORD *)(this + 4) |= 2u;
              }
              else
              {
                *(_DWORD *)(this + 4) |= 2u;
              }
            }
          }
          break;
      }
    }
    else
    {
      switch ( v91 )
      {
        case 0xC:
        case 0x10:
          *(__int128 *)(v18 + 0x10) = v111;
          break;
        case 0xE:
          if ( (*(_BYTE *)(this + 6) & 1) != 0 )
            *(__int128 *)(v18 + 0x10) = v111;
          break;
        case 0x14:
          v51 = *(float *)&dword_A46C30;
          v86 = 0.0;
          *(float *)(v18 + 8) = 0.0;
          v52 = _mm_mul_ps(*(__m128 *)v18, *(__m128 *)v18);
          v52.m128_f32[0] = _mm_shuffle_ps(v52, v52, 0xAA).m128_f32[0]
                          + (float)(_mm_shuffle_ps(v52, v52, 0x55).m128_f32[0] + v52.m128_f32[0]);
          v53 = 1.0 / fsqrt(v52.m128_f32[0]);
          v54 = v51 - (float)((float)(v52.m128_f32[0] * v53) * v53);
          v55 = (__m128)LODWORD(flt_A3D65C);
          v55.m128_f32[0] = (float)(v55.m128_f32[0] * v53) * v54;
          *(__m128 *)v18 = _mm_mul_ps(_mm_shuffle_ps(v55, v55, 0), *(__m128 *)v18);
          break;
        default:
          break;
      }
    }
    if ( v86 >= (double)flt_A59E38 && v88 )
    {
      if ( *(float *)(this + 0x20) <= (double)v86 )
      {
        if ( (*(_BYTE *)(this + 6) & 1) == 0 && (*(_BYTE *)(this + 4) & 1) != 0 )
          sub_88FF20((float *)this, this + 0x190, v17);
        *(_DWORD *)(this + 4) |= 0x400u;
        if ( (*(_DWORD *)(this + 4) & 8) == 0 )
          *(float *)(v18 + 0x28) = flt_A968B8;
        goto LABEL_110;
      }
      if ( !sub_891CC0((__m128 *)(this - 0x1F0), v17) )
      {
        if ( (*(_DWORD *)(this + 4) & 0x1800) == 0 )
          *(float *)(v18 + 0x2C) = 0.0;
        *(_DWORD *)(this + 4) |= 0x404u;
        v62 = *(float *)&dword_A46C30;
        if ( v96 )
        {
          v113.m128_f32[2] = 1.0;
          v69 = _mm_mul_ps(v113, v113);
          v69.m128_f32[0] = _mm_shuffle_ps(v69, v69, 0xAA).m128_f32[0]
                          + (float)(_mm_shuffle_ps(v69, v69, 0x55).m128_f32[0] + v69.m128_f32[0]);
          v70 = 1.0 / fsqrt(v69.m128_f32[0]);
          v71 = v62 - (float)((float)(v69.m128_f32[0] * v70) * v70);
          v72 = (__m128)LODWORD(flt_A3D65C);
          v72.m128_f32[0] = (float)(v72.m128_f32[0] * v70) * v71;
          v113 = _mm_mul_ps(_mm_shuffle_ps(v72, v72, 0), v113);
        }
        else
        {
          v63 = _mm_shuffle_ps(*(__m128 *)v18, *(__m128 *)v18, 0xFF).m128_f32[0];
          v113.m128_f32[2] = 1.0;
          v114[0] = v63;
          v64 = v63 - v63;
          v65 = _mm_mul_ps(v113, v113);
          v87 = v64;
          v65.m128_f32[0] = _mm_shuffle_ps(v65, v65, 0xAA).m128_f32[0]
                          + (float)(_mm_shuffle_ps(v65, v65, 0x55).m128_f32[0] + v65.m128_f32[0]);
          v66 = 1.0 / fsqrt(v65.m128_f32[0]);
          v67 = v62 - (float)((float)(v65.m128_f32[0] * v66) * v66);
          v68 = (__m128)LODWORD(flt_A3D65C);
          v68.m128_f32[0] = (float)(v68.m128_f32[0] * v66) * v67;
          v113 = _mm_mul_ps(_mm_shuffle_ps(v68, v68, 0), v113);
          *(__m128 *)v18 = v113;
          if ( v87 < 0.0 )
            v87 = 0.0;
          *(float *)(v18 + 0x18) = v87 * dbl_A3F3F0 + dbl_A2F928 + *(float *)(v18 + 0x18);
        }
        goto LABEL_110;
      }
      if ( v101 >= 4 || !v82 )
        goto LABEL_110;
      v84 = v86 >= dbl_A38538;
      v56 = *(_DWORD *)(a3 + 0x48) + (*(_DWORD *)(a3 + 0x4C) << 6);
      sub_8909D0((float *)v56, v95);
      v57 = *(float *)&dword_A46C30;
      *(__int128 *)(v56 + 0x10) = v111;
      *(float *)(v56 + 8) = 0.0;
      v58 = _mm_mul_ps(*(__m128 *)v56, *(__m128 *)v56);
      v58.m128_f32[0] = _mm_shuffle_ps(v58, v58, 0xAA).m128_f32[0]
                      + (float)(_mm_shuffle_ps(v58, v58, 0x55).m128_f32[0] + v58.m128_f32[0]);
      v59 = 1.0 / fsqrt(v58.m128_f32[0]);
      v60 = v57 - (float)((float)(v58.m128_f32[0] * v59) * v59);
      v61 = (__m128)LODWORD(flt_A3D65C);
      v61.m128_f32[0] = (float)(v61.m128_f32[0] * v59) * v60;
      ++v101;
      *(__m128 *)v56 = _mm_mul_ps(_mm_shuffle_ps(v61, v61, 0), *(__m128 *)v56);
      ++*(_DWORD *)(a3 + 0x4C);
      if ( v84 )
      {
        ++v100;
LABEL_110:
        *(_DWORD *)(this + 4) |= 0x200u;
        v73 = v106;
        ++*(_DWORD *)(this + 0x1C4);
        sub_891850((_DWORD *)(this - 0x1F0), v110 + *v73);
        v74 = v113;
        if ( v85 )
          v74 = _mm_add_ps(v113, *(__m128 *)(this + 0x40));
        else
          v85 = 1;
        *(__m128 *)(this + 0x40) = v74;
        if ( (*(_BYTE *)(this + 6) & 1) != 0 )
          *(_DWORD *)(this + 0x1C8) = *(_DWORD *)(v88 + 0xC);
      }
    }
  }
  v75 = *(_DWORD *)(this + 0x1C4);
  *(_BYTE *)(this + 0x60) = v75 == v100;
  if ( v75 )
  {
    v76 = _mm_mul_ps(*(__m128 *)(this + 0x40), *(__m128 *)(this + 0x40));
    v114[0] = _mm_shuffle_ps(v76, v76, 0xAA).m128_f32[0]
            + (float)(_mm_shuffle_ps(v76, v76, 0x55).m128_f32[0] + v76.m128_f32[0]);
    if ( v114[0] > 0.0 )
    {
      v77 = *(__m128 *)(this + 0x40);
      v78 = _mm_mul_ps(v77, v77);
      v78.m128_f32[0] = _mm_shuffle_ps(v78, v78, 0xAA).m128_f32[0]
                      + (float)(_mm_shuffle_ps(v78, v78, 0x55).m128_f32[0] + v78.m128_f32[0]);
      v79 = 1.0 / fsqrt(v78.m128_f32[0]);
      v80 = *(float *)&dword_A46C30 - (float)((float)(v78.m128_f32[0] * v79) * v79);
      v81 = (__m128)LODWORD(flt_A3D65C);
      v81.m128_f32[0] = (float)(v81.m128_f32[0] * v79) * v80;
      *(__m128 *)(this + 0x40) = _mm_mul_ps(_mm_shuffle_ps(v81, v81, 0), v77);
    }
  }
}
