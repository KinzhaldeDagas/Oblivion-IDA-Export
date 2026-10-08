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
  int HavokObject; // [esp+40h] [ebp-1A4h]
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
  __m128 v121; // [esp+114h] [ebp-D0h] BYREF
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

  v3 = flt_A96588; /*0x893bd3*/
  *(float *)(this + 0x54) = flt_A96588; /*0x893bde*/
  *(_DWORD *)(this + 4) &= ~4u; /*0x893be1*/
  *(float *)(this + 0x50) = v3; /*0x893be5*/
  v106 = a2; /*0x893beb*/
  *(_OWORD *)(this + 0x40) = 0; /*0x893bef*/
  v5 = (*(_BYTE *)(this + 6) & 1) == 0; /*0x893bf5*/
  v111 = 0; /*0x893bfd*/
  if ( !v5 ) /*0x893c02*/
    *(_DWORD *)(this + 0x1C8) = 0; /*0x893c04*/
  v6 = *(_OWORD *)(this + 0xC0); /*0x893c0a*/
  v7 = this - 0x1F0; /*0x893c11*/
  *(_DWORD *)(this + 0x1C4) = 0; /*0x893c19*/
  v101 = 0; /*0x893c1f*/
  v100 = 0; /*0x893c23*/
  v85 = 0; /*0x893c27*/
  *(_OWORD *)(this + 0x40) = v6; /*0x893c2b*/
  if ( this != 0x1F0 ) /*0x893c2f*/
  {
    v8 = *(char **)(v7 + 8); /*0x893c31*/
    if ( v8 ) /*0x893c36*/
      bhkWorldObject_GetLinearVelocityPtr(v8); /*0x893c38*/
  }
  v5 = *(_DWORD *)(this + 0x17C) == 1; /*0x893c3d*/
  v108 = 0.0; /*0x893c46*/
  v83 = 0; /*0x893c4a*/
  v96 = v5; /*0x893c54*/
  if ( !v5 && (*(_DWORD *)(this + 4) & 2) == 0 && this != 0x1F0 ) /*0x893c6e*/
  {
    v9 = *(_DWORD **)(v7 + 8); /*0x893c74*/
    if ( v9 ) /*0x893c79*/
    {
      HavokObject = bhkCollisionWrapper_GetHavokObject(v9); /*0x893c86*/
      if ( HavokObject ) /*0x893c8a*/
      {
        v10 = *(_DWORD *)(this + 0x184); /*0x893c90*/
        if ( v10 ) /*0x893c98*/
        {
          v11 = *(_DWORD **)(v10 + 8); /*0x893c9e*/
          if ( v11 ) /*0x893ca3*/
          {
            if ( (*(int (__thiscall **)(_DWORD *))(*v11 + 8))(v11) == 0xC /*0x893cc7*/
              && (*(int (__thiscall **)(_DWORD *))(*v11 + 0x1C))(v11) == 3 )
            {
              v12 = *(__m128 **)(v11[4] + 8); /*0x893cd0*/
              if ( v12 ) /*0x893cd5*/
              {
                if ( (*(int (__thiscall **)(__m128 *))(v12->m128_i32[0] + 8))(v12) == 8 ) /*0x893ce7*/
                {
                  v13 = v12[1]; /*0x893cf4*/
                  v93 = v12->m128_f32[3]; /*0x893cf8*/
                  v113.m128_f32[0] = 0.0; /*0x893d05*/
                  v113.m128_f32[1] = 0.0; /*0x893d0f*/
                  v113.m128_f32[2] = v93; /*0x893d1c*/
                  v90 = (__m128 *)(HavokObject + 0x70); /*0x893d2a*/
                  v113.m128_f32[3] = 0.0; /*0x893d2e*/
                  v119 = _mm_add_ps(v13, v113); /*0x893d40*/
                  hkTransform_TransformPosition(&v124, v90, &v119); /*0x893d48*/
                  v14 = *(__m128 **)(v11[4] + 0x10); /*0x893d50*/
                  if ( v14 ) /*0x893d55*/
                  {
                    if ( (*(int (__thiscall **)(__m128 *))(v14->m128_i32[0] + 8))(v14) == 8 ) /*0x893d67*/
                    {
                      v15 = v14[1]; /*0x893d74*/
                      v94 = v14->m128_f32[3]; /*0x893d78*/
                      v113.m128_f32[0] = 0.0; /*0x893d85*/
                      v113.m128_f32[1] = 0.0; /*0x893d8d*/
                      v113.m128_f32[2] = v94; /*0x893da0*/
                      v113.m128_f32[3] = 0.0; /*0x893da7*/
                      v117 = _mm_add_ps(v15, v113); /*0x893db9*/
                      hkTransform_TransformPosition(&v123, v90, &v117); /*0x893dc1*/
                      v16 = (LPCRITICAL_SECTION *)unk_BA7DA0; /*0x893ddf*/
                      v108 = v14->m128_f32[3] * dbl_A74D10; /*0x893dec*/
                      v83 = 1; /*0x893df0*/
                      sub_8A7930(v16, &v124, flt_A46B10, 0xFF0000FF, 0); /*0x893dff*/
                      sub_8A7930((LPCRITICAL_SECTION *)unk_BA7DA0, &v123, flt_A46B10, 0xFF008000, 0); /*0x893e23*/
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
  v109 = *(_DWORD *)(a3 + 0x4C); /*0x893e31*/
  for ( i = 0; i < v109; ++i )
  {
    v17 = (__m128 *)(0x30 * i + *v106); /*0x893e59*/
    v18 = *(_DWORD *)(a3 + 0x48) + (i << 6); /*0x893e5e*/
    v110 = 0x30 * i; /*0x893e61*/
    v19 = v17[2].m128_i32[2]; /*0x893e65*/
    v5 = *(_BYTE *)(v19 + 0x18) == 1; /*0x893e68*/
    v95 = v18; /*0x893e6c*/
    v107 = v17; /*0x893e70*/
    if ( v5 ) /*0x893e74*/
      v20 = v19 + *(_DWORD *)(v19 + 0x10); /*0x893e79*/
    else
      v20 = 0; /*0x893e7d*/
    v91 = *(_DWORD *)(v19 + 0x1C) & 0x3F; /*0x893e89*/
    v21 = (*(_DWORD *)(this + 4) & 0x800) == 0; /*0x893e99*/
    v112 = _mm_shuffle_ps(v17[1], v17[1], 0xAA).m128_f32[0]; /*0x893e9d*/
    v86 = v112; /*0x893ea7*/
    v88 = v20; /*0x893eab*/
    v82 = v21; /*0x893eaf*/
    if ( v20 )
    {
      if ( v112 > dbl_A968D0
        && (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v20 + 0x50) + 8))(*(_DWORD *)(v20 + 0x50)) == 6
        && !unk_BA7A5C )
      {
        sub_8914C0((__m128 *)(this - 0x1F0), &v117); /*0x893efa*/
        v22 = *(float *)(this + 0x58) + v117.m128_f32[2]; /*0x893f02*/
        v112 = _mm_shuffle_ps(*v17, *v17, 0xAA).m128_f32[0]; /*0x893f10*/
        v117.m128_f32[2] = v22; /*0x893f16*/
        v114[0] = _mm_shuffle_ps(v117, v117, 0xAA).m128_f32[0]; /*0x893f2d*/
        if ( v114[0] >= (double)v112 )
        {
          v131 = 1.0; /*0x893f4e*/
          v129 = &hkClosestRayHitCollector::`vftable'; /*0x893f55*/
          v130 = 1.0; /*0x893f60*/
          v132 = 0; /*0x893f67*/
          v23 = 0; /*0x893f6e*/
          v133 = 0; /*0x893f70*/
          v103 = 0; /*0x893f77*/
          v104 = 0; /*0x893f7b*/
          v105 = 0x80000000; /*0x893f7f*/
          v24 = *(_DWORD *)(*(_DWORD *)(this + 0x174) + 8); /*0x893f8d*/
          v25 = *(_DWORD *)(v24 + 0x124); /*0x893f90*/
          LOBYTE(v133) = 1; /*0x893f98*/
          if ( v25 > 0 ) /*0x893fa0*/
          {
            v26 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x893fba*/
            if ( !v26 ) /*0x893fbc*/
              v26 = unk_BA7D9C; /*0x893fbe*/
            v23 = sub_8A7560(v26, 4 * v25, 0x14); /*0x893fd0*/
            v25 = *(_DWORD *)(v24 + 0x124); /*0x893fd2*/
            v103 = v23; /*0x893fd8*/
            v105 = v25; /*0x893fdc*/
          }
          v27 = *(_DWORD *)(v24 + 0x120); /*0x893fe2*/
          v28 = v25; /*0x893fe8*/
          v104 = v25; /*0x893fec*/
          if ( v25 > 0 ) /*0x893ff0*/
          {
            v29 = v23; /*0x893ff4*/
            do /*0x894003*/
            {
              *v29 = *(_DWORD *)((char *)v29 + v27 - (_DWORD)v23); /*0x893ffb*/
              ++v29; /*0x893ffd*/
              --v28; /*0x894000*/
            }
            while ( v28 ); /*0x894003*/
          }
          v30 = *v107; /*0x89400b*/
          v122.m128_f32[0] = 0.0; /*0x89400e*/
          v122.m128_f32[1] = 0.0; /*0x894015*/
          v31 = 0; /*0x89401c*/
          v32 = v104 <= 0; /*0x89401e*/
          v122.m128_f32[2] = flt_A968C8; /*0x894028*/
          v122.m128_f32[3] = 0.0; /*0x89402f*/
          v120.m128_f32[0] = 0.0; /*0x89403e*/
          v120.m128_f32[1] = 0.0; /*0x894048*/
          v118 = _mm_add_ps(v30, v122); /*0x89404f*/
          v120.m128_f32[2] = flt_A968C4; /*0x89405d*/
          v120.m128_f32[3] = 0.0; /*0x894064*/
          v33 = _mm_sub_ps(v118, v120); /*0x894079*/
          unk_BA7A58 = flt_A968C0; /*0x89407c*/
          v119 = v33; /*0x894082*/
          if ( !v32 )
          {
            do
            {
              v34 = v23[v31]; /*0x894090*/
              if ( !v34 ) /*0x894095*/
                goto LABEL_60; /*0x894095*/
              if ( *(_BYTE *)(v34 + 0x18) != 1 ) /*0x89409f*/
                goto LABEL_60; /*0x89409f*/
              if ( !(v34 + *(_DWORD *)(v34 + 0x10)) ) /*0x8940a8*/
                goto LABEL_60; /*0x8940a8*/
              v35 = *(_BYTE *)(v34 + 0x18) == 1 ? v34 + *(_DWORD *)(v34 + 0x10) : 0;
              if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v35 + 0x50) + 8))(*(_DWORD *)(v35 + 0x50)) != 6 ) /*0x8940cc*/
                goto LABEL_60; /*0x8940cc*/
              v116 = 1.0; /*0x8940d6*/
              v127 = 0; /*0x8940dd*/
              v128 = 0; /*0x8940e4*/
              sub_88FD10(&v125, *(__m128 **)(v23[v31] + 8), &v118); /*0x894101*/
              sub_88FD10(&v126, *(__m128 **)(v23[v31] + 8), &v119); /*0x89411c*/
              (*(void (__thiscall **)(_DWORD, char *, __m128 *, float *))(**(_DWORD **)v23[v31] + 0x14))( /*0x894140*/
                *(_DWORD *)v23[v31],
                &v102,
                &v125,
                v114);
              if ( v116 >= 1.0 ) /*0x894150*/
                goto LABEL_60; /*0x894150*/
              v36 = *(_DWORD *)(v23[v31] + 0x1C) & 0x3F; /*0x89415c*/
              v5 = v115 == 0xFFFFFFFF; /*0x89415f*/
              *(_DWORD *)(this + 0x28) = v36; /*0x894167*/
              if ( v5 ) /*0x89416a*/
              {
                v37 = *(_DWORD *)v23[v31]; /*0x89416f*/
                if ( v37 ) /*0x894173*/
                  v38 = *(_DWORD *)(v37 + 8); /*0x894175*/
                else
                  v38 = 0; /*0x89417a*/
                if ( v38 ) /*0x89417e*/
                {
                  v39 = *(_DWORD *)(v38 + 0x10); /*0x894180*/
                  if ( v39 >= 0x1E ) /*0x894186*/
                    v39 = 0x1E; /*0x894188*/
LABEL_56:
                  if ( v39 >= 0xF && v39 <= 0x1D ) /*0x8941df*/
                    goto LABEL_60; /*0x8941df*/
                }
              }
              else if ( v36 != 0x11 ) /*0x894192*/
              {
                v40 = sub_8AFBE0((int *)v23[v31]); /*0x894198*/
                v97 = v40; /*0x8941a2*/
                if ( v40 ) /*0x8941a6*/
                {
                  if ( (*(int (__thiscall **)(int, int))(*(_DWORD *)v40 + 0x9C))(v40, v115) < 0x1E ) /*0x8941bf*/
                  {
                    v39 = (*(int (__thiscall **)(int, int))(*(_DWORD *)v97 + 0x9C))(v97, v115); /*0x8941d5*/
                    goto LABEL_56; /*0x8941d5*/
                  }
                }
              }
              v98 = (v119.m128_f32[2] - v118.m128_f32[2]) * v116 + v118.m128_f32[2]; /*0x8941e5*/
              if ( unk_BA7A58 < (double)v98 ) /*0x894217*/
              {
                unk_BA7A58 = v98; /*0x894219*/
                v41 = sub_47DE00(v23[v31]); /*0x894223*/
                v121.m128_f32[0] = v118.m128_f32[0]; /*0x89422f*/
                v121.m128_f32[1] = v118.m128_f32[1]; /*0x894242*/
                v42 = (LPCRITICAL_SECTION *)unk_BA7DA0; /*0x894253*/
                v121.m128_f32[2] = v98; /*0x894259*/
                v121.m128_f32[3] = 0.0; /*0x894269*/
                unk_BA7A5C = v41; /*0x894270*/
                sub_8A7930(v42, &v121, flt_A46B10, 0xFFFFFF00, 0); /*0x89427f*/
              }
LABEL_60:
              ++v31; /*0x894288*/
            }
            while ( v31 < v104 );
          }
          LOBYTE(v133) = 0; /*0x894295*/
          if ( v105 >= 0 ) /*0x8942a5*/
          {
            v43 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]) + 0x19C); /*0x8942be*/
            if ( !v43 ) /*0x8942c0*/
              v43 = unk_BA7D9C; /*0x8942c2*/
            sub_8A75D0(v43, v23, 4 * v105, 0x14); /*0x8942d9*/
          }
          v17 = v107; /*0x8942de*/
          v18 = v95; /*0x8942e2*/
          v133 = 0xFFFFFFFF; /*0x8942e6*/
        }
      }
    }
    v113 = *(__m128 *)v18; /*0x894301*/
    if ( v88 ) /*0x894309*/
    {
      switch ( v91 ) /*0x894322*/
      {
        case 2: /*0x894322*/
          if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v88 + 0x50) + 8))(*(_DWORD *)(v88 + 0x50)) < 6 ) /*0x89433a*/
            goto LABEL_70; /*0x89433a*/
          *(float *)(v18 + 0x28) = flt_A968BC; /*0x894342*/
          break; /*0x894345*/
        case 4: /*0x894322*/
        case 5: /*0x894322*/
        case 6: /*0x894322*/
          if ( (*(_BYTE *)(this + 6) & 1) == 0 ) /*0x8943a1*/
          {
            v92 = sub_89DA90((float *)*(_DWORD *)(v88 + 0x50)); /*0x8943af*/
            if ( fFromMoveMassLimit > (double)v92 ) /*0x8943c4*/
              *(__int128 *)(v18 + 0x10) = v111; /*0x8943cb*/
            v113.m128_f32[0] = 0.0; /*0x8943d1*/
            v113.m128_f32[1] = 0.0; /*0x8943d8*/
            v113.m128_f32[2] = 1.0; /*0x8943e1*/
            v86 = 1.0; /*0x8943e8*/
            v113.m128_f32[3] = 0.0; /*0x8943ec*/
          }
          v82 = 0; /*0x8943f3*/
          break; /*0x8943f8*/
        case 0xA: /*0x894322*/
LABEL_70:
          if ( (*(_BYTE *)(this + 6) & 1) == 0 ) /*0x89434e*/
          {
            v113.m128_f32[0] = 0.0; /*0x894356*/
            v113.m128_f32[1] = 0.0; /*0x89435d*/
            v113.m128_f32[2] = 1.0; /*0x894366*/
            v86 = 1.0; /*0x89436d*/
            v113.m128_f32[3] = 0.0; /*0x894371*/
            *(float *)(v18 + 0x2C) = 0.0; /*0x894378*/
            if ( (*(int (__thiscall **)(_DWORD))(**(_DWORD **)(v88 + 0x50) + 8))(*(_DWORD *)(v88 + 0x50)) < 6 ) /*0x894388*/
              *(__int128 *)(v18 + 0x10) = v111; /*0x89438f*/
          }
          v82 = 0; /*0x894393*/
          break; /*0x894398*/
        default:
          if ( v83 ) /*0x894402*/
          {
            if ( (*(_DWORD *)(this + 4) & 2) == 0 ) /*0x894410*/
            {
              v44 = *v17; /*0x894416*/
              v45 = _mm_sub_ps(*v17, v124); /*0x89441c*/
              v46 = _mm_mul_ps(v45, v45); /*0x894424*/
              v47 = _mm_add_ps(_mm_shuffle_ps(v46, v46, 0x4E), v46); /*0x89442e*/
              v114[0] = fsqrt(_mm_shuffle_ps(v47, v47, 0xB1).m128_f32[0] + v47.m128_f32[0]); /*0x89443f*/
              if ( v108 <= (double)v114[0] ) /*0x89445c*/
              {
                v48 = _mm_sub_ps(v44, v123); /*0x894469*/
                v49 = _mm_mul_ps(v48, v48); /*0x894477*/
                v50 = _mm_add_ps(_mm_shuffle_ps(v49, v49, 0x4E), v49); /*0x89447e*/
                v114[0] = fsqrt(_mm_shuffle_ps(v50, v50, 0xB1).m128_f32[0] + v50.m128_f32[0]); /*0x89448f*/
                if ( v114[0] < (double)v108 ) /*0x8944a6*/
                  *(_DWORD *)(this + 4) |= 2u; /*0x8944ac*/
              }
              else
              {
                *(_DWORD *)(this + 4) |= 2u; /*0x89445e*/
              }
            }
          }
          break; /*0x894464*/
      }
    }
    else
    {
      switch ( v91 ) /*0x8944c8*/
      {
        case 0xC: /*0x8944c8*/
        case 0x10: /*0x8944c8*/
          *(__int128 *)(v18 + 0x10) = v111; /*0x8944d4*/
          break; /*0x8944d8*/
        case 0xE: /*0x8944c8*/
          if ( (*(_BYTE *)(this + 6) & 1) != 0 ) /*0x8944de*/
            *(__int128 *)(v18 + 0x10) = v111; /*0x8944e5*/
          break; /*0x8944e9*/
        case 0x14: /*0x8944c8*/
          v51 = *(float *)&dword_A46C30; /*0x8944ed*/
          v86 = 0.0; /*0x8944f5*/
          *(float *)(v18 + 8) = 0.0; /*0x8944f9*/
          v52 = _mm_mul_ps(*(__m128 *)v18, *(__m128 *)v18); /*0x894502*/
          v52.m128_f32[0] = _mm_shuffle_ps(v52, v52, 0xAA).m128_f32[0] /*0x894514*/
                          + (float)(_mm_shuffle_ps(v52, v52, 0x55).m128_f32[0] + v52.m128_f32[0]);
          v53 = 1.0 / fsqrt(v52.m128_f32[0]); /*0x89451b*/
          v54 = v51 - (float)((float)(v52.m128_f32[0] * v53) * v53); /*0x894527*/
          v55 = (__m128)LODWORD(kHeadBodyNormalMatchRadius); /*0x89452b*/
          v55.m128_f32[0] = (float)(v55.m128_f32[0] * v53) * v54; /*0x894537*/
          *(__m128 *)v18 = _mm_mul_ps(_mm_shuffle_ps(v55, v55, 0), *(__m128 *)v18); /*0x894545*/
          break; /*0x894545*/
        default:
          break;
      }
    }
    if ( v86 >= (double)flt_A59E38 && v88 ) /*0x894566*/
    {
      if ( *(float *)(this + 0x20) <= (double)v86 ) /*0x89457b*/
      {
        if ( (*(_BYTE *)(this + 6) & 1) == 0 && (*(_BYTE *)(this + 4) & 1) != 0 ) /*0x894798*/
          sub_88FF20((float *)this, this + 0x190, v17); /*0x8947a4*/
        *(_DWORD *)(this + 4) |= 0x400u; /*0x8947a9*/
        if ( (*(_DWORD *)(this + 4) & 8) == 0 ) /*0x8947b8*/
          *(float *)(v18 + 0x28) = flt_A968B8; /*0x8947c0*/
        goto LABEL_110; /*0x8947c0*/
      }
      if ( !sub_891CC0((__m128 *)(this - 0x1F0), v17) ) /*0x89458f*/
      {
        if ( (*(_DWORD *)(this + 4) & 0x1800) == 0 ) /*0x894665*/
          *(float *)(v18 + 0x2C) = 0.0; /*0x894667*/
        *(_DWORD *)(this + 4) |= 0x404u; /*0x89466a*/
        v62 = *(float *)&dword_A46C30; /*0x894676*/
        if ( v96 ) /*0x89467e*/
        {
          v113.m128_f32[2] = 1.0; /*0x894732*/
          v69 = _mm_mul_ps(v113, v113); /*0x894744*/
          v69.m128_f32[0] = _mm_shuffle_ps(v69, v69, 0xAA).m128_f32[0] /*0x894756*/
                          + (float)(_mm_shuffle_ps(v69, v69, 0x55).m128_f32[0] + v69.m128_f32[0]);
          v70 = 1.0 / fsqrt(v69.m128_f32[0]); /*0x89475d*/
          v71 = v62 - (float)((float)(v69.m128_f32[0] * v70) * v70); /*0x894769*/
          v72 = (__m128)LODWORD(kHeadBodyNormalMatchRadius); /*0x89476d*/
          v72.m128_f32[0] = (float)(v72.m128_f32[0] * v70) * v71; /*0x894779*/
          v113 = _mm_mul_ps(_mm_shuffle_ps(v72, v72, 0), v113); /*0x894784*/
        }
        else
        {
          v63 = _mm_shuffle_ps(*(__m128 *)v18, *(__m128 *)v18, 0xFF).m128_f32[0]; /*0x894689*/
          v113.m128_f32[2] = 1.0; /*0x89468d*/
          v114[0] = v63; /*0x89469c*/
          v64 = v63 - v63; /*0x8946af*/
          v65 = _mm_mul_ps(v113, v113); /*0x8946b1*/
          v87 = v64; /*0x8946bb*/
          v65.m128_f32[0] = _mm_shuffle_ps(v65, v65, 0xAA).m128_f32[0] /*0x8946cb*/
                          + (float)(_mm_shuffle_ps(v65, v65, 0x55).m128_f32[0] + v65.m128_f32[0]);
          v66 = 1.0 / fsqrt(v65.m128_f32[0]); /*0x8946d2*/
          v67 = v62 - (float)((float)(v65.m128_f32[0] * v66) * v66); /*0x8946e3*/
          v68 = (__m128)LODWORD(kHeadBodyNormalMatchRadius); /*0x8946e7*/
          v68.m128_f32[0] = (float)(v68.m128_f32[0] * v66) * v67; /*0x8946f3*/
          v113 = _mm_mul_ps(_mm_shuffle_ps(v68, v68, 0), v113); /*0x8946fe*/
          *(__m128 *)v18 = v113; /*0x894706*/
          if ( v87 < 0.0 ) /*0x894709*/
            v87 = 0.0; /*0x89470b*/
          *(float *)(v18 + 0x18) = v87 * dbl_A3F3F0 + dbl_A2F928 + *(float *)(v18 + 0x18); /*0x894726*/
        }
        goto LABEL_110; /*0x894729*/
      }
      if ( v101 >= 4 || !v82 ) /*0x8945a5*/
        goto LABEL_110; /*0x8945a5*/
      v84 = v86 >= dbl_A38538; /*0x8945bc*/
      v56 = *(_DWORD *)(a3 + 0x48) + (*(_DWORD *)(a3 + 0x4C) << 6); /*0x8945cf*/
      sub_8909D0((float *)v56, v95); /*0x8945d5*/
      v57 = *(float *)&dword_A46C30; /*0x8945e1*/
      *(__int128 *)(v56 + 0x10) = v111; /*0x8945e9*/
      *(float *)(v56 + 8) = 0.0; /*0x8945ed*/
      v58 = _mm_mul_ps(*(__m128 *)v56, *(__m128 *)v56); /*0x8945f6*/
      v58.m128_f32[0] = _mm_shuffle_ps(v58, v58, 0xAA).m128_f32[0] /*0x894608*/
                      + (float)(_mm_shuffle_ps(v58, v58, 0x55).m128_f32[0] + v58.m128_f32[0]);
      v59 = 1.0 / fsqrt(v58.m128_f32[0]); /*0x89460f*/
      v60 = v57 - (float)((float)(v58.m128_f32[0] * v59) * v59); /*0x89461b*/
      v61 = (__m128)LODWORD(kHeadBodyNormalMatchRadius); /*0x89461f*/
      v61.m128_f32[0] = (float)(v61.m128_f32[0] * v59) * v60; /*0x89462b*/
      ++v101; /*0x89463b*/
      *(__m128 *)v56 = _mm_mul_ps(_mm_shuffle_ps(v61, v61, 0), *(__m128 *)v56); /*0x894642*/
      ++*(_DWORD *)(a3 + 0x4C); /*0x894645*/
      if ( v84 ) /*0x89464d*/
      {
        ++v100; /*0x894653*/
LABEL_110:
        *(_DWORD *)(this + 4) |= 0x200u; /*0x8947c3*/
        v73 = v106; /*0x8947ca*/
        ++*(_DWORD *)(this + 0x1C4); /*0x8947ce*/
        sub_891850((_DWORD *)(this - 0x1F0), v110 + *v73); /*0x8947e2*/
        v74 = v113; /*0x8947ec*/
        if ( v85 ) /*0x8947f4*/
          v74 = _mm_add_ps(v113, *(__m128 *)(this + 0x40)); /*0x8947fa*/
        else
          v85 = 1; /*0x8947ff*/
        *(__m128 *)(this + 0x40) = v74; /*0x894804*/
        if ( (*(_BYTE *)(this + 6) & 1) != 0 ) /*0x89480c*/
          *(_DWORD *)(this + 0x1C8) = *(_DWORD *)(v88 + 0xC); /*0x894815*/
      }
    }
  }
  v75 = *(_DWORD *)(this + 0x1C4); /*0x894834*/
  *(_BYTE *)(this + 0x60) = v75 == v100; /*0x894843*/
  if ( v75 ) /*0x894846*/
  {
    v76 = _mm_mul_ps(*(__m128 *)(this + 0x40), *(__m128 *)(this + 0x40)); /*0x894852*/
    v114[0] = _mm_shuffle_ps(v76, v76, 0xAA).m128_f32[0] /*0x89486b*/
            + (float)(_mm_shuffle_ps(v76, v76, 0x55).m128_f32[0] + v76.m128_f32[0]);
    if ( v114[0] > 0.0 ) /*0x894880*/
    {
      v77 = *(__m128 *)(this + 0x40); /*0x894882*/
      v78 = _mm_mul_ps(v77, v77); /*0x894891*/
      v78.m128_f32[0] = _mm_shuffle_ps(v78, v78, 0xAA).m128_f32[0] /*0x8948a3*/
                      + (float)(_mm_shuffle_ps(v78, v78, 0x55).m128_f32[0] + v78.m128_f32[0]);
      v79 = 1.0 / fsqrt(v78.m128_f32[0]); /*0x8948aa*/
      v80 = *(float *)&dword_A46C30 - (float)((float)(v78.m128_f32[0] * v79) * v79); /*0x8948b6*/
      v81 = (__m128)LODWORD(kHeadBodyNormalMatchRadius); /*0x8948ba*/
      v81.m128_f32[0] = (float)(v81.m128_f32[0] * v79) * v80; /*0x8948c6*/
      *(__m128 *)(this + 0x40) = _mm_mul_ps(_mm_shuffle_ps(v81, v81, 0), v77); /*0x8948d4*/
    }
  }
}
