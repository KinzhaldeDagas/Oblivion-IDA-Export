void __thiscall sub_8B8380(__m128 *this)
{
  int BhkBlendCollisionObject; // ecx
  int v3; // ecx
  _DWORD **v4; // ecx
  __m128 v5; // xmm0
  float v6; // [esp+0h] [ebp-38h]
  __m128 v7; // [esp+18h] [ebp-20h] BYREF

  if ( *((_DWORD *)this + 0xC) ) /*0x8b8397*/
  {
    BhkBlendCollisionObject = NiAVObject_GetBhkBlendCollisionObject(*((_DWORD *)this + 0xC)); /*0x8b83a4*/
    if ( BhkBlendCollisionObject ) /*0x8b83ab*/
    {
      if ( *(float *)(BhkBlendCollisionObject + 0x14) < 1.0 ) /*0x8b83b7*/
      {
        v3 = *(_DWORD *)(BhkBlendCollisionObject + 0x10); /*0x8b83b9*/
        if ( v3 ) /*0x8b83be*/
        {
          v4 = *(_DWORD ***)(v3 + 8); /*0x8b83c0*/
          if ( v4 ) /*0x8b83c5*/
          {
            v5 = 0; /*0x8b83d2*/
            v5.m128_f32[0] = flt_A2FE7C; /*0x8b83d5*/
            v6 = *((float *)this + 0x14); /*0x8b83ed*/
            v7 = _mm_mul_ps(_mm_shuffle_ps(v5, v5, 0), *(this + 4)); /*0x8b83f0*/
            sub_5377B0(v4, v6, (int)&v7); /*0x8b83f5*/
          }
        }
      }
    }
  }
}
