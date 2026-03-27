void __thiscall sub_89F150(Atmosphere *this)
{
  _DWORD *unk10; // ebx
  NiAVObject *v2; // eax
  int v3; // ecx
  __m128 v4; // xmm0
  double v5; // rt0
  float v6; // xmm2_4
  __m128 v7; // xmm0
  __m128 v8; // xmm1
  DWORD CurrentThreadId; // eax
  _DWORD *v10; // esi
  float v12[13]; // [esp+Ch] [ebp-74h] BYREF
  __m128 v13; // [esp+40h] [ebp-40h]
  __m128 v14; // [esp+50h] [ebp-30h] BYREF
  __m128 v15; // [esp+60h] [ebp-20h]

  unk10 = (_DWORD *)this->unk10;
  if ( unk10 )
  {
    if ( unk10[2] )
    {
      v2 = sub_452A60(this);
      if ( v2 )
      {
        qmemcpy(v12, &v2->members.m_worldTransform, sizeof(v12));
        v3 = unk10[2];
        if ( v3 )
          (*(void (__thiscall **)(int, __m128 *))(*(_DWORD *)v3 + 0x14))(v3, &v14);
        v4 = 0;
        v5 = hkFactor;
        v4.m128_f32[0] = flt_A3D65C;
        v13.m128_f32[0] = v12[9] * v5;
        v6 = flt_A30634;
        v7 = _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), _mm_sub_ps(v15, v14));
        v8 = 0;
        v13.m128_f32[1] = v12[0xA] * v5;
        v8.m128_f32[0] = v6;
        v13.m128_f32[2] = v5 * v12[0xB];
        v14 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), v7), v13);
        v15 = _mm_add_ps(v13, v7);
        EnterCriticalSection(&stru_BA7B00);
        CurrentThreadId = GetCurrentThreadId();
        ++dword_BA7B7C;
        dword_BA7B78 = CurrentThreadId;
        v10 = (_DWORD *)unk10[2];
        if ( v10 )
        {
          sub_89F570(unk10);
          sub_8CD9D0(v10, &v14);
          sub_89F570(unk10);
        }
        if ( dword_BA7B7C-- == 1 )
          dword_BA7B78 = 0;
        LeaveCriticalSection(&stru_BA7B00);
      }
    }
  }
}
