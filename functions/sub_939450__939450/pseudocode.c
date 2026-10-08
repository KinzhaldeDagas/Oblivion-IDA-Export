char __thiscall sub_939450(__m128 *this, int *a2, int *a3, int a4, int a5)
{
  __m128 *v6; // ecx
  __m128 *v7; // ebx
  __m128 *v8; // esi
  char *v9; // edi
  int v10; // eax
  signed int v11; // edx
  unsigned __int8 v12; // al
  float *v13; // ebx
  int v14; // ecx
  double v15; // st7
  __m128 *v16; // eax
  int v17; // edx
  __m128 v18; // xmm1
  __m128 v19; // xmm2
  __m128 v20; // xmm3
  __m128 v21; // xmm4
  int v22; // edi
  __m128 *v23; // ecx
  char *v24; // edi
  __m128 *v25; // eax
  int v26; // edx
  __m128 v27; // xmm1
  __m128 v28; // xmm2
  __m128 v29; // xmm3
  __m128 v30; // xmm4
  __m128 *v31; // ecx
  __m128 *v32; // edi
  int v33; // eax
  double v34; // st7
  signed int v35; // eax
  __int16 v36; // ax
  __m128 *v38; // [esp+10h] [ebp-1E8h]
  __m128 *v39; // [esp+28h] [ebp-1D0h]
  int v40; // [esp+2Ch] [ebp-1CCh]
  __m128 *v41; // [esp+30h] [ebp-1C8h]
  signed int v42; // [esp+34h] [ebp-1C4h]
  int *v43; // [esp+38h] [ebp-1C0h]
  int v44; // [esp+3Ch] [ebp-1BCh]
  int *v45; // [esp+40h] [ebp-1B8h]
  _DWORD v46[5]; // [esp+44h] [ebp-1B4h] BYREF
  int *v47; // [esp+58h] [ebp-1A0h]
  int *v48; // [esp+5Ch] [ebp-19Ch]
  int v49; // [esp+60h] [ebp-198h]
  int v50; // [esp+64h] [ebp-194h]
  __m128 v51[6]; // [esp+68h] [ebp-190h] BYREF
  __m128 v52; // [esp+C8h] [ebp-130h] BYREF
  char v53[256]; // [esp+D8h] [ebp-120h] BYREF
  __m128 v54; // [esp+1D8h] [ebp-20h]
  float v55; // [esp+1E8h] [ebp-10h]
  float v56; // [esp+1ECh] [ebp-Ch]
  float v57; // [esp+1F0h] [ebp-8h]
  float v58; // [esp+1F4h] [ebp-4h]

  v50 = this->m128_i32[2]; /*0x93946a*/
  v48 = a3; /*0x939471*/
  v6 = (__m128 *)a3[2]; /*0x939475*/
  v49 = a4; /*0x939478*/
  v38 = (__m128 *)a2[2]; /*0x939480*/
  v47 = a2; /*0x939485*/
  sub_8B1FF0(v51, v38, v6); /*0x939489*/
  v46[2] = *a2; /*0x939498*/
  v46[3] = *a3; /*0x93949e*/
  v46[0] = v51; /*0x9394aa*/
  v46[1] = a2[2]; /*0x9394b1*/
  v7 = this + 2; /*0x9394c0*/
  v8 = this + 3; /*0x9394c3*/
  v9 = &this->m128_i8[0xC]; /*0x9394c6*/
  v41 = v7; /*0x9394d0*/
  v44 = (int)v9; /*0x9394d4*/
  v46[4] = *(_DWORD *)(a4 + 8); /*0x9394d8*/
  if ( sub_93D4A0((int)v46, v9, v7, &v52) == 1 ) /*0x9394e7*/
  {
    LOBYTE(v10) = v8->m128_i8[2]; /*0x9394e9*/
    if ( (_BYTE)v10 ) /*0x9394ee*/
      LOBYTE(v10) = sub_939B60(v8, v50); /*0x9394fa*/
  }
  else
  {
    v11 = (unsigned __int8)sub_93A620((unsigned __int8 *)v8, (int)v9); /*0x939512*/
    v12 = v8->m128_u8[2]; /*0x93951a*/
    v39 = *(__m128 **)a5; /*0x93951d*/
    v42 = v11; /*0x939529*/
    if ( v12 > v11 ) /*0x939531*/
    {
      v57 = *(float *)(v49 + 8); /*0x939548*/
      v13 = (float *)*v48; /*0x93954f*/
      v43 = v48; /*0x939551*/
      v45 = v47; /*0x939555*/
      v14 = *v47; /*0x939559*/
      v55 = *(float *)(*v47 + 0xC); /*0x93955e*/
      v56 = v13[3]; /*0x93956f*/
      v15 = v55 + v56 + v57; /*0x939584*/
      v54 = *v41; /*0x93958b*/
      v58 = v15 * v15; /*0x939597*/
      if ( v12 ) /*0x9395a0*/
      {
        v40 = (int)&v8->m128_i32[2 * v12 + 1]; /*0x9395bd*/
        (*(void (__thiscall **)(int, int, _DWORD, char *))(*(_DWORD *)v14 + 0x28))(v14, v40, v8->m128_u8[0], v53); /*0x9395c1*/
        v16 = (__m128 *)v45[2]; /*0x9395c8*/
        v17 = v8->m128_u8[0]; /*0x9395cb*/
        v18 = *v16; /*0x9395ce*/
        v19 = v16[1]; /*0x9395d1*/
        v20 = v16[2]; /*0x9395d5*/
        v21 = v16[3]; /*0x9395d9*/
        v22 = v17; /*0x9395dd*/
        v23 = (__m128 *)v53; /*0x9395df*/
        do /*0x939622*/
        {
          *v23 = _mm_add_ps( /*0x939619*/
                   _mm_add_ps(
                     _mm_mul_ps(v18, _mm_shuffle_ps(*v23, *v23, 0)),
                     _mm_mul_ps(v19, _mm_shuffle_ps(*v23, *v23, 0x55))),
                   _mm_add_ps(_mm_mul_ps(v20, _mm_shuffle_ps(*v23, *v23, 0xAA)), v21));
          ++v23; /*0x93961c*/
          --v22; /*0x93961f*/
        }
        while ( v22 > 0 ); /*0x939622*/
        v24 = &v53[0x10 * v17]; /*0x93962b*/
        (*(void (__thiscall **)(float *, int, _DWORD, char *))(*(_DWORD *)v13 + 0x28))( /*0x939642*/
          v13,
          v40 + 2 * v17,
          v8->m128_u8[1],
          v24);
        v25 = (__m128 *)v43[2]; /*0x939649*/
        v26 = v8->m128_u8[1]; /*0x93964c*/
        v27 = *v25; /*0x939650*/
        v28 = v25[1]; /*0x939653*/
        v29 = v25[2]; /*0x939657*/
        v30 = v25[3]; /*0x93965b*/
        v31 = (__m128 *)v24; /*0x93965f*/
        do /*0x93969d*/
        {
          *v31 = _mm_add_ps( /*0x939694*/
                   _mm_add_ps(
                     _mm_mul_ps(v27, _mm_shuffle_ps(*v31, *v31, 0)),
                     _mm_mul_ps(v28, _mm_shuffle_ps(*v31, *v31, 0x55))),
                   _mm_add_ps(_mm_mul_ps(v29, _mm_shuffle_ps(*v31, *v31, 0xAA)), v30));
          ++v31; /*0x939697*/
          --v26; /*0x93969a*/
        }
        while ( v26 > 0 ); /*0x93969d*/
        v11 = v42; /*0x93969f*/
      }
      sub_939BB0((unsigned __int8 *)v8, (__m128 *)v53, v11, (__m128 **)a5, v50); /*0x9396b6*/
      v7 = v41; /*0x9396bb*/
      v11 = v42; /*0x9396bf*/
    }
    v32 = *(__m128 **)a5; /*0x9396cb*/
    *v32 = v52; /*0x9396d5*/
    v32[1] = *v7; /*0x9396db*/
    if ( v11 ) /*0x9396df*/
    {
      v32[2].m128_i16[0] = v8->m128_i16[3]; /*0x9396e5*/
      *(_DWORD *)a5 += 0x30; /*0x9396e9*/
    }
    else
    {
      v33 = *(_DWORD *)(v49 + 0x28); /*0x939706*/
      if ( *(char *)(v44 + 8) + *(char *)(v44 + 9) == 4 ) /*0x939709*/
        v34 = *(float *)(v33 + 4); /*0x93970b*/
      else
        v34 = *(float *)(v33 + 8); /*0x939710*/
      if ( v34 > v7->m128_f32[3] ) /*0x93971b*/
      {
        v35 = sub_93AB40((unsigned __int8 *)v8, (int)v47, (int)v48, v49, v44, (int)v32, v39, v50, 1); /*0x93973b*/
        switch ( v35 ) /*0x939746*/
        {
          case 4: /*0x939746*/
            if ( v32[2].m128_i16[0] == (__int16)0xFFFF ) /*0x93974e*/
            {
              v36 = (*(int (__thiscall **)(int, int *, int *, int, __m128 *))(*(_DWORD *)v50 + 8))( /*0x93976e*/
                      v50,
                      v47,
                      v48,
                      v49,
                      v32);
              v32[2].m128_i16[0] = v36; /*0x939775*/
              if ( v36 == (__int16)0xFFFF ) /*0x939779*/
              {
                sub_939B00((unsigned __int8 *)v8, 0); /*0x93977e*/
                v32 = v39; /*0x939783*/
              }
              else
              {
                v8->m128_i16[3] = v36; /*0x93978c*/
                *(_DWORD *)a5 += 0x30; /*0x939793*/
              }
            }
            else
            {
              *(_DWORD *)a5 += 0x30; /*0x939753*/
            }
            break;
          case 5: /*0x939746*/
            v32 = v39; /*0x93979d*/
            break;
          case 6: /*0x939746*/
            v32 = v39; /*0x9397ad*/
            *(_DWORD *)a5 -= 0x30; /*0x9397b4*/
            break;
          default:
            v32 = &v39[3 * v35]; /*0x9397c2*/
            break;
        }
      }
    }
    v10 = *(_DWORD *)(a5 + 0x3040); /*0x9397c7*/
    if ( v10 ) /*0x9397cf*/
    {
      if ( (unsigned int)v32 < *(_DWORD *)a5 ) /*0x9397d3*/
      {
        **(_DWORD **)(v10 + 4) = v32; /*0x9397d8*/
        v10 = *(_DWORD *)(a5 + 0x3040); /*0x9397da*/
        *(_DWORD *)(v10 + 4) += 4; /*0x9397e0*/
      }
    }
  }
  return v10; /*0x939502*/
}
