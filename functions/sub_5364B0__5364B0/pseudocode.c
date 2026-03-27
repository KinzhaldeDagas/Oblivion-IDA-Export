void __cdecl sub_5364B0(int a1, __m128 *a2, float a3)
{
  int v3; // eax
  _DWORD *v4; // esi
  int v5; // eax
  int v6; // eax
  unsigned int v7; // eax
  __m128 v8; // xmm1
  int v9; // esi
  __m128 v10; // xmm0
  float v11; // xmm2_4
  float v12; // xmm3_4
  __m128 v13; // xmm0
  __m128 v14; // xmm1
  int v15; // eax
  int v16; // edi
  int v17; // eax
  int v18; // esi
  int i; // eax
  float v20; // [esp+18h] [ebp-24h]
  __m128 v21; // [esp+1Ch] [ebp-20h] BYREF

  if ( a1 )
  {
    v3 = sub_47FAC0(a1);
    if ( v3 )
    {
      v4 = *(_DWORD **)(v3 + 0x10);
      if ( v4 )
      {
        v5 = v4[2];
        if ( v5 && (v6 = v5 + 0x14) != 0 )
          v7 = *(_DWORD *)(v6 + 0x1C);
        else
          v7 = 0;
        v20 = *(float *)(4 * ((v7 >> 8) & 0x1F) + 0xB11760) * a3;
        (*(void (__thiscall **)(_DWORD *, __m128 *))(*v4 + 0xA8))(v4, &v21);
        v8 = _mm_sub_ps(v21, *a2);
        v9 = v4[2];
        v10 = _mm_mul_ps(v8, v8);
        v10.m128_f32[0] = _mm_shuffle_ps(v10, v10, 0xAA).m128_f32[0]
                        + (float)(_mm_shuffle_ps(v10, v10, 0x55).m128_f32[0] + v10.m128_f32[0]);
        v11 = 1.0 / fsqrt(v10.m128_f32[0]);
        v12 = *(float *)&dword_A46C30 - (float)((float)(v10.m128_f32[0] * v11) * v11);
        v13 = 0;
        v13.m128_f32[0] = (float)(flt_A3D65C * v11) * v12;
        v21 = _mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), v8);
        v14 = 0;
        v20 = (*(float *)(*(_DWORD *)(v9 + 0x50) + 0xC8) * dbl_A3C770 + dbl_A31C70) * v20;
        v14.m128_f32[0] = v20;
        v21 = _mm_mul_ps(_mm_shuffle_ps(v14, v14, 0), v21);
        v21 = _mm_add_ps(*(__m128 *)(*(_DWORD *)(v9 + 0x50) + 0xD0), v21);
        sub_8A6410(v9);
        (*(void (__thiscall **)(_DWORD, __m128 *))(**(_DWORD **)(v9 + 0x50) + 0x54))(*(_DWORD *)(v9 + 0x50), &v21);
      }
    }
    v15 = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 8))(a1);
    v16 = v15;
    if ( v15 )
    {
      v17 = *(unsigned __int16 *)(v15 + 0xB6);
      v18 = 0;
      if ( *(_WORD *)(v16 + 0xB6) )
      {
        if ( v17 )
          goto LABEL_13;
        for ( i = 0; ; i = *(_DWORD *)(*(_DWORD *)(v16 + 0xB0) + 4 * v18) )
        {
          sub_5364B0(i, (int)a2, a3);
          if ( *(unsigned __int16 *)(v16 + 0xB6) <= (unsigned int)++v18 )
            break;
LABEL_13:
          ;
        }
      }
    }
  }
}
