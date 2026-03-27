char __thiscall sub_4A6990(float *this, float *a2)
{
  double v2; // st7
  double v3; // st6
  double v4; // st7
  double v5; // st6
  bool v6; // c0
  bool v7; // c3
  double v8; // st7
  double v10; // st7
  double v11; // st6
  bool v12; // c0
  bool v13; // c3
  double v14; // st6
  double v15; // st5

  v2 = *this;
  v3 = *a2;
  if ( v3 >= v2 )
  {
    v10 = v3 - v2;
    v11 = dbl_A30E40;
    v12 = v11 < v10;
    v13 = v11 == v10;
    v8 = v11;
    if ( v12 || v13 )
      return 0;
  }
  else
  {
    v4 = v2 - v3;
    v5 = dbl_A30E40;
    v6 = v5 < v4;
    v7 = v5 == v4;
    v8 = v5;
    if ( v6 || v7 )
      return 0;
  }
  v14 = *(this + 1);
  v15 = a2[1];
  if ( v15 >= v14 )
  {
    if ( v15 - v14 >= v8 )
      return 0;
  }
  else if ( v14 - v15 >= v8 )
  {
    return 0;
  }
  return 1;
}
