__m128 *__thiscall sub_90D0E0(__m128 *this, __m128 *a2)
{
  __int32 v3; // ebx
  int v4; // ebp

  sub_929D70(this, a2[3].m128_i32[0], a2[2].m128_i32[0]);
  this->m128_i32[0] = (__int32)&off_A9C4D4;
  *((_DWORD *)this + 0x12) = 0x80000000;
  v3 = 0;
  *((_DWORD *)this + 0x10) = 0;
  *((_DWORD *)this + 0x11) = 0;
  *(this + 1) = a2[1];
  this->m128_i32[2] = a2->m128_i32[2];
  this->m128_i8[0xC] = a2->m128_i8[0xC];
  if ( a2[2].m128_i32[2] > 0 )
  {
    v4 = 0;
    do
    {
      sub_90CAE0((const void **)this, v4 + a2[2].m128_i32[1]);
      ++v3;
      v4 += 0x30;
    }
    while ( v3 < a2[2].m128_i32[2] );
  }
  return this;
}
