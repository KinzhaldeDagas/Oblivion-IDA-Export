int __thiscall sub_91ADB0(_DWORD *this, int a2)
{
  int result; // eax
  int v3; // edx
  int v4; // edx
  _DWORD **i; // esi
  int j; // esi
  int v7; // eax
  int v8; // esi
  int v9; // ebx
  __m128 *v10; // edi
  __m128 v11; // xmm0
  __m128 v12; // xmm1
  int v13; // edi
  __m128 v14; // xmm0
  __m128 v15; // xmm1
  _DWORD *v16; // edi
  int v17; // ecx
  int v18; // ebx
  int k; // esi
  void (__thiscall ***v20)(_DWORD, int); // ecx
  int v21; // ecx
  float *v22; // [esp+38h] [ebp-2E4h]
  int v23; // [esp+38h] [ebp-2E4h]
  _DWORD *v24; // [esp+50h] [ebp-2CCh] BYREF
  int v25; // [esp+54h] [ebp-2C8h]
  int v26; // [esp+58h] [ebp-2C4h]
  _DWORD *v27; // [esp+5Ch] [ebp-2C0h]
  int v28; // [esp+60h] [ebp-2BCh]
  int *v29[3]; // [esp+64h] [ebp-2B8h] BYREF
  _DWORD v30[2]; // [esp+70h] [ebp-2ACh] BYREF
  __int128 v31; // [esp+78h] [ebp-2A4h] BYREF
  __m128 v32[4]; // [esp+8Ch] [ebp-290h] BYREF
  __m128 v33[4]; // [esp+CCh] [ebp-250h] BYREF
  char v34[516]; // [esp+114h] [ebp-208h] BYREF

  result = a2;
  v3 = *(_DWORD *)(a2 + 0x14);
  v27 = this;
  if ( v3 )
  {
    v4 = *(this + 3);
    result = 0;
    if ( v4 > 0 )
    {
      for ( i = (_DWORD **)*(this + 2); **i != *(_DWORD *)(a2 + 8); ++i )
      {
        if ( ++result >= v4 )
          return result;
      }
      if ( result >= 0 )
      {
        v28 = *(_DWORD *)(*(this + 2) + 4 * result);
        v24 = 0;
        v25 = 0;
        v26 = 0x80000000;
        sub_94A520(v30);
        sub_94A530(&v31, v30);
        sub_94B7E0(&v31, *(__m128 **)(a2 + 0x14), &v24);
        for ( j = v25 - 1; j >= 0; --j )
        {
          v7 = v24[j];
          if ( *(_DWORD *)(v7 + 0x54) == 6 && !*(_DWORD *)(v7 + 0x50) )
          {
            sub_8BBFB0((int)v29, 6, v34, 0x200u, 1);
            sub_8BBDB0(v29, "Unable to build display geometry from hkShape geometry data");
            (*(void (__thiscall **)(int, _DWORD, unsigned int, char *, const char *, int))(*(_DWORD *)dword_BA7FB0 + 8))(
              dword_BA7FB0,
              0,
              0xFFFFFFFF,
              v34,
              ".\\visualdebugger\\viewer\\hkSweptTransformDisplayViewer.cpp",
              0xA8);
            sub_8BC000(v29);
            v24[j] = v24[--v25];
          }
        }
        if ( v25 > 0 && !*(_BYTE *)(a2 + 0x91) )
        {
          v8 = v28 + 4;
          v9 = a2 + 0x15;
          if ( *(_DWORD *)(v28 + 8) == (*(_DWORD *)(v28 + 0xC) & 0x3FFFFFFF) )
            sub_8A6EE0((const void **)(v28 + 4), 4);
          *(_DWORD *)(*(_DWORD *)v8 + 4 * (*(_DWORD *)(v8 + 4))++) = v9;
          v10 = (__m128 *)(*(_DWORD *)(a2 + 0x50) + 0x50);
          sub_8B1DD0(v32[0].m128_f32, (float *)(*(_DWORD *)(a2 + 0x50) + 0x70));
          v11 = v10[4];
          v12 = *v10;
          v13 = *(_DWORD *)(a2 + 0x50) + 0x50;
          v22 = (float *)(*(_DWORD *)(a2 + 0x50) + 0x80);
          v32[3] = _mm_sub_ps(
                     v12,
                     _mm_add_ps(
                       _mm_add_ps(
                         _mm_mul_ps(v32[0], _mm_shuffle_ps(v11, v11, 0)),
                         _mm_mul_ps(v32[1], _mm_shuffle_ps(v11, v11, 0x55))),
                       _mm_mul_ps(v32[2], _mm_shuffle_ps(v11, v11, 0xAA))));
          sub_8B1DD0(v33[0].m128_f32, v22);
          v14 = *(__m128 *)(v13 + 0x40);
          v23 = dword_BA8420;
          v15 = *(__m128 *)(v13 + 0x10);
          v16 = v27;
          v17 = v27[0xFFFFFFFC];
          v33[3] = _mm_sub_ps(
                     v15,
                     _mm_add_ps(
                       _mm_add_ps(
                         _mm_mul_ps(v33[0], _mm_shuffle_ps(v14, v14, 0)),
                         _mm_mul_ps(v33[1], _mm_shuffle_ps(v14, v14, 0x55))),
                       _mm_mul_ps(v33[2], _mm_shuffle_ps(v14, v14, 0xAA))));
          (*(void (__thiscall **)(int, _DWORD **, __m128 *, int, int))(*(_DWORD *)v17 + 4))(v17, &v24, v32, v9, v23);
          (*(void (__thiscall **)(_DWORD, int, int, int))(*(_DWORD *)v16[0xFFFFFFFC] + 8))(
            v16[0xFFFFFFFC],
            dword_BA8428,
            v9,
            dword_BA8420);
          v18 = a2 + 0x16;
          if ( *(_DWORD *)(v8 + 4) == (*(_DWORD *)(v8 + 8) & 0x3FFFFFFF) )
            sub_8A6EE0((const void **)v8, 4);
          *(_DWORD *)(*(_DWORD *)v8 + 4 * (*(_DWORD *)(v8 + 4))++) = v18;
          (*(void (__thiscall **)(_DWORD, _DWORD **, __m128 *, int, int))(*(_DWORD *)v16[0xFFFFFFFC] + 4))(
            v16[0xFFFFFFFC],
            &v24,
            v33,
            v18,
            dword_BA8420);
          (*(void (__thiscall **)(_DWORD, int, int, int))(*(_DWORD *)v16[0xFFFFFFFC] + 8))(
            v16[0xFFFFFFFC],
            dword_BA8424,
            v18,
            dword_BA8420);
        }
        for ( k = 0; k < v25; ++k )
        {
          v20 = (void (__thiscall ***)(_DWORD, int))v24[k];
          if ( v20 )
            (**v20)(v20, 1);
        }
        result = v26;
        if ( v26 >= 0 )
        {
          v21 = *(_DWORD *)(*((_DWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + TlsIndex) + 0x19C);
          if ( !v21 )
            v21 = dword_BA7D9C;
          return sub_8A75D0(v21, v24, 4 * v26, 0x14);
        }
      }
    }
  }
  return result;
}
