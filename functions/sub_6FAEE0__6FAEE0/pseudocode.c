UInt16 __thiscall sub_6FAEE0(Unk128 *this, float a2)
{
  double v2; // st6
  double v3; // st5
  double v4; // st7
  double v5; // rt1
  double v6; // st5
  double v7; // st6
  double v8; // rt2
  double v9; // st5
  double v10; // st7
  double v11; // rt0
  double v12; // st5
  double v13; // st6
  UInt16 result; // ax
  float v15; // [esp+8h] [ebp+4h]
  float v16; // [esp+8h] [ebp+4h]

  v2 = a2;
  v3 = flt_B3F9A0;
  if ( a2 < 0.0 )
  {
    while ( 1 )
    {
      v5 = v3;
      v6 = v2 + v3;
      v7 = v5;
      v15 = v6;
      if ( v15 >= 0.0 )
        break;
      v3 = v7;
      v2 = v15;
    }
    v8 = v7;
    v2 = v15;
    v4 = v8;
  }
  else
  {
    v4 = flt_B3F9A0;
  }
  v9 = v4;
  if ( v4 <= v2 )
  {
    while ( 1 )
    {
      v11 = v9;
      v12 = v2 - v4;
      v13 = v11;
      v16 = v12;
      if ( v16 < v11 )
        break;
      v9 = v13;
      v2 = v16;
    }
    v10 = v16;
  }
  else
  {
    v10 = v2;
  }
  result = (int)(v10 * dbl_A2FC70);
  this->unkC = result;
  return result;
}
