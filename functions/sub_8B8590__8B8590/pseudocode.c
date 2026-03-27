int __cdecl sub_8B8590(NiObjectNET *a1, __m128 *a2, float a3)
{
  __m128 *v3; // esi
  FreeEntry *v4; // ebx
  unsigned __int8 v5; // al
  NiTimeController *v6; // ebx
  hkVector4 v7; // xmm0
  int v8; // eax
  __m128 v9; // xmm0
  int v10; // edi
  __m128 v11; // xmm0
  __m128 v12; // xmm1
  __int16 v13; // cx
  __int32 v14; // edx
  int (__thiscall *v15)(__m128 *, _DWORD); // eax
  float v17; // [esp+4h] [ebp-38h]
  int v18; // [esp+8h] [ebp-34h]
  float v19; // [esp+18h] [ebp-24h]
  float v20; // [esp+18h] [ebp-24h]
  float v21; // [esp+18h] [ebp-24h]
  __m128 v22; // [esp+1Ch] [ebp-20h]
  int savedregs; // [esp+3Ch] [ebp+0h] BYREF

  v3 = (__m128 *)sub_700010(a1, (int)&unk_BA8000);
  if ( !v3 )
  {
    v4 = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, 0x100000070uLL, v18);
    v5 = 0x10 - ((unsigned __int8)v4 & 0xF);
    v6 = (NiTimeController *)((char *)v4 + v5);
    v6[0xFFFFFFFF].members.unk039[2] = v5;
    NiTimeController::NiTimeController(v6);
    v6->vtbl = (NiTimeControllerVtbl *)&bhkForceController::`vftable';
    v7 = stru_BA7A40;
    v6[1].members.m_fLoKeyTime = 0.0;
    *(hkVector4 *)&v6[1].members.super.m_uiRefCount = v7;
    v3 = (__m128 *)v6;
    v6->vtbl->SetTarget(v6, a1);
  }
  v8 = sub_47FAC0((int)a1);
  v9 = *a2;
  v22 = *a2;
  if ( v8 )
  {
    v10 = *(_DWORD *)(v8 + 0x10);
    if ( v10 )
    {
      v19 = sub_535AC0((_DWORD *)*(_DWORD *)(v8 + 0x10));
      v11 = 0;
      v20 = flt_B2F0F8 * v19;
      v11.m128_f32[0] = v20;
      v21 = *(float *)(*(_DWORD *)(*(_DWORD *)(v10 + 8) + 0x50) + 0xC8) * dbl_A31C70;
      v12 = 0;
      v12.m128_f32[0] = v21;
      v9 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), *a2), _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), v22));
    }
  }
  v13 = v3->m128_i16[4];
  v14 = v3->m128_i32[0];
  v3[1].m128_f32[1] = 0.0;
  v15 = *(int (__thiscall **)(__m128 *, _DWORD))(v14 + 0x4C);
  v3[1].m128_f32[2] = a3;
  v3->m128_i16[4] = v13 & 0xFFF0 | 5;
  v3[1].m128_f32[0] = 0.0;
  v3[4] = v9;
  v3->m128_f32[3] = 1.0;
  v17 = -flt_A7DEB4;
  return v15(v3, LODWORD(v17));
}
