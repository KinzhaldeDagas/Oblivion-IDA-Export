double __thiscall sub_6DD180(_DWORD *this, int a2, int a3, float a4)
{
  int i; // esi
  double v7; // st7
  float v9; // [esp+14h] [ebp-4h]
  float v10; // [esp+20h] [ebp+8h]

  v9 = 0.0; /*0x6dd188*/
  for ( i = 0; i < 0x14; i += 4 ) /*0x6dd195*/
  {
    v10 = *(float *)(i + 0xB24740) * a4; /*0x6dd1ad*/
    v7 = sub_6DD0F0(this, a2, a3, v10) * *(float *)(i + 0xB2472C); /*0x6dd1bf*/
    v9 = v7 + v9; /*0x6dd1cf*/
  }
  return (float)(v9 * a4); /*0x6dd1e9*/
}
