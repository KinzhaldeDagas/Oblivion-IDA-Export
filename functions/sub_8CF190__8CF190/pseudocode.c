// Flying state update. Uses desired movement at proxy+0x290 and special vertical/position assumptions; not suitable as a Climbing substitute.
int __stdcall bhkCharacterStateFlying_Update(int a1)
{
  int v1; // eax
  __int128 v2; // xmm0
  __int128 v3; // xmm1
  __m128 *v4; // edi
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  _DWORD *v7; // ecx
  hkVector4 *PositionPtr; // eax
  __m128 v9; // xmm1
  __m128 v10; // xmm0
  int result; // eax
  __m128 v12; // xmm1
  __m128 v13; // xmm0
  float v14; // [esp+8h] [ebp-A4h]
  float v15; // [esp+8h] [ebp-A4h]
  __m128 v16; // [esp+Ch] [ebp-A0h]
  __m128 v17; // [esp+Ch] [ebp-A0h]
  __m128 v18; // [esp+1Ch] [ebp-90h] BYREF
  __int128 v19; // [esp+2Ch] [ebp-80h]
  __int128 v20; // [esp+3Ch] [ebp-70h]
  __int128 v21; // [esp+4Ch] [ebp-60h]
  __int128 v22; // [esp+5Ch] [ebp-50h]
  float v23; // [esp+6Ch] [ebp-40h]
  float v24; // [esp+70h] [ebp-3Ch]
  float v25; // [esp+74h] [ebp-38h]
  float v26; // [esp+78h] [ebp-34h]
  float v27; // [esp+7Ch] [ebp-30h]
  __int128 v28; // [esp+8Ch] [ebp-20h]

  v1 = *(_DWORD *)(a1 + 0x1F4); /*0x8cf1b4*/
  v2 = *(_OWORD *)(a1 + 0x2C0); /*0x8cf1ba*/
  v18.m128_f32[0] = *(float *)(a1 + 0x310); /*0x8cf1c1*/
  v3 = *(_OWORD *)(a1 + 0x2E0); /*0x8cf1cb*/
  v23 = *(float *)(a1 + 0x294); /*0x8cf1d2*/
  v4 = (__m128 *)(a1 + 0x2E0); /*0x8cf1dd*/
  v24 = *(float *)(a1 + 0x290); /*0x8cf1e3*/
  v25 = *(float *)(a1 + 0x298); /*0x8cf1f2*/
  v19 = v2; /*0x8cf1f6*/
  v5 = *(_OWORD *)(a1 + 0x2B0); /*0x8cf1fd*/
  v26 = 0.0; /*0x8cf204*/
  v22 = v3; /*0x8cf208*/
  v6 = *(_OWORD *)(a1 + 0x280); /*0x8cf213*/
  v27 = flt_A417B4; /*0x8cf21a*/
  v20 = v5; /*0x8cf221*/
  v28 = v6; /*0x8cf226*/
  if ( (v1 & 0x100) != 0 ) /*0x8cf22e*/
    v5 = *(_OWORD *)(a1 + 0x230); /*0x8cf230*/
  v21 = v5; /*0x8cf23d*/
  bhkCharacterState_SolveVelocityToTarget(&v18, (__m128 *)(a1 + 0x2E0));// Flying solver setup: response=proxy+0x310, basis slots use proxy+0x2C0/+0x2B0, third basis switches to proxy+0x230 when flag 0x100 is set, desired local velocity is swizzled from proxy+0x290, maxDelta=20, reference=proxy+0x280. /*0x8cf242*/
  v7 = *(_DWORD **)(a1 + 8); /*0x8cf253*/
  v14 = *(float *)(a1 + 0x348) * dbl_A6E700;    // Flying reads proxy+0x348 as shape vertical offset for water-height threshold logic. /*0x8cf25b*/
  if ( v7 ) /*0x8cf25f*/
    PositionPtr = (hkVector4 *)bhkCollisionWrapper_GetPositionPtr(v7); /*0x8cf261*/
  else
    PositionPtr = &unk_BA7A40; /*0x8cf268*/
  if ( *(float *)(a1 + 0x318) < PositionPtr->z + v14 )// Flying water-height comparison; not a ledge-clearance or climbability test. /*0x8cf281*/
  {
    if ( *(float *)(a1 + 0x2E8) > 0.0 ) /*0x8cf290*/
      *(float *)(a1 + 0x2E8) = 0.0; /*0x8cf292*/
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x58))(a1); /*0x8cf2a3*/
    v16 = *(__m128 *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x58))(a1) + 0x20); /*0x8cf2b9*/
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x58))(a1); /*0x8cf2be*/
    v9 = 0; /*0x8cf2d0*/
    v9.m128_f32[0] = *(float *)(a1 + 0x328); /*0x8cf2d3*/
    v10 = 0; /*0x8cf2d7*/
    v10.m128_f32[0] = *(float *)(a1 + 0x2D8); /*0x8cf2da*/
    *v4 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), v16), _mm_shuffle_ps(v10, v10, 0)), *v4); /*0x8cf2f7*/
  }
  result = *(_DWORD *)(a1 + 0x2A0); /*0x8cf2fa*/
  if ( !result ) /*0x8cf303*/
  {
    sub_890720((_DWORD *)a1); /*0x8cf30b*/
    (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x58))(a1); /*0x8cf317*/
    v17 = *(__m128 *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x58))(a1) + 0x20); /*0x8cf32d*/
    result = (*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x58))(a1); /*0x8cf332*/
    v12 = 0; /*0x8cf34a*/
    v12.m128_f32[0] = *(float *)(a1 + 0x328); /*0x8cf34d*/
    v15 = -*(float *)(a1 + 0x2D8) * dbl_A30E48; /*0x8cf351*/
    v13 = 0; /*0x8cf35b*/
    v13.m128_f32[0] = v15; /*0x8cf35e*/
    *v4 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), v17), _mm_shuffle_ps(v13, v13, 0)), *v4); /*0x8cf37b*/
  }
  return result; /*0x8cf386*/
}
