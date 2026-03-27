void __thiscall sub_72FAC0(float *this)
{
  double v1; // st7
  double v2; // st5
  double v3; // st6
  double v4; // st4
  double v5; // st7
  double v6; // st3
  double v7; // st3
  double v8; // st4
  float v9; // [esp+0h] [ebp-4h]
  float v10; // [esp+0h] [ebp-4h]
  float v11; // [esp+0h] [ebp-4h]
  float v12; // [esp+0h] [ebp-4h]
  float v13; // [esp+0h] [ebp-4h]
  float v14; // [esp+0h] [ebp-4h]

  v9 = *(this + 2) * *(this + 2) + *(this + 1) * *(this + 1) + *(this + 3) * *(this + 3) + *this * *this;
  v1 = v9;
  v2 = dbl_A80528;
  v3 = flt_B3FF38;
  v10 = (v9 - v2) * flt_B3FF34 + v3;
  v4 = v1;
  v5 = flt_B3FF34;
  if ( v4 <= dbl_A80538 )
  {
    v6 = v10;
    v11 = v10 * v10 * v4;
    v12 = (v11 - v2) * v5 + v3;
    v10 = v6 * v12;
    if ( flt_A80530 >= v4 )
    {
      v7 = v4 * (v10 * v10);
      v8 = v10;
      v13 = v7;
      v14 = v3 + v5 * (v13 - v2);
      v10 = v8 * v14;
    }
  }
  *(this + 1) = *(this + 1) * v10;
  *(this + 2) = v10 * *(this + 2);
  *(this + 3) = *(this + 3) * v10;
  *this = v10 * *this;
}
