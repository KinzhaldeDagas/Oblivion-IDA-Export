char __cdecl sub_88D3D0(__m128 **a1, int a2)
{
  __m128 *v2; // eax
  __m128 **i; // ecx
  int v4; // eax
  __m128 v5; // xmm0
  __m128 *v7; // esi
  __int32 v8; // esi
  int v9; // esi
  __m128 v10; // [esp+10h] [ebp-20h] BYREF

  v2 = a1[3];
  for ( i = a1; v2; v2 = (__m128 *)v2->m128_i32[3] )
    i = (__m128 **)v2;
  if ( *((_BYTE *)i + 0x18) == 1 )
  {
    v4 = sub_8AFC40((int *)a1);
    if ( v4 )
    {
      if ( *(_DWORD *)(v4 + 8) )
      {
        sub_88FE00(&v10, a1[2], *a1 + 4);
        v5 = _mm_mul_ps(*(__m128 *)(*(_DWORD *)(a2 + 0x10) + 0x10), v10);
        v10.m128_f32[0] = _mm_shuffle_ps(v5, v5, 0xAA).m128_f32[0]
                        + (float)(_mm_shuffle_ps(v5, v5, 0x55).m128_f32[0] + v5.m128_f32[0]);
        if ( v10.m128_f32[0] < 0.0 )
          return 1;
      }
      else
      {
        v7 = a1[3];
        if ( v7 )
        {
          v8 = v7->m128_i32[0];
          v9 = v8 ? *(_DWORD *)(v8 + 8) : 0;
          if ( sub_435CC0((int)dword_BA7FA8, v9) && *(float *)(*(_DWORD *)(a2 + 0x10) + 0x18) < 0.0 )
            return 1;
        }
      }
    }
  }
  return 0;
}
