int __thiscall sub_8E1660(__m128 *this, int *a2, __m128 *a3, const void **a4)
{
  __m128 v5; // xmm0
  __m128 v6; // xmm5
  __m128 *v7; // ebx
  int v8; // ecx
  int v9; // esi
  int v10; // ecx
  _DWORD *v11; // ecx
  unsigned int v12; // edx
  _OWORD *v13; // eax
  _DWORD *v14; // edx
  __int32 v15; // ecx
  int result; // eax
  unsigned int v17; // ebx
  unsigned int v18; // ecx
  _DWORD *v19; // eax
  int v20; // ebx
  const void **v21; // eax
  const void *v22; // edx
  _DWORD *v23; // eax
  int v24; // edx
  unsigned int v25; // ebx
  int v26; // eax
  int v27; // ecx
  int v28; // ebx
  _DWORD *v29; // ecx
  bool v30; // zf
  int v31; // [esp+4h] [ebp-44h]
  _DWORD *v32; // [esp+8h] [ebp-40h]
  unsigned int v33; // [esp+Ch] [ebp-3Ch]
  __m64 *v34; // [esp+10h] [ebp-38h]
  _DWORD *v35; // [esp+10h] [ebp-38h]
  int v36; // [esp+14h] [ebp-34h]
  _DWORD *v37; // [esp+14h] [ebp-34h]
  unsigned int *v38; // [esp+18h] [ebp-30h]
  unsigned int i; // [esp+1Ch] [ebp-2Ch]
  int v40; // [esp+20h] [ebp-28h]
  __m128 v41; // [esp+28h] [ebp-20h]
  unsigned int v42; // [esp+28h] [ebp-20h]
  int v43; // [esp+2Ch] [ebp-1Ch]
  int v44; // [esp+30h] [ebp-18h]

  v5 = *(this + 3); /*0x8e168d*/
  v41 = _mm_add_ps( /*0x8e16a4*/
          _mm_max_ps(
            _mm_min_ps(_mm_mul_ps(_mm_add_ps(*a3, *(this + 1)), v5), (__m128)xmmword_B2FC70),
            (__m128)xmmword_A9A660),
          (__m128)xmmword_A9A650);
  v6 = _mm_add_ps( /*0x8e16cd*/
         _mm_max_ps(
           _mm_min_ps(_mm_mul_ps(_mm_add_ps(a3[1], *(this + 2)), v5), (__m128)xmmword_B2FC70),
           (__m128)xmmword_A9A660),
         (__m128)xmmword_A9A650);
  v42 = ((unsigned __int32)v41.m128_i32[0] >> 7) & 0xFFFE; /*0x8e171b*/
  v7 = this + 4; /*0x8e1732*/
  v43 = ((unsigned __int32)v41.m128_i32[1] >> 7) & 0xFFFE; /*0x8e173c*/
  v44 = ((unsigned __int32)v41.m128_i32[2] >> 7) & 0xFFFE; /*0x8e1751*/
  v31 = *((_DWORD *)this + 0x11); /*0x8e1755*/
  if ( v31 == (*((_DWORD *)this + 0x12) & 0x3FFFFFFF) ) /*0x8e1759*/
    sub_8A6EE0((const void **)this + 0x10, 0x10); /*0x8e175e*/
  v8 = v7->m128_i32[0]; /*0x8e1769*/
  v9 = v7->m128_i32[0] + 0x10 * (*((_DWORD *)this + 0x11))++; /*0x8e1770*/
  v34 = (__m64 *)v8; /*0x8e1793*/
  sub_8E1440( /*0x8e1797*/
    (const void **)this + 0x13,
    v8,
    v31,
    v42,
    ((unsigned __int32)v6.m128_i32[0] >> 7) | 1,
    (_WORD *)(v9 + 8),
    (_WORD *)(v9 + 0xA));
  sub_8E1440( /*0x8e17b8*/
    (const void **)this + 0x16,
    (int)v34,
    v31,
    v43,
    ((unsigned __int32)v6.m128_i32[1] >> 7) | 1,
    (_WORD *)v9,
    (_WORD *)(v9 + 4));
  sub_8E1440( /*0x8e17dc*/
    (const void **)this + 0x19,
    (int)v34,
    v31,
    v44,
    ((unsigned __int32)v6.m128_i32[2] >> 7) | 1,
    (_WORD *)(v9 + 2),
    (_WORD *)(v9 + 6));
  sub_8E0A30(v34, v31, (_WORD *)v9); /*0x8e17ee*/
  v10 = MEMORY[0xBA9DE4]; /*0x8e17fa*/
  *(_DWORD *)(v9 + 0xC) = a2; /*0x8e1800*/
  *a2 = v31; /*0x8e1803*/
  v36 = *((_DWORD *)this + 0x11); /*0x8e1812*/
  v40 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v10); /*0x8e1819*/
  v11 = *(_DWORD **)(v40 + 0x19C); /*0x8e181d*/
  v12 = ((4 * (v36 >> 5) + 0x30) & 0xFFFFFFF0) + v11[8]; /*0x8e1834*/
  if ( v12 > v11[0xB] ) /*0x8e1839*/
  {
    v13 = (_OWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v11 + 0xC))( /*0x8e1847*/
                      v11,
                      (4 * (v36 >> 5) + 0x30) & 0xFFFFFFF0);
  }
  else
  {
    v13 = (_OWORD *)v11[8]; /*0x8e183b*/
    v11[8] = v12; /*0x8e183f*/
  }
  v35 = v13; /*0x8e1855*/
  sub_8E0E90(this, v36, v42, v9, v31, v13); /*0x8e1861*/
  v14 = v35; /*0x8e1866*/
  v15 = v7->m128_i32[0]; /*0x8e186d*/
  result = *((int *)this + 0x11) >> 5; /*0x8e186f*/
  v17 = (unsigned int)&v35[result + 1]; /*0x8e1872*/
  v38 = v35; /*0x8e1878*/
  v37 = (_DWORD *)v15; /*0x8e187c*/
  for ( i = v17; (unsigned int)v38 < v17; ++v38 ) /*0x8e1884*/
  {
    v18 = *v38; /*0x8e1894*/
    v19 = v37; /*0x8e1898*/
    v32 = v37; /*0x8e189c*/
    v33 = *v38; /*0x8e18a0*/
    if ( *v38 ) /*0x8e1894*/
    {
      do /*0x8e1972*/
      {
        if ( (_BYTE)v18 ) /*0x8e18b2*/
        {
          if ( (v18 & 1) != 0 && (((*(_DWORD *)(v9 + 4) - *v19) | (v19[1] - *(_DWORD *)v9)) & 0x80008000) == 0 ) /*0x8e18de*/
          {
            v20 = v19[3]; /*0x8e18e0*/
            if ( (v20 & 1) != 0 ) /*0x8e18e6*/
            {
              v24 = *((_DWORD *)this + 0x1E); /*0x8e1920*/
              v25 = v20 & 0xFFFFFFFE; /*0x8e1923*/
              v26 = *(_DWORD *)(v25 + v24 + 0xC); /*0x8e1926*/
              v27 = *(_DWORD *)(v25 + v24 + 8); /*0x8e192a*/
              v28 = v25 + v24 + 4; /*0x8e192e*/
              if ( v27 == (v26 & 0x3FFFFFFF) ) /*0x8e1939*/
                sub_8A6EE0((const void **)v28, 2); /*0x8e193e*/
              *(_WORD *)(*(_DWORD *)v28 + 2 * (*(_DWORD *)(v28 + 4))++) = v31; /*0x8e1950*/
            }
            else
            {
              v21 = a4; /*0x8e18e8*/
              if ( a4[1] == (const void *)((unsigned int)a4[2] & 0x3FFFFFFF) ) /*0x8e18f9*/
              {
                sub_8A6EE0(a4, 8); /*0x8e18fe*/
                v21 = a4; /*0x8e1903*/
              }
              v22 = v21[1]; /*0x8e1909*/
              v23 = *v21; /*0x8e190c*/
              v23[2 * (_DWORD)v22] = a2; /*0x8e1911*/
              v23[2 * (_DWORD)v22 + 1] = v20; /*0x8e1914*/
              a4[1] = (char *)a4[1] + 1; /*0x8e191b*/
            }
            v18 = v33; /*0x8e1957*/
            v19 = v32; /*0x8e195b*/
          }
          v14 = v35; /*0x8e195f*/
          v19 += 4; /*0x8e1963*/
          v18 >>= 1; /*0x8e1966*/
        }
        else
        {
          v19 += 0x20; /*0x8e18b4*/
          v18 >>= 8; /*0x8e18b9*/
        }
        v32 = v19; /*0x8e196a*/
        v33 = v18; /*0x8e196e*/
      }
      while ( v18 ); /*0x8e1972*/
      v17 = i; /*0x8e1978*/
    }
    v37 += 0x80; /*0x8e197c*/
    result = (int)(v38 + 1); /*0x8e1988*/
  }
  v29 = *(_DWORD **)(v40 + 0x19C); /*0x8e199b*/
  v30 = v14 == (_DWORD *)v29[0xA]; /*0x8e19a1*/
  v29[8] = v14; /*0x8e19a4*/
  if ( v30 ) /*0x8e19a7*/
    return (*(int (__thiscall **)(_DWORD *, _DWORD *))(*v29 + 0x10))(v29, v14); /*0x8e19ac*/
  return result; /*0x8e19b2*/
}
