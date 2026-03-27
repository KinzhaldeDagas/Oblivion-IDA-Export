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

  sub_8FDAF0((int)this);
  v3 = a2[2].m128_i8[1];
  v92 = **((_DWORD **)this + 4);
  *(float *)&v88 = 0.0;
  if ( v3 )
  {
    v4 = a2;
    do
    {
      if ( v4->m128_u8[0] > 2u )
      {
        if ( v4->m128_u8[0] > 6u )
        {
          v108 = v4->m128_u8[0];
          v109 = v4->m128_u8[1];
          if ( !*sub_936810(this, &v94, v107) )
          {
LABEL_11:
            if ( v4->m128_i8[0] <= 6u )
              --a2[2].m128_i8[0];
            (*(void (__thiscall **)(__int32, _DWORD))(*(_DWORD *)this->m128_i32[3] + 0x10))(
              this->m128_i32[3],
              v4->m128_u16[1]);
            sub_9363C0(a2, v88);
            continue;
          }
          v11 = *((__m128 ***)this + 4);
          v12 = *v11;
          *v11 += 3;
          sub_936E10((__m128 **)this, v12, (int)v4, v107);
          ++v88;
          v4 = (__m128 *)((char *)v4 + 4);
        }
        else
        {
          sub_936CB0(this, v103, (unsigned __int8 *)v4);
          if ( (_mm_movemask_ps(_mm_cmplt_ps(_mm_and_ps(v103[1], (__m128)xmmword_A372D0), *(this + 0xA))) & 7) != 7 )
            goto LABEL_11;
          v8 = *((__m128 ***)this + 4);
          v9 = *v8;
          v10 = (int)&(*v8)[3];
          v105 = -(v104 * v103[0].m128_f32[v106]) - *((float *)this + v106 + 0x18);
          *v8 = (__m128 *)v10;
          sub_936D70((int)this, v9, (unsigned __int8 *)v4, v103);
          ++v88;
          v4 = (__m128 *)((char *)v4 + 4);
        }
      }
      else
      {
        sub_936B70(this, v99, (unsigned __int8 *)v4);
        if ( (_mm_movemask_ps(_mm_cmplt_ps(_mm_and_ps(v99[0], (__m128)xmmword_A372D0), *(this + 9))) & 7) != 7 )
          goto LABEL_11;
        v5 = *((__m128 ***)this + 4);
        v6 = *v5;
        v7 = (int)&(*v5)[3];
        v101 = v100 * v99[0].m128_f32[v102] - *((float *)this + v102 + 0x18);
        *v5 = (__m128 *)v7;
        sub_936C10((__m128 **)this, v6, (unsigned __int8 *)v4, v99);
        ++v88;
        v4 = (__m128 *)((char *)v4 + 4);
      }
    }
    while ( v88 < a2[2].m128_u8[1] );
  }
  if ( a2[2].m128_i8[1] >= 2u )
  {
    if ( !a2[2].m128_i8[3] )
    {
      v13 = *(this + 4);
      v14 = *(this + 3);
      v15 = _mm_shuffle_ps(v13, v13, 0x44);
      v16 = _mm_shuffle_ps(*(this + 2), v14, 0x44);
      a2[4] = _mm_add_ps(
                _mm_add_ps(
                  _mm_mul_ps(_mm_shuffle_ps(v16, v15, 0x88), _mm_shuffle_ps(a2[3], a2[3], 0)),
                  _mm_mul_ps(_mm_shuffle_ps(v16, v15, 0xDD), _mm_shuffle_ps(a2[3], a2[3], 0x55))),
                _mm_mul_ps(
                  _mm_shuffle_ps(_mm_shuffle_ps(*(this + 2), v14, 0xEE), _mm_shuffle_ps(v13, v13, 0xEE), 0x88),
                  _mm_shuffle_ps(a2[3], a2[3], 0xAA)));
      a2[2].m128_i8[3] = 1;
    }
    v17 = _mm_mul_ps(
            a2[3],
            _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(*(this + 2), _mm_shuffle_ps(a2[4], a2[4], 0)),
                _mm_mul_ps(*(this + 3), _mm_shuffle_ps(a2[4], a2[4], 0x55))),
              _mm_mul_ps(*(this + 4), _mm_shuffle_ps(a2[4], a2[4], 0xAA))));
    v91 = _mm_shuffle_ps(v17, v17, 0xAA).m128_f32[0]
        + (float)(_mm_shuffle_ps(v17, v17, 0x55).m128_f32[0] + v17.m128_f32[0]);
    v18 = v91 < (double)flt_AA1C80;
    LOBYTE(v93[0]) = v18;
    if ( !v18 && a2[2].m128_i8[2] )
      return;
  }
  else
  {
    a2[2].m128_i8[3] = 0;
    LOBYTE(v93[0]) = 1;
  }
  v19 = a2[2].m128_u8[1];
  if ( v19 )
  {
    v20 = v92;
    v21 = *(float *)(v92 + 0x1C);
    v22 = v19 - 1;
    if ( v22 >= 4 )
    {
      v23 = (int *)(0x30 * v22 + v92 - 0x14);
      v24 = ((unsigned int)(v22 - 4) >> 2) + 1;
      v22 -= 4 * v24;
      do
      {
        v88 = v23[0xC];
        if ( v21 >= *(float *)&v88 )
          v21 = *(float *)&v88;
        v88 = *v23;
        if ( v21 >= *(float *)&v88 )
          v21 = *(float *)&v88;
        v88 = v23[0xFFFFFFF4];
        if ( v21 >= *(float *)&v88 )
          v21 = *(float *)&v88;
        v88 = v23[0xFFFFFFE8];
        if ( v21 >= *(float *)&v88 )
          v21 = *(float *)&v88;
        v23 += 0xFFFFFFD0;
        --v24;
      }
      while ( v24 );
      v20 = v92;
    }
    if ( v22 > 0 )
    {
      v25 = (int *)(0x30 * v22 + v20 + 0x1C);
      do
      {
        v88 = *v25;
        if ( v21 >= *(float *)&v88 )
          v21 = *(float *)&v88;
        v25 += 0xFFFFFFF4;
        --v22;
      }
      while ( v22 );
    }
    v91 = v21 - *((float *)this + 0x20) * flt_A43328;
    v95 = _mm_shuffle_ps((__m128)LODWORD(v91), (__m128)LODWORD(v91), 0);
    v26 = sub_9377C0(this, &v95);
  }
  else
  {
    v26 = sub_9377C0(this, this + 8);
  }
  if ( !v26 )
  {
    HIWORD(v88) = 0;
    v27 = sub_938190(this, (int)a2, &v88, v99);
    v92 = v27;
    if ( LOBYTE(v93[0]) )
    {
      if ( v27 )
      {
        v28 = a2 + 3;
        if ( v102 > 2 )
        {
          if ( v102 > 6 )
          {
            *v28 = v99[2];
          }
          else
          {
            v91 = -v100;
            *v28 = _mm_mul_ps(
                     _mm_shuffle_ps((__m128)LODWORD(v91), (__m128)LODWORD(v91), 0),
                     *(this + (unsigned __int8)v88 - 2));
          }
        }
        else
        {
          v29 = (unsigned __int8)v88;
          v30 = -v100;
          *v28 = 0;
          v28->m128_f32[v29] = v30;
        }
        if ( a2[2].m128_i8[3] )
        {
          sub_88FE00(&v95, *((__m128 **)this + 5), a2 + 3);
          v31 = a2[2].m128_u8[1];
          v32 = (**((_DWORD **)this + 4) - *((_DWORD *)this + 4) - 0x30) / 0x30 - v31;
          v89 = 0;
          if ( v31 )
          {
            v90 = 0x30 * v32;
            do
            {
              v33 = *((_DWORD **)this + 4);
              v34 = _mm_mul_ps(*(__m128 *)((char *)v33 + v90 + 0x40), v95);
              v91 = _mm_shuffle_ps(v34, v34, 0xAA).m128_f32[0]
                  + (float)(_mm_shuffle_ps(v34, v34, 0x55).m128_f32[0] + v34.m128_f32[0]);
              if ( v91 >= (double)flt_AA1C80 )
              {
                ++v89;
                v90 += 0x30;
                v41 = v89;
              }
              else
              {
                v35 = *(_OWORD *)(*v33 - 0x30);
                v36 = *v33 - 0x30;
                v37 = (int)v33 + v90 + 0x30;
                *(_OWORD *)v37 = v35;
                *(_OWORD *)(v37 + 0x10) = *(_OWORD *)(v36 + 0x10);
                *(_WORD *)(v37 + 0x20) = *(_WORD *)(v36 + 0x20);
                v38 = (_BYTE *)(v37 + 0x22);
                v39 = v36 - v37;
                v40 = 0xE;
                do
                {
                  *v38 = v38[v39];
                  ++v38;
                  --v40;
                }
                while ( v40 );
                if ( a2->m128_i8[4 * v89] <= 6u )
                  --a2[2].m128_i8[0];
                v41 = v89;
                (*(void (__thiscall **)(__int32, _DWORD))(*(_DWORD *)this->m128_i32[3] + 0x10))(
                  this->m128_i32[3],
                  a2->m128_u16[2 * v89 + 1]);
                sub_9363C0(a2, v41);
                **((_DWORD **)this + 4) -= 0x30;
              }
            }
            while ( v41 < a2[2].m128_u8[1] );
          }
          if ( a2[2].m128_i8[1] >= 2u )
          {
            v42 = *(this + 4);
            v43 = *(this + 3);
            v44 = _mm_shuffle_ps(v42, v42, 0x44);
            v45 = _mm_shuffle_ps(*(this + 2), v43, 0x44);
            a2[4] = _mm_add_ps(
                      _mm_add_ps(
                        _mm_mul_ps(_mm_shuffle_ps(v45, v44, 0x88), _mm_shuffle_ps(a2[3], a2[3], 0)),
                        _mm_mul_ps(_mm_shuffle_ps(v45, v44, 0xDD), _mm_shuffle_ps(a2[3], a2[3], 0x55))),
                      _mm_mul_ps(
                        _mm_shuffle_ps(_mm_shuffle_ps(*(this + 2), v43, 0xEE), _mm_shuffle_ps(v42, v42, 0xEE), 0x88),
                        _mm_shuffle_ps(a2[3], a2[3], 0xAA)));
            a2[2].m128_i8[3] = 1;
          }
          else
          {
            a2[2].m128_i8[3] = 0;
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
        v50 = 0;
        while ( 1 )
        {
          if ( a2->m128_i8[4 * v48] <= 6u )
          {
            v51 = _mm_sub_ps(v49, *(__m128 *)(v50 + *((_DWORD *)this + 4) + 0x30));
            v52 = _mm_mul_ps(v51, v51);
            v53 = *((float *)this + 0x2C) * *((float *)this + 0x2C) + flt_AA1D50;
            v91 = _mm_shuffle_ps(v52, v52, 0xAA).m128_f32[0]
                + (float)(_mm_shuffle_ps(v52, v52, 0x55).m128_f32[0] + v52.m128_f32[0]);
            if ( v91 <= v53 )
              break;
          }
          ++v48;
          v50 += 0x30;
          if ( v48 >= a2[2].m128_u8[1] )
            goto LABEL_73;
        }
      }
      else
      {
LABEL_73:
        if ( a2[2].m128_i8[1] >= 8u )
          return;
        v54 = sub_936460((unsigned __int8 *)a2, this->m128_i32[0], this->m128_i32[1], &v88);
        if ( v54 >= 0 )
        {
          v55 = **((__m128 ***)this + 4);
          v89 = (int)v55;
          if ( v102 > 2 )
          {
            if ( v102 > 6 )
              sub_936E10((__m128 **)this, v55, (int)&v88, v99);
            else
              sub_936D70((int)this, v55, (unsigned __int8 *)&v88, v99);
          }
          else
          {
            sub_936C10((__m128 **)this, v55, (unsigned __int8 *)&v88, v99);
          }
          if ( a2[2].m128_i8[1] > 1u )
          {
            v56 = _mm_mul_ps(*(__m128 *)(**((_DWORD **)this + 4) - 0x20), *(__m128 *)(v89 + 0x10));
            v91 = _mm_shuffle_ps(v56, v56, 0xAA).m128_f32[0]
                + (float)(_mm_shuffle_ps(v56, v56, 0x55).m128_f32[0] + v56.m128_f32[0]);
            if ( v91 <= (double)*(float *)&SrcStr )
            {
              sub_9363C0(a2, v54);
              return;
            }
          }
          v57 = (*(int (__thiscall **)(__int32, __int32, __int32, __int32, int))(*(_DWORD *)this->m128_i32[3] + 8))(
                  this->m128_i32[3],
                  this->m128_i32[0],
                  this->m128_i32[1],
                  this->m128_i32[2],
                  v89);
          a2->m128_i16[2 * v54 + 1] = v57;
          if ( v57 == (__int16)0xFFFF )
          {
            sub_9363C0(a2, v54);
          }
          else
          {
            **((_DWORD **)this + 4) += 0x30;
            HIWORD(v88) = a2->m128_i16[2 * v54 + 1];
            *(_WORD *)(v89 + 0x20) = a2->m128_i16[2 * v54 + 1];
            if ( (unsigned __int8)v88 <= 6u )
              ++a2[2].m128_i8[0];
          }
        }
        v58 = a2[2].m128_u8[1];
        LODWORD(v93[0]) = v88;
        if ( v58 )
        {
          v59 = *((_DWORD **)this + 4);
          v60 = *v59 - (_DWORD)v59;
          LODWORD(v91) = v58;
          v61 = (v60 - 0x30) / 0x30 - v58;
          v62 = *((__m128 **)this + 5);
          v63 = *v62;
          v64 = v62[2];
          v65 = _mm_shuffle_ps(*v62, v62[1], 0x44);
          v66 = 3 * v61;
          v67 = *((__m128 **)this + 6);
          v68 = *v67;
          v69 = v67[1];
          v95 = _mm_shuffle_ps(v67[2], v67[2], 0x44);
          v70 = _mm_shuffle_ps(v68, v69, 0x44);
          v71 = 4 * v66;
          v72 = *(__m128 *)&v59[v71 + 0x10];
          v97 = _mm_shuffle_ps(v72, v72, 0xAA);
          v98 = _mm_shuffle_ps(v72, v72, 0x55);
          v73 = _mm_shuffle_ps(v72, v72, 0);
          v74 = v67[2];
          v96 = v73;
          v75 = _mm_add_ps(
                  _mm_add_ps(
                    _mm_mul_ps(_mm_shuffle_ps(v70, v95, 0x88), v73),
                    _mm_mul_ps(_mm_shuffle_ps(v70, v95, 0xDD), v98)),
                  _mm_mul_ps(
                    _mm_shuffle_ps(_mm_shuffle_ps(v68, v67[1], 0xEE), _mm_shuffle_ps(v74, v74, 0xEE), 0x88),
                    v97));
          v76 = _mm_shuffle_ps(v64, v64, 0x44);
          v77 = (__m128)xmmword_A372D0;
          v78 = _mm_xor_ps(
                  _mm_add_ps(
                    _mm_add_ps(
                      _mm_mul_ps(_mm_shuffle_ps(v65, v76, 0x88), v73),
                      _mm_mul_ps(_mm_shuffle_ps(v65, v76, 0xDD), v98)),
                    _mm_mul_ps(
                      _mm_shuffle_ps(_mm_shuffle_ps(v63, v62[1], 0xEE), _mm_shuffle_ps(v64, v64, 0xEE), 0x88),
                      v97)),
                  (__m128)xmmword_A965C0);
          v79 = _mm_and_ps(v78, (__m128)xmmword_A372D0);
          v96 = v75;
          v95 = v78;
          v98 = v79;
          v97 = _mm_and_ps(v75, v77);
          if ( v79.m128_f32[0] <= (double)v79.m128_f32[1] )
          {
            v90 = 1;
            v80 = 1;
            LODWORD(v93[2]) = 0x20;
          }
          else
          {
            v80 = 0;
            v90 = 0;
            LODWORD(v93[2]) = 0x10;
          }
          if ( v98.m128_f32[2] > (double)v98.m128_f32[v80] )
          {
            v80 = 2;
            v90 = 2;
            LODWORD(v93[2]) = 0x40;
          }
          if ( v97.m128_f32[0] <= (double)v97.m128_f32[1] )
          {
            v81 = 1;
            LODWORD(v93[3]) = 0x20;
          }
          else
          {
            v81 = 0;
            LODWORD(v93[3]) = 0x10;
          }
          v89 = v81;
          if ( v97.m128_f32[2] > (double)v97.m128_f32[v81] )
          {
            v81 = 2;
            v89 = 2;
            LODWORD(v93[3]) = 0x40;
          }
          if ( v98.m128_f32[v80] >= (double)flt_AA1C84 && v97.m128_f32[v81] >= (double)flt_AA1C84 )
          {
            v93[1] = *((float *)this + v80 + 0x30);
            BYTE1(v93[0]) = (LODWORD(v93[1]) >> 0x1C) & 8 | (0x10 * (_mm_movemask_ps(v75) & 7));
            v93[1] = *((float *)this + v89 + 0x34);
            BYTE1(v92) = (LODWORD(v93[1]) >> 0x1C) & 8 | (0x10 * (_mm_movemask_ps(v78) & 7));
            LOBYTE(v93[0]) = v90;
            HIWORD(v92) = 0;
            LOBYTE(v92) = v89 + 4;
            v93[1] = 1.0;
            v82 = (float *)(v71 * 4 + *((_DWORD *)this + 4) + 0x4C);
            v83 = a2[2].m128_u8[1];
            do
            {
              if ( *v82 < (double)v93[1] )
                v93[1] = *v82;
              v82 += 0xC;
              --v83;
            }
            while ( v83 );
            v84 = v93[1];
            sub_936EC0(this, (unsigned __int8 *)a2, SLODWORD(v93[0]), LOWORD(v93[3]), v93[1]);
            sub_937190(this, (unsigned __int8 *)a2, v92, LOWORD(v93[2]), v84);
            if ( a2[2].m128_i8[0] < 4u )
            {
              if ( byte_BA81CC )
              {
                v85 = *(_DWORD *)(4 * v90 + 0xAA1C94);
                v86 = *(_DWORD *)(4 * v90 + 0xAA1C98);
                v87 = (__m128)xmmword_A965C0;
                v90 = *(_DWORD *)(4 * v89 + 0xAA1C94);
                v89 = *(_DWORD *)(4 * v89 + 0xAA1C98);
                LODWORD(v93[0]) = v86;
                v92 = v85;
                v96 = _mm_xor_ps(v96, v87);
                sub_9376E0(this, (unsigned __int8 *)a2, v85, v90, v86, v89, (int)&v95, (int)&v96, v84);
                sub_9376E0(this, (unsigned __int8 *)a2, v92, v89, SLODWORD(v93[0]), v90, (int)&v95, (int)&v96, v84);
                sub_9376E0(this, (unsigned __int8 *)a2, SLODWORD(v93[0]), v90, v92, v89, (int)&v95, (int)&v96, v84);
                sub_9376E0(this, (unsigned __int8 *)a2, SLODWORD(v93[0]), v89, v92, v90, (int)&v95, (int)&v96, v84);
              }
              sub_9365A0((unsigned int)a2, SLODWORD(v93[2]), SLODWORD(v93[3]));
            }
            else
            {
              a2[2].m128_i8[2] = 1;
            }
          }
        }
      }
    }
  }
}
