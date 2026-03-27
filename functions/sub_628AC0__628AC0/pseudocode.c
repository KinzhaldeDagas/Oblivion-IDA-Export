int __thiscall sub_628AC0(float *this, int a2, int a3, float a4)
{
  double v4; // st7
  float v8; // [esp+4h] [ebp-Ch]
  float v9; // [esp+18h] [ebp+8h]

  v4 = a4;
  if ( a3 == 0xB )
  {
    *(this + 0xA5) = a4;
  }
  else if ( a3 == 0x30 )
  {
    v9 = floor(a4);
    v4 = a4;
    *((_DWORD *)this + 0xA6) = Double_To_SInt32(v9);
  }
  v8 = v4;
  return sub_6434A0(a2, a3, v8);
}
