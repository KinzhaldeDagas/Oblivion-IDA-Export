// Projectile-like character state update. Uses the shared velocity solver only under controller flag 0x100; not a Climbing/actor movement state.
int __thiscall bhkCharacterStateProjectile_Update(_BYTE *this, int a2)
{
  int v2; // eax
  int v3; // eax
  int result; // eax
  __m128 v5; // xmm0
  double v6; // st7
  __int128 v7; // xmm0
  __m128 v8; // xmm1
  __m128 v9; // xmm0
  float v10; // [esp+10h] [ebp-C0h]
  __m128 v11; // [esp+30h] [ebp-A0h]
  __m128 v12; // [esp+40h] [ebp-90h] BYREF
  __int128 v13; // [esp+50h] [ebp-80h]
  __int128 v14; // [esp+60h] [ebp-70h]
  __int128 v15; // [esp+70h] [ebp-60h]
  __int128 v16; // [esp+80h] [ebp-50h]
  float v17; // [esp+90h] [ebp-40h]
  float v18; // [esp+94h] [ebp-3Ch]
  float v19; // [esp+98h] [ebp-38h]
  float v20; // [esp+9Ch] [ebp-34h]
  float v21; // [esp+A0h] [ebp-30h]
  __int128 v22; // [esp+B0h] [ebp-20h]

  v2 = *(_DWORD *)(a2 + 0x1F4); /*0x8d006e*/
  if ( (v2 & 0x100) != 0 ) /*0x8d007d*/
  {
    v13 = *(_OWORD *)(a2 + 0x2C0); /*0x8d00d9*/
    v12.m128_f32[0] = 1.0; /*0x8d00de*/
    v14 = *(_OWORD *)(a2 + 0x2B0); /*0x8d00e9*/
    v15 = *(_OWORD *)(a2 + 0x230); /*0x8d00f5*/
    v16 = *(_OWORD *)(a2 + 0x2E0); /*0x8d010c*/
    v5 = *(__m128 *)(a2 + 0x290); /*0x8d0114*/
    if ( (v2 & 0x800) != 0 ) /*0x8d011b*/
    {
      v10 = *(float *)(a2 + 0x290); /*0x8d012e*/
      v17 = _mm_shuffle_ps(*(__m128 *)(a2 + 0x290), *(__m128 *)(a2 + 0x290), 0x55).m128_f32[0]; /*0x8d0149*/
      v18 = v10; /*0x8d0154*/
      v19 = _mm_shuffle_ps(v5, v5, 0xAA).m128_f32[0]; /*0x8d015f*/
      v6 = 0.0; /*0x8d0166*/
    }
    else
    {
      v17 = _mm_shuffle_ps(*(__m128 *)(a2 + 0x290), *(__m128 *)(a2 + 0x290), 0x55).m128_f32[0]; /*0x8d0185*/
      v18 = v5.m128_f32[0]; /*0x8d0190*/
      v6 = 0.0; /*0x8d0197*/
      v19 = 0.0; /*0x8d0199*/
    }
    v7 = *(_OWORD *)(a2 + 0x280); /*0x8d01a0*/
    v20 = v6; /*0x8d01a7*/
    v21 = flt_A34A80; /*0x8d01b9*/
    v22 = v7; /*0x8d01c1*/
    bhkCharacterState_SolveVelocityToTarget(&v12, (__m128 *)(a2 + 0x2E0));// Projectile-like state solver setup: only runs when flag 0x100 is set, basis slots use proxy+0x2C0/+0x2B0/+0x230, desired local velocity comes from proxy+0x290 with vertical preserved only under flag 0x800, maxDelta=500, reference=proxy+0x280. /*0x8d01c9*/
    if ( (*(_DWORD *)(a2 + 0x1F4) & 0x800) == 0 ) /*0x8d01dd*/
    {
      *(float *)(a2 + 0x2E8) = *((float *)&v16 + 2); /*0x8d01e8*/
      (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 0x58))(a2); /*0x8d01f3*/
      v11 = *(__m128 *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x58))(a2) + 0x20); /*0x8d0209*/
      (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 0x58))(a2); /*0x8d020e*/
      v8 = 0; /*0x8d0220*/
      v8.m128_f32[0] = *(float *)(a2 + 0x328); /*0x8d0223*/
      v9 = 0; /*0x8d0227*/
      v9.m128_f32[0] = *(float *)(a2 + 0x2D8); /*0x8d022a*/
      *(__m128 *)(a2 + 0x2E0) = _mm_add_ps( /*0x8d0247*/
                                  _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v8, v8, 0), v11), _mm_shuffle_ps(v9, v9, 0)),
                                  *(__m128 *)(a2 + 0x2E0));
    }
    sub_890970((__m128 *)a2); /*0x8d024c*/
    result = *(_DWORD *)(a2 + 0x2A0); /*0x8d0251*/
    if ( result != 0xB ) /*0x8d025a*/
    {
      if ( result != 1 ) /*0x8d025f*/
        return sub_890720((_DWORD *)a2); /*0x8d025f*/
      result = *(_DWORD *)(a2 + 0x1F4) >> 0xA; /*0x8d0267*/
      if ( (*(_DWORD *)(a2 + 0x1F4) & 0x400) != 0 ) /*0x8d026c*/
        return sub_890720((_DWORD *)a2); /*0x8d0270*/
    }
  }
  else
  {
    if ( *(this + 8) ) /*0x8d007f*/
      *(float *)(a2 + 0x2E8) = 0.0; /*0x8d0087*/
    *(_DWORD *)(a2 + 0x2A0) = 2; /*0x8d008f*/
    sub_890720((_DWORD *)a2); /*0x8d0099*/
    v3 = sub_8BA170(*(_DWORD **)(a2 + 0x1E8), *(_DWORD *)(a2 + 0x1EC)); /*0x8d00ab*/
    return (*(int (__thiscall **)(int, int))(*(_DWORD *)v3 + 0x18))(v3, a2); /*0x8d00b8*/
  }
  return result; /*0x8d00ba*/
}
