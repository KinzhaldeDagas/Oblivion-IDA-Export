__m128 *__thiscall sub_90D0E0(__m128 *this, __m128 *a2)
{
  __int32 v3; // ebx
  int v4; // ebp

  sub_929D70(this, a2[3].m128_i32[0], a2[2].m128_i32[0]); /*0x90d0f3*/
  this->m128_i32[0] = (__int32)&off_A9C4D4; /*0x90d0f8*/
  *((_DWORD *)this + 0x12) = 0x80000000; /*0x90d0fe*/
  v3 = 0; /*0x90d105*/
  *((_DWORD *)this + 0x10) = 0; /*0x90d107*/
  *((_DWORD *)this + 0x11) = 0; /*0x90d10a*/
  *(this + 1) = a2[1]; /*0x90d111*/
  this->m128_i32[2] = a2->m128_i32[2]; /*0x90d118*/
  this->m128_i8[0xC] = a2->m128_i8[0xC]; /*0x90d11e*/
  if ( a2[2].m128_i32[2] > 0 ) /*0x90d124*/
  {
    v4 = 0; /*0x90d127*/
    do /*0x90d146*/
    {
      sub_90CAE0((const void **)this, v4 + a2[2].m128_i32[1]); /*0x90d138*/
      ++v3; /*0x90d140*/
      v4 += 0x30; /*0x90d141*/
    }
    while ( v3 < a2[2].m128_i32[2] ); /*0x90d146*/
  }
  return this; /*0x90d149*/
}
