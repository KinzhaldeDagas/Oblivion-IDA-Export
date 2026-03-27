void __cdecl sub_88AC20(_DWORD *a1, int a2)
{
  float *v2; // edi
  int v3; // eax
  char v4; // al
  int v5; // esi
  int v6; // eax
  char v7; // al
  int v8; // esi
  __m128 *v9; // eax
  __m128 v10; // xmm1
  __m128 v11; // xmm0
  __m128 v12; // xmm2
  hkVector4 v13; // xmm1
  void (__thiscall *v14)(int, char *); // edx
  char v15[20]; // [esp+Ch] [ebp-34h] BYREF
  __m128 v16; // [esp+20h] [ebp-20h]

  if ( a1 )
  {
    v3 = (*(int (__thiscall **)(_DWORD *))(*a1 + 4))(a1);
    if ( v3 )
    {
      while ( (char *)v3 != dword_BA7A20 )
      {
        v3 = *(_DWORD *)(v3 + 4);
        if ( !v3 )
          goto LABEL_6;
      }
      v4 = 1;
    }
    else
    {
LABEL_6:
      v4 = 0;
    }
    v2 = v4 != 0 ? (float *)a1 : 0;
  }
  else
  {
    v2 = 0;
  }
  v5 = a1[4];
  if ( v5 )
  {
    v6 = (*(int (__thiscall **)(int))(*(_DWORD *)v5 + 4))(v5);
    if ( v6 )
    {
      while ( (char *)v6 != dword_BA7D84 )
      {
        v6 = *(_DWORD *)(v6 + 4);
        if ( !v6 )
          goto LABEL_12;
      }
      v7 = 1;
    }
    else
    {
LABEL_12:
      v7 = 0;
    }
    v8 = v7 != 0 ? v5 : 0;
    if ( v8 )
    {
      v9 = *(__m128 **)(a2 + 0xC);
      if ( v9 )
      {
        v10 = *v9;
        v16 = *v9;
        if ( !v2
          || v2[5] >= 1.0
          || 0.0 != v2[5]
          && (v11 = 0,
              v11.m128_f32[0] = v2[6],
              v12 = _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), v10),
              v13 = stru_BA7A40,
              v16 = v12,
              (_mm_movemask_ps(
                 _mm_cmplt_ps(
                   _mm_shuffle_ps((__m128)LODWORD(flt_A37080), (__m128)LODWORD(flt_A37080), 0),
                   _mm_and_ps(_mm_sub_ps(v12, (__m128)v13), (__m128)xmmword_A372D0)))
             & 7) != 0) )
        {
          (*(void (__thiscall **)(int, char *))(*(_DWORD *)v8 + 0x8C))(v8, &v15[4]);
          v14 = *(void (__thiscall **)(int, char *))(*(_DWORD *)v8 + 0x94);
          *(__m128 *)&v15[4] = _mm_add_ps(*(__m128 *)&v15[4], v16);
          v14(v8, &v15[4]);
        }
      }
    }
  }
}
