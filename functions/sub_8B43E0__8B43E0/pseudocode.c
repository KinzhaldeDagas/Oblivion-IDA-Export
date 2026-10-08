int __cdecl sub_8B43E0(__m128 **a1, float a2, int a3)
{
  float v4; // [esp+0h] [ebp-FCh]
  __m128 v5; // [esp+1Ch] [ebp-E0h] BYREF
  __m128 v6; // [esp+2Ch] [ebp-D0h] BYREF
  _OWORD v7[3]; // [esp+3Ch] [ebp-C0h] BYREF
  float v8[25]; // [esp+6Ch] [ebp-90h] BYREF
  float v9; // [esp+D0h] [ebp-2Ch]

  if ( a2 <= (double)*(float *)&SrcStr ) /*0x8b43fb*/
    return 1; /*0x8b43fd*/
  sub_8B4350(&v5, a1); /*0x8b4410*/
  v5.m128_i32[3] = 0; /*0x8b4422*/
  sub_8B4020((int)v8, (int *)a1, &v5); /*0x8b442a*/
  *(float *)a3 = v9; /*0x8b4439*/
  v4 = a2 / v9; /*0x8b4453*/
  sub_8B3D50(v8, a2, v4, v6.m128_f32, (float *)v7); /*0x8b445b*/
  *(__m128 *)(a3 + 0x10) = _mm_sub_ps(v6, v5); /*0x8b4470*/
  *(_OWORD *)(a3 + 0x20) = v7[0]; /*0x8b4479*/
  *(_OWORD *)(a3 + 0x30) = v7[1]; /*0x8b4482*/
  *(_OWORD *)(a3 + 0x40) = v7[2]; /*0x8b448b*/
  *(float *)(a3 + 4) = a2; /*0x8b448f*/
  return 0; /*0x8b4403*/
}
