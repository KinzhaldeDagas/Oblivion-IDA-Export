double __thiscall sub_65DA60(MobileObject *this)
{
  double result; // st7
  double v3; // st6
  float ZRotation; // [esp+4h] [ebp-4h]
  float v5; // [esp+4h] [ebp-4h]

  ZRotation = MobileObject_GetZRotation(this);
  v5 = *((float *)this + 0x187) + ZRotation;
  result = v5;
  if ( v5 >= 0.0 )
  {
    v3 = dbl_A3D5B0;
    if ( v3 < result )
      return (float)(result - v3);
  }
  else
  {
    return (float)(result + dbl_A3D5B0);
  }
  return result;
}
