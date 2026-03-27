void __thiscall sub_680E70(float *this, float a2)
{
  double v2; // st7
  double v4; // st6
  float v5; // [esp+4h] [ebp+4h]

  v2 = a2;
  *(this + 6) = a2;
  v4 = dbl_A3D5B0;
  if ( a2 >= 0.0 )
  {
    if ( v4 <= v2 )
    {
      unknown_libname_14(v4, v2);
      *(this + 6) = a2;
    }
  }
  else
  {
    v5 = v2 + v4;
    unknown_libname_14(v4, v5);
    *(this + 6) = v5;
  }
}
