int __thiscall sub_896000(_DWORD *this, int arg0)
{
  _DWORD *v3; // ebx
  int v4; // eax
  int v5; // eax
  _DWORD *v6; // ecx
  unsigned __int64 v7; // rax
  NiTransform *v8; // eax
  int v9; // ecx
  unsigned int v10; // edx
  unsigned int v11; // eax
  double v12; // rt1
  __m128 v13; // xmm0
  double v14; // st5
  __m128 v15; // xmm2
  double v16; // st6
  __m128 v17; // xmm3
  __m128 v18; // xmm1
  __m128 v19; // xmm4
  __m128 v20; // xmm2
  __m128 v21; // xmm1
  __m128 v22; // xmm0
  __m128 v23; // xmm0
  __m128 v24; // xmm1
  _DWORD *v25; // edi
  int v26; // ebx
  __m128 v27; // xmm2
  double v28; // st5
  __m128 v29; // xmm4
  double v30; // st6
  __m128 v31; // xmm6
  __m128 v32; // xmm7
  __m128 v33; // xmm0
  __m128 v34; // xmm3
  __m128 v35; // xmm5
  __m128 v36; // xmm0
  char *v37; // edi
  _OWORD *v38; // eax
  _DWORD *v39; // ecx
  unsigned __int64 v40; // rax
  int v41; // eax
  _DWORD *v42; // ecx
  unsigned __int64 v43; // rax
  _OWORD *v44; // ecx
  char *v45; // ecx
  _OWORD *v46; // eax
  void *v47; // edi
  bool v48; // cl
  int v49; // edx
  bool v50; // cl
  __m128 v51; // xmm1
  __m128 v52; // xmm0
  __m128 v53; // xmm0
  __m128 v54; // xmm0
  _DWORD *v55; // ecx
  unsigned __int64 v56; // rax
  int v57; // eax
  _DWORD *v58; // ecx
  unsigned __int64 v59; // rax
  _OWORD *v60; // ecx
  int v61; // edi
  _DWORD *v62; // eax
  int v63; // edx
  int v64; // ebx
  _OWORD *v65; // ecx
  float *v66; // edi
  __int128 v67; // xmm0
  int v68; // edx
  LPCRITICAL_SECTION *v69; // ecx
  int v70; // eax
  int v71; // edi
  _DWORD *v72; // ebx
  int v73; // eax
  __int128 v74; // xmm0
  int v75; // eax
  int v76; // ecx
  int v77; // edi
  int v78; // ecx
  int v79; // eax
  int v80; // ecx
  bool v81; // cc
  int v82; // eax
  double v83; // st7
  int v84; // eax
  _DWORD *v85; // ecx
  int v86; // eax
  int v87; // eax
  int v88; // eax
  _DWORD *v89; // ecx
  int v90; // ebx
  int v91; // edi
  int v92; // eax
  int v93; // eax
  int *v94; // eax
  NiNode *v95; // eax
  NiProperty *NiPropertyByID; // eax
  __int64 v97; // kr00_8
  void **v98; // ecx
  _DWORD *v99; // ecx
  unsigned __int64 v100; // rax
  float v102; // [esp+10h] [ebp-144h]
  char v103; // [esp+26h] [ebp-12Eh]
  char v104; // [esp+26h] [ebp-12Eh]
  bool v105; // [esp+27h] [ebp-12Dh]
  bool v106; // [esp+27h] [ebp-12Dh]
  float v107; // [esp+28h] [ebp-12Ch]
  float v108; // [esp+28h] [ebp-12Ch]
  float v109; // [esp+28h] [ebp-12Ch]
  float v110; // [esp+28h] [ebp-12Ch]
  float v111; // [esp+28h] [ebp-12Ch]
  float v112; // [esp+28h] [ebp-12Ch]
  float v113; // [esp+28h] [ebp-12Ch]
  float v114; // [esp+28h] [ebp-12Ch]
  float v115; // [esp+28h] [ebp-12Ch]
  int v116; // [esp+28h] [ebp-12Ch]
  float v117; // [esp+2Ch] [ebp-128h]
  float v118; // [esp+2Ch] [ebp-128h]
  int v119; // [esp+2Ch] [ebp-128h]
  float v120; // [esp+2Ch] [ebp-128h]
  int v121; // [esp+2Ch] [ebp-128h]
  int v122; // [esp+30h] [ebp-124h]
  int v123; // [esp+30h] [ebp-124h]
  bool v124; // [esp+37h] [ebp-11Dh]
  char *v125; // [esp+38h] [ebp-11Ch]
  float v126; // [esp+3Ch] [ebp-118h]
  bool v127; // [esp+43h] [ebp-111h]
  _DWORD *v128; // [esp+44h] [ebp-110h]
  float v129; // [esp+44h] [ebp-110h]
  int v130; // [esp+48h] [ebp-10Ch]
  float v131; // [esp+4Ch] [ebp-108h]
  int v132; // [esp+50h] [ebp-104h]
  __m128 v133; // [esp+54h] [ebp-100h]
  __int128 v134; // [esp+64h] [ebp-F0h] BYREF
  __int128 a2; // [esp+74h] [ebp-E0h] BYREF
  __m128 v136; // [esp+84h] [ebp-D0h] BYREF
  __m128 v137; // [esp+94h] [ebp-C0h] BYREF
  __m128 v138; // [esp+A4h] [ebp-B0h] BYREF
  __m128 v139; // [esp+B4h] [ebp-A0h] BYREF
  __m128 v140; // [esp+C4h] [ebp-90h]
  __m128 v141[4]; // [esp+D4h] [ebp-80h] BYREF
  NiTransform v142; // [esp+114h] [ebp-40h] BYREF

  *(this + 0x7D) &= 0xFFFFFF1F;
  v132 = 0;
  if ( 0.0 == *(float *)arg0 || !(*(int (__thiscall **)(_DWORD *))(*this + 0x58))(this) )
    return 0;
  v131 = *(float *)arg0;
  v3 = (_DWORD *)(arg0 + 0x10);
  v105 = sub_8904E0((float *)(arg0 + 0x10), &Vector3_InitValue_, flt_A34BA0);
  v4 = *(this + 0x7D);
  v124 = (v4 & 0x80000) != 0;
  v103 = 0;
  v127 = (v4 & 0x100000) != 0;
  if ( (v4 & 0x100000) != 0
    || (*(this + 0x7D) & 0x80000) != 0
    || (v4 & 4) == 0 && flt_B2E784 > sub_47DA40((float *)(arg0 + 0x10)) )
  {
    v103 = 1;
  }
  if ( !v105 )
  {
    if ( *(this + 0xD8) )
    {
      *((_OWORD *)this + 0x35) = 0;
      *(this + 0xD8) = 0;
    }
    *((float *)this + 0xC1) = 0.0;
    *((float *)this + 0xC2) = 0.0;
  }
  v133 = _mm_shuffle_ps((__m128)LODWORD(flt_A37080), (__m128)LODWORD(flt_A37080), 0);
  v106 = (_mm_movemask_ps(
            _mm_cmplt_ps(
              v133,
              _mm_and_ps(_mm_sub_ps(*((__m128 *)this + 0x2F), (__m128)stru_BA7A40), (__m128)xmmword_A372D0)))
        & 7) == 0
      && v105;
  if ( v106 )
    *(this + 0x7D) &= ~8u;
  else
    *(this + 0x7D) |= 8u;
  v5 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v6 = *(_DWORD **)(v5 + 0x1A4);
  v130 = v5;
  if ( (unsigned int)v6 < *(_DWORD *)(v5 + 0x1A8) )
  {
    *v6 = "TtCharacter movement";
    v7 = __rdtsc();
    v6[1] = v7;
    *(_DWORD *)(v130 + 0x1A4) = v6 + 3;
  }
  if ( (*(int (__thiscall **)(_DWORD *))(*this + 0x58))(this) )
  {
    v9 = 1 - Double_To_SInt32(*(float *)arg0 / dbl_A96910);
    v122 = v9;
    if ( v106 || v9 <= 1 || v103 )
    {
      v122 = 1;
    }
    else
    {
      if ( v9 > 2 )
        v122 = 2;
      v117 = 1.0 / (double)v122;
      NiPoint3::MutliplyByValue((NiPoint3 *)(arg0 + 0x10), v117);
      *(float *)arg0 = v117 * *(float *)arg0;
    }
    sub_894C70(this, v131);
    *(this + 0x85) = 0x1F;
    *(this + 0x86) = 0;
    v128 = (_DWORD *)*(this + 0xD9);
    if ( (*(_BYTE *)(this + 0x7D) & 1) != 0 )
      *(float *)(arg0 + 0xC) = sub_8908E0((float *)this, *(float *)(arg0 + 0xC), *(float *)arg0);
    v102 = -*(float *)(arg0 + 0xC);
    sub_8B1B00(&v137, (int)(this + 0xAC), v102);
    *((float *)this + 0xB6) = *(float *)arg0;
    *((float *)this + 0xB7) = 1.0 / *(float *)arg0;
    v10 = *(_DWORD *)(arg0 + 0x14);
    v11 = *(_DWORD *)(arg0 + 0x18);
    LODWORD(a2) = *v3;
    *(_QWORD *)((char *)&a2 + 4) = __PAIR64__(v11, v10);
    if ( sub_88D370(this + 0x78) != 5 && (*(this + 0x7D) & 0x800) == 0 )
      *((float *)&a2 + 2) = 0.0;
    v107 = *((float *)this + 0xB7);
    *(float *)&a2 = *(float *)&a2 * v107;
    *((float *)&a2 + 1) = v107 * *((float *)&a2 + 1);
    *((float *)&a2 + 2) = v107 * *((float *)&a2 + 2);
    v12 = hkFactor;
    *((float *)this + 0xA4) = *(float *)&a2 * v12;
    *((float *)this + 0xA5) = *((float *)&a2 + 1) * v12;
    *((float *)this + 0xA6) = v12 * *((float *)&a2 + 2);
    if ( sub_8903D0(this) )
    {
      if ( 0.0 != *(float *)(arg0 + 4) )
      {
        *(float *)&v134 = flt_A30634;
        *((float *)&v134 + 1) = 0.0;
        *((float *)&v134 + 2) = 0.0;
        *((float *)&v134 + 3) = 0.0;
        sub_8B1B00(&v136, (int)&v134, *(float *)(arg0 + 4));
        v13 = *((__m128 *)this + 0x29);
        v14 = dbl_A3D0C0;
        v15 = 0;
        v16 = v136.m128_f32[3] * v14;
        v108 = v136.m128_f32[3] * v16 - dbl_A2F928;
        v15.m128_f32[0] = v108;
        v136.m128_f32[3] = 0.0;
        v17 = v136;
        v18 = _mm_mul_ps(v136, v13);
        v136.m128_f32[0] = _mm_shuffle_ps(v18, v18, 0xAA).m128_f32[0]
                         + (float)(_mm_shuffle_ps(v18, v18, 0x55).m128_f32[0] + v18.m128_f32[0]);
        v19 = 0;
        v20 = _mm_mul_ps(_mm_shuffle_ps(v15, v15, 0), v13);
        v109 = v14 * v136.m128_f32[0];
        v19.m128_f32[0] = v109;
        v110 = v16;
        *((__m128 *)this + 0x29) = v20;
        v21 = 0;
        v21.m128_f32[0] = v110;
        *((__m128 *)this + 0x29) = _mm_add_ps(
                                     _mm_mul_ps(
                                       _mm_sub_ps(
                                         _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0xC9), _mm_shuffle_ps(v13, v13, 0xD2)),
                                         _mm_mul_ps(_mm_shuffle_ps(v17, v17, 0xD2), _mm_shuffle_ps(v13, v13, 0xC9))),
                                       _mm_shuffle_ps(v21, v21, 0)),
                                     _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v19, v19, 0), v17), v20));
      }
    }
    v22 = v137;
    *((float *)this + 0xD2) = *((float *)this + 0xC5);
    v138 = v22;
    sub_4D6830(&v138);
    v23 = *((__m128 *)this + 0x2B);
    v136.m128_f32[0] = 0.0;
    v24 = (__m128)xmmword_A965C0;
    v25 = v128;
    v136.m128_f32[1] = flt_A30634;
    v136.m128_f32[2] = 0.0;
    v136.m128_f32[3] = 0.0;
    v139 = _mm_xor_ps(v23, v24);
    sub_6848D0(v128, v141);
    sub_8B1DD0(v141[0].m128_f32, v138.m128_f32);
    if ( 0.0 != *((float *)this + 0xCB) )
    {
      v111 = cos(*((float *)this + 0xCB));
      v129 = v111;
      v112 = sin(*((float *)this + 0xCB));
      *(float *)&v134 = 1.0;
      *((float *)&v134 + 1) = 0.0;
      *((float *)&v134 + 2) = 0.0;
      *((float *)&v134 + 3) = 0.0;
      *(float *)&a2 = 0.0;
      *((float *)&a2 + 1) = v129;
      *(__int128 *)&v142.rot.data[0][0] = v134;
      *((float *)&a2 + 2) = -v112;
      *((float *)&a2 + 3) = 0.0;
      v140.m128_f32[0] = 0.0;
      v140.m128_f32[3] = 0.0;
      *(__int128 *)&v142.rot.data[1][1] = a2;
      v140.m128_f32[1] = v112;
      v140.m128_f32[2] = v129;
      *(__m128 *)&v142.rot.data[2][2] = v140;
      sub_8D2C20(v141, (__m128 *)&v142);
    }
    if ( v25 )
    {
      v26 = v25[2];
      if ( v26 )
      {
        sub_89F570(v25);
        sub_8ABA40(v26, v141);
        sub_89F570(v25);
      }
    }
    v27 = v136;
    v28 = dbl_A3D0C0;
    v29 = 0;
    v30 = v137.m128_f32[3] * v28;
    v31 = _mm_shuffle_ps(v136, v136, 0xC9);
    v32 = _mm_shuffle_ps(v136, v136, 0xD2);
    v113 = v137.m128_f32[3] * v30 - dbl_A2F928;
    v29.m128_f32[0] = v113;
    v140 = v137;
    v140.m128_f32[3] = 0.0;
    v33 = _mm_mul_ps(v140, v136);
    v136.m128_f32[0] = _mm_shuffle_ps(v33, v33, 0xAA).m128_f32[0]
                     + (float)(_mm_shuffle_ps(v33, v33, 0x55).m128_f32[0] + v33.m128_f32[0]);
    v34 = 0;
    v35 = 0;
    v114 = v28 * v136.m128_f32[0];
    v35.m128_f32[0] = v114;
    v115 = v30;
    v34.m128_f32[0] = v115;
    v36 = _mm_add_ps(
            _mm_mul_ps(
              _mm_sub_ps(
                _mm_mul_ps(_mm_shuffle_ps(v140, v140, 0xC9), v32),
                _mm_mul_ps(v31, _mm_shuffle_ps(v140, v140, 0xD2))),
              _mm_shuffle_ps(v34, v34, 0)),
            _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v35, v35, 0), v140), _mm_mul_ps(_mm_shuffle_ps(v29, v29, 0), v27)));
    if ( !v106
      || (_mm_movemask_ps(_mm_cmplt_ps(v133, _mm_and_ps(_mm_sub_ps(v36, *((__m128 *)this + 0x2C)), (__m128)xmmword_A372D0)))
        & 7) != 0 )
    {
      *((float *)this + 0xC3) = flt_B2E780;
    }
    v37 = (char *)*(this + 2);
    *((__m128 *)this + 0x2C) = v36;
    v125 = v37;
    v104 = 1;
    if ( v124 )
    {
      if ( v37 )
        v38 = sub_8AC0A0(v37);
      else
        v38 = &stru_BA7A40;
      *((_OWORD *)this + 0x2E) = *v38;
      *((hkVector4 *)this + 0x28) = stru_BA7A40;
      v39 = *(_DWORD **)(v130 + 0x1A4);
      if ( (unsigned int)v39 < *(_DWORD *)(v130 + 0x1A8) )
      {
        *v39 = "Ttupdate character state";
        v40 = __rdtsc();
        v39[1] = v40;
        *(_DWORD *)(v130 + 0x1A4) = v39 + 3;
      }
      v41 = sub_8BA170((_DWORD *)*(this + 0x7A), *(this + 0x7B));
      (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v41 + 0x18))(v41, this);
      v42 = *(_DWORD **)(v130 + 0x1A4);
      if ( (unsigned int)v42 < *(_DWORD *)(v130 + 0x1A8) )
      {
        *v42 = "Et";
        v43 = __rdtsc();
        v42[1] = v43;
        *(_DWORD *)(v130 + 0x1A4) = v42 + 3;
      }
      v44 = (_OWORD *)*(this + 2);
      if ( v44 )
        sub_8AC0B0(v44, (hkVector4 *)this + 0x2E);
      sub_894E80((__m128 *)this, *((float *)this + 0xB6));
    }
    else
    {
      if ( v122 )
      {
        do
        {
          --v122;
          dword_BA7A5C = 0;
          v45 = (char *)*(this + 2);
          if ( v45 )
            v46 = sub_8AC0A0(v45);
          else
            v46 = &stru_BA7A40;
          *((_OWORD *)this + 0x2E) = *v46;
          if ( v106 && sub_88D370(this + 0x78) != 2 )
            *((float *)this + 0xBA) = 0.0;
          *(this + 0x7D) &= 0xFFFFF9FF;
          *(this + 0x7D) |= 0x10000u;
          sub_891780((int)this);
          v47 = (void *)*(this + 2);
          if ( v47 )
          {
            sub_89F570(this);
            sub_8AE890(v47, &v139, (__m128 *)this + 0x26);
            sub_89F570(this);
          }
          *(this + 0x7D) &= ~0x10000u;
          v48 = *(this + 0x98) == 2 && !*((_BYTE *)this + 0x250);
          v49 = *(this + 0x7D);
          if ( (v49 & 0x2000) != 0 )
          {
            if ( (v48 || (v49 & 0x200) != 0) && *((float *)this + 0xBA) > 0.0 )
            {
              v51 = *((__m128 *)this + 0x2E);
              v52 = _mm_mul_ps(v51, v51);
              v136.m128_i32[0] = fsqrt(
                                   _mm_shuffle_ps(v52, v52, 0xAA).m128_f32[0]
                                 + (float)(_mm_shuffle_ps(v52, v52, 0x55).m128_f32[0] + v52.m128_f32[0]));
              if ( v136.m128_f32[0] > 0.0
                && (v53 = 0, v118 = 1.0 / v136.m128_f32[0], v53.m128_f32[0] = v118, v48)
                && (v49 & 0x200) != 0
                && *((float *)this + 0x84) <= (double)*((float *)this + 0x8E)
                && (v54 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v53, v53, 0), v51), *((__m128 *)this + 0x23)),
                    v136.m128_f32[0] = _mm_shuffle_ps(v54, v54, 0xAA).m128_f32[0]
                                     + (float)(_mm_shuffle_ps(v54, v54, 0x55).m128_f32[0] + v54.m128_f32[0]),
                    v136.m128_f32[0] <= dbl_A68610) )
              {
                *(this + 0x7D) &= ~0x2000u;
                v50 = 0;
              }
              else
              {
                v50 = 0;
              }
            }
            else
            {
              *(this + 0x7D) &= ~0x2000u;
              v50 = 0;
            }
          }
          else
          {
            v50 = (*(this + 0x7D) & 0x200) != 0 || v48;
          }
          if ( v50 )
            *(this + 0x7D) |= 0x100u;
          else
            *(this + 0x7D) &= ~0x100u;
          v55 = *(_DWORD **)(v130 + 0x1A4);
          if ( (unsigned int)v55 < *(_DWORD *)(v130 + 0x1A8) )
          {
            *v55 = "Ttupdate character state";
            v56 = __rdtsc();
            v55[1] = v56;
            *(_DWORD *)(v130 + 0x1A4) = v55 + 3;
          }
          v57 = sub_8BA170((_DWORD *)*(this + 0x7A), *(this + 0x7B));
          (*(void (__thiscall **)(int, _DWORD *))(*(_DWORD *)v57 + 0x18))(v57, this);
          v58 = *(_DWORD **)(v130 + 0x1A4);
          if ( (unsigned int)v58 < *(_DWORD *)(v130 + 0x1A8) )
          {
            *v58 = "Et";
            v59 = __rdtsc();
            v58[1] = v59;
            *(_DWORD *)(v130 + 0x1A4) = v58 + 3;
          }
          v60 = (_OWORD *)*(this + 2);
          if ( v60 )
            sub_8AC0B0(v60, (hkVector4 *)this + 0x2E);
          v104 = 1;
          if ( !v106 || sub_88D370(this + 0x78) == 2 || *(_DWORD *)(sub_8ABDB0(v125) + 4) > *(this + 0xF0) )
          {
LABEL_102:
            dword_B2EFB8 = v127 ? 1 : 4;
            sub_8902B0((__m128 **)this, (int)(this + 0xB4));
            dword_B2EFB8 = 4;
          }
          else
          {
            v61 = 0;
            v104 = 0;
            v119 = 0;
            while ( v119 < *(_DWORD *)(sub_8ABDB0(v125) + 4) )
            {
              if ( _mm_movemask_ps(
                     _mm_cmplt_ps(
                       v133,
                       _mm_and_ps(
                         _mm_sub_ps(*(__m128 *)(*(this + 0xEF) + v61), *(__m128 *)(*(_DWORD *)sub_8ABDB0(v125) + v61)),
                         (__m128)xmmword_A372D0)))
                || (v62 = (_DWORD *)sub_8ABDB0(v125),
                    v63 = *(this + 0xEF),
                    _mm_movemask_ps(
                      _mm_cmplt_ps(
                        v133,
                        _mm_and_ps(
                          _mm_sub_ps(*(__m128 *)(v63 + v61 + 0x10), *(__m128 *)(v61 + *v62 + 0x10)),
                          (__m128)xmmword_A372D0))))
                || *(_DWORD *)(v63 + v61 + 0x20) != *(_DWORD *)(*(_DWORD *)sub_8ABDB0(v125) + v61 + 0x20)
                || (v64 = v61 + *(this + 0xEF),
                    *(_DWORD *)(v64 + 0x28) != *(_DWORD *)(v61 + *(_DWORD *)sub_8ABDB0(v125) + 0x28)) )
              {
                v104 = 1;
              }
              ++v119;
              v61 += 0x30;
              if ( v104 )
                goto LABEL_102;
            }
            v65 = (_OWORD *)*(this + 2);
            *((hkVector4 *)this + 0x2E) = stru_BA7A40;
            if ( v65 )
              sub_8AC0B0(v65, (hkVector4 *)this + 0x2E);
          }
          if ( dword_BA7A5C )
          {
            if ( (*(this + 0x7D) & 0x2000) == 0 )
            {
              sub_89F570(this);
              v66 = (float *)sub_47DE20(this);
              v67 = *(_OWORD *)sub_8AC070(v66);
              v68 = dword_BA7A5C;
              v134 = v67;
              v120 = *(float *)(*(_DWORD *)(v68 + 0x50) + 0xD8) * *((float *)this + 0xB6);
              *((float *)&v134 + 2) = flt_BA7A58 + *((float *)this + 0xD2) + v120;
              sub_8A7930((LPCRITICAL_SECTION *)dword_BA7DA0, (int)&v134, flt_A46B10, 0xFFFF0000, 0);
              sub_8AC080(v66, (int)&v134);
              v69 = (LPCRITICAL_SECTION *)dword_BA7DA0;
              *((float *)&v134 + 2) = v120 + flt_BA7A58;
              sub_8A7930(v69, (int)&v134, flt_A46B10, 0xFF00FFFF, 0);
              sub_89F570(this);
            }
          }
          *(this + 0xA8) = 0xB;
        }
        while ( v122 );
        v37 = v125;
      }
      if ( *(int *)(sub_8ABDB0(v37) + 4) <= 5 )
        v70 = *(_DWORD *)(sub_8ABDB0(v37) + 4);
      else
        v70 = 5;
      v116 = v70;
      v121 = 0;
      if ( v70 > 0 )
      {
        v71 = 0;
        v72 = this + 0xEF;
        v123 = 0;
        do
        {
          if ( v121 >= *(this + 0xF0) )
          {
            v77 = v123 + *(_DWORD *)sub_8ABDB0(v125);
            if ( *(this + 0xF0) == (*(this + 0xF1) & 0x3FFFFFFF) )
              sub_8A6EE0((int)(this + 0xEF), 0x30);
            v78 = *(this + 0xF0);
            v79 = *v72 + 0x30 * v78;
            *(this + 0xF0) = v78 + 1;
            *(_OWORD *)v79 = *(_OWORD *)v77;
            *(_OWORD *)(v79 + 0x10) = *(_OWORD *)(v77 + 0x10);
            *(_DWORD *)(v79 + 0x20) = *(_DWORD *)(v77 + 0x20);
            *(_DWORD *)(v79 + 0x24) = *(_DWORD *)(v77 + 0x24);
            *(_DWORD *)(v79 + 0x28) = *(_DWORD *)(v77 + 0x28);
            v80 = *(_DWORD *)(v77 + 0x2C);
            v71 = v123;
            *(_DWORD *)(v79 + 0x2C) = v80;
          }
          else
          {
            v73 = *(_DWORD *)sub_8ABDB0(v125);
            v74 = *(_OWORD *)(v73 + v71);
            v75 = v71 + v73;
            v76 = v71 + *v72;
            *(_OWORD *)v76 = v74;
            *(_OWORD *)(v76 + 0x10) = *(_OWORD *)(v75 + 0x10);
            *(_DWORD *)(v76 + 0x20) = *(_DWORD *)(v75 + 0x20);
            *(_DWORD *)(v76 + 0x24) = *(_DWORD *)(v75 + 0x24);
            *(_DWORD *)(v76 + 0x28) = *(_DWORD *)(v75 + 0x28);
            *(_DWORD *)(v76 + 0x2C) = *(_DWORD *)(v75 + 0x2C);
          }
          v71 += 0x30;
          v81 = ++v121 < v116;
          v123 = v71;
        }
        while ( v81 );
      }
    }
    sub_8939B0((int)this);
    v82 = *(this + 0x7D);
    if ( (v82 & 0xE0) != 0 )
      v132 = 2;
    if ( (v82 & 4) != 0 )
    {
      *(float *)&v134 = 1.0;
      *((float *)&v134 + 1) = flt_A3D9A4;
      v83 = 0.0;
    }
    else if ( v104 )
    {
      v84 = sub_88D370(this + 0x78) - 2;
      if ( v84 )
      {
        if ( v84 == 3 )
        {
          v83 = flt_A3D65C;
          *(float *)&v134 = flt_A3D65C;
          *((float *)&v134 + 1) = 0.0;
        }
        else
        {
          *(float *)&v134 = 1.0;
          *((float *)&v134 + 1) = 1.0;
          v83 = 0.0;
        }
      }
      else
      {
        *(float *)&v134 = 0.0;
        *((float *)&v134 + 1) = flt_A3D65C;
        v83 = 1.0;
      }
    }
    else
    {
      *(float *)&v134 = 0.0;
      *((float *)&v134 + 1) = 1.0;
      v83 = flt_A3D9A4;
    }
    *((float *)&v134 + 2) = v83;
    v85 = (_DWORD *)*(this + 2);
    LODWORD(a2) = v134;
    *(_QWORD *)((char *)&a2 + 4) = *(_QWORD *)((char *)&v134 + 4);
    if ( v85 )
      v86 = sub_8AC0C0(v85);
    else
      v86 = 0;
    v87 = *(_DWORD *)(v86 + 8);
    if ( v87 )
    {
      if ( *(_DWORD *)(v87 + 0x2B0) )
      {
        v88 = sub_8AEBB0(*(float *)&a2, *((float *)&a2 + 1), *((float *)&a2 + 2), flt_A968F0);
        v89 = (_DWORD *)*(this + 2);
        v90 = *(this + 0xD9);
        v91 = v88;
        if ( v89 )
          v92 = sub_8AC0C0(v89);
        else
          v92 = 0;
        v93 = *(_DWORD *)(v92 + 8);
        if ( v93 )
          v94 = *(int **)(v93 + 0x2B0);
        else
          v94 = 0;
        sub_88BB60(v94, v90, v91);
      }
    }
    (*(void (__thiscall **)(_DWORD *, _DWORD, _DWORD))(*this + 0x84))(
      this,
      *(_DWORD *)(arg0 + 0x1C),
      *(float *)(arg0 + 0xC));
    v95 = (NiNode *)sub_891160(this);
    if ( v95 )
    {
      NiPropertyByID = NiNode_GetNiPropertyByID(v95, 2);
      if ( NiPropertyByID )
      {
        v97 = a2;
        ++NiPropertyByID[3].members.m_controller;
        NiPropertyByID[2].members.m_extraDataList = (NiExtraData **)v97;
        v98 = (void **)DWORD2(a2);
        *(_DWORD *)&NiPropertyByID[2].members.m_extraDataListLen = HIDWORD(v97);
        NiPropertyByID[3].vtbl = v98;
      }
    }
  }
  else if ( !v106 )
  {
    NiMatrix33_InitRotationTransform((float *)&v142, *(float *)(arg0 + 0xC));
    v8 = sub_7101F0(&v142, (NiTransform *)&v134, (NiPoint3 *)(arg0 + 0x10));
    *v3 = LODWORD(v8->rot.data[0][0]);
    *(float *)(arg0 + 0x14) = v8->rot.data[0][1];
    *(float *)(arg0 + 0x18) = v8->rot.data[0][2];
    sub_5E1500((__m128 *)this, (float *)&a2);
    *(float *)&a2 = *(float *)&a2 + *(float *)v3;
    *((float *)&a2 + 1) = *(float *)(arg0 + 0x14) + *((float *)&a2 + 1);
    *((float *)&a2 + 2) = *(float *)(arg0 + 0x18) + *((float *)&a2 + 2);
    sub_452A10((bhkCharacterProxy *)this, (NiPoint3 *)&a2);
  }
  v99 = *(_DWORD **)(v130 + 0x1A4);
  if ( (unsigned int)v99 < *(_DWORD *)(v130 + 0x1A8) )
  {
    *v99 = "Et";
    v100 = __rdtsc();
    v99[1] = v100;
    *(_DWORD *)(v130 + 0x1A4) = v99 + 3;
  }
  if ( *((float *)this + 0xC0) > 0.0 )
  {
    v126 = *((float *)this + 0xC0) - v131;
    *((float *)this + 0xC0) = v126;
    if ( v126 <= 0.0 )
    {
      *((float *)this + 0xC0) = 0.0;
      *((_OWORD *)this + 0x2F) = 0;
    }
  }
  if ( *((float *)this + 0xC3) > 0.0 )
    *((float *)this + 0xC3) = *((float *)this + 0xC3) - v131;
  *(this + 0x7D) &= ~0x1000u;
  return v132;
}
