void __thiscall sub_913D30(_DWORD *this, _OWORD *a2, float *a3)
{
  DWORD CurrentThreadId; // eax
  __m128 *v5; // eax
  __m128 v6; // xmm0

  EnterCriticalSection(&stru_BA8380);
  CurrentThreadId = GetCurrentThreadId();
  ++dword_BA83FC;
  dword_BA83F8 = CurrentThreadId;
  *a3 = *(float *)(*(this + 4) + 0x1C);
  *a2 = *(_OWORD *)(*(this + 4) + 0x10);
  if ( 1.0 != *((float *)this + 5) )
  {
    v5 = (__m128 *)*(this + 4);
    v6 = 0;
    v6.m128_f32[0] = *((float *)this + 5);
    v5[1] = _mm_mul_ps(_mm_shuffle_ps(v6, v6, 0), v5[1]);
    v5[1].m128_f32[3] = *a3 / *((float *)this + 5);
  }
}
