// TES4 authoritative: InAir state update. Uses +0x320 fall timer to set/clear flag 0x80, consumes support flag 0x100 for OnGround transition, sets flag 0x400 for short airborne/water-surface transition cases, and applies gravity via +0x328 * dt to velocity +0x2E0.
void __thiscall bhkCharacterStateInAir_Update(float *this, int a2)
{
  double v2; // st7
  bool v3; // c3
  char v4; // bl
  _DWORD *v5; // ecx
  hkVector4 *PositionPtr; // eax
  int v7; // eax
  double v8; // st6
  __int128 v9; // xmm0
  double v10; // st6
  __int128 v11; // xmm0
  __m128 v12; // xmm1
  __m128 v13; // xmm0
  __m128 v14; // xmm2
  __m128 v15; // xmm0
  __m128 v16; // xmm0
  __m128 v17; // xmm1
  __m128 v18; // xmm0
  float v20; // [esp+10h] [ebp-B0h]
  float v21; // [esp+20h] [ebp-A0h]
  __m128 v22; // [esp+20h] [ebp-A0h]
  __m128 v23; // [esp+30h] [ebp-90h] BYREF
  __int128 v24; // [esp+40h] [ebp-80h]
  __int128 v25; // [esp+50h] [ebp-70h]
  __int128 v26; // [esp+60h] [ebp-60h]
  __m128 v27; // [esp+70h] [ebp-50h]
  float v28; // [esp+80h] [ebp-40h]
  float v29; // [esp+84h] [ebp-3Ch]
  float v30; // [esp+88h] [ebp-38h]
  float v31; // [esp+8Ch] [ebp-34h]
  float v32; // [esp+90h] [ebp-30h]
  __int128 v33; // [esp+A0h] [ebp-20h]

  v2 = 0.0; /*0x8cf6fa*/
  if ( (*(_DWORD *)(a2 + 0x1F4) & 0x100) != 0 ) // InAir landing path: flag 0x100 switches state to OnGround and sets/clears pending fall-impact based on fall timer +0x320. /*0x8cf711*/
  {
    v3 = 0.0 == *(float *)(a2 + 0x320); /*0x8cf713*/
    *(_DWORD *)(a2 + 0x2A0) = 0; /*0x8cf719*/
    if ( v3 ) /*0x8cf732*/
      *(_DWORD *)(a2 + 0x1F4) &= ~0x80u; /*0x8cf740*/
    else
      *(_DWORD *)(a2 + 0x1F4) |= 0x80u; /*0x8cf734*/
  }
  v4 = 0; /*0x8cf750*/
  if ( *(float *)(a2 + 0x324) < dbl_A30068 && *(float *)(a2 + 0x2E8) < 0.0 ) /*0x8cf76a*/
    goto LABEL_13; /*0x8cf76a*/
  if ( *(float *)(a2 + 0x310) >= 1.0 ) /*0x8cf779*/
  {
    v5 = *(_DWORD **)(a2 + 8); /*0x8cf77b*/
    v20 = _mm_shuffle_ps(*(__m128 *)(a2 + 0x340), *(__m128 *)(a2 + 0x340), 0xAA).m128_f32[0];// InAir copies shape-local offset vector from proxy+0x340/+0x344/+0x348 for water-height/transition tests. /*0x8cf78b*/
    if ( v5 ) /*0x8cf790*/
    {
      PositionPtr = (hkVector4 *)bhkCollisionWrapper_GetPositionPtr(v5); /*0x8cf794*/
      v2 = 0.0; /*0x8cf799*/
    }
    else
    {
      PositionPtr = &unk_BA7A40; /*0x8cf79d*/
    }
    if ( *(float *)(a2 + 0x318) > (double)(float)(_mm_shuffle_ps(*(__m128 *)PositionPtr, *(__m128 *)PositionPtr, 0xAA).m128_f32[0] /*0x8cf7c6*/
                                                - v20) )// InAir reads proxy+0x318 water height; if current position minus shape offset is below water height, it sets flag 0x400 and may zero downward velocity while jumping.
    {
      v4 = 1; /*0x8cf7c8*/
LABEL_13:
      *(_DWORD *)(a2 + 0x1F4) |= 0x400u;        // InAir sets flag 0x400 for the short airborne transition case or the water-height case; do not treat this flag alone as ledge/ground proof. /*0x8cf7ca*/
    }
  }
  v7 = *(_DWORD *)(a2 + 0x2A0); /*0x8cf7d4*/
  if ( v7 != 0xB ) /*0x8cf7dd*/
  {
    if ( v7 != 1 ) /*0x8cf7e2*/
    {
      *(float *)(a2 + 0x324) = v2; /*0x8cf84f*/
      sub_890720((_DWORD *)a2); /*0x8cf855*/
      return; /*0x8cf86e*/
    }
    if ( (*(_DWORD *)(a2 + 0x1F4) & 0x400) != 0 ) /*0x8cf7ef*/
    {
      sub_890720((_DWORD *)a2); /*0x8cf7f5*/
      v2 = 0.0; /*0x8cf7fa*/
      if ( v4 ) /*0x8cf7fe*/
      {
        if ( _mm_shuffle_ps(*(__m128 *)(a2 + 0x2E0), *(__m128 *)(a2 + 0x2E0), 0xAA).m128_f32[0] < 0.0 ) /*0x8cf81a*/
          *(float *)(a2 + 0x2E8) = 0.0; /*0x8cf81c*/
      }
    }
    *(_DWORD *)(a2 + 0x2A0) = 0xB; /*0x8cf822*/
  }
  if ( v2 < *(float *)(a2 + 0x310) ) /*0x8cf837*/
  {
    if ( (*(_DWORD *)(a2 + 0x1F4) & 0x1800) != 0 ) /*0x8cf847*/
      v8 = 1.0; /*0x8cf849*/
    else
      v8 = flt_B2E76C * *(float *)(a2 + 0x310) + unk_BA7A60; /*0x8cf87d*/
    v9 = *(_OWORD *)(a2 + 0x2C0); /*0x8cf883*/
    v23.m128_f32[0] = v8; /*0x8cf88a*/
    v10 = *(this + 2); /*0x8cf892*/
    v24 = v9; /*0x8cf895*/
    v11 = *(_OWORD *)(a2 + 0x2B0); /*0x8cf89a*/
    v32 = v10; /*0x8cf8a1*/
    v25 = v11; /*0x8cf8a8*/
    v26 = v11; /*0x8cf8ad*/
    v33 = *(_OWORD *)(a2 + 0x280); /*0x8cf8b9*/
    v27 = *(__m128 *)(a2 + 0x2E0); /*0x8cf8ce*/
    v21 = *(float *)(a2 + 0x290); /*0x8cf8da*/
    v28 = _mm_shuffle_ps(*(__m128 *)(a2 + 0x290), *(__m128 *)(a2 + 0x290), 0x55).m128_f32[0]; /*0x8cf8f5*/
    v29 = v21; /*0x8cf905*/
    v30 = v2; /*0x8cf90d*/
    v31 = v2; /*0x8cf914*/
    bhkCharacterState_SolveVelocityToTarget(&v23, (__m128 *)(a2 + 0x2E0));// InAir solver setup: response is state-dependent, basis slots use proxy+0x2C0/+0x2B0/+0x2B0, current=proxy+0x2E0, desired local velocity uses horizontal proxy+0x290 only, maxDelta comes from the InAir state object, reference=proxy+0x280. /*0x8cf91b*/
    v12 = *(__m128 *)(a2 + 0x2B0); /*0x8cf920*/
    v13 = _mm_mul_ps(*(__m128 *)(a2 + 0x2E0), v12); /*0x8cf92a*/
    v14 = 0; /*0x8cf94b*/
    v14.m128_f32[0] = *(float *)&dword_A99E34 /*0x8cf95a*/
                    - (float)(_mm_shuffle_ps(v13, v13, 0xAA).m128_f32[0]
                            + (float)(_mm_shuffle_ps(v13, v13, 0x55).m128_f32[0] + v13.m128_f32[0]));
    *(__m128 *)(a2 + 0x2E0) = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v14, v14, 0), v12), *(__m128 *)(a2 + 0x2E0)); /*0x8cf971*/
    v15 = _mm_mul_ps(*(__m128 *)(a2 + 0x2B0), v27); /*0x8cf983*/
    v14.m128_f32[0] = _mm_shuffle_ps(v15, v15, 0x55).m128_f32[0] + v15.m128_f32[0]; /*0x8cf98d*/
    v16 = _mm_shuffle_ps(v15, v15, 0xAA); /*0x8cf991*/
    v16.m128_f32[0] = v16.m128_f32[0] + v14.m128_f32[0]; /*0x8cf995*/
    *(__m128 *)(a2 + 0x2E0) = _mm_add_ps( /*0x8cf9ac*/
                                _mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), *(__m128 *)(a2 + 0x2B0)),
                                *(__m128 *)(a2 + 0x2E0));
  }
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 0x58))(a2); /*0x8cf9ba*/
  v22 = *(__m128 *)((*(int (__thiscall **)(int))(*(_DWORD *)a2 + 0x58))(a2) + 0x20);// InAir reads runtime up/gravity basis from context+0x20 before applying gravity to velocity. /*0x8cf9d0*/
  (*(void (__thiscall **)(int))(*(_DWORD *)a2 + 0x58))(a2); /*0x8cf9d5*/
  v17 = 0; /*0x8cf9e7*/
  v17.m128_f32[0] = *(float *)(a2 + 0x328); /*0x8cf9ea*/
  v18 = 0; /*0x8cf9f0*/
  v18.m128_f32[0] = *(float *)(a2 + 0x2D8); /*0x8cf9f3*/
  *(__m128 *)(a2 + 0x2E0) = _mm_add_ps( /*0x8cfa14*/
                              _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v17, v17, 0), v22), _mm_shuffle_ps(v18, v18, 0)),
                              *(__m128 *)(a2 + 0x2E0));
  sub_890740(a2); /*0x8cfa1b*/
}
