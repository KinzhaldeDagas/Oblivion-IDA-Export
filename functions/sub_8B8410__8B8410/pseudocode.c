int __cdecl sub_8B8410(NiObjectNET *a1, __m128 *a2, NiObjectNET *a3)
{
  NiObjectNET *v3; // esi
  __m128 *v4; // edi
  FreeEntry *v5; // ebx
  unsigned __int8 v6; // al
  NiTimeController *v7; // ebx
  hkVector4 v8; // xmm0
  int BhkCollisionObject; // eax
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

  v3 = a3; /*0x8b843c*/
  if ( !a3 ) /*0x8b8444*/
    v3 = a1; /*0x8b8446*/
  v4 = (__m128 *)sub_700010(v3, (int)&MEMORY[0xBA8000]); /*0x8b8454*/
  if ( !v4 ) /*0x8b8458*/
  {
    v5 = j_MemoryHeap_Alloc(&FormHeap, (char)&savedregs, 0x100000070uLL, v20); /*0x8b8468*/
    v6 = 0x10 - ((unsigned __int8)v5 & 0xF); /*0x8b8471*/
    v7 = (NiTimeController *)((char *)v5 + v6); /*0x8b8476*/
    v7[0xFFFFFFFF].members.unk039[2] = v6; /*0x8b8478*/
    NiTimeController::NiTimeController(v7); /*0x8b8485*/
    v7->vtbl = (NiTimeControllerVtbl *)&bhkForceController::`vftable'; /*0x8b848c*/
    v8 = unk_BA7A40; /*0x8b8492*/
    v7[1].members.m_fLoKeyTime = 0.0; /*0x8b8499*/
    *(hkVector4 *)&v7[1].members.super.m_uiRefCount = v8; /*0x8b849c*/
    v4 = (__m128 *)v7; /*0x8b84b0*/
    v7->vtbl->SetTarget(v7, v3); /*0x8b84b2*/
  }
  BhkCollisionObject = NiAVObject_GetBhkCollisionObject((int)v3); /*0x8b84b5*/
  v10 = *a2; /*0x8b84bd*/
  v24 = *a2; /*0x8b84c5*/
  if ( BhkCollisionObject ) /*0x8b84ca*/
  {
    v11 = *(_DWORD *)(BhkCollisionObject + 0x10); /*0x8b84cc*/
    if ( v11 ) /*0x8b84d1*/
    {
      v21 = sub_535AC0((_DWORD *)*(_DWORD *)(BhkCollisionObject + 0x10)); /*0x8b84da*/
      v12 = 0; /*0x8b84ee*/
      v22 = flt_B2F0F8 * v21; /*0x8b84f1*/
      v12.m128_f32[0] = v22; /*0x8b8501*/
      v13 = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), v24); /*0x8b850f*/
      v23 = *(float *)(*(_DWORD *)(*(_DWORD *)(v11 + 8) + 0x50) + 0xC8) * dbl_A31C70; /*0x8b8514*/
      v14 = 0; /*0x8b851e*/
      v14.m128_f32[0] = v23; /*0x8b8521*/
      v10 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v14, v14, 0), v13), v13); /*0x8b8532*/
    }
  }
  v15 = v4->m128_i16[4]; /*0x8b8537*/
  v16 = v4->m128_i32[0]; /*0x8b853b*/
  v4[1].m128_f32[1] = 0.0; /*0x8b853d*/
  v4[1].m128_f32[2] = flt_A3D9A4; /*0x8b854a*/
  v4->m128_i16[4] = v15 & 0xFFF0 | 5; /*0x8b8551*/
  v17 = *(int (__thiscall **)(__m128 *, _DWORD))(v16 + 0x4C); /*0x8b8555*/
  v4[1].m128_f32[0] = 0.0; /*0x8b8558*/
  v4[4] = v10; /*0x8b855b*/
  v4->m128_f32[3] = 1.0; /*0x8b8562*/
  v19 = -flt_A7DEB4; /*0x8b856f*/
  return v17(v4, LODWORD(v19)); /*0x8b8574*/
}
