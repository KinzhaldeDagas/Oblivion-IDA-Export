void __thiscall sub_7D1ED0(float *this, float a2, float a3)
{
  double v3; // st6
  double v4; // st6
  double v5; // st4
  float v6; // [esp+8h] [ebp+8h]

  if ( a2 != *(this + 0x37) )
  {
    if ( LOBYTE(a3) )
    {
      *(this + 0x38) = 1.0;
      *(this + 0x37) = a2;
    }
    else
    {
      v3 = *(this + 0x38) / flt_B2C680;
      if ( v3 < 0.0 || v3 <= 1.0 )
      {
        if ( v3 < 0.0 )
          v3 = 0.0;
        v5 = v3;
        v4 = 1.0;
      }
      else
      {
        v4 = 1.0;
        v5 = 1.0;
      }
      v6 = v5;
      *(this + 0x38) = (v4 - v6) * flt_B2C680;
      *(this + 0x37) = a2;
    }
  }
}
