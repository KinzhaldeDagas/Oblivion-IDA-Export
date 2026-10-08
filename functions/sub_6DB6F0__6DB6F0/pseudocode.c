double __thiscall sub_6DB6F0(_DWORD *this, int a2, int a3, float a4)
{
  int i; // esi
  double v7; // st7
  float v9; // [esp+14h] [ebp-4h]
  float v10; // [esp+20h] [ebp+8h]

  v9 = 0.0; /*0x6db6f8*/
  for ( i = 0; i < 0x14; i += 4 ) /*0x6db705*/
  {
    v10 = *(float *)(i + 0xB246F4) * a4; /*0x6db71d*/
    v7 = sub_6DB660(this, a2, a3, v10) * *(float *)(i + 0xB246E0); /*0x6db72f*/
    v9 = v7 + v9; /*0x6db73f*/
  }
  return (float)(v9 * a4); /*0x6db759*/
}
