signed int __cdecl sub_6A5C00(float *a1, float *a2)
{
  float v3; // [esp+4h] [ebp+4h]
  float v4; // [esp+8h] [ebp+8h]

  v3 = sub_6A5A10((float *)unk_B3C0E4, a1); /*0x6a5c11*/
  v4 = sub_6A5A10((float *)unk_B3C0E4, a2); /*0x6a5c25*/
  if ( v4 == v3 ) /*0x6a5c41*/
    return 0; /*0x6a5c45*/
  if ( v4 <= (double)v3 ) /*0x6a5c51*/
    return 0xFFFFFFFF; /*0x6a5c59*/
  return 1; /*0x6a5c49*/
}
