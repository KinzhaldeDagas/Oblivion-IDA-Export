int __thiscall sub_901F30(_DWORD *this, __m128 *a2, int a3)
{
  int v4; // eax
  int v5; // esi
  int v6; // ecx
  __m128 v7; // xmm0
  int result; // eax
  float v9; // [esp+14h] [ebp-1Ch]
  _QWORD v10[3]; // [esp+18h] [ebp-18h] BYREF

  v4 = 0; /*0x901f41*/
  v5 = 0; /*0x901f43*/
  v10[0] = 0xFF7FFFFFLL; /*0x901f47*/
  if ( (int)*(this + 5) > 0 ) /*0x901f53*/
  {
    do /*0x901fbc*/
    {
      v6 = *(_DWORD *)(*(this + 4) + 8 * v5); /*0x901f5b*/
      (*(void (__thiscall **)(int, __m128 *, _QWORD *))(*(_DWORD *)v6 + 0x24))(v6, a2, &v10[1]); /*0x901f66*/
      v7 = _mm_mul_ps(*(__m128 *)&v10[1], *a2); /*0x901f74*/
      v9 = _mm_shuffle_ps(v7, v7, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]); /*0x901f91*/
      if ( v9 > (double)*(float *)v10 ) /*0x901fa2*/
      {
        *(float *)v10 = v9; /*0x901fab*/
        *(_OWORD *)a3 = *(_OWORD *)&v10[1]; /*0x901faf*/
        HIDWORD(v10[0]) = v5; /*0x901fb2*/
      }
      ++v5; /*0x901fb9*/
    }
    while ( v5 < *(this + 5) ); /*0x901fbc*/
    v4 = HIDWORD(v10[0]); /*0x901fbe*/
  }
  result = v4 << 8; /*0x901fce*/
  *(_DWORD *)(a3 + 0xC) = (result + (*(_DWORD *)(a3 + 0xC) & 0xC0FFFFFF)) | 0x3F000000; /*0x901fdb*/
  return result; /*0x901fd1*/
}
