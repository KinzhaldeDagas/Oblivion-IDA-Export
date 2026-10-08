// ODismemberment: creates or updates a bhkForceController on a NiObjectNET target, derives scaled force from the provided vector, and starts the controller.
int __cdecl sub_8B8590(NiObjectNET *a1, __m128 *a2, float a3)
{
  __m128 *v3; // esi
  FreeEntry *v4; // ebx
  unsigned __int8 v5; // al
  NiTimeController *v6; // ebx
  hkVector4 v7; // xmm0
  int BhkCollisionObject; // eax
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

  v3 = (__m128 *)sub_700010(a1, (int)&MEMORY[0xBA8000]); /*0x8b85cb*/
  if ( !v3 ) /*0x8b85cf*/
  {
    v4 = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, 0x100000070uLL, v18); /*0x8b85df*/
    v5 = 0x10 - ((unsigned __int8)v4 & 0xF); /*0x8b85e8*/
    v6 = (NiTimeController *)((char *)v4 + v5); /*0x8b85ed*/
    v6[0xFFFFFFFF].members.unk039[2] = v5; /*0x8b85ef*/
    NiTimeController::NiTimeController(v6); /*0x8b85fc*/
    v6->vtbl = (NiTimeControllerVtbl *)&bhkForceController::`vftable'; /*0x8b8603*/
    v7 = unk_BA7A40; /*0x8b8609*/
    v6[1].members.m_fLoKeyTime = 0.0; /*0x8b8610*/
    *(hkVector4 *)&v6[1].members.super.m_uiRefCount = v7; /*0x8b8613*/
    v3 = (__m128 *)v6; /*0x8b8627*/
    v6->vtbl->SetTarget(v6, a1); /*0x8b8629*/
  }
  BhkCollisionObject = NiAVObject_GetBhkCollisionObject((int)a1); /*0x8b862c*/
  v9 = *a2; /*0x8b8634*/
  v22 = *a2; /*0x8b863c*/
  if ( BhkCollisionObject ) /*0x8b8641*/
  {
    v10 = *(_DWORD *)(BhkCollisionObject + 0x10); /*0x8b8643*/
    if ( v10 ) /*0x8b8648*/
    {
      v19 = sub_535AC0((_DWORD *)*(_DWORD *)(BhkCollisionObject + 0x10)); /*0x8b8651*/
      v11 = 0; /*0x8b8668*/
      v20 = flt_B2F0F8 * v19; /*0x8b866b*/
      v11.m128_f32[0] = v20; /*0x8b867b*/
      v21 = *(float *)(*(_DWORD *)(*(_DWORD *)(v10 + 8) + 0x50) + 0xC8) * dbl_A31C70; /*0x8b868e*/
      v12 = 0; /*0x8b8698*/
      v12.m128_f32[0] = v21; /*0x8b869b*/
      v9 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), *a2), _mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), v22)); /*0x8b86ac*/
    }
  }
  v13 = v3->m128_i16[4]; /*0x8b86b1*/
  v14 = v3->m128_i32[0]; /*0x8b86b5*/
  v3[1].m128_f32[1] = 0.0; /*0x8b86b7*/
  v15 = *(int (__thiscall **)(__m128 *, _DWORD))(v14 + 0x4C); /*0x8b86bd*/
  v3[1].m128_f32[2] = a3; /*0x8b86c0*/
  v3->m128_i16[4] = v13 & 0xFFF0 | 5; /*0x8b86cc*/
  v3[1].m128_f32[0] = 0.0; /*0x8b86d0*/
  v3[4] = v9; /*0x8b86d3*/
  v3->m128_f32[3] = 1.0; /*0x8b86d9*/
  v17 = -flt_A7DEB4; /*0x8b86e5*/
  return v15(v3, LODWORD(v17)); /*0x8b86ec*/
}
