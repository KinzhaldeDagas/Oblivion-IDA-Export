// Swimming state update. Uses desired movement at proxy+0x290 and water/depth constraints; sets near-surface/landing flag 0x400 and handles vertical buoyancy. Not suitable as a Climbing substitute.
void __stdcall bhkCharacterStateSwimming_Update(__m128 *a1)
{
  __int32 v1; // eax
  __m128 v2; // xmm1
  __m128 *v3; // edi
  __m128 v4; // xmm0
  _DWORD *v5; // ecx
  hkVector4 *PositionPtr; // eax
  double v7; // st7
  float v8; // xmm2_4
  __m128 v9; // xmm0
  float v10; // xmm1_4
  __m128 v11; // xmm3
  __m128 v12; // xmm0
  __m128 v13; // xmm0
  __m128 v14; // xmm0
  __int32 v15; // eax
  __m128 v16; // xmm1
  __m128 v17; // xmm0
  float v18; // [esp+8h] [ebp-C4h]
  float v19; // [esp+Ch] [ebp-C0h]
  float v20; // [esp+1Ch] [ebp-B0h]
  __m128 v21; // [esp+2Ch] [ebp-A0h]
  __m128 v22; // [esp+3Ch] [ebp-90h] BYREF
  __m128 v23; // [esp+4Ch] [ebp-80h]
  __m128 v24; // [esp+5Ch] [ebp-70h]
  __m128 v25; // [esp+6Ch] [ebp-60h]
  __m128 v26; // [esp+7Ch] [ebp-50h]
  float v27; // [esp+8Ch] [ebp-40h]
  float v28; // [esp+90h] [ebp-3Ch]
  float v29; // [esp+94h] [ebp-38h]
  float v30; // [esp+98h] [ebp-34h]
  float v31; // [esp+9Ch] [ebp-30h]
  __m128 v32; // [esp+ACh] [ebp-20h]

  v22.m128_f32[0] = 1.0; /*0x8cfc90*/
  v1 = a1[0x1F].m128_i32[1]; /*0x8cfc9b*/
  v2 = a1[0x2B]; /*0x8cfca1*/
  v23 = a1[0x2C]; /*0x8cfca8*/
  v26 = a1[0x2E]; /*0x8cfcb4*/
  v3 = a1 + 0x2E; /*0x8cfcc1*/
  v20 = _mm_shuffle_ps(a1[0x29], a1[0x29], 0xAA).m128_f32[0]; /*0x8cfccb*/
  v19 = a1[0x29].m128_f32[0]; /*0x8cfcd8*/
  v4 = a1[0x28]; /*0x8cfcf3*/
  v27 = _mm_shuffle_ps(a1[0x29], a1[0x29], 0x55).m128_f32[0]; /*0x8cfcfa*/
  v28 = v19; /*0x8cfd0a*/
  v24 = v2; /*0x8cfd15*/
  v29 = v20; /*0x8cfd1a*/
  v32 = v4; /*0x8cfd21*/
  v30 = 0.0; /*0x8cfd2b*/
  v31 = flt_A2FE7C; /*0x8cfd38*/
  if ( (v1 & 0x100) != 0 ) /*0x8cfd3f*/
    v25 = a1[0x23]; /*0x8cfd48*/
  else
    v25 = v2; /*0x8cfd4f*/
  bhkCharacterState_SolveVelocityToTarget(&v22, a1 + 0x2E);// Swimming solver setup: response=1.0, basis slots use proxy+0x2C0/+0x2B0, third basis switches to proxy+0x230 when flag 0x100 is set, desired local velocity is swizzled from proxy+0x290, maxDelta=100, reference=proxy+0x280. /*0x8cfd5a*/
  v5 = (_DWORD *)a1->m128_i32[2]; /*0x8cfd5f*/
  if ( v5 ) /*0x8cfd67*/
    PositionPtr = (hkVector4 *)bhkCollisionWrapper_GetPositionPtr(v5); /*0x8cfd69*/
  else
    PositionPtr = &unk_BA7A40; /*0x8cfd70*/
  v18 = _mm_shuffle_ps(*(__m128 *)PositionPtr, *(__m128 *)PositionPtr, 0xAA).m128_f32[0] - a1[0x34].m128_f32[2]; /*0x8cfd8c*/
  if ( kHeadBodyNormalMatchRadius <= (double)a1[0x33].m128_f32[2] ) /*0x8cfda1*/
    v18 = a1[0x33].m128_f32[3] * dbl_A2FAA0 * a1[0x33].m128_f32[2] + v18; /*0x8cfdb9*/
  (*(void (__thiscall **)(__m128 *))(a1->m128_i32[0] + 0x58))(a1); /*0x8cfdc4*/
  v21 = *(__m128 *)((*(int (__thiscall **)(__m128 *))(a1->m128_i32[0] + 0x58))(a1) + 0x20); /*0x8cfdda*/
  (*(void (__thiscall **)(__m128 *))(a1->m128_i32[0] + 0x58))(a1); /*0x8cfddf*/
  v7 = v18; /*0x8cfde1*/
  if ( a1[0x31].m128_f32[2] < (double)v18 )     // Swimming state compares proxy+0x318 water height against computed swimmer surface/depth height and sets flag 0x400 near/above water surface. /*0x8cfdf2*/
  {
    a1[0x1F].m128_i32[1] |= 0x400u; /*0x8cfdf4*/
    if ( a1[0x2A].m128_i32[0] == 1 ) /*0x8cfe07*/
    {
LABEL_11:
      sub_890720(a1); /*0x8cfe09*/
      goto LABEL_28; /*0x8cfe10*/
    }
    if ( _mm_shuffle_ps(*v3, *v3, 0xAA).m128_f32[0] > 0.0 ) /*0x8cfe2d*/
      a1[0x2E].m128_f32[2] = 0.0; /*0x8cfe2f*/
    v8 = a1[0x2D].m128_f32[2]; /*0x8cfe35*/
    goto LABEL_27; /*0x8cfe3d*/
  }
  if ( kHeadBodyNormalMatchRadius <= (double)a1[0x33].m128_f32[2] ) /*0x8cfe62*/
  {
    if ( 1.0 != a1[0x32].m128_f32[2] ) /*0x8cffa5*/
    {
      v15 = a1[0x1F].m128_i32[1]; /*0x8cffa7*/
      if ( (v15 & 0x100) == 0 && (v15 & 0x200) == 0 ) /*0x8cffbc*/
      {
        v8 = *(float *)&dword_A99EBC; /*0x8cffbe*/
LABEL_27:
        v16 = 0; /*0x8cffc6*/
        v16.m128_f32[0] = a1[0x32].m128_f32[2]; /*0x8cffd1*/
        v17 = 0; /*0x8cffd5*/
        v17.m128_f32[0] = v8; /*0x8cffd8*/
        *v3 = _mm_add_ps(_mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v16, v16, 0), v21), _mm_shuffle_ps(v17, v17, 0)), *v3); /*0x8cfff5*/
      }
    }
  }
  else
  {
    if ( a1[0x31].m128_f32[2] - dbl_A3F3F0 < v7 ) /*0x8cfe7b*/
      a1[0x1F].m128_i32[1] |= 0x400u; /*0x8cfe7d*/
    if ( a1[0x2A].m128_i32[0] == 1 && (a1[0x1F].m128_i32[1] & 0x400) != 0 ) /*0x8cfe9c*/
      goto LABEL_11; /*0x8cfe9c*/
    if ( a1[0x31].m128_f32[2] - dbl_A99EC0 > v7 ) /*0x8cfebf*/
    {
      v9 = _mm_mul_ps(a1[0x2B], *v3); /*0x8cfed2*/
      v10 = *(float *)&dword_A99E34; /*0x8cfeeb*/
      v11 = 0; /*0x8cfef9*/
      v11.m128_f32[0] = *(float *)&dword_A99E34 /*0x8cff06*/
                      - (float)(_mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0]
                              + (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0]));
      *v3 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v11, v11, 0), a1[0x2B]), *v3); /*0x8cff1d*/
      v12 = _mm_mul_ps(a1[0x2B], v26); /*0x8cff32*/
      v11.m128_f32[0] = _mm_shuffle_ps(v12, v12, 0x55).m128_f32[0] + v12.m128_f32[0]; /*0x8cff3c*/
      v13 = _mm_shuffle_ps(v12, v12, 0xAA); /*0x8cff40*/
      v13.m128_f32[0] = v13.m128_f32[0] + v11.m128_f32[0]; /*0x8cff44*/
      *v3 = _mm_add_ps(_mm_mul_ps(_mm_shuffle_ps(v13, v13, 0), a1[0x2B]), *v3); /*0x8cff58*/
      v14 = 0; /*0x8cff68*/
      v14.m128_f32[0] = v10 - a1[0x2D].m128_f32[2]; /*0x8cff6b*/
      *v3 = _mm_add_ps( /*0x8cff91*/
              _mm_mul_ps(
                _mm_shuffle_ps(v14, v14, 0),
                *(__m128 *)((*(int (__thiscall **)(__m128 *))(a1->m128_i32[0] + 0x58))(a1) + 0x20)),
              *v3);
    }
  }
LABEL_28:
  sub_890970(a1); /*0x8cfff8*/
  if ( !a1[0x2A].m128_i32[0] ) /*0x8cffff*/
    sub_890720(a1); /*0x8d000a*/
}
