void __thiscall sub_913D30(float *this, _OWORD *a2, float *a3)
{
  DWORD CurrentThreadId; // eax
  __m128 *v5; // eax
  __m128 v6; // xmm0

  EnterCriticalSection(&unk_BA8380); /*0x913d47*/
  CurrentThreadId = GetCurrentThreadId(); /*0x913d4d*/
  ++unk_BA83FC; /*0x913d53*/
  unk_BA83F8 = CurrentThreadId; /*0x913d5a*/
  *a3 = *(float *)(*((_DWORD *)this + 4) + 0x1C); /*0x913d65*/
  *a2 = *(_OWORD *)(*((_DWORD *)this + 4) + 0x10); /*0x913d70*/
  if ( 1.0 != *(this + 5) ) /*0x913d7b*/
  {
    v5 = *((__m128 **)this + 4); /*0x913d82*/
    v6 = 0; /*0x913d85*/
    v6.m128_f32[0] = *(this + 5); /*0x913d88*/
    v5[1] = _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), v5[1]); /*0x913d9a*/
    v5[1].m128_f32[3] = *a3 / *(this + 5); /*0x913da3*/
  }
}
