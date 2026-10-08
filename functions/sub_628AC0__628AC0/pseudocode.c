int __thiscall sub_628AC0(float *this, int a2, int a3, float a4)
{
  double v4; // st7
  float v8; // [esp+4h] [ebp-Ch]
  float v9; // [esp+18h] [ebp+8h]

  v4 = a4; /*0x628ac0*/
  if ( a3 == 0xB ) /*0x628acf*/
  {
    *(this + 0xA5) = a4; /*0x628ad1*/
  }
  else if ( a3 == 0x30 ) /*0x628adc*/
  {
    v9 = floor(a4); /*0x628ae9*/
    v4 = a4; /*0x628af9*/
    *((_DWORD *)this + 0xA6) = Double_To_SInt32(v9); /*0x628afd*/
  }
  v8 = v4; /*0x628b08*/
  return sub_6434A0(a2, a3, v8); /*0x628b16*/
}
