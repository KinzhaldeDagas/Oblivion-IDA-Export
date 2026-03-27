_DWORD *__thiscall sub_8AC1E0(__m128 *this, int a2)
{
  int (__stdcall ***v3)(signed int); // ecx
  __m128 v4; // xmm1
  __m128 v5; // xmm0
  float v6; // xmm3_4
  __m128 v7; // xmm0
  int v8; // ecx
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // edi
  int v13; // edx
  int v14; // ecx
  _DWORD *result; // eax
  _DWORD *i; // edx
  float v17; // [esp+0h] [ebp-24h]
  float v18; // [esp+14h] [ebp-10h]

  sub_8BC720(*(_WORD **)(a2 + 0x48));
  v3 = *((int (__stdcall ****)(signed int))this + 0xC);
  if ( v3 )
    sub_8BC730(v3);
  *(this + 1) = *(__m128 *)(a2 + 0x10);
  *((_DWORD *)this + 0xD) = *(_DWORD *)(a2 + 0x20);
  *((_DWORD *)this + 0xE) = *(_DWORD *)(a2 + 0x24);
  *((_DWORD *)this + 0x17) = *(_DWORD *)(a2 + 0x28);
  *((_DWORD *)this + 0x14) = *(_DWORD *)(a2 + 0x40);
  *((_DWORD *)this + 0x15) = *(_DWORD *)(a2 + 0x44);
  *((_DWORD *)this + 0x16) = *(_DWORD *)(a2 + 0x4C);
  *((_DWORD *)this + 0xC) = *(_DWORD *)(a2 + 0x48);
  *((_DWORD *)this + 0x18) = *(_DWORD *)(a2 + 0x50);
  *((_DWORD *)this + 0x19) = *(_DWORD *)(a2 + 0x54);
  *((_DWORD *)this + 0x1A) = *(_DWORD *)(a2 + 0x58);
  *((_DWORD *)this + 0x1B) = *(_DWORD *)(a2 + 0x5C);
  *((_DWORD *)this + 0x1C) = *(_DWORD *)(a2 + 0x60);
  *((float *)this + 0x29) = cos(*(float *)(a2 + 0x64));
  *((_DWORD *)this + 0x2A) = *(_DWORD *)(a2 + 0x68);
  *(this + 4) = *(__m128 *)(a2 + 0x30);
  v4 = *(this + 4);
  v5 = _mm_mul_ps(v4, v4);
  v5.m128_f32[0] = _mm_shuffle_ps(v5, v5, 0xAA).m128_f32[0]
                 + (float)(_mm_shuffle_ps(v5, v5, 0x55).m128_f32[0] + v5.m128_f32[0]);
  v18 = 1.0 / fsqrt(v5.m128_f32[0]);
  v6 = 3.0 - (float)((float)(v5.m128_f32[0] * v18) * v18);
  v7 = (__m128)0x3F000000u;
  v7.m128_f32[0] = (float)(0.5 * v18) * v6;
  *(this + 4) = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), v4);
  v8 = *((_DWORD *)this + 0xC);
  if ( *(_DWORD *)(v8 + 8) )
  {
    if ( v8 )
    {
      v17 = *((float *)this + 0x17) + *((float *)this + 0x16);
      sub_8ABAC0(v8, (_OWORD *)a2, v17);
    }
  }
  v9 = *((_DWORD *)this + 0x24);
  v10 = 0;
  *((_OWORD *)this + 2) = 0;
  if ( v9 > 0 )
  {
    do
      sub_8A6300(*(int **)(*((_DWORD *)this + 0x23) + 4 * v10++), (int)&this->m128_i32[2]);
    while ( v10 < *((_DWORD *)this + 0x24) );
  }
  v11 = *((_DWORD *)this + 0x27);
  v12 = 0;
  *((_DWORD *)this + 0x24) = 0;
  if ( v11 > 0 )
  {
    do
      sub_8DE670(*(_DWORD **)(*((_DWORD *)this + 0x26) + 4 * v12++), (int)&this->m128_i32[3]);
    while ( v12 < *((_DWORD *)this + 0x27) );
  }
  v13 = *((_DWORD *)this + 0xC);
  *((_DWORD *)this + 0x27) = 0;
  *((_DWORD *)this + 0x1E) = 0;
  v14 = *(_DWORD *)(v13 + 0x48);
  result = 0;
  if ( v14 <= 0 )
    return sub_8BC750(*((_DWORD **)this + 0xC), 0x1300, (int)this, 0);
  for ( i = *(_DWORD **)(v13 + 0x44); *i != 0x1300; i += 4 )
  {
    result = (_DWORD *)((char *)result + 1);
    if ( (int)result >= v14 )
      return sub_8BC750(*((_DWORD **)this + 0xC), 0x1300, (int)this, 0);
  }
  return result;
}
