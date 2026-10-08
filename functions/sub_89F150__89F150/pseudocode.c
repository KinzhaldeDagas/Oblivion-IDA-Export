void __thiscall sub_89F150(Atmosphere *this)
{
  _DWORD *unk10; // ebx
  NiAVObject *PointerAtOffset08; // eax
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

  unk10 = (_DWORD *)this->unk10; /*0x89f165*/
  if ( unk10 ) /*0x89f16c*/
  {
    if ( unk10[2] ) /*0x89f172*/
    {
      PointerAtOffset08 = Shared_GetPointerAtOffset08(this); /*0x89f17c*/
      if ( PointerAtOffset08 ) /*0x89f183*/
      {
        qmemcpy(v12, &PointerAtOffset08->members.m_worldTransform, sizeof(v12)); /*0x89f195*/
        v3 = unk10[2]; /*0x89f197*/
        if ( v3 ) /*0x89f19c*/
          (*(void (__thiscall **)(int, __m128 *))(*(_DWORD *)v3 + 0x14))(v3, &v14); /*0x89f1a8*/
        v4 = 0; /*0x89f1c3*/
        v5 = hkFactor; /*0x89f1c6*/
        v4.m128_f32[0] = kHeadBodyNormalMatchRadius; /*0x89f1c8*/
        v13.m128_f32[0] = v12[9] * v5; /*0x89f1d1*/
        v6 = kTerrainLODQuadRayDirectionZ; /*0x89f1dc*/
        v7 = _mm_mul_ps(_mm_shuffle_ps(v4, v4, 0), _mm_sub_ps(v15, v14)); /*0x89f1ea*/
        v8 = 0; /*0x89f1ed*/
        v13.m128_f32[1] = v12[0xA] * v5; /*0x89f1f0*/
        v8.m128_f32[0] = v6; /*0x89f1f4*/
        v13.m128_f32[2] = v5 * v12[0xB]; /*0x89f20b*/
        v14 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), v7), v13); /*0x89f21a*/
        v15 = _mm_add_ps(v13, v7); /*0x89f21f*/
        EnterCriticalSection(&unk_BA7B00); /*0x89f224*/
        CurrentThreadId = GetCurrentThreadId(); /*0x89f22a*/
        ++unk_BA7B7C; /*0x89f235*/
        unk_BA7B78 = CurrentThreadId; /*0x89f23b*/
        v10 = (_DWORD *)unk10[2]; /*0x89f240*/
        if ( v10 ) /*0x89f245*/
        {
          bhkRefObject_UpdateHavokObject(unk10); /*0x89f249*/
          sub_8CD9D0(v10, &v14); /*0x89f255*/
          bhkRefObject_UpdateHavokObject(unk10); /*0x89f25c*/
        }
        if ( unk_BA7B7C-- == 1 ) /*0x89f261*/
          unk_BA7B78 = 0; /*0x89f269*/
        LeaveCriticalSection(&unk_BA7B00); /*0x89f278*/
      }
    }
  }
}
