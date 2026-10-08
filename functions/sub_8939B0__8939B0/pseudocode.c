// TES4 authoritative: updates smoothed support slope/tilt at proxy+0x32C by sampling the two cached capsule endpoints and dividing height delta by capsule height +0x3A4.
void __thiscall bhkCharacterProxy_UpdateCapsuleSupportSlope(int this)
{
  double v2; // st7
  double v3; // st6
  double v4; // st5
  float v5; // [esp+8h] [ebp-78h]
  float v6; // [esp+8h] [ebp-78h]
  float v7; // [esp+8h] [ebp-78h]
  float v8; // [esp+8h] [ebp-78h]
  float v9; // [esp+8h] [ebp-78h]
  float v10; // [esp+8h] [ebp-78h]
  float v11; // [esp+8h] [ebp-78h]
  float v12; // [esp+Ch] [ebp-74h]
  float v13; // [esp+Ch] [ebp-74h]
  __m128 v14; // [esp+20h] [ebp-60h] BYREF
  _OWORD v15[4]; // [esp+30h] [ebp-50h] BYREF

  if ( (*(_BYTE *)(this + 0x1F4) & 1) != 0 /*0x8939f2*/
    && (*(_DWORD *)(this + 0x1F4) & 0x40000) == 0
    && *(float *)(this + 0x30C) > 0.0 )
  {
    bhkRefObject_CopyHavokObjectTransform(*(_DWORD **)(this + 0x364), v15); /*0x893a03*/
    v5 = *(float *)(this + 0x240); /*0x893a0e*/
    v12 = *(float *)(this + 0x244); /*0x893a18*/
    if ( flt_A96588 == v5 ) /*0x893a2b*/
    {
      bhkCharacterProxy_RaycastCapsuleEndpointDown((_DWORD *)this, 0, v14.m128_f32);// If endpoint 0 height cache is sentinel, raycast downward from cached capsule endpoint 0. /*0x893a36*/
      v5 = _mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0]; /*0x893a4e*/
    }
    if ( flt_A96588 == v12 ) /*0x893a61*/
    {
      bhkCharacterProxy_RaycastCapsuleEndpointDown((_DWORD *)this, 1, v14.m128_f32);// If endpoint 1 height cache is sentinel, raycast downward from cached capsule endpoint 1. /*0x893a6c*/
      v12 = _mm_shuffle_ps(v14, v14, 0xAA).m128_f32[0]; /*0x893a84*/
    }
    v6 = v12 - v5; /*0x893a90*/
    v2 = 0.0; /*0x893a94*/
    if ( v6 == 0.0 ) /*0x893aa5*/
    {
      v13 = 0.0; /*0x893b1d*/
    }
    else
    {
      v7 = v6 / *(float *)(this + 0x3A4);       // Support slope ratio = endpoint height delta / capsule height +0x3A4. /*0x893aaf*/
      v8 = atan(v7);                            // Convert support slope ratio to angle via atan before clamping. /*0x893abc*/
      v13 = v8; /*0x893ac4*/
      v2 = 0.0; /*0x893ac8*/
      v3 = v8; /*0x893aca*/
      v4 = flt_B2E77C; /*0x893ad2*/
      if ( v8 <= 0.0 ) /*0x893adb*/
      {
        v10 = v4 * dbl_A968A8; /*0x893b02*/
        if ( v10 > v3 ) /*0x893b13*/
          v13 = v4 * dbl_A968A8; /*0x893b15*/
      }
      else
      {
        v9 = v4 * dbl_A968B0; /*0x893ae3*/
        if ( v9 < v3 ) /*0x893af4*/
          v13 = v4 * dbl_A968B0; /*0x893af6*/
      }
    }
    v11 = v13 - *(float *)(this + 0x32C); /*0x893b2f*/
    if ( v11 != v2 ) /*0x893b40*/
    {
      if ( *(float *)(this + 0x330) > 1.0 ) /*0x893b4f*/
        *(float *)(this + 0x330) = 1.0; /*0x893b51*/
      *(float *)(this + 0x32C) = v11 * *(float *)(this + 0x330) + *(float *)(this + 0x32C);// Smooth proxy+0x32C toward clamped support slope angle using response factor +0x330. /*0x893b67*/
    }
  }
}
