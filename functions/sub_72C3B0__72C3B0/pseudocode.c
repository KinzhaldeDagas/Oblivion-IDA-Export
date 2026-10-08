unsigned int __cdecl sub_72C3B0(int a1, int a2)
{
  double v2; // st7
  float v4; // [esp+8h] [ebp+8h]

  v4 = *(float *)(a2 + 4); /*0x72c3c2*/
  v2 = *(float *)(a1 + 4); /*0x72c3c6*/
  if ( v4 >= v2 ) /*0x72c3d5*/
    return v4 > v2; /*0x72c3e6*/
  else
    return 0xFFFFFFFF; /*0x72c3d9*/
}
