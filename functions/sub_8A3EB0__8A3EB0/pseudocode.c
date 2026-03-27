unsigned int __cdecl sub_8A3EB0(int a1, __m128 *a2, float *a3)
{
  unsigned int result; // eax
  int v4; // esi
  unsigned int v5; // edi
  int v6; // esi
  int i; // eax
  int v8; // esi
  int v9; // eax
  char v10; // al
  _DWORD *v11; // esi
  __m128 v12; // xmm0
  __m128 v13; // xmm0
  float v14; // [esp+18h] [ebp-28h]
  float v15; // [esp+18h] [ebp-28h]
  float v16[8]; // [esp+1Ch] [ebp-24h] BYREF

  result = (unsigned int)a3;
  v4 = a1;
  if ( a1 )
  {
    result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
    v5 = result;
    if ( result )
    {
      result = *(unsigned __int16 *)(result + 0xB6);
      v6 = 0;
      if ( *(_WORD *)(v5 + 0xB6) )
      {
        if ( result )
          goto LABEL_6;
        for ( i = 0; ; i = *(_DWORD *)(*(_DWORD *)(v5 + 0xB0) + 4 * v6) )
        {
          sub_8A3EB0(i, a2, a3);
          result = *(unsigned __int16 *)(v5 + 0xB6);
          if ( result <= ++v6 )
            break;
LABEL_6:
          ;
        }
      }
      v4 = a1;
    }
    v8 = *(_DWORD *)(v4 + 0xA8);
    if ( v8 )
    {
      v9 = (*(int (__thiscall **)(int))(*(_DWORD *)v8 + 4))(v8);
      if ( v9 )
      {
        while ( (char *)v9 != dword_BA7D24 )
        {
          v9 = *(_DWORD *)(v9 + 4);
          if ( !v9 )
            goto LABEL_13;
        }
        v10 = 1;
      }
      else
      {
LABEL_13:
        v10 = 0;
      }
      result = v10 != 0 ? v8 : 0;
      if ( result )
      {
        v11 = *(_DWORD **)(result + 0x10);
        v16[0] = sub_535AC0(v11);
        (*(void (__thiscall **)(_DWORD *, float *))(*v11 + 0xA8))(v11, &v16[1]);
        result = (unsigned int)a3;
        v12 = 0;
        v14 = *a3 + v16[0];
        *a3 = v14;
        v15 = v16[0] / v14;
        v12.m128_f32[0] = v15;
        v13 = _mm_shuffle_ps(v12, v12, 0);
        *a2 = _mm_add_ps(_mm_mul_ps(_mm_sub_ps((__m128)xmmword_A6DFE0, v13), *a2), _mm_mul_ps(*(__m128 *)&v16[1], v13));
      }
    }
  }
  return result;
}
