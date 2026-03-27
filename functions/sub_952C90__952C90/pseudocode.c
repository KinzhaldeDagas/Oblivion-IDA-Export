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
  int v38; // [esp+24h] [ebp-7Ch]
  int v39; // [esp+28h] [ebp-78h]
  _DWORD v40[5]; // [esp+2Ch] [ebp-74h] BYREF
  __m128 v41; // [esp+40h] [ebp-60h] BYREF
  __m128 v42; // [esp+50h] [ebp-50h]
  __m128 v43; // [esp+60h] [ebp-40h]
  __m128 v44[3]; // [esp+70h] [ebp-30h] BYREF

  v6 = *((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex);
  v7 = *(_DWORD **)(v6 + 0x19C);
  v8 = a4;
  v39 = v6;
  v9 = v7[8];
  v10 = v9 + ((0x3000 * a4 + 0x10) & 0xFFFFFFF0);
  if ( v10 > v7[0xB] )
  {
    v36 = (*(int (__thiscall **)(_DWORD *, unsigned int))(*v7 + 0xC))(v7, (0x3000 * a4 + 0x10) & 0xFFFFFFF0);
    v9 = v36;
  }
  else
  {
    v7[8] = v10;
    v36 = v9;
  }
  v33 = 0;
  if ( a4 > 0 )
  {
    v11 = a3;
    LODWORD(v12) = a6 - (_DWORD)a3;
    v13 = _mm_shuffle_ps((__m128)0x38D1B717u, (__m128)0x38D1B717u, 0);
    *(__m128 *)&v40[1] = v13;
    v38 = (int)a3;
    v14 = (_DWORD *)(v9 + 0x138);
    LODWORD(v37) = a6 - (_DWORD)a3;
    while ( 1 )
    {
      v14[0xFFFFFFFF] = *v11;
      *v14 = *(_DWORD *)((char *)v11 + LODWORD(v12));
      v14[0xFFFFFFFE] = 0;
      v15 = *v11;
      v16 = v14 + 0xFFFFFFB2;
      *(_OWORD *)(v14 + 0xFFFFFFB2) = *a5;
      *(_OWORD *)(v14 + 0xFFFFFFB6) = a5[1];
      *(_OWORD *)(v14 + 0xFFFFFFBA) = a5[2];
      v17 = a5[3];
      v14[0xFFFFFFC7] = a2;
      v14[0xFFFFFFC8] = v15;
      v14[0xFFFFFFCA] = v14 + 0xFFFFFFCE;
      v14[0xFFFFFFCB] = v14 + 0xFFFFFFDE;
      v14[0xFFFFFFCD] = v14 + 0xFFFFFFFE;
      v14[0xFFFFFFCC] = v14 + 0xFFFFFFEE;
      *(_OWORD *)(v14 + 0xFFFFFFBE) = v17;
      *(__m128 *)(v14 + 0xFFFFFFC2) = v13;
      v14[0xFFFFFFC6] = 0x322BCC76;
      v14[0xFFFFFFC9] = 0;
      if ( sub_952480((_DWORD **)v14 + 0xFFFFFFB2, v44, v40) == 1 )
      {
        --a4;
      }
      else
      {
        v14 += 0xC00;
        sub_951BD0((int)(v16 + 0x14), v16 + 7, v16 + 0xB, v16 + 0xF);
      }
      v18 = ++v33 < a4;
      v38 += 4;
      if ( !v18 )
        break;
      v13 = *(__m128 *)&v40[1];
      v12 = v37;
      v11 = (_DWORD *)v38;
    }
    v9 = v36;
    v8 = a4;
  }
  if ( v8 <= 2 )
  {
    if ( v8 < 2 )
    {
      v25 = *(_DWORD **)(v39 + 0x19C);
      v23 = v9 == v25[0xA];
      v25[8] = v9;
      if ( v23 )
        (*(void (__thiscall **)(_DWORD *, int))(*v25 + 0x10))(v25, v9);
      return 1;
    }
  }
  else
  {
    a4 = 2;
    v8 = 2;
  }
  while ( 2 )
  {
    sub_959090(v9 + 0x140, v9 + 0x3140, &v41, (__m128 **)(v9 + 0x2FF0), (__m128 **)(v9 + 0x5FF0));
    v32 = 0;
    v34 = 0;
    if ( v8 > 0 )
    {
      v19 = v9 + 0x148;
      do
      {
        v20 = *(_DWORD *)v19;
        if ( *(int *)v19 < 0x37 )
        {
          v21 = (__m128 *)((v20 << 6) + v19 - 8 + 0x20);
          *(_DWORD *)v19 = v20 + 1;
          *(_DWORD *)((v20 << 6) + v19 - 8 + 0x50) = 0;
          sub_951D00((__m128 *)(v19 - 0x148), *(__m128 **)(v19 + 0x2EA8), v21);
          if ( sub_9518B0((__m128 *)(v19 - 0x148), v19 - 8, *(_DWORD *)(v19 + 0x2EA8), v21, &v37) == 1 )
          {
            if ( LODWORD(v37) == 3 )
            {
              v22 = *(_DWORD **)(v39 + 0x19C);
              v23 = v36 == v22[0xA];
              v22[8] = v36;
              if ( v23 )
                (*(void (__thiscall **)(_DWORD *, int))(*v22 + 0x10))(v22, v36);
              return 1;
            }
          }
          else
          {
            v32 = 1;
          }
          v9 = v36;
          v8 = a4;
        }
        v19 += 0x3000;
        ++v34;
      }
      while ( v34 < v8 );
      if ( v32 )
        continue;
    }
    break;
  }
  v26 = _mm_xor_ps(v41, (__m128)xmmword_A965C0);
  if ( v8 > 0 )
  {
    v27 = -v41.m128_f32[3] - *(float *)(a2 + 0xC);
    *(__m128 *)&v40[1] = _mm_shuffle_ps(v26, v26, 0xAA);
    v37 = v27;
    v43 = _mm_shuffle_ps(v26, v26, 0x55);
    v42 = _mm_shuffle_ps(v26, v26, 0);
    v28 = v9 + 0x138;
    v35 = a4;
    do
    {
      sub_9519C0((void *)(v28 - 0x138), (_DWORD *)(v28 + 8), *(__m128 **)(v28 + 0x2EB8), v44);
      v29 = v44[1];
      *(__m128 *)(*(_DWORD *)v28 + 0x10) = _mm_add_ps(
                                             _mm_add_ps(_mm_mul_ps(*a1, v42), _mm_mul_ps(a1[1], v43)),
                                             _mm_mul_ps(a1[2], *(__m128 *)&v40[1]));
      v30 = v37 - *(float *)(*(_DWORD *)(v28 - 4) + 0xC);
      *(__m128 *)*(_DWORD *)v28 = _mm_add_ps(
                                    _mm_add_ps(
                                      _mm_mul_ps(*a1, _mm_shuffle_ps(v29, v29, 0)),
                                      _mm_mul_ps(a1[1], _mm_shuffle_ps(v29, v29, 0x55))),
                                    _mm_add_ps(_mm_mul_ps(a1[2], _mm_shuffle_ps(v29, v29, 0xAA)), a1[3]));
      *(float *)(*(_DWORD *)v28 + 0x1C) = v30;
      v28 += 0x3000;
      --v35;
    }
    while ( v35 );
  }
  v31 = *(_DWORD **)(v39 + 0x19C);
  v23 = v9 == v31[0xA];
  v31[8] = v9;
  if ( v23 )
    (*(void (__thiscall **)(_DWORD *, int))(*v31 + 0x10))(v31, v9);
  return 0;
}
