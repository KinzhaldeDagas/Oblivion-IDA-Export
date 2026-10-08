// TES4 authoritative: applies entity/contact interaction callbacks and impulses for current manifold entries; entry+0x28 is treated as collidable/contact data, not a TESObjectREFR.
int __thiscall hkpCharacterProxy_ApplyContactEntityInteractions(__m128 *this, int moveInput, __m128 *surfaceMotion)
{
  int result; // eax
  int v5; // ebx
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v10; // ecx
  _DWORD *v11; // eax
  _DWORD *v12; // edi
  int v13; // ecx
  _DWORD *v14; // edi
  int i; // edi
  int v16; // ecx
  int v17; // ecx
  int v18; // eax
  __m128 *v19; // ecx
  int v20; // edi
  int v21; // edx
  __m128 v22; // xmm4
  __m128 v23; // xmm2
  __m128 *v24; // eax
  __m128 v25; // xmm0
  __m128 v26; // xmm0
  double v27; // st7
  bool v28; // c0
  __m128 v29; // xmm1
  __m128 v30; // xmm0
  __m128 v31; // xmm0
  double v32; // st7
  __m128 v33; // xmm0
  double v34; // st7
  int j; // ebx
  int v36; // ecx
  bool v37; // cc
  float v38; // [esp+18h] [ebp-D8h]
  unsigned int v39; // [esp+18h] [ebp-D8h]
  float v40; // [esp+1Ch] [ebp-D4h]
  int v41; // [esp+20h] [ebp-D0h]
  int v42; // [esp+28h] [ebp-C8h]
  float v43; // [esp+2Ch] [ebp-C4h]
  int v44; // [esp+30h] [ebp-C0h]
  __m128 v45; // [esp+40h] [ebp-B0h] BYREF
  __m128 v46; // [esp+50h] [ebp-A0h]
  float v47; // [esp+60h] [ebp-90h]
  int v48; // [esp+64h] [ebp-8Ch]
  float v49; // [esp+68h] [ebp-88h]
  float v50; // [esp+6Ch] [ebp-84h]
  int v51; // [esp+70h] [ebp-80h]
  _DWORD v52[7]; // [esp+74h] [ebp-7Ch] BYREF
  __m128 v53; // [esp+90h] [ebp-60h] BYREF
  __m128 v54; // [esp+A0h] [ebp-50h] BYREF
  __m128 v55; // [esp+B0h] [ebp-40h] BYREF
  __m128 v56[3]; // [esp+C0h] [ebp-30h] BYREF

  result = *((_DWORD *)this + 0x1E); /*0x8ac6b6*/
  v5 = 0; /*0x8ac6b9*/
  v48 = *(_DWORD *)(moveInput + 8); /*0x8ac6be*/
  v41 = 0; /*0x8ac6c2*/
  if ( result > 0 ) /*0x8ac6c6*/
  {
    v42 = 0; /*0x8ac6cc*/
    do /*0x8acaad*/
    {
      v6 = *(_DWORD *)(v5 + *((_DWORD *)this + 0x1D) + 0x28);// Reads manifold entry+0x28 hit collidable/contact reference and walks Havok entity data from it. /*0x8ac6d3*/
      v7 = *(_DWORD *)(v6 + 0x10); /*0x8ac6d7*/
      v8 = *(_DWORD *)(v7 + v6 + 0x48); /*0x8ac6da*/
      v9 = v6 + v7; /*0x8ac6de*/
      v10 = 0; /*0x8ac6e0*/
      if ( v8 > 0 ) /*0x8ac6e4*/
      {
        v11 = *(_DWORD **)(v9 + 0x44); /*0x8ac6e6*/
        v12 = v11; /*0x8ac6e9*/
        while ( *v12 != 0x1300 ) /*0x8ac6f6*/
        {
          ++v10; /*0x8ac6f8*/
          v12 += 4; /*0x8ac6f9*/
          if ( v10 >= v8 ) /*0x8ac6fe*/
            goto LABEL_17; /*0x8ac6fe*/
        }
        v13 = 0; /*0x8ac702*/
        v14 = v11; /*0x8ac708*/
        while ( *v14 != 0x1300 ) /*0x8ac716*/
        {
          ++v13; /*0x8ac71c*/
          v14 += 4; /*0x8ac71d*/
          if ( v13 >= v8 ) /*0x8ac722*/
          {
            v44 = 0; /*0x8ac726*/
            goto LABEL_13; /*0x8ac726*/
          }
        }
        v44 = v11[4 * v13 + 2]; /*0x8ac96c*/
LABEL_13:
        for ( i = *((_DWORD *)this + 0x21) - 1; i >= 0; --i )// Invokes registered character proxy listeners before entity interaction resolution. /*0x8ac735*/
        {
          v16 = *(_DWORD *)(*((_DWORD *)this + 0x20) + 4 * i); /*0x8ac746*/
          if ( v16 ) /*0x8ac74b*/
            (*(void (__thiscall **)(int, __m128 *, int, int))(*(_DWORD *)v16 + 0x10))( /*0x8ac75b*/
              v16,
              this,
              v44,
              v5 + *((_DWORD *)this + 0x1D));
        }
      }
LABEL_17:
      v17 = *((_DWORD *)this + 0x1D); /*0x8ac761*/
      v18 = *(_DWORD *)(v17 + v5 + 0x28); /*0x8ac764*/
      v19 = (__m128 *)(v5 + v17); /*0x8ac76b*/
      if ( *(_BYTE *)(v18 + 0x18) == 1 ) /*0x8ac770*/
      {
        v20 = v18 + *(_DWORD *)(v18 + 0x10); /*0x8ac779*/
        if ( v20 ) /*0x8ac77b*/
        {
          if ( !*(_BYTE *)(v20 + 0x92) ) /*0x8ac781*/
          {
            v21 = *((_DWORD *)this + 0x1D); /*0x8ac792*/
            v45 = *v19; /*0x8ac795*/
            v22 = *(this + 1); /*0x8ac79e*/
            v45.m128_i32[3] = *(_DWORD *)(v5 + v21 + 0x1C); /*0x8ac7a5*/
            v23 = *(__m128 *)(v5 + v21 + 0x10); /*0x8ac7a9*/
            v46 = v23; /*0x8ac7b2*/
            v51 = v20; /*0x8ac7b7*/
            v24 = *(__m128 **)(v20 + 0x50); /*0x8ac7bb*/
            v25 = _mm_sub_ps(v45, v24[6]); /*0x8ac7cc*/
            v26 = _mm_mul_ps( /*0x8ac804*/
                    _mm_sub_ps(
                      _mm_add_ps(
                        _mm_sub_ps(
                          _mm_mul_ps(_mm_shuffle_ps(v24[0xE], v24[0xE], 0xC9), _mm_shuffle_ps(v25, v25, 0xD2)),
                          _mm_mul_ps(_mm_shuffle_ps(v24[0xE], v24[0xE], 0xD2), _mm_shuffle_ps(v25, v25, 0xC9))),
                        v24[0xD]),
                      v22),
                    v23);
            v43 = _mm_shuffle_ps(v26, v26, 0xAA).m128_f32[0] /*0x8ac821*/
                + (float)(_mm_shuffle_ps(v26, v26, 0x55).m128_f32[0] + v26.m128_f32[0]);
            v27 = v43 * flt_A97BDC; /*0x8ac829*/
            v49 = v43; /*0x8ac833*/
            v38 = v27; /*0x8ac837*/
            if ( v45.m128_f32[3] < (double)*(float *)&SrcStr ) /*0x8ac84a*/
            {
              v27 = v27 + v45.m128_f32[3] * *(float *)(moveInput + 0xC) * flt_A47E6C; /*0x8ac859*/
              v38 = v27; /*0x8ac85b*/
            }
            v28 = v27 < *(float *)&SrcStr; /*0x8ac85f*/
            v29 = 0; /*0x8ac865*/
            v53 = v45; /*0x8ac868*/
            *(_OWORD *)&v52[3] = 0; /*0x8ac870*/
            if ( v28 ) /*0x8ac87d*/
            {
              (*(void (__thiscall **)(_DWORD, __m128 *))(**(_DWORD **)(v20 + 0x50) + 0x3C))( /*0x8ac890*/
                *(_DWORD *)(v20 + 0x50),
                v56);
              v30 = _mm_sub_ps(v45, *(__m128 *)(*(_DWORD *)(v20 + 0x50) + 0x60)); /*0x8ac89f*/
              v54 = _mm_sub_ps( /*0x8ac8e3*/
                      _mm_mul_ps(_mm_shuffle_ps(v30, v30, 0xC9), _mm_shuffle_ps(v46, v46, 0xD2)),
                      _mm_mul_ps(_mm_shuffle_ps(v30, v30, 0xD2), _mm_shuffle_ps(v46, v46, 0xC9)));
              hkBasis_TransformVector(&v55, v56, &v54); /*0x8ac8eb*/
              v31 = _mm_mul_ps(v55, v54); /*0x8ac900*/
              v50 = _mm_shuffle_ps(v31, v31, 0xAA).m128_f32[0] /*0x8ac929*/
                  + (float)(_mm_shuffle_ps(v31, v31, 0x55).m128_f32[0] + v31.m128_f32[0]);
              v50 = v50 + *(float *)(*(_DWORD *)(v20 + 0x50) + 0xC0); /*0x8ac936*/
              v47 = v38 / v50; /*0x8ac942*/
              v32 = -(*((float *)this + 0x1B) * *(float *)(moveInput + 8)); /*0x8ac94c*/
              if ( v47 < v32 ) /*0x8ac959*/
                v47 = v32; /*0x8ac95b*/
              v23 = v46; /*0x8ac97b*/
              v29 = _mm_mul_ps(_mm_shuffle_ps((__m128)LODWORD(v47), (__m128)LODWORD(v47), 0), v46); /*0x8ac991*/
              *(__m128 *)&v52[3] = v29; /*0x8ac994*/
            }
            else
            {
              v47 = 0.0; /*0x8ac99e*/
              v50 = *(float *)(*(_DWORD *)(v20 + 0x50) + 0xC0); /*0x8ac9af*/
            }
            v33 = _mm_mul_ps( /*0x8ac9d3*/
                    _mm_mul_ps(
                      _mm_shuffle_ps(
                        (__m128)*(unsigned int *)(moveInput + 8),
                        (__m128)*(unsigned int *)(moveInput + 8),
                        0),
                      *surfaceMotion),
                    v23);
            v40 = _mm_shuffle_ps(v33, v33, 0xAA).m128_f32[0] /*0x8ac9f0*/
                + (float)(_mm_shuffle_ps(v33, v33, 0x55).m128_f32[0] + v33.m128_f32[0]);
            v34 = v40; /*0x8ac9f4*/
            if ( v49 < (double)*(float *)&SrcStr ) /*0x8aca07*/
              v34 = v40 - v49; /*0x8aca0f*/
            if ( v34 < flt_A97BD8 ) /*0x8aca1e*/
            {
              *(float *)&v39 = v34 * *((float *)this + 0x1C); /*0x8aca23*/
              *(__m128 *)&v52[3] = _mm_add_ps(v29, _mm_mul_ps(_mm_shuffle_ps((__m128)v39, (__m128)v39, 0), v23)); /*0x8aca3a*/
            }
            for ( j = *((_DWORD *)this + 0x21) - 1; j >= 0; --j )// Invokes registered character proxy listeners after computing contact/entity impulse. /*0x8aca4d*/
            {
              v36 = *(_DWORD *)(*((_DWORD *)this + 0x20) + 4 * j); /*0x8aca56*/
              if ( v36 ) /*0x8aca5b*/
                (*(void (__thiscall **)(int, __m128 *, __m128 *, _DWORD *))(*(_DWORD *)v36 + 0x14))( /*0x8aca6d*/
                  v36,
                  this,
                  &v45,
                  &v52[3]);
            }
            sub_8A6410(v20); /*0x8aca75*/
            (*(void (__thiscall **)(_DWORD, _DWORD *, __m128 *))(**(_DWORD **)(v20 + 0x50) + 0x60))( /*0x8aca91*/
              *(_DWORD *)(v20 + 0x50),
              &v52[3],
              &v53);
            v5 = v42; /*0x8aca94*/
          }
        }
      }
      result = v41 + 1; /*0x8aca9f*/
      v5 += 0x30; /*0x8acaa0*/
      v37 = ++v41 < *((_DWORD *)this + 0x1E); /*0x8acaa3*/
      v42 = v5; /*0x8acaa9*/
    }
    while ( v37 ); /*0x8acaad*/
  }
  return result; /*0x8acab3*/
}
