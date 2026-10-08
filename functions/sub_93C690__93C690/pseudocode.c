signed int __thiscall sub_93C690(__m128 *this, int *a2, int *a3, __m128 *a4, __m128 *a5)
{
  __m128 v6; // xmm4
  __m128 v7; // xmm5
  __m128 v8; // xmm6
  __m128 v9; // xmm7
  int v10; // edx
  __int32 *v11; // edi
  __m128 *v12; // eax
  __m128 *v13; // ebx
  unsigned __int32 v14; // eax
  signed int v15; // eax
  int v16; // eax
  __m128 v17; // xmm0
  signed int v18; // eax
  signed int v19; // eax
  __int128 v20; // xmm0
  int v21; // eax
  int v22; // eax
  int v23; // edx
  int v24; // ecx
  __m128 v25; // xmm0
  int v26; // eax
  __m128 v27; // xmm2
  int v28; // eax
  __m128 v29; // xmm1
  __m128 v30; // xmm2
  __m128 v31; // xmm0
  float v32; // xmm3_4
  __m128 v33; // xmm4
  __m128 v34; // xmm0
  __m128 v35; // xmm1
  __m128 v36; // xmm2
  int v37; // eax
  signed int v38; // eax
  __int128 v39; // xmm0
  int v40; // eax
  int v41; // eax
  int v42; // ecx
  __m128 v43; // xmm0
  int v44; // eax
  __m128 v45; // xmm2
  __m128 *v46; // eax
  __m128 v47; // xmm1
  __m128 v48; // xmm2
  __m128 v49; // xmm0
  float v50; // xmm3_4
  __m128 v51; // xmm4
  __m128 v52; // xmm0
  __m128 v53; // xmm1
  __m128 v54; // xmm2
  __int32 v55; // eax
  int v56; // eax
  __int32 v57; // edx
  __m128 v58; // xmm0
  float v59; // xmm1_4
  float v60; // xmm2_4
  __m128 v61; // xmm0
  float v62; // xmm2_4
  __m128 v63; // xmm1
  __m128 v64; // xmm2
  __m128 v65; // xmm0
  double v66; // st7
  int v67; // eax
  __int32 v68; // ecx
  __m128 v69; // xmm1
  __m128 v70; // xmm0
  __m128 v71; // xmm0
  __m128 v72; // xmm0
  __m128 v73; // xmm1
  __m128 v74; // xmm0
  __m128 v75; // xmm3
  __m128 v76; // xmm1
  int v77; // eax
  __int128 v78; // xmm0
  __m128 v79; // xmm0
  __m128 v80; // xmm2
  __m128 v81; // xmm4
  __m128 v82; // xmm3
  __m128 v83; // xmm0
  __m128 v84; // xmm7
  __m128 v85; // xmm1
  __m128 v86; // xmm6
  int v87; // eax
  __m128 v88; // xmm0
  __int128 v89; // xmm0
  int v90; // eax
  __int128 v91; // xmm0
  __m128 v92; // xmm1
  __m128 v93; // xmm2
  __m128 v94; // xmm4
  __m128 v95; // xmm3
  __m128 v96; // xmm0
  __m128 v97; // xmm7
  __m128 v98; // xmm1
  __m128 v99; // xmm6
  int v100; // eax
  __m128 v101; // xmm0
  __m128 v102; // xmm0
  __m128 v103; // xmm3
  __m128 v104; // xmm1
  __m128 v105; // xmm5
  int v106; // eax
  __m128 v107; // xmm4
  __m128 v108; // xmm0
  __int32 v109; // ecx
  int v110; // eax
  __m128 v111; // xmm1
  __m128 *v112; // edx
  __m128 v113; // xmm0
  __m128 v114; // xmm0
  __m128 v115; // xmm1
  int v116; // edx
  __int32 v117; // ecx
  __m128 v118; // xmm0
  __m128 v119; // xmm1
  __m128 v120; // xmm1
  __m128 v121; // xmm0
  __m128 v122; // xmm2
  __m128 v123; // xmm1
  __m128 v124; // xmm0
  float v125; // xmm3_4
  __m128 v126; // xmm4
  __m128 v127; // xmm0
  __m128 v128; // xmm0
  __m128 v129; // xmm1
  float v130; // edx
  __m128 *v132; // [esp-8h] [ebp-A4h]
  __m128 *v133; // [esp-8h] [ebp-A4h]
  __m128 *v134; // [esp+Ch] [ebp-90h]
  float v135; // [esp+Ch] [ebp-90h]
  __int32 v136; // [esp+10h] [ebp-8Ch]
  float v137; // [esp+14h] [ebp-88h]
  float v138; // [esp+18h] [ebp-84h]
  char v139; // [esp+1Ch] [ebp-80h]
  __m128 *v140; // [esp+20h] [ebp-7Ch]
  int v141; // [esp+20h] [ebp-7Ch]
  float v142; // [esp+24h] [ebp-78h]
  float v143; // [esp+28h] [ebp-74h]
  float v144; // [esp+2Ch] [ebp-70h]
  float v145; // [esp+30h] [ebp-6Ch]
  float v146; // [esp+34h] [ebp-68h]
  float v147; // [esp+38h] [ebp-64h]
  float v148; // [esp+3Ch] [ebp-60h]
  float v149; // [esp+40h] [ebp-5Ch]
  float v150; // [esp+44h] [ebp-58h]
  float v151; // [esp+48h] [ebp-54h]
  __m128 v152; // [esp+4Ch] [ebp-50h] BYREF
  __m128 v153; // [esp+5Ch] [ebp-40h] BYREF
  __m128 v154; // [esp+6Ch] [ebp-30h] BYREF
  __m128 v155; // [esp+7Ch] [ebp-20h] BYREF
  __m128 v156; // [esp+8Ch] [ebp-10h] BYREF

  v6 = *a4; /*0x93c6a3*/
  v7 = a4[1]; /*0x93c6a6*/
  v8 = a4[2]; /*0x93c6aa*/
  v9 = a4[3]; /*0x93c6ae*/
  v10 = this->m128_i32[1]; /*0x93c6b2*/
  v11 = &this->m128_i32[1]; /*0x93c6b6*/
  v12 = this + 0xE; /*0x93c6b9*/
  do /*0x93c70d*/
  {
    v12[0xFFFFFFFC] = _mm_add_ps( /*0x93c703*/
                        _mm_add_ps(
                          _mm_mul_ps(v6, _mm_shuffle_ps(*v12, *v12, 0)),
                          _mm_mul_ps(v7, _mm_shuffle_ps(*v12, *v12, 0x55))),
                        _mm_add_ps(_mm_mul_ps(v8, _mm_shuffle_ps(*v12, *v12, 0xAA)), v9));
    ++v12; /*0x93c707*/
    --v10; /*0x93c70a*/
  }
  while ( v10 > 0 ); /*0x93c70d*/
  v139 = 0; /*0x93c70f*/
  v138 = 1.0e-10; /*0x93c717*/
  v13 = this + 2; /*0x93c71f*/
LABEL_4:
  ++v139; /*0x93c722*/
  v138 = v138 + v138; /*0x93c735*/
  v14 = (*v11 | (8 * this->m128_i32[0])) - 9; /*0x93c741*/
  v136 = this->m128_i32[0] + *v11; /*0x93c747*/
  *((_DWORD *)this + 0x5C) = 0; /*0x93c74b*/
  while ( 2 ) /*0x93c767*/
  {
    switch ( v14 ) /*0x93c767*/
    {
      case 0u: /*0x93c767*/
        goto LABEL_71;
      case 1u: /*0x93c767*/
        goto LABEL_58;
      case 2u: /*0x93c767*/
        goto LABEL_21;
      case 3u: /*0x93c767*/
        v19 = sub_93C0C0(this + 0xA, this + 2, 0x3F800000u); /*0x93c87a*/
        if ( v19 < 0 ) /*0x93c884*/
          goto LABEL_40; /*0x93c884*/
        v20 = *((_OWORD *)this + 0xD); /*0x93c88c*/
        --*v11; /*0x93c89a*/
        *((_OWORD *)this + v19 + 0xA) = v20; /*0x93c89f*/
        *(this + v19 + 0xE) = *(this + 0x11); /*0x93c8ad*/
LABEL_21:
        v13 = this + 2; /*0x93c8b1*/
        v21 = sub_93B000(this, this + 2, this + 0xA, 1); /*0x93c8c0*/
        if ( v21 == 7 ) /*0x93c8c8*/
          goto LABEL_73; /*0x93c8c8*/
        v22 = byte_A99F04[v21]; /*0x93c8ce*/
        if ( v22 >= 0 ) /*0x93c8d7*/
        {
          v23 = byte_A99F0C[v22]; /*0x93c8dd*/
          v24 = byte_A99F0E[v22]; /*0x93c8e4*/
          v25 = *(this + v22 + 0xA); /*0x93c8f4*/
          v26 = 0x10 * (v24 + 0xA); /*0x93c8fb*/
          v27 = *(__m128 *)((char *)this + v26); /*0x93c8fe*/
          v140 = (__m128 *)((char *)this + v26); /*0x93c904*/
          v28 = 0x10 * (v23 + 0xA); /*0x93c90b*/
          v29 = _mm_sub_ps(*v13, v25); /*0x93c917*/
          v30 = _mm_sub_ps(v27, v25); /*0x93c91a*/
          v31 = _mm_mul_ps(v29, _mm_sub_ps(*(__m128 *)((char *)this + v28), v25)); /*0x93c920*/
          v32 = _mm_shuffle_ps(v31, v31, 0x55).m128_f32[0] + v31.m128_f32[0]; /*0x93c92d*/
          v33 = _mm_shuffle_ps(v31, v31, 0xAA); /*0x93c931*/
          v34 = *(this + 0xC); /*0x93c935*/
          v33.m128_f32[0] = v33.m128_f32[0] + v32; /*0x93c940*/
          *v11 = 2; /*0x93c949*/
          if ( (_mm_movemask_ps(v33) & 1) != 0 ) /*0x93c94f*/
          {
            *(__m128 *)((char *)this + v28) = v34; /*0x93c955*/
            v35 = _mm_mul_ps(v29, v30); /*0x93c95f*/
            *(this + v23 + 0xE) = *(this + 0x10); /*0x93c968*/
            v36 = _mm_shuffle_ps(v35, v35, 0xAA); /*0x93c97a*/
            v36.m128_f32[0] = v36.m128_f32[0] + (float)(_mm_shuffle_ps(v35, v35, 0x55).m128_f32[0] + v35.m128_f32[0]); /*0x93c97e*/
            if ( (_mm_movemask_ps(v36) & 1) != 0 ) /*0x93c987*/
            {
              if ( v24 == *v11 ) /*0x93c991*/
                v24 = v23; /*0x93c993*/
              v37 = *v11 - 1; /*0x93c995*/
              *v11 = v37; /*0x93c996*/
              *(this + v24 + 0xA) = *(this + v37 + 0xA); /*0x93c9a8*/
              *(this + v24 + 0xE) = *(this + *v11 + 0xE); /*0x93c9be*/
            }
          }
          else
          {
            *v140 = v34; /*0x93c9ce*/
            *(this + v24 + 0xE) = *(this + 0x10); /*0x93c9db*/
          }
LABEL_39:
          v14 = (*v11 | (8 * this->m128_i32[0])) - 9; /*0x93cb05*/
          if ( v14 > 0x18 ) /*0x93cb14*/
          {
LABEL_40:
            v56 = 1; /*0x93cb1a*/
            goto LABEL_41; /*0x93cb1a*/
          }
          continue; /*0x93cb14*/
        }
        v77 = v22 + 8; /*0x93cdac*/
        if ( v77 > 3 ) /*0x93cdb2*/
          v77 = 1; /*0x93cdb4*/
        v78 = *((_OWORD *)this + 0xC); /*0x93cdbb*/
        --*v11; /*0x93cdc3*/
        *((_OWORD *)this + v77 + 0xA) = v78; /*0x93cdce*/
        *(this + v77 + 0xE) = *(this + 0x10); /*0x93cddc*/
LABEL_58:
        v79 = *(this + 0xA); /*0x93cde0*/
        v80 = _mm_sub_ps(*(this + 0xB), v79); /*0x93cdf4*/
        v81 = _mm_sub_ps(v79, *v13); /*0x93cdfa*/
        v82 = _mm_sub_ps(*(this + 0xB), *v13); /*0x93ce00*/
        v83 = _mm_mul_ps(v82, v80); /*0x93ce06*/
        v84 = _mm_shuffle_ps(v83, v83, 0xAA); /*0x93ce17*/
        v84.m128_f32[0] = v84.m128_f32[0] + (float)(_mm_shuffle_ps(v83, v83, 0x55).m128_f32[0] + v83.m128_f32[0]); /*0x93ce1b*/
        v85 = _mm_mul_ps(v81, v80); /*0x93ce22*/
        v86 = _mm_shuffle_ps(v85, v85, 0xAA); /*0x93ce33*/
        v86.m128_f32[0] = v86.m128_f32[0] + (float)(_mm_shuffle_ps(v85, v85, 0x55).m128_f32[0] + v85.m128_f32[0]); /*0x93ce37*/
        v87 = _mm_movemask_ps(v84) & 1; /*0x93ce41*/
        if ( v87 == (_mm_movemask_ps(v86) & 1) ) /*0x93ce49*/
        {
          if ( v87 ) /*0x93ceb3*/
          {
            v89 = *((_OWORD *)this + 0xF); /*0x93ceb5*/
            *(this + 0xA) = *(this + 0xB); /*0x93cebc*/
            *((_OWORD *)this + 0xE) = v89; /*0x93cec3*/
          }
          --*v11; /*0x93ceca*/
          goto LABEL_71; /*0x93cecc*/
        }
        v88 = _mm_sub_ps( /*0x93ce73*/
                _mm_mul_ps(_mm_shuffle_ps(v82, v82, 0xC9), _mm_shuffle_ps(v81, v81, 0xD2)),
                _mm_mul_ps(_mm_shuffle_ps(v82, v82, 0xD2), _mm_shuffle_ps(v81, v81, 0xC9)));
        *(this + 0x12) = _mm_sub_ps( /*0x93ce9b*/
                           _mm_mul_ps(_mm_shuffle_ps(v80, v80, 0xC9), _mm_shuffle_ps(v88, v88, 0xD2)),
                           _mm_mul_ps(_mm_shuffle_ps(v80, v80, 0xD2), _mm_shuffle_ps(v88, v88, 0xC9)));
        *((_DWORD *)this + 0x5D) = *v11; /*0x93cea4*/
        v56 = 0; /*0x93ceaa*/
LABEL_41:
        v57 = this->m128_i32[0]; /*0x93cb1f*/
        v58 = _mm_mul_ps(*(this + 0x12), *(this + 0x12)); /*0x93cb2c*/
        v59 = _mm_shuffle_ps(v58, v58, 0x55).m128_f32[0] + v58.m128_f32[0]; /*0x93cb36*/
        v60 = _mm_shuffle_ps(v58, v58, 0xAA).m128_f32[0]; /*0x93cb3d*/
        v61 = *(this + 0xA); /*0x93cb41*/
        v62 = v60 + v59; /*0x93cb48*/
        v63 = *(this + 0x12); /*0x93cb4c*/
        v143 = v62; /*0x93cb57*/
        v64 = *(this + 2); /*0x93cb5b*/
        *((_DWORD *)this + 5) |= *v11 + this->m128_i32[0] - v136; /*0x93cb6c*/
        v13 = this + 2; /*0x93cb72*/
        v65 = _mm_mul_ps(_mm_sub_ps(v64, v61), v63); /*0x93cb78*/
        v147 = _mm_shuffle_ps(v65, v65, 0xAA).m128_f32[0] /*0x93cb95*/
             + (float)(_mm_shuffle_ps(v65, v65, 0x55).m128_f32[0] + v65.m128_f32[0]);
        if ( !v56 ) /*0x93cb99*/
        {
          v66 = v143 * v138; /*0x93cba3*/
          if ( fabs(v147) * v147 > v66 && v143 >= (double)v138 ) /*0x93cbcb*/
          {
            v135 = v66; /*0x93cbd5*/
            if ( (v139 & 1) == 0 ) /*0x93cbe0*/
              goto LABEL_74; /*0x93cbe0*/
            if ( v57 == this->m128_i32[2] ) /*0x93cbe9*/
              goto LABEL_74; /*0x93cbe9*/
            if ( *((_DWORD *)this + 0x5C) == 1 ) /*0x93cbf6*/
              goto LABEL_74; /*0x93cbf6*/
            v67 = *a2; /*0x93cc06*/
            v155 = _mm_xor_ps(v63, (__m128)xmmword_A965C0); /*0x93cc1c*/
            (*(void (__thiscall **)(int *, __m128 *, __m128 *))(v67 + 0x24))(a2, &v155, this + v57 + 2); /*0x93cc24*/
            v68 = this->m128_i32[0]; /*0x93cc27*/
            v69 = *(this + this->m128_i32[0] + 2); /*0x93cc3a*/
            v70 = _mm_mul_ps(_mm_sub_ps(v69, *v13), v155); /*0x93cc47*/
            v144 = _mm_shuffle_ps(v70, v70, 0xAA).m128_f32[0] /*0x93cc64*/
                 + (float)(_mm_shuffle_ps(v70, v70, 0x55).m128_f32[0] + v70.m128_f32[0]);
            if ( fabs(v144) * v144 <= v135 ) /*0x93cc7b*/
              goto LABEL_74; /*0x93cc7b*/
            if ( v68 == 2 ) /*0x93cc86*/
              goto LABEL_51; /*0x93cc86*/
            if ( v68 == 3 ) /*0x93cc89*/
            {
              v71 = _mm_mul_ps(_mm_sub_ps(v69, *(this + 4)), v155); /*0x93cc9c*/
              v146 = _mm_shuffle_ps(v71, v71, 0xAA).m128_f32[0] /*0x93ccb9*/
                   + (float)(_mm_shuffle_ps(v71, v71, 0x55).m128_f32[0] + v71.m128_f32[0]);
              if ( fabs(v146) * v146 >= v135 ) /*0x93ccd0*/
              {
LABEL_51:
                v72 = _mm_mul_ps(_mm_sub_ps(v69, *(this + 3)), v155); /*0x93ccd6*/
                v149 = _mm_shuffle_ps(v72, v72, 0xAA).m128_f32[0] /*0x93ccfd*/
                     + (float)(_mm_shuffle_ps(v72, v72, 0x55).m128_f32[0] + v72.m128_f32[0]);
                if ( fabs(v149) * v149 >= v135 ) /*0x93cd14*/
                  goto LABEL_52; /*0x93cd14*/
              }
LABEL_74:
              if ( *v11 == this->m128_i32[3] ) /*0x93cff8*/
                goto LABEL_82; /*0x93cff8*/
              if ( *((_DWORD *)this + 0x5C) == 0xFFFFFFFF ) /*0x93d005*/
                goto LABEL_82; /*0x93d005*/
              v103 = a4[2]; /*0x93d00e*/
              v104 = *(this + 0x12); /*0x93d012*/
              v105 = a4[1]; /*0x93d01c*/
              v106 = *a3; /*0x93d023*/
              v107 = _mm_shuffle_ps(v103, v103, 0x44); /*0x93d028*/
              v108 = _mm_shuffle_ps(*a4, v105, 0x44); /*0x93d032*/
              v132 = this + *v11 + 0xE; /*0x93d05e*/
              v154 = _mm_add_ps( /*0x93d07f*/
                       _mm_add_ps(
                         _mm_mul_ps(_mm_shuffle_ps(v108, v107, 0x88), _mm_shuffle_ps(v104, v104, 0)),
                         _mm_mul_ps(_mm_shuffle_ps(v108, v107, 0xDD), _mm_shuffle_ps(v104, v104, 0x55))),
                       _mm_mul_ps(
                         _mm_shuffle_ps(_mm_shuffle_ps(*a4, v105, 0xEE), _mm_shuffle_ps(v103, v103, 0xEE), 0x88),
                         _mm_shuffle_ps(v104, v104, 0xAA)));
              (*(void (__thiscall **)(int *, __m128 *, __m128 *))(v106 + 0x24))(a3, &v154, v132); /*0x93d084*/
              v109 = *v11; /*0x93d087*/
              v110 = 0x10 * (*v11 + 0xE); /*0x93d098*/
              v111 = *(__m128 *)((char *)this + v110); /*0x93d09b*/
              v113 = _mm_mul_ps(_mm_sub_ps(v111, *(this + 0xE)), v154); /*0x93d0ab*/
              v145 = _mm_shuffle_ps(v113, v113, 0xAA).m128_f32[0] /*0x93d0c8*/
                   + (float)(_mm_shuffle_ps(v113, v113, 0x55).m128_f32[0] + v113.m128_f32[0]);
              if ( fabs(v145) * v145 <= v135 ) /*0x93d0df*/
                goto LABEL_82; /*0x93d0df*/
              if ( v109 == 2 ) /*0x93d0ea*/
                goto LABEL_80; /*0x93d0ea*/
              if ( v109 == 3 ) /*0x93d0ed*/
              {
                v114 = _mm_mul_ps(_mm_sub_ps(v111, *(this + 0x10)), v154); /*0x93d103*/
                v148 = _mm_shuffle_ps(v114, v114, 0xAA).m128_f32[0] /*0x93d120*/
                     + (float)(_mm_shuffle_ps(v114, v114, 0x55).m128_f32[0] + v114.m128_f32[0]);
                if ( fabs(v148) * v148 >= v135 ) /*0x93d137*/
                {
LABEL_80:
                  v115 = _mm_mul_ps(_mm_sub_ps(v111, *(this + 0xF)), v154); /*0x93d13d*/
                  v142 = _mm_shuffle_ps(v115, v115, 0xAA).m128_f32[0] /*0x93d164*/
                       + (float)(_mm_shuffle_ps(v115, v115, 0x55).m128_f32[0] + v115.m128_f32[0]);
                  if ( fabs(v142) * v142 >= v135 ) /*0x93d17b*/
                    goto LABEL_81; /*0x93d17b*/
                }
LABEL_82:
                if ( (v139 & 1) != 0 ) /*0x93d1d7*/
                  goto LABEL_93; /*0x93d1d7*/
                if ( this->m128_i32[0] == this->m128_i32[2] ) /*0x93d1e2*/
                  goto LABEL_93; /*0x93d1e2*/
                if ( *((_DWORD *)this + 0x5C) == 1 ) /*0x93d1ef*/
                  goto LABEL_93; /*0x93d1ef*/
                v116 = *a2; /*0x93d206*/
                v133 = this + this->m128_i32[0] + 2; /*0x93d210*/
                v152 = _mm_xor_ps(*(this + 0x12), (__m128)xmmword_A965C0); /*0x93d219*/
                (*(void (__thiscall **)(int *, __m128 *, __m128 *))(v116 + 0x24))(a2, &v152, v133); /*0x93d21e*/
                v117 = this->m128_i32[0]; /*0x93d221*/
                v118 = *(this + this->m128_i32[0] + 2); /*0x93d231*/
                v119 = _mm_mul_ps(_mm_sub_ps(v118, *v13), v152); /*0x93d23e*/
                v151 = _mm_shuffle_ps(v119, v119, 0xAA).m128_f32[0] /*0x93d25b*/
                     + (float)(_mm_shuffle_ps(v119, v119, 0x55).m128_f32[0] + v119.m128_f32[0]);
                if ( fabs(v151) * v151 <= v135 ) /*0x93d272*/
                  goto LABEL_93; /*0x93d272*/
                if ( v117 == 2 ) /*0x93d27d*/
                  goto LABEL_89; /*0x93d27d*/
                if ( v117 == 3 ) /*0x93d280*/
                {
                  v120 = _mm_mul_ps(_mm_sub_ps(v118, *(this + 4)), v152); /*0x93d293*/
                  v150 = _mm_shuffle_ps(v120, v120, 0xAA).m128_f32[0] /*0x93d2b0*/
                       + (float)(_mm_shuffle_ps(v120, v120, 0x55).m128_f32[0] + v120.m128_f32[0]);
                  if ( fabs(v150) * v150 >= v135 ) /*0x93d2c7*/
                  {
LABEL_89:
                    v121 = _mm_mul_ps(_mm_sub_ps(v118, *(this + 3)), v152); /*0x93d2c9*/
                    v137 = _mm_shuffle_ps(v121, v121, 0xAA).m128_f32[0] /*0x93d2ed*/
                         + (float)(_mm_shuffle_ps(v121, v121, 0x55).m128_f32[0] + v121.m128_f32[0]);
                    if ( fabs(v137) * v137 >= v135 ) /*0x93d304*/
                      goto LABEL_90; /*0x93d304*/
                  }
LABEL_93:
                  v122 = *(this + 0x12); /*0x93d335*/
                  v123 = _mm_sub_ps(*v13, *(this + 0xA)); /*0x93d346*/
                  v124 = _mm_mul_ps(v122, v122); /*0x93d34f*/
                  v125 = _mm_shuffle_ps(v124, v124, 0x55).m128_f32[0] + v124.m128_f32[0]; /*0x93d359*/
                  v126 = _mm_shuffle_ps(v124, v124, 0xAA); /*0x93d360*/
                  v127 = v126; /*0x93d364*/
                  v127.m128_f32[0] = v126.m128_f32[0] + v125; /*0x93d367*/
                  v152 = v127; /*0x93d36b*/
                  v152.m128_f32[0] = 1.0 / fsqrt(v126.m128_f32[0] + v125); /*0x93d374*/
                  v128 = (__m128)0x3F000000u; /*0x93d3a1*/
                  v128.m128_f32[0] = (float)(0.5 * v152.m128_f32[0]) /*0x93d3ab*/
                                   * (float)(3.0
                                           - (float)((float)((float)(v126.m128_f32[0] + v125) * v152.m128_f32[0])
                                                   * v152.m128_f32[0]));
                  *(this + 0x12) = _mm_mul_ps(_mm_shuffle_ps(v128, v128, 0), v122); /*0x93d3b9*/
                  *a5 = *(this + 0x12); /*0x93d3c7*/
                  v129 = _mm_mul_ps(v123, *(this + 0x12)); /*0x93d3d1*/
                  v130 = _mm_shuffle_ps(v129, v129, 0xAA).m128_f32[0] /*0x93d3f2*/
                       + (float)(_mm_shuffle_ps(v129, v129, 0x55).m128_f32[0] + v129.m128_f32[0]);
                  a5->m128_f32[3] = v130; /*0x93d3f6*/
                  *((float *)this + 0x4B) = v130; /*0x93d3fb*/
                  return 0; /*0x93d409*/
                }
LABEL_90:
                this->m128_i32[0] = v117 + 1; /*0x93d306*/
                *((_DWORD *)this + 5) = 1; /*0x93d309*/
              }
              else
              {
LABEL_81:
                v112 = (__m128 *)((char *)this + v110); /*0x93d17d*/
                *(this + v109 + 0xA) = _mm_add_ps( /*0x93d1bf*/
                                         _mm_add_ps(
                                           _mm_mul_ps(*a4, _mm_shuffle_ps(*v112, *v112, 0)),
                                           _mm_mul_ps(a4[1], _mm_shuffle_ps(*v112, *v112, 0x55))),
                                         _mm_add_ps(_mm_mul_ps(a4[2], _mm_shuffle_ps(*v112, *v112, 0xAA)), a4[3]));
                ++*v11; /*0x93d1c3*/
                *((_DWORD *)this + 5) = 1; /*0x93d1c5*/
              }
            }
            else
            {
LABEL_52:
              this->m128_i32[0] = v68 + 1; /*0x93cd1a*/
              *((_DWORD *)this + 5) = 1; /*0x93cd1d*/
            }
            goto LABEL_4; /*0x93d310*/
          }
        }
        if ( !*((_BYTE *)this + 0x10) ) /*0x93d317*/
        {
          sub_93C350(this, a2, a3, a4); /*0x93d330*/
          goto LABEL_93; /*0x93d330*/
        }
        if ( this->m128_i32[0] + *v11 > 4 ) /*0x93d416*/
        {
          if ( this->m128_i32[0] > *v11 ) /*0x93d41a*/
          {
            this->m128_i32[0] = 3; /*0x93d41c*/
            *v11 = 1; /*0x93d422*/
            return 4; /*0x93d433*/
          }
          this->m128_i32[0] = 1; /*0x93d436*/
          *v11 = 3; /*0x93d43c*/
        }
        return 4;
      case 8u: /*0x93c767*/
        goto LABEL_66;
      case 9u: /*0x93c767*/
        goto LABEL_10;
      case 0xAu: /*0x93c767*/
        v15 = sub_93B220(this, (int)v13, (int)(this + 0xA), this, v11, *((_DWORD *)this + 0x5D) == 2, 1); /*0x93c78b*/
        goto LABEL_8; /*0x93c78b*/
      case 0x10u: /*0x93c767*/
        goto LABEL_31;
      case 0x11u: /*0x93c767*/
        v15 = sub_93B220(this, (int)(this + 0xA), (int)v13, v11, this, *((_DWORD *)this + 0x5D) == 2, 0xFFFFFFFF); /*0x93c7ac*/
LABEL_8:
        v16 = v15 - 1; /*0x93c7b1*/
        if ( !v16 ) /*0x93c7b2*/
          goto LABEL_40; /*0x93c7b2*/
        if ( v16 != 1 ) /*0x93c7b9*/
          goto LABEL_73; /*0x93c7b9*/
LABEL_10:
        v13 = this + 2; /*0x93c7bf*/
        v17 = *(this + 0xA); /*0x93c7d4*/
        v156 = _mm_sub_ps(*(this + 3), *(this + 2)); /*0x93c7ee*/
        v153 = _mm_sub_ps(*(this + 0xB), v17); /*0x93c802*/
        v18 = sub_8D1A30(this + 2, &v156, this + 0xA, &v153, this + 0x13); /*0x93c807*/
        if ( !v18 ) /*0x93c811*/
        {
          v73 = _mm_sub_ps( /*0x93cd68*/
                  _mm_mul_ps(_mm_shuffle_ps(v156, v156, 0xC9), _mm_shuffle_ps(v153, v153, 0xD2)),
                  _mm_mul_ps(_mm_shuffle_ps(v156, v156, 0xD2), _mm_shuffle_ps(v153, v153, 0xC9)));
          v74 = _mm_mul_ps(v73, _mm_sub_ps(*v13, *(this + 0xA))); /*0x93cd71*/
          v75 = _mm_shuffle_ps(v74, v74, 0xAA); /*0x93cd82*/
          v75.m128_f32[0] = v75.m128_f32[0] + (float)(_mm_shuffle_ps(v74, v74, 0x55).m128_f32[0] + v74.m128_f32[0]); /*0x93cd86*/
          *(this + 0x12) = v73; /*0x93cd90*/
          if ( (_mm_movemask_ps(v75) & 1) != 0 ) /*0x93cd97*/
          {
            v76 = _mm_xor_ps(v73, (__m128)xmmword_A965C0); /*0x93cda4*/
            goto LABEL_72; /*0x93cda7*/
          }
          goto LABEL_73; /*0x93cd97*/
        }
        if ( (v18 & 1) != 0 ) /*0x93c819*/
        {
          *v13 = *(this + 3); /*0x93c81f*/
        }
        else if ( (v18 & 2) == 0 ) /*0x93c826*/
        {
          goto LABEL_15; /*0x93c826*/
        }
        this->m128_i32[0] = 1; /*0x93c828*/
LABEL_15:
        if ( (v18 & 4) != 0 ) /*0x93c830*/
        {
          *(this + 0xA) = *(this + 0xB); /*0x93c839*/
          *(this + 0xE) = *(this + 0xF); /*0x93c847*/
          *v11 = 1; /*0x93c84e*/
        }
        else if ( (v18 & 8) != 0 ) /*0x93c85b*/
        {
          *v11 = 1; /*0x93c861*/
        }
        goto LABEL_39; /*0x93c854*/
      case 0x18u: /*0x93c767*/
        v38 = sub_93C0C0(this + 2, this + 0xA, 0xBF800000); /*0x93c9f2*/
        if ( v38 < 0 ) /*0x93c9fc*/
          goto LABEL_40; /*0x93c9fc*/
        v39 = *((_OWORD *)this + 5); /*0x93ca04*/
        --this->m128_i32[0]; /*0x93ca0f*/
        *((_OWORD *)this + v38 + 2) = v39; /*0x93ca11*/
LABEL_31:
        v13 = this + 2; /*0x93ca15*/
        v40 = sub_93B000(this, this + 0xA, this + 2, 0xFFFFFFFF); /*0x93ca24*/
        if ( v40 == 7 ) /*0x93ca2c*/
          goto LABEL_73; /*0x93ca2c*/
        v41 = byte_A99F04[v40]; /*0x93ca32*/
        if ( v41 < 0 ) /*0x93ca3b*/
        {
          v90 = v41 + 8; /*0x93ced1*/
          if ( v90 > 3 ) /*0x93ced7*/
            v90 = 1; /*0x93ced9*/
          v91 = *((_OWORD *)this + 4); /*0x93cee0*/
          --this->m128_i32[0]; /*0x93ceeb*/
          *((_OWORD *)this + v90 + 2) = v91; /*0x93ceed*/
LABEL_66:
          v92 = *(this + 0xA); /*0x93cef1*/
          v93 = _mm_sub_ps(v13[1], *v13); /*0x93cf02*/
          v94 = _mm_sub_ps(*v13, v92); /*0x93cf08*/
          v95 = _mm_sub_ps(v13[1], v92); /*0x93cf0e*/
          v96 = _mm_mul_ps(v95, v93); /*0x93cf14*/
          v97 = _mm_shuffle_ps(v96, v96, 0xAA); /*0x93cf25*/
          v97.m128_f32[0] = v97.m128_f32[0] + (float)(_mm_shuffle_ps(v96, v96, 0x55).m128_f32[0] + v96.m128_f32[0]); /*0x93cf29*/
          v98 = _mm_mul_ps(v94, v93); /*0x93cf30*/
          v99 = _mm_shuffle_ps(v98, v98, 0xAA); /*0x93cf41*/
          v99.m128_f32[0] = v99.m128_f32[0] + (float)(_mm_shuffle_ps(v98, v98, 0x55).m128_f32[0] + v98.m128_f32[0]); /*0x93cf45*/
          v100 = _mm_movemask_ps(v97) & 1; /*0x93cf4f*/
          if ( v100 != (_mm_movemask_ps(v99) & 1) ) /*0x93cf57*/
          {
            v101 = _mm_sub_ps( /*0x93cf81*/
                     _mm_mul_ps(_mm_shuffle_ps(v95, v95, 0xC9), _mm_shuffle_ps(v94, v94, 0xD2)),
                     _mm_mul_ps(_mm_shuffle_ps(v95, v95, 0xD2), _mm_shuffle_ps(v94, v94, 0xC9)));
            *(this + 0x12) = _mm_sub_ps( /*0x93cfa9*/
                               _mm_mul_ps(_mm_shuffle_ps(v101, v101, 0xC9), _mm_shuffle_ps(v93, v93, 0xD2)),
                               _mm_mul_ps(_mm_shuffle_ps(v101, v101, 0xD2), _mm_shuffle_ps(v93, v93, 0xC9)));
            *((_DWORD *)this + 0x5D) = *v11; /*0x93cfb2*/
            v56 = 0; /*0x93cfb8*/
            goto LABEL_41; /*0x93cfba*/
          }
          if ( v100 ) /*0x93cfc1*/
          {
            v102 = v13[5]; /*0x93cfc3*/
            *v13 = v13[1]; /*0x93cfc7*/
            v13[4] = v102; /*0x93cfca*/
          }
          --this->m128_i32[0]; /*0x93cfce*/
LABEL_71:
          v76 = _mm_sub_ps(*v13, *(this + 0xA)); /*0x93cfd0*/
LABEL_72:
          *(this + 0x12) = v76; /*0x93cfdd*/
LABEL_73:
          *((_DWORD *)this + 0x5D) = *v11; /*0x93cfe4*/
          v56 = 0; /*0x93cfec*/
          goto LABEL_41; /*0x93cfee*/
        }
        v42 = byte_A99F0E[v41]; /*0x93ca48*/
        v43 = *(this + v41 + 2); /*0x93ca5c*/
        v141 = byte_A99F0C[v41]; /*0x93ca60*/
        v44 = 0x10 * (v42 + 2); /*0x93ca67*/
        v45 = *(__m128 *)((char *)this + v44); /*0x93ca6a*/
        v134 = (__m128 *)((char *)this + v44); /*0x93ca7d*/
        v46 = this + v141 + 2; /*0x93ca81*/
        v47 = _mm_sub_ps(*(this + 0xA), v43); /*0x93ca84*/
        v48 = _mm_sub_ps(v45, v43); /*0x93ca87*/
        v49 = _mm_mul_ps(v47, _mm_sub_ps(*v46, v43)); /*0x93ca8d*/
        v50 = _mm_shuffle_ps(v49, v49, 0x55).m128_f32[0] + v49.m128_f32[0]; /*0x93ca9a*/
        v51 = _mm_shuffle_ps(v49, v49, 0xAA); /*0x93ca9e*/
        v52 = *(this + 4); /*0x93caa2*/
        v51.m128_f32[0] = v51.m128_f32[0] + v50; /*0x93caa6*/
        this->m128_i32[0] = 2; /*0x93cab0*/
        if ( (_mm_movemask_ps(v51) & 1) != 0 ) /*0x93cab6*/
        {
          v53 = _mm_mul_ps(v47, v48); /*0x93cab8*/
          *v46 = v52; /*0x93cabb*/
          v54 = _mm_shuffle_ps(v53, v53, 0xAA); /*0x93cacc*/
          v54.m128_f32[0] = v54.m128_f32[0] + (float)(_mm_shuffle_ps(v53, v53, 0x55).m128_f32[0] + v53.m128_f32[0]); /*0x93cad0*/
          if ( (_mm_movemask_ps(v54) & 1) != 0 ) /*0x93cad9*/
          {
            if ( v42 == this->m128_i32[0] ) /*0x93cadf*/
              v42 = v141; /*0x93cae1*/
            v55 = this->m128_i32[0] - 1; /*0x93cae5*/
            this->m128_i32[0] = v55; /*0x93cae6*/
            *(this + v42 + 2) = *(this + v55 + 2); /*0x93caf8*/
          }
        }
        else
        {
          *v134 = v52; /*0x93cb02*/
        }
        goto LABEL_39; /*0x93cafc*/
      default:
        goto LABEL_40;
    }
  }
}
