int __cdecl sub_8B8410(NiObjectNET *a1, __m128 *a2, NiObjectNET *a3)
{
  NiObjectNET *v3; // esi
  __m128 *v4; // edi
  FreeEntry *v5; // ebx
  unsigned __int8 v6; // al
  NiTimeController *v7; // ebx
  hkVector4 v8; // xmm0
  int v9; // eax
  __m128 v10; // xmm0
  int v11; // esi
  __m128 v12; // xmm0
  __m128 v13; // xmm0
  __m128 v14; // xmm1
  __int16 v15; // ax
  __int32 v16; // edx
  int (__thiscall *v17)(__m128 *, _DWORD); // eax
  float v19; // [esp+4h] [ebp-38h]
  int v20; // [esp+8h] [ebp-34h]
  float v21; // [esp+18h] [ebp-24h]
  float v22; // [esp+18h] [ebp-24h]
  float v23; // [esp+18h] [ebp-24h]
  __m128 v24; // [esp+1Ch] [ebp-20h]
  int savedregs; // [esp+3Ch] [ebp+0h] BYREF

  v3 = a3;
  if ( !a3 )
    v3 = a1;
  v4 = (__m128 *)sub_700010(v3, (int)&unk_BA8000);
  if ( !v4 )
  {
    v5 = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, 0x100000070uLL, v20);
    v6 = 0x10 - ((unsigned __int8)v5 & 0xF);
    v7 = (NiTimeController *)((char *)v5 + v6);
    v7[0xFFFFFFFF].members.unk039[2] = v6;
    NiTimeController::NiTimeController(v7);
    v7->vtbl = (NiTimeControllerVtbl *)&bhkForceController::`vftable';
    v8 = stru_BA7A40;
    v7[1].members.m_fLoKeyTime = 0.0;
    *(hkVector4 *)&v7[1].members.super.m_uiRefCount = v8;
    v4 = (__m128 *)v7;
    v7->vtbl->SetTarget(v7, v3);
  }
  v9 = sub_47FAC0((int)v3);
  v10 = *a2;
  v24 = *a2;
  if ( v9 )
  {
    v11 = *(_DWORD *)(v9 + 0x10);
    if ( v11 )
    {
      v21 = sub_535AC0((_DWORD *)*(_DWORD *)(v9 + 0x10));
      v12 = 0;
      v22 = flt_B2F0F8 * v21;
      v12.m128_f32[0] = v22;
      v13 = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), v24);
      v23 = *(float *)(*(_DWORD *)(*(_DWORD *)(v11 + 8) + 0x50) + 0xC8) * dbl_A31C70;
      v14 = 0;
      v14.m128_f32[0] = v23;
      v10 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v14, v14, 0), v13), v13);
    }
  }
  v15 = v4->m128_i16[4];
  v16 = v4->m128_i32[0];
  v4[1].m128_f32[1] = 0.0;
  v4[1].m128_f32[2] = flt_A3D9A4;
  v4->m128_i16[4] = v15 & 0xFFF0 | 5;
  v17 = *(int (__thiscall **)(__m128 *, _DWORD))(v16 + 0x4C);
  v4[1].m128_f32[0] = 0.0;
  v4[4] = v10;
  v4->m128_f32[3] = 1.0;
  v19 = -flt_A7DEB4;
  return v17(v4, LODWORD(v19));
}
