// TES4 authoritative: for each 0x30-byte hit, copies original entry+0x1C cast fraction into entry+0x0C, then rewrites entry+0x1C as -dot(moveDir, normal) * originalFraction.
void __stdcall hkpCdPointHits_RewriteSortKeyFromMoveNormal(int entries, int count, __m128 *moveDir)
{
  float *v3; // eax
  int v4; // ecx
  double v5; // st7
  __m128 v6; // xmm1
  __m128 v7; // xmm0

  if ( count - 1 >= 0 ) /*0x8abd4e*/
  {
    v3 = (float *)(entries + 0x1C); /*0x8abd56*/
    v4 = count; /*0x8abd59*/
    do /*0x8abd9e*/
    {
      v5 = *v3; /*0x8abd60*/
      v6 = *(__m128 *)(v3 + 0xFFFFFFFD); /*0x8abd62*/
      v3[0xFFFFFFFC] = *v3;                     // Preserves original hit fraction/distance from entry+0x1C into point.w at entry+0x0C before rewriting the sort key. /*0x8abd66*/
      v7 = _mm_mul_ps(*moveDir, v6); /*0x8abd6c*/
      v3 += 0xC; /*0x8abd93*/
      --v4; /*0x8abd96*/
      v3[0xFFFFFFF4] = -((float)(_mm_shuffle_ps(v7, v7, 0xAA).m128_f32[0] /*0x8abd99*/
                               + (float)(_mm_shuffle_ps(v7, v7, 0x55).m128_f32[0] + v7.m128_f32[0]))
                       * v5);                   // Rewrites entry+0x1C as movement-relative priority; do not treat cached +0x1C as a pure geometric ledge/clearance distance.
    }
    while ( v4 ); /*0x8abd9e*/
  }
}
