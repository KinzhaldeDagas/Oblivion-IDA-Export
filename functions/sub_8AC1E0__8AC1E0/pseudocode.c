// TES4 authoritative: resets/initializes low-level hkpCharacterProxy fields from cinfo. cinfo+0x64 is a slope angle in radians; proxy+0xA4 stores cos(cinfo+0x64), used by 0x8AE100 support acceptance.
_DWORD *__thiscall hkpCharacterProxy_ResetFromCinfo(__m128 *this, int a2)
{
  int (__thiscall ***v3)(int (__stdcall ***)(signed int), int); // ecx
  __m128 v4; // xmm1
  __m128 v5; // xmm0
  float v6; // xmm3_4
  __m128 v7; // xmm0
  int v8; // ecx
  int v9; // eax
  int v10; // edi
  int v11; // eax
  int v12; // edi
  int v13; // edx
  int v14; // ecx
  _DWORD *result; // eax
  _DWORD *i; // edx
  float v17; // [esp+0h] [ebp-24h]
  float v18; // [esp+14h] [ebp-10h]

  sub_8BC720(*(_WORD **)(a2 + 0x48)); /*0x8ac1f4*/
  v3 = *((int (__thiscall ****)(int (__stdcall ***)(signed int), int))this + 0xC); /*0x8ac1f9*/
  if ( v3 ) /*0x8ac200*/
    sub_8BC730(v3); /*0x8ac202*/
  *(this + 1) = *(__m128 *)(a2 + 0x10); /*0x8ac20b*/
  *((_DWORD *)this + 0xD) = *(_DWORD *)(a2 + 0x20); /*0x8ac212*/
  *((_DWORD *)this + 0xE) = *(_DWORD *)(a2 + 0x24); /*0x8ac218*/
  *((_DWORD *)this + 0x17) = *(_DWORD *)(a2 + 0x28); /*0x8ac21e*/
  *((_DWORD *)this + 0x14) = *(_DWORD *)(a2 + 0x40); /*0x8ac224*/
  *((_DWORD *)this + 0x15) = *(_DWORD *)(a2 + 0x44); /*0x8ac22a*/
  *((_DWORD *)this + 0x16) = *(_DWORD *)(a2 + 0x4C); /*0x8ac230*/
  *((_DWORD *)this + 0xC) = *(_DWORD *)(a2 + 0x48); /*0x8ac236*/
  *((_DWORD *)this + 0x18) = *(_DWORD *)(a2 + 0x50); /*0x8ac23c*/
  *((_DWORD *)this + 0x19) = *(_DWORD *)(a2 + 0x54); /*0x8ac242*/
  *((_DWORD *)this + 0x1A) = *(_DWORD *)(a2 + 0x58); /*0x8ac248*/
  *((_DWORD *)this + 0x1B) = *(_DWORD *)(a2 + 0x5C); /*0x8ac24e*/
  *((_DWORD *)this + 0x1C) = *(_DWORD *)(a2 + 0x60); /*0x8ac254*/
  *((float *)this + 0x29) = cos(*(float *)(a2 + 0x64));// proxy+0xA4 = cos(cinfo+0x64 max slope angle). Support status 1/2 test in 0x8AE100 uses this squared against the support-motion/up relation. /*0x8ac264*/
  *((_DWORD *)this + 0x2A) = *(_DWORD *)(a2 + 0x68); /*0x8ac26d*/
  *(this + 4) = *(__m128 *)(a2 + 0x30); /*0x8ac277*/
  v4 = *(this + 4); /*0x8ac27b*/
  v5 = _mm_mul_ps(v4, v4); /*0x8ac282*/
  v5.m128_f32[0] = _mm_shuffle_ps(v5, v5, 0xAA).m128_f32[0] /*0x8ac2a0*/
                 + (float)(_mm_shuffle_ps(v5, v5, 0x55).m128_f32[0] + v5.m128_f32[0]);
  v18 = 1.0 / fsqrt(v5.m128_f32[0]); /*0x8ac2ad*/
  v6 = 3.0 - (float)((float)(v5.m128_f32[0] * v18) * v18); /*0x8ac2c0*/
  v7 = (__m128)0x3F000000u; /*0x8ac2cc*/
  v7.m128_f32[0] = (float)(0.5 * v18) * v6; /*0x8ac2d6*/
  *(this + 4) = _mm_mul_ps(_mm_shuffle_ps(v7, v7, 0), v4); /*0x8ac2e4*/
  v8 = *((_DWORD *)this + 0xC); /*0x8ac2e8*/
  if ( *(_DWORD *)(v8 + 8) ) /*0x8ac2eb*/
  {
    if ( v8 ) /*0x8ac2f2*/
    {
      v17 = *((float *)this + 0x17) + *((float *)this + 0x16); /*0x8ac2fb*/
      sub_8ABAC0(v8, (_OWORD *)a2, v17); /*0x8ac2ff*/
    }
  }
  v9 = *((_DWORD *)this + 0x24); /*0x8ac304*/
  v10 = 0; /*0x8ac30a*/
  *((_OWORD *)this + 2) = 0; /*0x8ac311*/
  if ( v9 > 0 ) /*0x8ac315*/
  {
    do /*0x8ac338*/
      sub_8A6300(*(int **)(*((_DWORD *)this + 0x23) + 4 * v10++), (int)&this->m128_i32[2]); /*0x8ac32a*/
    while ( v10 < *((_DWORD *)this + 0x24) ); /*0x8ac338*/
  }
  v11 = *((_DWORD *)this + 0x27); /*0x8ac33c*/
  v12 = 0; /*0x8ac342*/
  *((_DWORD *)this + 0x24) = 0; /*0x8ac346*/
  if ( v11 > 0 ) /*0x8ac34c*/
  {
    do /*0x8ac369*/
      sub_8DE670(*(int **)(*((_DWORD *)this + 0x26) + 4 * v12++), (int)&this->m128_i32[3]); /*0x8ac35b*/
    while ( v12 < *((_DWORD *)this + 0x27) ); /*0x8ac369*/
  }
  v13 = *((_DWORD *)this + 0xC); /*0x8ac36d*/
  *((_DWORD *)this + 0x27) = 0; /*0x8ac370*/
  *((_DWORD *)this + 0x1E) = 0; /*0x8ac376*/
  v14 = *(_DWORD *)(v13 + 0x48); /*0x8ac379*/
  result = 0; /*0x8ac37c*/
  if ( v14 <= 0 ) /*0x8ac380*/
    return sub_8BC750(*((_DWORD **)this + 0xC), 0x1300, (int)this, 0); /*0x8ac395*/
  for ( i = *(_DWORD **)(v13 + 0x44); *i != 0x1300; i += 4 ) /*0x8ac382*/
  {
    result = (_DWORD *)((char *)result + 1); /*0x8ac38d*/
    if ( (int)result >= v14 ) /*0x8ac393*/
      return sub_8BC750(*((_DWORD **)this + 0xC), 0x1300, (int)this, 0); /*0x8ac393*/
  }
  return result; /*0x8ac3ac*/
}
