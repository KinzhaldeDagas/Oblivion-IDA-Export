unsigned int __cdecl sub_8A4000(int a1, __m128 *a2, float *a3)
{
  unsigned int result; // eax
  double v4; // st7
  float v5; // [esp+8h] [ebp-24h] BYREF
  __m128 v6; // [esp+Ch] [ebp-20h] BYREF

  v6.m128_f32[0] = 0.0; /*0x8a401a*/
  v6.m128_f32[1] = 0.0; /*0x8a4021*/
  v6.m128_f32[2] = 0.0; /*0x8a4026*/
  v6.m128_f32[3] = 0.0; /*0x8a402d*/
  v5 = 0.0; /*0x8a4035*/
  result = sub_8A3EB0(a1, &v6, &v5); /*0x8a4040*/
  v4 = v5; /*0x8a4045*/
  *a2 = v6; /*0x8a4055*/
  *a3 = v4; /*0x8a4058*/
  return result; /*0x8a405b*/
}
