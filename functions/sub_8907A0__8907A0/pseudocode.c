// TES4 authoritative: set transient push/knockback channel. Converts caller world vector by hkFactor, divides by duration, and if stronger than current +0x2F0 stores +0x300=duration and +0x2F0=push vector/duration. Not a generic ledge-climb impulse API.
void __thiscall bhkCharacterController_SetTransientPushVector(__m128 *this, float *a2, float a3)
{
  __m128 v3; // xmm1
  double v4; // st6
  __m128 v5; // xmm1
  __m128 v6; // xmm0
  float v7; // xmm2_4
  float v8; // xmm3_4
  __m128 v9; // xmm0
  float v10; // [esp+Ch] [ebp-34h]
  __m128 v11; // [esp+20h] [ebp-20h]

  v3 = 0; /*0x8907b9*/
  v4 = hkFactor;                                // Uses hkFactor, so sub_8907A0 expects caller vector in TES/world units and stores Havok-unit push data. /*0x8907bc*/
  v11.m128_f32[0] = *a2 * v4; /*0x8907c6*/
  v11.m128_f32[1] = a2[1] * v4; /*0x8907cf*/
  v11.m128_f32[2] = v4 * a2[2]; /*0x8907d6*/
  v10 = 1.0 / a3; /*0x8907e3*/
  v3.m128_f32[0] = v10; /*0x8907ed*/
  v5 = _mm_mul_ps(_mm_shuffle_ps(v3, v3, 0), v11); /*0x8907fa*/
  v6 = _mm_mul_ps(v5, v5); /*0x890800*/
  v7 = _mm_shuffle_ps(v6, v6, 0x55).m128_f32[0] + v6.m128_f32[0]; /*0x89080a*/
  v8 = _mm_shuffle_ps(v6, v6, 0xAA).m128_f32[0]; /*0x890811*/
  v9 = _mm_mul_ps(*(this + 0x2F), *(this + 0x2F)); /*0x890820*/
  if ( (float)(_mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0] /*0x890854*/
             + (float)(_mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0])) < (double)(float)(v8 + v7) )
  {
    *((float *)this + 0xC0) = a3;               // Stores transient push timer at proxy+0x300 only when new push vector magnitude exceeds existing +0x2F0 magnitude. /*0x890856*/
    *(this + 0x2F) = v5;                        // Stores transient push vector at proxy+0x2F0; later consumed by 0x890970 as remainingTime * vector. /*0x89085c*/
  }
}
