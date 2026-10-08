// Applies the one-shot impact impulse using world-space contact point and normal components. Projectile byte +0x97 prevents duplicate attempts, including unsupported collision objects.
void __thiscall ArrowProjectile_ApplyImpactImpulseToCollision(
        ArrowProjectile *this,
        float pointX,
        float pointY,
        float pointZ,
        float normalX,
        float normalY,
        float normalZ,
        void *collisionObject)
{                                               // ArrowProjectile +0x97 is the one-shot impact-impulse guard: only attempt Havok impulse when a collision object is supplied and the guard is clear.
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  float *v14; // ecx
  double v15; // st7
  int v16; // eax
  double v17; // st7
  double v18; // st6
  int v19; // esi
  int v20; // xmm3_4
  float v21; // xmm4_4
  double v22; // rt0
  __m128 v23; // xmm0
  float v24; // xmm1_4
  float v25; // xmm3_4
  __m128 v26; // xmm0
  __m128 v27; // xmm1
  float speed; // [esp+8h] [ebp-38h]
  float v29; // [esp+8h] [ebp-38h]
  float v30; // [esp+8h] [ebp-38h]
  float v31; // [esp+Ch] [ebp-34h]
  __m128 v32; // [esp+10h] [ebp-30h] BYREF
  float v33[7]; // [esp+20h] [ebp-20h] BYREF

  if ( collisionObject && !HIBYTE(this->unk094) ) /*0x608913*/
  {
    if ( !(*(int (__thiscall **)(void *))(*(_DWORD *)collisionObject + 0x58))(collisionObject) ) /*0x60892b*/
    {
LABEL_22:
      HIBYTE(this->unk094) = 1;                 // Mark +0x97 after the first impact-impulse attempt, including unsupported/no-rigidbody cases, preventing duplicate impulse application. /*0x608ab8*/
      return; /*0x608ab8*/
    }
    v9 = *((_DWORD *)collisionObject + 2); /*0x608931*/
    speed = this->speed; /*0x608939*/
    if ( v9 && (v10 = v9 + 0x14) != 0 ) /*0x608942*/
      v11 = *(_DWORD *)(v10 + 0x1C); /*0x608944*/
    else
      LOBYTE(v11) = 0; /*0x608949*/
    v12 = (v11 & 0x3F) - 8; /*0x60894e*/
    if ( v12 ) /*0x608951*/
    {
      v13 = v12 - 2; /*0x608953*/
      if ( v13 ) /*0x608956*/
      {
        if ( v13 != 4 ) /*0x60895b*/
        {
          v14 = &g_GameSettingStringPointers_B36CD8[0x104]; /*0x60895d*/
LABEL_15:
          v15 = speed * *(float *)GameSetting_GetSafeFloatPointer((int *)v14); /*0x60898d*/
          goto LABEL_16; /*0x608996*/
        }
        v15 = *(float *)GameSetting_GetSafeFloatPointer((int *)&g_GameSettingStringPointers_B36CD8[0x10A]) * speed; /*0x608970*/
      }
      else
      {
        v15 = *(float *)GameSetting_GetSafeFloatPointer((int *)&g_GameSettingStringPointers_B36CD8[0x106]) * speed; /*0x608982*/
      }
LABEL_16:
      v16 = *((_DWORD *)collisionObject + 2); /*0x608998*/
      v29 = v15; /*0x60899b*/
      if ( v16 ) /*0x6089a1*/
        v17 = sub_89DA90((float *)*(_DWORD *)(v16 + 0x50)); /*0x6089a6*/
      else
        v17 = 0.0; /*0x6089ad*/
      v31 = v17; /*0x6089af*/
      v18 = g_GameSettingStringPointers_B36CD8[0x10C]; /*0x6089b7*/
      if ( v18 > v31 ) /*0x6089c4*/
        v29 = v31 / v18 * v29; /*0x6089cc*/
      v19 = *((_DWORD *)collisionObject + 2); /*0x6089e8*/
      v20 = dword_A46C30; /*0x6089ee*/
      v30 = g_GameSettingStringPointers_B36CD8[0x102] * v29; /*0x6089f2*/
      v21 = kHeadBodyNormalMatchRadius; /*0x6089f6*/
      v22 = hkFactor; /*0x608a0b*/
      v32.m128_f32[0] = normalX * v22; /*0x608a0d*/
      v32.m128_f32[1] = normalY * v22; /*0x608a16*/
      v32.m128_f32[2] = normalZ * v22; /*0x608a1f*/
      v23 = _mm_mul_ps(v32, v32); /*0x608a2e*/
      v33[0] = pointX * v22; /*0x608a3e*/
      v23.m128_f32[0] = _mm_shuffle_ps(v23, v23, 0xAA).m128_f32[0] /*0x608a49*/
                      + (float)(_mm_shuffle_ps(v23, v23, 0x55).m128_f32[0] + v23.m128_f32[0]);
      v24 = 1.0 / fsqrt(v23.m128_f32[0]); /*0x608a52*/
      v33[1] = pointY * v22; /*0x608a5a*/
      v25 = *(float *)&v20 - (float)((float)(v23.m128_f32[0] * v24) * v24); /*0x608a65*/
      v26 = 0; /*0x608a69*/
      v33[2] = v22 * pointZ; /*0x608a74*/
      v26.m128_f32[0] = (float)(v21 * v24) * v25; /*0x608a78*/
      v27 = 0; /*0x608a82*/
      v27.m128_f32[0] = v30; /*0x608a85*/
      v32 = _mm_mul_ps(_mm_mul_ps(_mm_shuffle_ps(v26, v26, 0), v32), _mm_shuffle_ps(v27, v27, 0)); /*0x608a9a*/
      sub_8A6410(v19); /*0x608a9f*/
      (*(void (__thiscall **)(_DWORD, __m128 *, float *))(**(_DWORD **)(v19 + 0x50) + 0x60))( /*0x608ab6*/
        *(_DWORD *)(v19 + 0x50),
        &v32,
        v33);
      goto LABEL_22; /*0x608ab6*/
    }
    v14 = &g_GameSettingStringPointers_B36CD8[0x108]; /*0x608988*/
    goto LABEL_15; /*0x608988*/
  }
}
