int __thiscall sub_8E1660(__m128 *this, int *a2, __m128 *a3, int *a4)
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
  int *v21; // eax
  int v22; // edx
  int v23; // eax
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

  v5 = *(this + 3);
  v41 = _mm_add_ps(
          _mm_max_ps(
            _mm_min_ps(_mm_mul_ps(_mm_add_ps(*a3, *(this + 1)), v5), (__m128)xmmword_B2FC70),
            (__m128)xmmword_A9A660),
          (__m128)xmmword_A9A650);
  v6 = _mm_add_ps(
         _mm_max_ps(
           _mm_min_ps(_mm_mul_ps(_mm_add_ps(a3[1], *(this + 2)), v5), (__m128)xmmword_B2FC70),
           (__m128)xmmword_A9A660),
         (__m128)xmmword_A9A650);
  v42 = ((unsigned __int32)v41.m128_i32[0] >> 7) & 0xFFFE;
  v7 = this + 4;
  v43 = ((unsigned __int32)v41.m128_i32[1] >> 7) & 0xFFFE;
  v44 = ((unsigned __int32)v41.m128_i32[2] >> 7) & 0xFFFE;
  v31 = *((_DWORD *)this + 0x11);
  if ( v31 == (*((_DWORD *)this + 0x12) & 0x3FFFFFFF) )
    sub_8A6EE0((const void **)this + 0x10, 0x10);
  v8 = v7->m128_i32[0];
  v9 = v7->m128_i32[0] + 0x10 * (*((_DWORD *)this + 0x11))++;
  v34 = (__m64 *)v8;
  sub_8E1440(
    (const void **)this + 0x13,
    v8,
    v31,
    v42,
    ((unsigned __int32)v6.m128_i32[0] >> 7) | 1,
    (_WORD *)(v9 + 8),
    (_WORD *)(v9 + 0xA));
  sub_8E1440(
    (const void **)this + 0x16,
    (int)v34,
    v31,
    v43,
    ((unsigned __int32)v6.m128_i32[1] >> 7) | 1,
    (_WORD *)v9,
    (_WORD *)(v9 + 4));
  sub_8E1440(
    (const void **)this + 0x19,
    (int)v34,
    v31,
    v44,
    ((unsigned __int32)v6.m128_i32[2] >> 7) | 1,
    (_WORD *)(v9 + 2),
    (_WORD *)(v9 + 6));
  sub_8E0A30(v34, v31, (_WORD *)v9);
  v10 = TlsIndex;
  *(_DWORD *)(v9 + 0xC) = a2;
  *a2 = v31;
  v36 = *((_DWORD *)this + 0x11);
  v40 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + v10);
  v11 = *(_DWORD **)(v40 + 0x19C);
  v12 = ((4 * (v36 >> 5) + 0x30) & 0xFFFFFFF0) + v11[8];
  if ( v12 > v11[0xB] )
  {
    v13 = (_OWORD *)(*(int (__thiscall **)(_DWORD *, unsigned int))(*v11 + 0xC))(
                      v11,
                      (4 * (v36 >> 5) + 0x30) & 0xFFFFFFF0);
  }
  else
  {
    v13 = (_OWORD *)v11[8];
    v11[8] = v12;
  }
  v35 = v13;
  sub_8E0E90(this, v36, v42, v9, v31, v13);
  v14 = v35;
  v15 = v7->m128_i32[0];
  result = *((int *)this + 0x11) >> 5;
  v17 = (unsigned int)&v35[result + 1];
  v38 = v35;
  v37 = (_DWORD *)v15;
  for ( i = v17; (unsigned int)v38 < v17; ++v38 )
  {
    v18 = *v38;
    v19 = v37;
    v32 = v37;
    v33 = *v38;
    if ( *v38 )
    {
      do
      {
        if ( (_BYTE)v18 )
        {
          if ( (v18 & 1) != 0 && (((*(_DWORD *)(v9 + 4) - *v19) | (v19[1] - *(_DWORD *)v9)) & 0x80008000) == 0 )
          {
            v20 = v19[3];
            if ( (v20 & 1) != 0 )
            {
              v24 = *((_DWORD *)this + 0x1E);
              v25 = v20 & 0xFFFFFFFE;
              v26 = *(_DWORD *)(v25 + v24 + 0xC);
              v27 = *(_DWORD *)(v25 + v24 + 8);
              v28 = v25 + v24 + 4;
              if ( v27 == (v26 & 0x3FFFFFFF) )
                sub_8A6EE0((const void **)v28, 2);
              *(_WORD *)(*(_DWORD *)v28 + 2 * (*(_DWORD *)(v28 + 4))++) = v31;
            }
            else
            {
              v21 = a4;
              if ( a4[1] == (a4[2] & 0x3FFFFFFF) )
              {
                sub_8A6EE0((const void **)a4, 8);
                v21 = a4;
              }
              v22 = v21[1];
              v23 = *v21;
              *(_DWORD *)(v23 + 8 * v22) = a2;
              *(_DWORD *)(v23 + 8 * v22 + 4) = v20;
              ++a4[1];
            }
            v18 = v33;
            v19 = v32;
          }
          v14 = v35;
          v19 += 4;
          v18 >>= 1;
        }
        else
        {
          v19 += 0x20;
          v18 >>= 8;
        }
        v32 = v19;
        v33 = v18;
      }
      while ( v18 );
      v17 = i;
    }
    v37 += 0x80;
    result = (int)(v38 + 1);
  }
  v29 = *(_DWORD **)(v40 + 0x19C);
  v30 = v14 == (_DWORD *)v29[0xA];
  v29[8] = v14;
  if ( v30 )
    return (*(int (__thiscall **)(_DWORD *, _DWORD *))(*v29 + 0x10))(v29, v14);
  return result;
}
