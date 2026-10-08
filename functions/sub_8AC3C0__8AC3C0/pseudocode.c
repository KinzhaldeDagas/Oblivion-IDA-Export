// TES4 authoritative: converts a 0x40-byte manifold/contact surface into a support surface constraint when its dot against the up/support basis is between 0.01 and the proxy slope limit.
char __usercall hkpCharacterProxy_ProjectManifoldContactToSurfaceConstraint@<al>(
        int a1@<eax>,
        const void **a2@<edi>,
        float a3,
        __m128 *a4)
{
  int v4; // esi
  __m128 v5; // xmm0
  char *v6; // ecx
  char *v7; // eax
  __m128 v8; // xmm1
  __m128 v9; // xmm0
  float v10; // xmm2_4
  float v11; // xmm3_4
  __m128 v12; // xmm0
  float v14; // [esp+8h] [ebp-14h]
  unsigned int v15; // [esp+8h] [ebp-14h]
  float v16; // [esp+Ch] [ebp-10h]

  v4 = a1 << 6; /*0x8ac3d5*/
  v5 = _mm_mul_ps(*((__m128 *)*a2 + 4 * a1), *a4); /*0x8ac3dc*/
  v14 = _mm_shuffle_ps(v5, v5, 0xAA).m128_f32[0] + (float)(_mm_shuffle_ps(v5, v5, 0x55).m128_f32[0] + v5.m128_f32[0]);// Computes dot(candidate surface vector, up/support basis) for support-surface filtering. /*0x8ac3f9*/
  if ( v14 <= (double)flt_A34BA0 || v14 >= (double)a3 )// Rejects surfaces with dot <= 0.01 or dot >= proxy slope limit; accepted surfaces are projected into the horizontal/support plane. /*0x8ac41e*/
    return 0; /*0x8ac51e*/
  if ( a2[1] == (const void *)((unsigned int)a2[2] & 0x3FFFFFFF) ) /*0x8ac432*/
    sub_8A6EE0(a2, 0x40); /*0x8ac437*/
  v6 = (char *)*a2; /*0x8ac43f*/
  *(float *)&v15 = -v14; /*0x8ac44c*/
  v7 = (char *)*a2 + 0x40 * (_DWORD)a2[1]; /*0x8ac453*/
  a2[1] = (char *)a2[1] + 1; /*0x8ac456*/
  *(_OWORD *)v7 = *(_OWORD *)&v6[v4]; /*0x8ac45d*/
  *((_OWORD *)v7 + 1) = *(_OWORD *)&v6[v4 + 0x10]; /*0x8ac465*/
  *((_DWORD *)v7 + 8) = *(_DWORD *)&v6[v4 + 0x20]; /*0x8ac473*/
  *((_DWORD *)v7 + 9) = *(_DWORD *)&v6[v4 + 0x24]; /*0x8ac47a*/
  *((_DWORD *)v7 + 0xA) = *(_DWORD *)&v6[v4 + 0x28]; /*0x8ac481*/
  *((_DWORD *)v7 + 0xB) = *(_DWORD *)&v6[v4 + 0x2C]; /*0x8ac48f*/
  *((_DWORD *)v7 + 0xC) = *(_DWORD *)&v6[v4 + 0x30]; /*0x8ac496*/
  v8 = _mm_add_ps(*(__m128 *)v7, _mm_mul_ps(_mm_shuffle_ps((__m128)v15, (__m128)v15, 0), *a4));// Removes the up/support-basis component from the surface vector before normalizing it for the support constraint. /*0x8ac4a2*/
  v9 = _mm_mul_ps(v8, v8); /*0x8ac4a8*/
  v10 = _mm_shuffle_ps(v9, v9, 0x55).m128_f32[0] + v9.m128_f32[0]; /*0x8ac4b2*/
  v11 = _mm_shuffle_ps(v9, v9, 0xAA).m128_f32[0]; /*0x8ac4b9*/
  v16 = 1.0 / fsqrt(v11 + v10); /*0x8ac4cd*/
  v12 = (__m128)0x3F000000u; /*0x8ac4fa*/
  v12.m128_f32[0] = (float)(0.5 * v16) * (float)(3.0 - (float)((float)((float)(v11 + v10) * v16) * v16)); /*0x8ac504*/
  *(__m128 *)v7 = _mm_mul_ps(_mm_shuffle_ps(v12, v12, 0), v8);// Stores normalized projected support constraint vector in the 0x40-byte surface entry. /*0x8ac512*/
  return 1; /*0x8ac518*/
}
