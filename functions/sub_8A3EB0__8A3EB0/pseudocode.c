unsigned int __cdecl sub_8A3EB0(int a1, __m128 *a2, float *a3)
{
  unsigned int result; // eax
  int v4; // esi
  unsigned int v5; // edi
  int v6; // esi
  int i; // eax
  int v8; // esi
  NiRTTI *v9; // eax
  char v10; // al
  _DWORD *v11; // esi
  __m128 v12; // xmm0
  __m128 v13; // xmm0
  float v14; // [esp+18h] [ebp-28h]
  float v15; // [esp+18h] [ebp-28h]
  float v16[8]; // [esp+1Ch] [ebp-24h] BYREF

  result = (unsigned int)a3; /*0x8a3ec4*/
  v4 = a1; /*0x8a3ecc*/
  if ( a1 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1); /*0x8a3ee7*/
    v5 = result; /*0x8a3ee9*/
    if ( result ) /*0x8a3eed*/
    {
      result = *(unsigned __int16 *)(result + 0xB6); /*0x8a3eef*/
      v6 = 0; /*0x8a3ef6*/
      if ( *(_WORD *)(v5 + 0xB6) ) /*0x8a3eef*/
      {
        if ( result ) /*0x8a3efe*/
          goto LABEL_6; /*0x8a3efe*/
        for ( i = 0; ; i = *(_DWORD *)(*(_DWORD *)(v5 + 0xB0) + 4 * v6) ) /*0x8a3f00*/
        {
          sub_8A3EB0(i, a2, a3); /*0x8a3f14*/
          result = *(unsigned __int16 *)(v5 + 0xB6); /*0x8a3f19*/
          if ( result <= ++v6 ) /*0x8a3f28*/
            break; /*0x8a3f28*/
LABEL_6:
          ; /*0x8a3f04*/
        }
      }
      v4 = a1; /*0x8a3f2a*/
    }
    v8 = *(_DWORD *)(v4 + 0xA8); /*0x8a3f2e*/
    if ( v8 )
    {
      v9 = (NiRTTI *)(*(int (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8); /*0x8a3f43*/
      if ( v9 ) /*0x8a3f47*/
      {
        while ( v9 != &MEMORY[0xBA7D24] ) /*0x8a3f55*/
        {
          v9 = v9->parent; /*0x8a3f5b*/
          if ( !v9 ) /*0x8a3f60*/
            goto LABEL_13; /*0x8a3f60*/
        }
        v10 = 1; /*0x8a3fec*/
      }
      else
      {
LABEL_13:
        v10 = 0; /*0x8a3f62*/
      }
      result = v10 != 0 ? v8 : 0;
      if ( result ) /*0x8a3f6a*/
      {
        v11 = *(_DWORD **)(result + 0x10); /*0x8a3f6c*/
        v16[0] = sub_535AC0(v11); /*0x8a3f76*/
        (*(void (__thiscall **)(_DWORD *, float *))(*v11 + 0xA8))(v11, &v16[1]); /*0x8a3f89*/
        result = (unsigned int)a3; /*0x8a3f8b*/
        v12 = 0; /*0x8a3f91*/
        v14 = *a3 + v16[0]; /*0x8a3f9e*/
        *a3 = v14; /*0x8a3fa6*/
        v15 = v16[0] / v14; /*0x8a3fad*/
        v12.m128_f32[0] = v15; /*0x8a3fb7*/
        v13 = _mm_shuffle_ps(v12, v12, 0); /*0x8a3fc2*/
        *a2 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v13), *a2), _mm_mul_ps(*(__m128 *)&v16[1], v13)); /*0x8a3fd7*/
      }
    }
  }
  return result; /*0x8a3fda*/
}
