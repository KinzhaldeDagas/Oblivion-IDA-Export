// TES4 authoritative: OnGround state update. Uses desired movement at proxy+0x290, calls shared velocity solver, applies ground/contact velocity projection, and compares current z against water height +0x318 for gravity correction.
void __stdcall bhkCharacterStateOnGround_Update(int a1)
{
  double v1; // st7
  __m128 *v2; // edi
  __int128 v3; // xmm0
  double v4; // st7
  __int128 v5; // xmm0
  __m128 v6; // xmm0
  __m128 v7; // xmm2
  __m128 v8; // xmm0
  __m128 v9; // xmm0
  __m128 v10; // xmm0
  __m128 v11; // xmm1
  __m128 v12; // xmm0
  __m128 *v13; // [esp-8h] [ebp-D4h]
  float v14; // [esp+Ch] [ebp-C0h]
  float v15; // [esp+Ch] [ebp-C0h]
  float v16; // [esp+1Ch] [ebp-B0h]
  __m128 v17; // [esp+1Ch] [ebp-B0h]
  __m128 v18; // [esp+2Ch] [ebp-A0h] BYREF
  __m128 v19; // [esp+3Ch] [ebp-90h] BYREF
  __int128 v20; // [esp+4Ch] [ebp-80h]
  __int128 v21; // [esp+5Ch] [ebp-70h]
  __int128 v22; // [esp+6Ch] [ebp-60h]
  __m128 v23; // [esp+7Ch] [ebp-50h]
  float v24; // [esp+8Ch] [ebp-40h]
  float v25; // [esp+90h] [ebp-3Ch]
  float v26; // [esp+94h] [ebp-38h]
  float v27; // [esp+98h] [ebp-34h]
  float v28; // [esp+9Ch] [ebp-30h]
  __int128 v29; // [esp+ACh] [ebp-20h]

  v1 = flt_A6A044; /*0x8cf3ca*/
  v2 = (__m128 *)(a1 + 0x2E0); /*0x8cf3dc*/
  v14 = *(float *)(a1 + 0x2E0); /*0x8cf3e2*/
  v20 = *(_OWORD *)(a1 + 0x2C0); /*0x8cf3f3*/
  v21 = *(_OWORD *)(a1 + 0x2B0); /*0x8cf401*/
  v22 = v21; /*0x8cf406*/
  v13 = (__m128 *)(a1 + 0x2E0); /*0x8cf40e*/
  if ( v1 <= v14 ) /*0x8cf40f*/
  {
    v4 = *(float *)(a1 + 0x310); /*0x8cf4b2*/
    v23 = *v2; /*0x8cf4b8*/
    v19.m128_f32[0] = v4; /*0x8cf4c0*/
    v15 = _mm_shuffle_ps(*(__m128 *)(a1 + 0x290), *(__m128 *)(a1 + 0x290), 0xAA).m128_f32[0]; /*0x8cf4cf*/
    v18.m128_i32[0] = *(_DWORD *)(a1 + 0x290); /*0x8cf4dc*/
    v5 = *(_OWORD *)(a1 + 0x280); /*0x8cf4f7*/
    v24 = _mm_shuffle_ps(*(__m128 *)(a1 + 0x290), *(__m128 *)(a1 + 0x290), 0x55).m128_f32[0]; /*0x8cf4fe*/
    v25 = v18.m128_f32[0]; /*0x8cf50d*/
    v29 = v5; /*0x8cf519*/
    v26 = v15; /*0x8cf521*/
    v27 = 0.0; /*0x8cf52a*/
    v28 = flt_A3F3D8; /*0x8cf537*/
    bhkCharacterState_SolveVelocityToTarget(&v19, v13);// MorrowindMovements: OnGround solver consumes desired vector from proxy+0x290 and writes solved velocity to proxy+0x2E0. Desired-vector scaling may need a post-solve cap because projection/reference velocity can preserve horizontal speed. /*0x8cf53e*/
    v6 = _mm_mul_ps(*(__m128 *)(a1 + 0x2B0), *v2); /*0x8cf550*/
    v7 = 0; /*0x8cf571*/
    v7.m128_f32[0] = *(float *)&dword_A99E34 /*0x8cf580*/
                   - (float)(_mm_shuffle_ps(v6, v6, 0xAA).m128_f32[0]
                           + (float)(_mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0]));
    *v2 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), *(__m128 *)(a1 + 0x2B0)), *v2); /*0x8cf597*/
    v8 = _mm_mul_ps(*(__m128 *)(a1 + 0x2B0), v23); /*0x8cf5ac*/
    v7.m128_f32[0] = _mm_shuffle_ps(v8, v8, 0x55).m128_f32[0] + v8.m128_f32[0]; /*0x8cf5b6*/
    v9 = _mm_shuffle_ps(v8, v8, 0xAA); /*0x8cf5ba*/
    v9.m128_f32[0] = v9.m128_f32[0] + v7.m128_f32[0]; /*0x8cf5be*/
    *v2 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v9, v9, 0), *(__m128 *)(a1 + 0x2B0)), *v2); /*0x8cf5d2*/
    v10 = 0; /*0x8cf5dd*/
    v10.m128_f32[0] = *(float *)(a1 + 0x324); /*0x8cf5e0*/
    *v2 = _mm_mul_ps(_mm_shuffle_ps(v10, v10, 0), *v2);// MorrowindMovements: final OnGround velocity in proxy+0x2E0 is multiplied by proxy+0x324 before water/gravity correction; post-state hook can cap horizontal solved velocity after this vanilla output exists. /*0x8cf5fb*/
    bhkCharacterController_ReadRelativePosition((__m128 *)a1, &v18); /*0x8cf5fe*/
    if ( *(float *)(a1 + 0x318) < (double)_mm_shuffle_ps(v18, v18, 0xAA).m128_f32[0] )// TES4 authoritative OnGround: position read is only compared against proxy+0x318 water height for gravity correction; not a ledge/clearance test. /*0x8cf623*/
    {
      (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x58))(a1); /*0x8cf62c*/
      v17 = *(__m128 *)((*(int (__thiscall **)(int))(*(_DWORD *)a1 + 0x58))(a1) + 0x20); /*0x8cf642*/
      (*(void (__thiscall **)(int))(*(_DWORD *)a1 + 0x58))(a1); /*0x8cf647*/
      v11 = 0; /*0x8cf659*/
      v11.m128_f32[0] = *(float *)(a1 + 0x328); /*0x8cf65c*/
      v12 = 0; /*0x8cf660*/
      v12.m128_f32[0] = *(float *)(a1 + 0x2D8); /*0x8cf663*/
      *v2 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), v17), _mm_shuffle_ps(v12, v12, 0)), *v2); /*0x8cf680*/
    }
  }
  else
  {
    v2->m128_f32[0] = 0.0; /*0x8cf41b*/
    v23 = *v2; /*0x8cf423*/
    v19.m128_f32[0] = 1.0; /*0x8cf42b*/
    v16 = _mm_shuffle_ps(*(__m128 *)(a1 + 0x290), *(__m128 *)(a1 + 0x290), 0xAA).m128_f32[0]; /*0x8cf43a*/
    v18.m128_i32[0] = *(_DWORD *)(a1 + 0x290); /*0x8cf447*/
    v3 = *(_OWORD *)(a1 + 0x280); /*0x8cf462*/
    v24 = _mm_shuffle_ps(*(__m128 *)(a1 + 0x290), *(__m128 *)(a1 + 0x290), 0x55).m128_f32[0]; /*0x8cf469*/
    v29 = v3; /*0x8cf474*/
    v25 = v18.m128_f32[0]; /*0x8cf47c*/
    v26 = v16; /*0x8cf487*/
    v27 = 0.0; /*0x8cf48e*/
    v28 = flt_A3F3D8; /*0x8cf49b*/
    bhkCharacterState_SolveVelocityToTarget(&v19, v13);// OnGround low-speed solver setup: response=1.0, basis slots use proxy+0x2C0/+0x2B0/+0x2B0, desired local velocity is swizzled from proxy+0x290, maxDelta=100000, reference=proxy+0x280. /*0x8cf4a2*/
  }
  if ( *(_DWORD *)(a1 + 0x2A0) != 0xB ) /*0x8cf68a*/
    sub_890720((_DWORD *)a1); /*0x8cf68e*/
}
