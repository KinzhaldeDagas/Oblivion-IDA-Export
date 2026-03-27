_DWORD *__thiscall sub_90A260(_DWORD *this, int *a2, _DWORD *a3, int *a4, int a5)
{
  const void **v5; // ebx
  int *v6; // esi
  int v7; // eax
  __m128 *v8; // edi
  int v9; // ecx
  int v10; // eax
  int v11; // eax
  __m128 *v12; // ecx
  int v13; // edi
  __m128 *v14; // eax
  __m128 v15; // xmm0
  __m128 v16; // xmm1
  const void *v17; // eax
  char *v18; // edx
  char *v19; // eax
  int v20; // edx
  int v21; // esi
  int v22; // eax
  int v23; // ecx
  int v25; // [esp+Ch] [ebp-E4h]
  __m128 *v26; // [esp+10h] [ebp-E0h]
  int v28; // [esp+18h] [ebp-D8h]
  char *v29; // [esp+1Ch] [ebp-D4h]
  _DWORD v30[4]; // [esp+20h] [ebp-D0h] BYREF
  _DWORD v31[4]; // [esp+30h] [ebp-C0h] BYREF
  __m128 v32[11]; // [esp+40h] [ebp-B0h] BYREF

  *(this + 2) = a5;
  *((_WORD *)this + 3) = 1;
  *this = &off_A9BF10;
  v5 = (const void **)(this + 3);
  v6 = a2;
  *(this + 3) = this + 6;
  *(this + 4) = 0;
  *(this + 5) = 0x80000004;
  v7 = *(this + 5);
  v8 = (__m128 *)*a2;
  v9 = *(_DWORD *)(*a2 + 0xC);
  v10 = v7 & 0x3FFFFFFF;
  v28 = v9;
  if ( v10 < v9 )
  {
    v11 = 2 * v10;
    if ( v9 >= v11 )
      v11 = *(_DWORD *)(*a2 + 0xC);
    sub_8A6E40(v5, v11, 8);
  }
  sub_8ED410(v30, 0);
  sub_903FA0((char *)v32, (_OWORD *)a2[2]);
  v31[2] = v32;
  v12 = v8 + 1;
  v13 = 0;
  v31[3] = a2;
  v26 = v12;
  if ( v28 > 0 )
  {
    while ( 1 )
    {
      v14 = (__m128 *)v6[2];
      v15 = _mm_add_ps(
              _mm_add_ps(
                _mm_mul_ps(v32[0], _mm_shuffle_ps(*v12, *v12, 0)),
                _mm_mul_ps(v32[1], _mm_shuffle_ps(*v12, *v12, 0x55))),
              _mm_mul_ps(v32[2], _mm_shuffle_ps(*v12, *v12, 0xAA)));
      v32[3] = _mm_add_ps(v14[3], v15);
      v32[4] = _mm_add_ps(v14[4], v15);
      v16 = v14[5];
      v17 = v5[1];
      v32[5] = _mm_add_ps(v16, v15);
      v30[3] = v12->m128_i32[3];
      v31[0] = v30;
      v18 = (char *)*v5;
      v5[1] = (char *)v17 + 1;
      v19 = &v18[8 * (_DWORD)v17];
      v20 = *a4;
      v29 = v19;
      v31[1] = v13;
      v25 = v20;
      v21 = (*(int (__thiscall **)(_DWORD *))(v30[0] + 8))(v30);
      v22 = (*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a3 + 8))(*a3);
      v23 = *((_BYTE *)a4 + 0xC) ? v25 + 0x590 : v25 + 0x190;
      *((_DWORD *)v29 + 1) = (*(int (__cdecl **)(_DWORD *, _DWORD *, int *, int))(v25
                                                                                + 0x14
                                                                                * *(unsigned __int8 *)(v23 + 0x20 * v21 + v22)
                                                                                + 0x990))(
                               v31,
                               a3,
                               a4,
                               a5);
      *(_DWORD *)v29 = v13++;
      ++v26;
      if ( v13 >= v28 )
        break;
      v6 = a2;
      v12 = v26;
    }
  }
  return this;
}
