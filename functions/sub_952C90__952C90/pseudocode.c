signed int __cdecl sub_952C90(__m128 *a1, int a2, _DWORD *a3, signed int a4, _OWORD *a5, int a6)
{
  int v6; // eax
  _DWORD *v7; // ecx
  int v8; // ebx
  int v9; // edi
  unsigned int v10; // edx
  _DWORD *v11; // ecx
  float v12; // eax
  __m128 v13; // xmm0
  _DWORD *v14; // esi
  int v15; // ecx
  _OWORD *v16; // edi
  __int128 v17; // xmm1
  bool v18; // cc
  int v19; // esi
  int v20; // eax
  __m128 *v21; // edi
  _DWORD *v22; // ecx
  bool v23; // zf
  _DWORD *v25; // ecx
  __m128 v26; // xmm0
  double v27; // st6
  int v28; // ebx
  __m128 v29; // xmm0
  double v30; // st6
  _DWORD *v31; // ecx
  char v32; // [esp+17h] [ebp-89h]
  int v33; // [esp+18h] [ebp-88h]
  int v34; // [esp+18h] [ebp-88h]
  signed int v35; // [esp+18h] [ebp-88h]
  int v36; // [esp+1Ch] [ebp-84h]
  float v37; // [esp+20h] [ebp-80h] BYREF
  _DWORD *v38; // [esp+24h] [ebp-7Ch]
  int v39; // [esp+28h] [ebp-78h]
  _DWORD v40[5]; // [esp+2Ch] [ebp-74h] BYREF
  __m128 v41; // [esp+40h] [ebp-60h] BYREF
  __m128 v42; // [esp+50h] [ebp-50h]
  __m128 v43; // [esp+60h] [ebp-40h]
  __m128 v44[3]; // [esp+70h] [ebp-30h] BYREF

  v6 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + MEMORY[0xBA9DE4]); /*0x952ca8*/
  v7 = *(_DWORD **)(v6 + 0x19C); /*0x952cab*/
  v8 = a4; /*0x952cb2*/
  v39 = v6; /*0x952cb5*/
  v9 = v7[8]; /*0x952cc7*/
  v10 = v9 + ((0x3000 * a4 + 0x10) & 0xFFFFFFF0); /*0x952ccd*/
  if ( v10 > v7[0xB] ) /*0x952cd2*/
  {
    v36 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v7 + 0xC))(v7, (0x3000 * a4 + 0x10) & 0xFFFFFFF0); /*0x952ce3*/
    v9 = v36; /*0x952ce7*/
  }
  else
  {
    v7[8] = v10; /*0x952cd4*/
    v36 = v9; /*0x952cd7*/
  }
  v33 = 0; /*0x952ceb*/
  if ( a4 > 0 ) /*0x952cf3*/
  {
    v11 = a3; /*0x952cf9*/
    LODWORD(v12) = a6 - (_DWORD)a3; /*0x952d10*/
    v13 = _mm_shuffle_ps((__m128)0x38D1B717u, (__m128)0x38D1B717u, 0); /*0x952d12*/
    *(__m128 *)&v40[1] = v13; /*0x952d16*/
    v38 = a3; /*0x952d1b*/
    v14 = (_DWORD *)(v9 + 0x138); /*0x952d1f*/
    LODWORD(v37) = a6 - (_DWORD)a3; /*0x952d25*/
    while ( 1 ) /*0x952d3a*/
    {
      v14[0xFFFFFFFF] = *v11; /*0x952d3a*/
      *v14 = *(_DWORD *)((char *)v11 + LODWORD(v12)); /*0x952d43*/
      v14[0xFFFFFFFE] = 0; /*0x952d45*/
      v15 = *v11; /*0x952d4c*/
      v16 = v14 + 0xFFFFFFB2; /*0x952d54*/
      *(_OWORD *)(v14 + 0xFFFFFFB2) = *a5; /*0x952d5a*/
      *(_OWORD *)(v14 + 0xFFFFFFB6) = a5[1]; /*0x952d61*/
      *(_OWORD *)(v14 + 0xFFFFFFBA) = a5[2]; /*0x952d6c*/
      v17 = a5[3]; /*0x952d73*/
      v14[0xFFFFFFC7] = a2; /*0x952d77*/
      v14[0xFFFFFFC8] = v15; /*0x952d7d*/
      v14[0xFFFFFFCA] = v14 + 0xFFFFFFCE; /*0x952d8f*/
      v14[0xFFFFFFCB] = v14 + 0xFFFFFFDE; /*0x952d95*/
      v14[0xFFFFFFCD] = v14 + 0xFFFFFFFE; /*0x952da2*/
      v14[0xFFFFFFCC] = v14 + 0xFFFFFFEE; /*0x952dad*/
      *(_OWORD *)(v14 + 0xFFFFFFBE) = v17; /*0x952db6*/
      *(__m128 *)(v14 + 0xFFFFFFC2) = v13; /*0x952dbd*/
      v14[0xFFFFFFC6] = 0x322BCC76; /*0x952dc4*/
      v14[0xFFFFFFC9] = 0; /*0x952dce*/
      if ( sub_952480((_DWORD **)v14 + 0xFFFFFFB2, v44, v40) == 1 ) /*0x952de0*/
      {
        --a4; /*0x952de2*/
      }
      else
      {
        v14 += 0xC00; /*0x952dff*/
        sub_951BD0((int)(v16 + 0x14), v16 + 7, v16 + 0xB, v16 + 0xF); /*0x952e05*/
      }
      v18 = ++v33 < a4; /*0x952e19*/
      ++v38; /*0x952e1f*/
      if ( !v18 ) /*0x952e23*/
        break; /*0x952e23*/
      v13 = *(__m128 *)&v40[1]; /*0x952d2b*/
      v12 = v37; /*0x952d30*/
      v11 = v38; /*0x952d34*/
    }
    v9 = v36; /*0x952e29*/
    v8 = a4; /*0x952e2d*/
  }
  if ( v8 <= 2 ) /*0x952e32*/
  {
    if ( v8 < 2 ) /*0x952f11*/
    {
      v25 = *(_DWORD **)(v39 + 0x19C); /*0x952f1b*/
      v23 = v9 == v25[0xA]; /*0x952f21*/
      v25[8] = v9; /*0x952f24*/
      if ( v23 ) /*0x952f27*/
        (*(void (__thiscall **)(_DWORD *, int))(*v25 + 0x10))(v25, v9); /*0x952f2c*/
      return 1; /*0x952f3a*/
    }
  }
  else
  {
    a4 = 2; /*0x952e38*/
    v8 = 2; /*0x952e3f*/
  }
  while ( 2 ) /*0x952e42*/
  {
    sub_959090(v9 + 0x140, v9 + 0x3140, &v41, (__m128 **)(v9 + 0x2FF0), (__m128 **)(v9 + 0x5FF0)); /*0x952e42*/
    v32 = 0; /*0x952e6d*/
    v34 = 0; /*0x952e72*/
    if ( v8 > 0 ) /*0x952e7a*/
    {
      v19 = v9 + 0x148; /*0x952e80*/
      do /*0x952f58*/
      {
        v20 = *(_DWORD *)v19; /*0x952e90*/
        if ( *(int *)v19 < 0x37 ) /*0x952e95*/
        {
          v21 = (__m128 *)((v20 << 6) + v19 - 8 + 0x20); /*0x952ea3*/
          *(_DWORD *)v19 = v20 + 1; /*0x952ea8*/
          *(_DWORD *)((v20 << 6) + v19 - 8 + 0x50) = 0; /*0x952eaa*/
          sub_951D00((__m128 *)(v19 - 0x148), *(__m128 **)(v19 + 0x2EA8), v21); /*0x952ebf*/
          if ( sub_9518B0((__m128 *)(v19 - 0x148), v19 - 8, *(_DWORD *)(v19 + 0x2EA8), v21, &v37) == 1 ) /*0x952ee0*/
          {
            if ( LODWORD(v37) == 3 ) /*0x952ee7*/
            {
              v22 = *(_DWORD **)(v39 + 0x19C); /*0x952eed*/
              v23 = v36 == v22[0xA]; /*0x952ef7*/
              v22[8] = v36; /*0x952efa*/
              if ( v23 ) /*0x952efd*/
                (*(void (__thiscall **)(_DWORD *, int))(*v22 + 0x10))(v22, v36); /*0x952f02*/
              return 1; /*0x952f10*/
            }
          }
          else
          {
            v32 = 1; /*0x952f3b*/
          }
          v9 = v36; /*0x952f40*/
          v8 = a4; /*0x952f44*/
        }
        v19 += 0x3000; /*0x952f4c*/
        ++v34; /*0x952f54*/
      }
      while ( v34 < v8 ); /*0x952f58*/
      if ( v32 ) /*0x952f64*/
        continue; /*0x952f64*/
    }
    break;
  }
  v26 = _mm_xor_ps(v41, (__m128)xmmword_A965C0); /*0x952f84*/
  if ( v8 > 0 ) /*0x952f87*/
  {
    v27 = -v41.m128_f32[3] - *(float *)(a2 + 0xC); /*0x952f95*/
    *(__m128 *)&v40[1] = _mm_shuffle_ps(v26, v26, 0xAA); /*0x952f9e*/
    v37 = v27; /*0x952fa3*/
    v43 = _mm_shuffle_ps(v26, v26, 0x55); /*0x952fb4*/
    v42 = _mm_shuffle_ps(v26, v26, 0); /*0x952fb9*/
    v28 = v9 + 0x138; /*0x952fbe*/
    v35 = a4; /*0x952fc4*/
    do /*0x953076*/
    {
      sub_9519C0((void *)(v28 - 0x138), (_DWORD *)(v28 + 8), *(__m128 **)(v28 + 0x2EB8), v44); /*0x952fe6*/
      v29 = v44[1]; /*0x95300d*/
      *(__m128 *)(*(_DWORD *)v28 + 0x10) = _mm_add_ps( /*0x953015*/
                                             _mm_add_ps(_mm_mul_ps(*a1, v42), _mm_mul_ps(a1[1], v43)),
                                             _mm_mul_ps(a1[2], *(__m128 *)&v40[1]));
      v30 = v37 - *(float *)(*(_DWORD *)(v28 - 4) + 0xC); /*0x953034*/
      *(__m128 *)*(_DWORD *)v28 = _mm_add_ps( /*0x953061*/
                                    _mm_add_ps(
                                      _mm_mul_ps(*a1, _mm_shuffle_ps(v29, v29, 0)),
                                      _mm_mul_ps(a1[1], _mm_shuffle_ps(v29, v29, 0x55))),
                                    _mm_add_ps(_mm_mul_ps(a1[2], _mm_shuffle_ps(v29, v29, 0xAA)), a1[3]));
      *(float *)(*(_DWORD *)v28 + 0x1C) = v30; /*0x953066*/
      v28 += 0x3000; /*0x953069*/
      --v35; /*0x953072*/
    }
    while ( v35 ); /*0x953076*/
  }
  v31 = *(_DWORD **)(v39 + 0x19C); /*0x953086*/
  v23 = v9 == v31[0xA]; /*0x95308c*/
  v31[8] = v9; /*0x95308f*/
  if ( v23 ) /*0x953092*/
    (*(void (__thiscall **)(_DWORD *, int))(*v31 + 0x10))(v31, v9); /*0x953097*/
  return 0; /*0x952f0a*/
}
