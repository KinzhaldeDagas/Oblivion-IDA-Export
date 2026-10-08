void __thiscall sub_9386C0(__m128 *this, __m128 *a2)
{
  __int8 v3; // al
  __m128 *v4; // edi
  __m128 **v5; // eax
  __m128 *v6; // ecx
  int v7; // edx
  __m128 **v8; // eax
  __m128 *v9; // ecx
  int v10; // edx
  __m128 **v11; // eax
  __m128 *v12; // ecx
  __m128 v13; // xmm3
  __m128 v14; // xmm5
  __m128 v15; // xmm4
  __m128 v16; // xmm0
  __m128 v17; // xmm0
  bool v18; // al
  unsigned __int8 v19; // cl
  int v20; // eax
  double v21; // st7
  int v22; // ecx
  int *v23; // edi
  unsigned int v24; // edx
  int *v25; // edx
  signed int v26; // eax
  signed int v27; // eax
  __m128 *v28; // eax
  int v29; // edx
  double v30; // st7
  int v31; // edi
  int v32; // eax
  _DWORD *v33; // ecx
  __m128 v34; // xmm0
  __int128 v35; // xmm0
  int v36; // eax
  int v37; // ecx
  _BYTE *v38; // edx
  int v39; // edi
  int v40; // eax
  int v41; // edi
  __m128 v42; // xmm3
  __m128 v43; // xmm5
  __m128 v44; // xmm4
  __m128 v45; // xmm0
  __m128 *v46; // eax
  __m128 v47; // xmm0
  int v48; // ecx
  __m128 v49; // xmm1
  int v50; // edx
  __m128 v51; // xmm0
  __m128 v52; // xmm0
  double v53; // st6
  signed int v54; // edi
  __m128 *v55; // edx
  __m128 v56; // xmm0
  __int16 v57; // ax
  unsigned __int8 v58; // al
  _DWORD *v59; // edi
  int v60; // ecx
  int v61; // eax
  __m128 *v62; // ecx
  __m128 v63; // xmm3
  __m128 v64; // xmm4
  __m128 v65; // xmm0
  int v66; // edx
  __m128 *v67; // eax
  __m128 v68; // xmm6
  __m128 v69; // xmm7
  __m128 v70; // xmm1
  int v71; // edx
  __m128 v72; // xmm2
  __m128 v73; // xmm7
  __m128 v74; // xmm2
  __m128 v75; // xmm1
  __m128 v76; // xmm5
  __m128 v77; // xmm2
  __m128 v78; // xmm0
  __m128 v79; // xmm3
  int v80; // edi
  int v81; // ecx
  float *v82; // ecx
  int v83; // edx
  float v84; // edi
  int v85; // eax
  int v86; // ecx
  __m128 v87; // xmm1
  int v88; // [esp+18h] [ebp-128h] BYREF
  int v89; // [esp+1Ch] [ebp-124h]
  int v90; // [esp+20h] [ebp-120h]
  float v91; // [esp+24h] [ebp-11Ch]
  int v92; // [esp+28h] [ebp-118h]
  float v93[4]; // [esp+2Ch] [ebp-114h]
  char v94; // [esp+3Fh] [ebp-101h] BYREF
  __m128 v95; // [esp+40h] [ebp-100h] BYREF
  __m128 v96; // [esp+50h] [ebp-F0h] BYREF
  __m128 v97; // [esp+60h] [ebp-E0h]
  __m128 v98; // [esp+70h] [ebp-D0h]
  __m128 v99[3]; // [esp+80h] [ebp-C0h] BYREF
  float v100; // [esp+B0h] [ebp-90h]
  float v101; // [esp+B4h] [ebp-8Ch]
  int v102; // [esp+B8h] [ebp-88h]
  __m128 v103[3]; // [esp+C0h] [ebp-80h] BYREF
  float v104; // [esp+F0h] [ebp-50h]
  float v105; // [esp+F4h] [ebp-4Ch]
  int v106; // [esp+F8h] [ebp-48h]
  __m128 v107[3]; // [esp+100h] [ebp-40h] BYREF
  int v108; // [esp+138h] [ebp-8h]
  int v109; // [esp+13Ch] [ebp-4h]

  sub_8FDAF0((int)this); /*0x9386d1*/
  v3 = a2[2].m128_i8[1]; /*0x9386de*/
  v92 = **((_DWORD **)this + 4); /*0x9386e3*/
  *(float *)&v88 = 0.0; /*0x9386e7*/
  if ( v3 ) /*0x9386ef*/
  {
    v4 = a2; /*0x9386f5*/
    do /*0x938700*/
    {
      if ( v4->m128_u8[0] > 2u ) /*0x938706*/
      {
        if ( v4->m128_u8[0] > 6u ) /*0x938793*/
        {
          v108 = v4->m128_u8[0]; /*0x93881d*/
          v109 = v4->m128_u8[1]; /*0x938837*/
          if ( !*sub_936810(this, &v94, v107) ) /*0x938846*/
          {
LABEL_11:
            if ( v4->m128_i8[0] <= 6u ) /*0x938871*/
              --a2[2].m128_i8[0]; /*0x938873*/
            (*(void (__thiscall **)(__int32, _DWORD))(*(_DWORD *)this->m128_i32[3] + 0x10))( /*0x938882*/
              this->m128_i32[3],
              v4->m128_u16[1]);
            sub_9363C0(a2, v88); /*0x93888c*/
            continue; /*0x93888c*/
          }
          v11 = *((__m128 ***)this + 4); /*0x938848*/
          v12 = *v11; /*0x93884b*/
          *v11 += 3; /*0x938852*/
          sub_936E10((__m128 **)this, v12, (int)v4, v107); /*0x938860*/
          ++v88; /*0x938865*/
          v4 = (__m128 *)((char *)v4 + 4); /*0x938869*/
        }
        else
        {
          sub_936CB0(this, v103, (unsigned __int8 *)v4); /*0x9387a4*/
          if ( (_mm_movemask_ps(_mm_cmplt_ps(_mm_and_ps(v103[1], (__m128)xmmword_A372D0), *(this + 0xA))) & 7) != 7 ) /*0x9387cf*/
            goto LABEL_11; /*0x9387cf*/
          v8 = *((__m128 ***)this + 4); /*0x9387f0*/
          v9 = *v8; /*0x9387f3*/
          v10 = (int)&(*v8)[3]; /*0x9387f7*/
          v105 = -(v104 * v103[0].m128_f32[v106]) - *((float *)this + v106 + 0x18); /*0x9387fa*/
          *v8 = (__m128 *)v10; /*0x938801*/
          sub_936D70((int)this, v9, (unsigned __int8 *)v4, v103); /*0x93880f*/
          ++v88; /*0x938814*/
          v4 = (__m128 *)((char *)v4 + 4); /*0x938818*/
        }
      }
      else
      {
        sub_936B70(this, v99, (unsigned __int8 *)v4); /*0x938717*/
        if ( (_mm_movemask_ps(_mm_cmplt_ps(_mm_and_ps(v99[0], (__m128)xmmword_A372D0), *(this + 9))) & 7) != 7 ) /*0x938741*/
          goto LABEL_11; /*0x938741*/
        v5 = *((__m128 ***)this + 4); /*0x938760*/
        v6 = *v5; /*0x938763*/
        v7 = (int)&(*v5)[3]; /*0x938767*/
        v101 = v100 * v99[0].m128_f32[v102] - *((float *)this + v102 + 0x18); /*0x93876a*/
        *v5 = (__m128 *)v7; /*0x938771*/
        sub_936C10((__m128 **)this, v6, (unsigned __int8 *)v4, v99); /*0x93877f*/
        ++v88; /*0x938784*/
        v4 = (__m128 *)((char *)v4 + 4); /*0x938788*/
      }
    }
    while ( v88 < a2[2].m128_u8[1] ); /*0x938700*/
  }
  if ( a2[2].m128_i8[1] >= 2u ) /*0x9388a3*/
  {
    if ( !a2[2].m128_i8[3] ) /*0x9388b3*/
    {
      v13 = *(this + 4); /*0x9388ba*/
      v14 = *(this + 3); /*0x9388c6*/
      v15 = _mm_shuffle_ps(v13, v13, 0x44); /*0x9388cd*/
      v16 = _mm_shuffle_ps(*(this + 2), v14, 0x44); /*0x9388d7*/
      a2[4] = _mm_add_ps( /*0x938916*/
                _mm_add_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v16, v15, 0x88), _mm_shuffle_ps(a2[3], a2[3], 0)),
                  _mm_mul_ps(_mm_shuffle_ps(v16, v15, 0xDD), _mm_shuffle_ps(a2[3], a2[3], 0x55))),
                _mm_mul_ps(
                  _mm_shuffle_ps(_mm_shuffle_ps(*(this + 2), v14, 0xEE), _mm_shuffle_ps(v13, v13, 0xEE), 0x88),
                  _mm_shuffle_ps(a2[3], a2[3], 0xAA)));
      a2[2].m128_i8[3] = 1; /*0x93891a*/
    }
    v17 = _mm_mul_ps( /*0x938959*/
            a2[3],
            _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(*(this + 2), _mm_shuffle_ps(a2[4], a2[4], 0)),
                _mm_mul_ps(*(this + 3), _mm_shuffle_ps(a2[4], a2[4], 0x55))),
              _mm_mul_ps(*(this + 4), _mm_shuffle_ps(a2[4], a2[4], 0xAA))));
    v91 = _mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0] /*0x938976*/
        + (float)(_mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0]);
    v18 = v91 < (double)flt_AA1C80; /*0x938989*/
    LOBYTE(v93[0]) = v18; /*0x938993*/
    if ( !v18 && a2[2].m128_i8[2] ) /*0x938999*/
      return; /*0x93899e*/
  }
  else
  {
    a2[2].m128_i8[3] = 0; /*0x9388a5*/
    LOBYTE(v93[0]) = 1; /*0x9388a9*/
  }
  v19 = a2[2].m128_u8[1]; /*0x9389a4*/
  if ( v19 ) /*0x9389a9*/
  {
    v20 = v92; /*0x9389af*/
    v21 = *(float *)(v92 + 0x1C); /*0x9389b3*/
    v22 = v19 - 1; /*0x9389b9*/
    if ( v22 >= 4 ) /*0x9389bd*/
    {
      v23 = (int *)(0x30 * v22 + v92 - 0x14); /*0x9389c9*/
      v24 = ((unsigned int)(v22 - 4) >> 2) + 1; /*0x9389d3*/
      v22 -= 4 * v24; /*0x9389d8*/
      do /*0x938a46*/
      {
        v88 = v23[0xC]; /*0x9389e3*/
        if ( v21 >= *(float *)&v88 ) /*0x9389f0*/
          v21 = *(float *)&v88; /*0x9389f4*/
        v88 = *v23; /*0x9389fa*/
        if ( v21 >= *(float *)&v88 ) /*0x938a07*/
          v21 = *(float *)&v88; /*0x938a0b*/
        v88 = v23[0xFFFFFFF4]; /*0x938a12*/
        if ( v21 >= *(float *)&v88 ) /*0x938a1f*/
          v21 = *(float *)&v88; /*0x938a23*/
        v88 = v23[0xFFFFFFE8]; /*0x938a2a*/
        if ( v21 >= *(float *)&v88 ) /*0x938a37*/
          v21 = *(float *)&v88; /*0x938a3b*/
        v23 += 0xFFFFFFD0; /*0x938a3f*/
        --v24; /*0x938a45*/
      }
      while ( v24 ); /*0x938a46*/
      v20 = v92; /*0x938a48*/
    }
    if ( v22 > 0 ) /*0x938a4e*/
    {
      v25 = (int *)(0x30 * v22 + v20 + 0x1C); /*0x938a56*/
      do /*0x938a7b*/
      {
        v88 = *v25; /*0x938a62*/
        if ( v21 >= *(float *)&v88 ) /*0x938a6f*/
          v21 = *(float *)&v88; /*0x938a73*/
        v25 += 0xFFFFFFF4; /*0x938a77*/
        --v22; /*0x938a7a*/
      }
      while ( v22 ); /*0x938a7b*/
    }
    v91 = v21 - *((float *)this + 0x20) * flt_A43328; /*0x938a90*/
    v95 = _mm_shuffle_ps((__m128)LODWORD(v91), (__m128)LODWORD(v91), 0); /*0x938aa0*/
    v26 = sub_9377C0(this, &v95); /*0x938aa5*/
  }
  else
  {
    v26 = sub_9377C0(this, this + 8); /*0x938ab0*/
  }
  if ( !v26 )
  {
    HIWORD(v88) = 0; /*0x938abd*/
    v27 = sub_938190(this, (int)a2, &v88, v99); /*0x938ad2*/
    v92 = v27; /*0x938ae4*/
    if ( LOBYTE(v93[0]) ) /*0x938ae8*/
    {
      if ( v27 ) /*0x938af0*/
      {
        v28 = a2 + 3; /*0x938af9*/
        if ( v102 > 2 ) /*0x938afc*/
        {
          if ( v102 > 6 ) /*0x938b1a*/
          {
            *v28 = v99[2]; /*0x938b55*/
          }
          else
          {
            v91 = -v100; /*0x938b2d*/
            *v28 = _mm_mul_ps( /*0x938b48*/
                     _mm_shuffle_ps((__m128)LODWORD(v91), (__m128)LODWORD(v91), 0),
                     *(this + (unsigned __int8)v88 - 2));
          }
        }
        else
        {
          v29 = (unsigned __int8)v88; /*0x938b05*/
          v30 = -v100; /*0x938b0d*/
          *v28 = 0; /*0x938b0f*/
          v28->m128_f32[v29] = v30; /*0x938b12*/
        }
        if ( a2[2].m128_i8[3] ) /*0x938b58*/
        {
          hkBasis_TransformVector(&v95, *((__m128 **)this + 5), a2 + 3); /*0x938b6c*/
          v31 = a2[2].m128_u8[1]; /*0x938b76*/
          v32 = (**((_DWORD **)this + 4) - *((_DWORD *)this + 4) - 0x30) / 0x30 - v31; /*0x938b90*/
          v89 = 0; /*0x938b94*/
          if ( v31 ) /*0x938b9c*/
          {
            v90 = 0x30 * v32; /*0x938ba8*/
            do /*0x938c76*/
            {
              v33 = *((_DWORD **)this + 4); /*0x938bb0*/
              v34 = _mm_mul_ps(*(__m128 *)((char *)v33 + v90 + 0x40), v95); /*0x938bbc*/
              v91 = _mm_shuffle_ps(v34, v34, 0xAA).m128_f32[0] /*0x938bdb*/
                  + (float)(_mm_shuffle_ps(v34, v34, 0x55).m128_f32[0] + v34.m128_f32[0]);
              if ( v91 >= (double)flt_AA1C80 ) /*0x938bee*/
              {
                ++v89; /*0x938c66*/
                v90 += 0x30; /*0x938c6a*/
                v41 = v89; /*0x938c6e*/
              }
              else
              {
                v35 = *(_OWORD *)(*v33 - 0x30); /*0x938bf2*/
                v36 = *v33 - 0x30; /*0x938bf6*/
                v37 = (int)v33 + v90 + 0x30; /*0x938bf9*/
                *(_OWORD *)v37 = v35; /*0x938bfd*/
                *(_OWORD *)(v37 + 0x10) = *(_OWORD *)(v36 + 0x10); /*0x938c04*/
                *(_WORD *)(v37 + 0x20) = *(_WORD *)(v36 + 0x20); /*0x938c0e*/
                v38 = (_BYTE *)(v37 + 0x22); /*0x938c12*/
                v39 = v36 - v37; /*0x938c15*/
                v40 = 0xE; /*0x938c17*/
                do /*0x938c27*/
                {
                  *v38 = v38[v39]; /*0x938c23*/
                  ++v38; /*0x938c25*/
                  --v40; /*0x938c26*/
                }
                while ( v40 ); /*0x938c27*/
                if ( a2->m128_i8[4 * v89] <= 6u ) /*0x938c31*/
                  --a2[2].m128_i8[0]; /*0x938c33*/
                v41 = v89; /*0x938c36*/
                (*(void (__thiscall **)(__int32, _DWORD))(*(_DWORD *)this->m128_i32[3] + 0x10))( /*0x938c47*/
                  this->m128_i32[3],
                  a2->m128_u16[2 * v89 + 1]);
                sub_9363C0(a2, v41); /*0x938c4d*/
                **((_DWORD **)this + 4) -= 0x30; /*0x938c55*/
              }
            }
            while ( v41 < a2[2].m128_u8[1] ); /*0x938c76*/
          }
          if ( a2[2].m128_i8[1] >= 2u ) /*0x938c80*/
          {
            v42 = *(this + 4); /*0x938c88*/
            v43 = *(this + 3); /*0x938c94*/
            v44 = _mm_shuffle_ps(v42, v42, 0x44); /*0x938c9b*/
            v45 = _mm_shuffle_ps(*(this + 2), v43, 0x44); /*0x938ca5*/
            a2[4] = _mm_add_ps( /*0x938ce4*/
                      _mm_add_ps(
                        _mm_mul_ps(_mm_shuffle_ps(v45, v44, 0x88), _mm_shuffle_ps(a2[3], a2[3], 0)),
                        _mm_mul_ps(_mm_shuffle_ps(v45, v44, 0xDD), _mm_shuffle_ps(a2[3], a2[3], 0x55))),
                      _mm_mul_ps(
                        _mm_shuffle_ps(_mm_shuffle_ps(*(this + 2), v43, 0xEE), _mm_shuffle_ps(v42, v42, 0xEE), 0x88),
                        _mm_shuffle_ps(a2[3], a2[3], 0xAA)));
            a2[2].m128_i8[3] = 1; /*0x938ce8*/
          }
          else
          {
            a2[2].m128_i8[3] = 0; /*0x938c82*/
          }
        }
      }
    }
    if ( v92 == 2 )
    {
      if ( (unsigned __int8)v88 <= 6u
        && ((unsigned __int8)v88 > 2u
          ? (v46 = *((__m128 **)this + 5), v47 = v99[0])
          : (v46 = *((__m128 **)this + 6), v47 = v99[1]),
            v48 = 0,
            v49 = _mm_add_ps(
                    _mm_add_ps(
                      _mm_mul_ps(*v46, _mm_shuffle_ps(v47, v47, 0)),
                      _mm_mul_ps(v46[1], _mm_shuffle_ps(v47, v47, 0x55))),
                    _mm_add_ps(_mm_mul_ps(v46[2], _mm_shuffle_ps(v47, v47, 0xAA)), v46[3])),
            a2[2].m128_i8[1]) )
      {
        v50 = 0; /*0x938d61*/
        while ( 1 ) /*0x938d63*/
        {
          if ( a2->m128_i8[4 * v48] <= 6u ) /*0x938d67*/
          {
            v51 = _mm_sub_ps(v49, *(__m128 *)(v50 + *((_DWORD *)this + 4) + 0x30)); /*0x938d7e*/
            v52 = _mm_mul_ps(v51, v51); /*0x938d81*/
            v53 = *((float *)this + 0x2C) * *((float *)this + 0x2C) + flt_AA1D50; /*0x938d84*/
            v91 = _mm_shuffle_ps(v52, v52, 0xAA).m128_f32[0] /*0x938da4*/
                + (float)(_mm_shuffle_ps(v52, v52, 0x55).m128_f32[0] + v52.m128_f32[0]);
            if ( v91 <= v53 ) /*0x938db5*/
              break; /*0x938db5*/
          }
          ++v48; /*0x938dbf*/
          v50 += 0x30; /*0x938dc0*/
          if ( v48 >= a2[2].m128_u8[1] ) /*0x938dc5*/
            goto LABEL_73; /*0x938dc5*/
        }
      }
      else
      {
LABEL_73:
        if ( a2[2].m128_i8[1] >= 8u ) /*0x938dcb*/
          return; /*0x938dcb*/
        v54 = sub_936460((unsigned __int8 *)a2, this->m128_i32[0], this->m128_i32[1], &v88); /*0x938de4*/
        if ( v54 >= 0 ) /*0x938de8*/
        {
          v55 = **((__m128 ***)this + 4); /*0x938df1*/
          v89 = (int)v55; /*0x938dfd*/
          if ( v102 > 2 ) /*0x938e05*/
          {
            if ( v102 > 6 ) /*0x938e29*/
              sub_936E10((__m128 **)this, v55, (int)&v88, v99); /*0x938e32*/
            else
              sub_936D70((int)this, v55, (unsigned __int8 *)&v88, v99); /*0x938e2b*/
          }
          else
          {
            sub_936C10((__m128 **)this, v55, (unsigned __int8 *)&v88, v99); /*0x938e13*/
          }
          if ( a2[2].m128_i8[1] > 1u ) /*0x938e3b*/
          {
            v56 = _mm_mul_ps(*(__m128 *)(**((_DWORD **)this + 4) - 0x20), *(__m128 *)(v89 + 0x10)); /*0x938e51*/
            v91 = _mm_shuffle_ps(v56, v56, 0xAA).m128_f32[0] /*0x938e6e*/
                + (float)(_mm_shuffle_ps(v56, v56, 0x55).m128_f32[0] + v56.m128_f32[0]);
            if ( v91 <= (double)*(float *)&SrcStr ) /*0x938e81*/
            {
              sub_9363C0(a2, v54); /*0x938e86*/
              return; /*0x938e91*/
            }
          }
          v57 = (*(int (__thiscall **)(__int32, __int32, __int32, __int32, int))(*(_DWORD *)this->m128_i32[3] + 8))( /*0x938ea9*/
                  this->m128_i32[3],
                  this->m128_i32[0],
                  this->m128_i32[1],
                  this->m128_i32[2],
                  v89);
          a2->m128_i16[2 * v54 + 1] = v57; /*0x938eb0*/
          if ( v57 == (__int16)0xFFFF ) /*0x938eb5*/
          {
            sub_9363C0(a2, v54); /*0x938eba*/
          }
          else
          {
            **((_DWORD **)this + 4) += 0x30; /*0x938ec4*/
            HIWORD(v88) = a2->m128_i16[2 * v54 + 1]; /*0x938ed0*/
            *(_WORD *)(v89 + 0x20) = a2->m128_i16[2 * v54 + 1]; /*0x938eda*/
            if ( (unsigned __int8)v88 <= 6u ) /*0x938ee3*/
              ++a2[2].m128_i8[0]; /*0x938ee5*/
          }
        }
        v58 = a2[2].m128_u8[1]; /*0x938ee8*/
        LODWORD(v93[0]) = v88; /*0x938ef1*/
        if ( v58 ) /*0x938ef5*/
        {
          v59 = *((_DWORD **)this + 4); /*0x938efb*/
          v60 = *v59 - (_DWORD)v59; /*0x938f03*/
          LODWORD(v91) = v58; /*0x938f05*/
          v61 = (v60 - 0x30) / 0x30 - v58; /*0x938f21*/
          v62 = *((__m128 **)this + 5); /*0x938f23*/
          v63 = *v62; /*0x938f26*/
          v64 = v62[2]; /*0x938f2d*/
          v65 = _mm_shuffle_ps(*v62, v62[1], 0x44); /*0x938f34*/
          v66 = 3 * v61; /*0x938f38*/
          v67 = *((__m128 **)this + 6); /*0x938f3b*/
          v68 = *v67; /*0x938f3e*/
          v69 = v67[1]; /*0x938f45*/
          v95 = _mm_shuffle_ps(v67[2], v67[2], 0x44); /*0x938f4d*/
          v70 = _mm_shuffle_ps(v68, v69, 0x44); /*0x938f55*/
          v71 = 4 * v66; /*0x938f59*/
          v72 = *(__m128 *)&v59[v71 + 0x10]; /*0x938f5c*/
          v97 = _mm_shuffle_ps(v72, v72, 0xAA); /*0x938f68*/
          v98 = _mm_shuffle_ps(v72, v72, 0x55); /*0x938f74*/
          v73 = _mm_shuffle_ps(v72, v72, 0); /*0x938f7c*/
          v74 = v67[2]; /*0x938f80*/
          v96 = v73; /*0x938f84*/
          v75 = _mm_add_ps( /*0x938fcd*/
                  _mm_add_ps(
                    _mm_mul_ps(_mm_shuffle_ps(v70, v95, 0x88), v73),
                    _mm_mul_ps(_mm_shuffle_ps(v70, v95, 0xDD), v98)),
                  _mm_mul_ps(
                    _mm_shuffle_ps(_mm_shuffle_ps(v68, v67[1], 0xEE), _mm_shuffle_ps(v74, v74, 0xEE), 0x88),
                    v97));
          v76 = _mm_shuffle_ps(v64, v64, 0x44); /*0x938fd3*/
          v77 = (__m128)xmmword_A372D0; /*0x939008*/
          v78 = _mm_xor_ps( /*0x939012*/
                  _mm_add_ps(
                    _mm_add_ps(
                      _mm_mul_ps(_mm_shuffle_ps(v65, v76, 0x88), v73),
                      _mm_mul_ps(_mm_shuffle_ps(v65, v76, 0xDD), v98)),
                    _mm_mul_ps(
                      _mm_shuffle_ps(_mm_shuffle_ps(v63, v62[1], 0xEE), _mm_shuffle_ps(v64, v64, 0xEE), 0x88),
                      v97)),
                  (__m128)xmmword_A965C0);
          v79 = _mm_and_ps(v78, (__m128)xmmword_A372D0); /*0x939018*/
          v96 = v75; /*0x93901b*/
          v95 = v78; /*0x939020*/
          v98 = v79; /*0x939025*/
          v97 = _mm_and_ps(v75, v77); /*0x939038*/
          if ( v79.m128_f32[0] <= (double)v79.m128_f32[1] ) /*0x939042*/
          {
            v90 = 1; /*0x939054*/
            v80 = 1; /*0x93905c*/
            LODWORD(v93[2]) = 0x20; /*0x939060*/
          }
          else
          {
            v80 = 0; /*0x939044*/
            v90 = 0; /*0x939046*/
            LODWORD(v93[2]) = 0x10; /*0x93904a*/
          }
          if ( v98.m128_f32[2] > (double)v98.m128_f32[v80] ) /*0x939075*/
          {
            v80 = 2; /*0x939077*/
            v90 = 2; /*0x93907c*/
            LODWORD(v93[2]) = 0x40; /*0x939080*/
          }
          if ( v97.m128_f32[0] <= (double)v97.m128_f32[1] ) /*0x939095*/
          {
            v81 = 1; /*0x9390a3*/
            LODWORD(v93[3]) = 0x20; /*0x9390a8*/
          }
          else
          {
            v81 = 0; /*0x939097*/
            LODWORD(v93[3]) = 0x10; /*0x939099*/
          }
          v89 = v81; /*0x9390b4*/
          if ( v97.m128_f32[2] > (double)v97.m128_f32[v81] ) /*0x9390c1*/
          {
            v81 = 2; /*0x9390c3*/
            v89 = 2; /*0x9390c8*/
            LODWORD(v93[3]) = 0x40; /*0x9390cc*/
          }
          if ( v98.m128_f32[v80] >= (double)flt_AA1C84 && v97.m128_f32[v81] >= (double)flt_AA1C84 ) /*0x9390f8*/
          {
            v93[1] = *((float *)this + v80 + 0x30); /*0x93910b*/
            BYTE1(v93[0]) = (LODWORD(v93[1]) >> 0x1C) & 8 | (0x10 * (_mm_movemask_ps(v75) & 7)); /*0x93911d*/
            v93[1] = *((float *)this + v89 + 0x34); /*0x93912f*/
            BYTE1(v92) = (LODWORD(v93[1]) >> 0x1C) & 8 | (0x10 * (_mm_movemask_ps(v78) & 7)); /*0x939148*/
            LOBYTE(v93[0]) = v90; /*0x939150*/
            HIWORD(v92) = 0; /*0x93915d*/
            LOBYTE(v92) = v89 + 4; /*0x939164*/
            v93[1] = 1.0; /*0x939168*/
            v82 = (float *)(v71 * 4 + *((_DWORD *)this + 4) + 0x4C); /*0x939175*/
            v83 = a2[2].m128_u8[1]; /*0x939179*/
            do /*0x939199*/
            {
              if ( *v82 < (double)v93[1] ) /*0x93918b*/
                v93[1] = *v82; /*0x93918d*/
              v82 += 0xC; /*0x939195*/
              --v83; /*0x939198*/
            }
            while ( v83 ); /*0x939199*/
            v84 = v93[1]; /*0x93919b*/
            sub_936EC0(this, (unsigned __int8 *)a2, SLODWORD(v93[0]), LOWORD(v93[3]), v93[1]); /*0x9391ad*/
            sub_937190(this, (unsigned __int8 *)a2, v92, LOWORD(v93[2]), v84); /*0x9391c0*/
            if ( a2[2].m128_i8[0] < 4u ) /*0x9391c9*/
            {
              if ( unk_BA81CC ) /*0x9391d8*/
              {
                v85 = *(_DWORD *)(4 * v90 + 0xAA1C94); /*0x9391f4*/
                v86 = *(_DWORD *)(4 * v90 + 0xAA1C98); /*0x9391fb*/
                v87 = (__m128)xmmword_A965C0; /*0x939202*/
                v90 = *(_DWORD *)(4 * v89 + 0xAA1C94); /*0x93920e*/
                v89 = *(_DWORD *)(4 * v89 + 0xAA1C98); /*0x93921e*/
                LODWORD(v93[0]) = v86; /*0x939232*/
                v92 = v85; /*0x939242*/
                v96 = _mm_xor_ps(v96, v87); /*0x939246*/
                sub_9376E0(this, (unsigned __int8 *)a2, v85, v90, v86, v89, (int)&v95, (int)&v96, v84); /*0x93924b*/
                sub_9376E0(this, (unsigned __int8 *)a2, v92, v89, SLODWORD(v93[0]), v90, (int)&v95, (int)&v96, v84); /*0x939272*/
                sub_9376E0(this, (unsigned __int8 *)a2, SLODWORD(v93[0]), v90, v92, v89, (int)&v95, (int)&v96, v84); /*0x939299*/
                sub_9376E0(this, (unsigned __int8 *)a2, SLODWORD(v93[0]), v89, v92, v90, (int)&v95, (int)&v96, v84); /*0x9392c0*/
              }
              sub_9365A0((unsigned int)a2, SLODWORD(v93[2]), SLODWORD(v93[3])); /*0x9392d2*/
            }
            else
            {
              a2[2].m128_i8[2] = 1; /*0x9391cb*/
            }
          }
        }
      }
    }
  }
}
